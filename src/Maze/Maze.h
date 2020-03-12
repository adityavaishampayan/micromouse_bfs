#pragma once 

#include "../API/API.h"
#include "../Cell/Cell.h"

namespace fp
{
	/**
	 * @class Maze
	 * @author Group 4
	 * @date 02/12/19
	 * @file Maze.h
	 * @brief A class which gives the description of the maze and also has functions to set a wall or to check the presence of a wall.
	 */
	class Maze
	{
	public:
		Maze();

		void setWall(const Cell& c1, const Cell& c2);				// Inserts a wall in the adjacency matrix as the robot encounters it.
		bool isWall(const Cell& c1, const Cell& c2) const;			// Checks if a wall is present
		bool containCell(const Cell& c) const;						// Checks if the adjacent cell that we are looking at is inside the bounds of the maze.

		void display_adjacencyMatrix() const;			// Displays the adjacency matrix.

		unsigned int get_width() const { return m_width; }				// Accessor for width of the maze.
		unsigned int get_height() const { return m_height; }			// Accessor for height of the maze.
		unsigned int get_num_cells() const { return m_num_cells; }		// Accessor to get the number of cells in the maze.
		Cell get_start() const { return m_start; }						// Accessor to get the start cell in the maze.
		std::vector<Cell> get_goals() const { return m_goals; }			// Accessor to get the goal cells in the maze.

	private:
		char& at(unsigned int c1_index, unsigned int c2_index);			// Returns the reference to value present in the adjacency matrix corresponding to the provided cells.
		char at(unsigned int c1_index, unsigned int c2_index) const;	// Returns the reference to value present in the adjacency matrix corresponding to the provided cells.

		int m_width, m_height, m_num_cells;			// stores maze width, height and number of cells respectively.
		Cell m_start;								// stores the start cell.
		std::vector<Cell> m_goals;					// stores the goal cells.
		std::vector<char> m_adjacencyMatrix;		// stores the maze.
	};
}