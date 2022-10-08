// Contributed by Anshu
/* It's my Java program for solving Rat in Maze problem using
backtracking concept */

public class Rat_Maze {
	final int N = 4;

	void printSolution(int sol[][])
	{
		for (int x = 0; x < N; x++) {
			for (int y = 0; y < N; y++)
				System.out.print(" " + sol[x][y] + " ");
			System.out.println();
		}
	}

	boolean isSafe(int maze[][], int a, int b)
	{
		return (a >= 0 && a < N && b >= 0 && b < N && maze[a][b] == 1);
	}

	boolean solveMaze(int maze[][])
	{
		int sol[][] = { { 0, 0, 0, 0 },
						{ 0, 0, 0, 0 },
						{ 0, 0, 0, 0 },
						{ 0, 0, 0, 0 } };

		if (solveMazeUtil(maze, 0, 0, sol) == false) {
			System.out.print("There is no solution for this.");
			return false;
		}

		printSolution(sol);
		return true;
	}

	boolean solveMazeUtil(int maze[][], int a, int b,
						int sol[][])
	{
		if (a == N - 1 && b == N - 1) {
			sol[a][b] = 1;
			return true;
		}

		if (isSafe(maze, a, b) == true) {
			sol[a][b] = 1;

			if (solveMazeUtil(maze, a + 1, b, sol))
				return true;

			if (solveMazeUtil(maze, a, b + 1, sol))
				return true;

			sol[a][b] = 0;
			return false;
		}

		return false;
	}

	public static void main(String args[])
	{
	 	Rat_Maze rat = new Rat_Maze();
		int maze[][] = { { 1, 0, 0, 0 },
						{ 1, 1, 1, 0 },
						{ 0, 0, 1, 1},
						{ 1, 1, 0, 1 } };
		rat.solveMaze(maze);
	}
}