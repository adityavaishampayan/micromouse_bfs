#include "Cell.h"
#include "../Maze/Maze.h"

/**
 * @brief A funtion to specify the cell number of the robot
 * @param maze
 * @return 
 */
unsigned int fp::Cell::index(const fp::Maze& maze) const
{
	return y * maze.get_width() + x;
}

/**
 * @brief 
 * @param other
 * @return 
 */
bool fp::Cell::operator==(fp::Cell other) const
{
	return x == other.x && y == other.y;
}

/**
 * @brief 
 * @param other
 * @return 
 */
bool fp::Cell::operator!=(fp::Cell other) const
{
	return x != other.x || y != other.y;
}