# ROBO-MAZE
Robo Maze problem solving using c language


  ABSTRACT
                                           

Project Title:-Robo Maze
            This project is a C program simulating robot navigation within a rectangular maze represented by a grid of cells. Each cell can be either a wall (X) or an open corridor (.). The robot can move in four cardinal directions (North, South, East, West), rotating 90 degrees clockwise or counterclockwise and moving forward if no wall obstructs it. The robot cannot exit the maze, which is guaranteed to be surrounded by walls.
           The program accepts multiple test cases as input, each specifying the maze's dimensions, the layout, the robot's starting position, and a sequence of commands. Commands include:
1. R(Right): Rotate 90 degrees clockwise.
2. L(Left): Rotate 90 degrees counterclockwise.
3. F(Forward): Move forward by one cell if no wall is in front.
4. Q(Quit): Quit processing the commands and output results.
          For each test case, the program outputs the robot's final position and orientation. Additionally, the program tracks all cells the robot visits, marking them with R. This modified map visually represents the robot's path, indicating its movements throughout the maze.
            The project’s purpose is to simulate pathfinding and navigation within constraints, mimicking real-world scenarios like obstacle avoidance in robotic systems. It highlights fundamental aspects of robotic movement, including spatial awareness, path tracking, and conditional operations
 This System will execute under this C Programming Language concepts:-
1.	2D Arrays:- This maze is typically represented as a 2D array where each cell can either be open(1) or blocked(0).
2.	Recursion:-Backtracking often uses recursion to explore all possible paths in the maze.
3.	Path Tracking:- To keep track of the path taken by the robot, you can use a string or an array.

Advantages: -
•	Problem-Solving: Enhances your problem-solving skills by simulating real-world scenarios.
•	Algorithm Design: You get hands on experience in designing and implementing algorithms for pathfinding and movement.
•	Practical Learning: It helps in understanding concepts of arrays, structures, and input-output handling in C.
•	Debugging Skills: Provides ample opportunity to practice debugging and improving code.
•	Engagement: It's an engaging way to learn programming, making abstract concepts tangible.

 Disadvantages: -
•	Input Handling: - Reading and processing the given data, particularly commands with whitespaces and ensuring the end-of-input is correctly handles can be tricky.
•	Debugging: Errors in handling maze boundaries or movement commands can be 
tricky to debug and resolve.
•	Complexity: Implementing the logic for the robot's movement and ensuring it 
correctly handles all edge cases can get quite complex.
•	Resource Intensive: Large mazes can be resource-intensive in terms of memory and processing power, especially when managing
 larger grids and numerous commands.
•	Limited Visualization: Without a graphical interface, visualizing the robot's 
movements and understanding its path in text form can be less intuitive.

SYSTEM REQUIREMENTS
	SOFTWARE REQUIREMENTS:
 The major software requirements of the project are as follows:
  
  Language            	:   C
 
 Operating system	:   Windows XP 
 
 Tools                  	:    DEV C++
 
	HARDWARE REQUIREMENTS:
           The hardware requirements that map towards the software are as follows: 
            RAM          	:	128 MB (Minimum) 
            Processor     : 	intel i3 core (Minimum)
