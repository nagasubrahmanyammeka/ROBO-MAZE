#include <stdio.h>
#include <string.h>
#define MAX 60

typedef struct {
    int row;
    int col;
    char orientation;
} Robot;

void processCommands(char maze[MAX][MAX], int r, int c, Robot *robot, char *commands) {
    int len = strlen(commands);
    for (int i = 0; i < len; i++) {
        char command = commands[i];
        if (command == 'R') {
            if (robot->orientation == 'N') robot->orientation = 'E';
            else if (robot->orientation == 'E') robot->orientation = 'S';
            else if (robot->orientation == 'S') robot->orientation = 'W';
            else if (robot->orientation == 'W') robot->orientation = 'N';
        } else if (command == 'L') {
            if (robot->orientation == 'N') robot->orientation = 'W';
            else if (robot->orientation == 'W') robot->orientation = 'S';
            else if (robot->orientation == 'S') robot->orientation = 'E';
            else if (robot->orientation == 'E') robot->orientation = 'N';
        } else if (command == 'F') {
            int new_row = robot->row, new_col = robot->col;
            if (robot->orientation == 'N') new_row--;
            else if (robot->orientation == 'S') new_row++;
            else if (robot->orientation == 'E') new_col++;
            else if (robot->orientation == 'W') new_col--;

            if (new_row >= 0 && new_row < r && new_col >= 0 && new_col < c && maze[new_row][new_col] == '.') {
                robot->row = new_row;
                robot->col = new_col;
                maze[robot->row][robot->col] = 'R';  // Mark visited
            }
        }
    }
}

int main() {
    int r, c;
    printf("Enter the rows and columns:\n");
    while (scanf("%d %d", &r, &c), r != 0 && c != 0) {
        char maze[MAX][MAX];
        char commands[100];
        Robot robot;

        printf("Enter the structure of the maze (\"X\"-Wall, \".\"-Clear):\n");
        for (int i = 0; i < r; i++) {
            scanf("%s", maze[i]);
        }

        int initial_row, initial_col;
        printf("Enter the starting position of the Robot:\n");
        scanf("%d %d", &initial_row, &initial_col);
        initial_row--;  // Convert to 0-indexed
        initial_col--;  // Convert to 0-indexed

        robot.row = initial_row;
        robot.col = initial_col;
        robot.orientation = 'N';

        // Read commands including whitespaces
        printf("Enter the Commands (\"R\"-Right, \"L\"-Left, \"F\"-Forward):\n");
        scanf(" "); // Consume any leftover newline character
        char command;
        int idx = 0;
        while (scanf("%c", &command) && command != 'Q') {
            if (command != ' ' && command != '\n') {
                commands[idx++] = command;
            }
        }
        commands[idx] = '\0';

        maze[robot.row][robot.col] = 'R';

        processCommands(maze, r, c, &robot, commands);
        printf("Final Position :-\n");
        printf("%d %d %c\n", robot.row + 1, robot.col + 1, robot.orientation);
        for (int i = 0; i < r; i++) {
            printf("%s\n", maze[i]);
        }
    }
    return 0;
}

