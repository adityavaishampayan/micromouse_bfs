#include "LandBasedRobot.h"

/**
 * @brief Object of the derived class initializing the arguements passed to the constructor.
 * @param name
 */
fp::LandBasedRobot::LandBasedRobot(std::string name)
	: maze{}, name_{ name }, x_{ 0 }, y_{ 0 }, direction_{ fp::North }, speed_{}, width_{}, length_{}, height_{}, capacity_{}
{
	ScanSurroundings();
}

fp::LandBasedRobot::~LandBasedRobot() {}

/**
 * @brief Function to scan the surroundings of the current cell and check for the walls around.
 */
void fp::LandBasedRobot::ScanSurroundings()
{
	auto [c_front, c_left, c_right] = GetSurroundingCells();

	if (API::wallFront())
	{
		API::setWall(x_, y_, fp::directions[direction_]);
		if (maze.containCell(c_front))
			maze.setWall(GetCell(), c_front);
	}
	if (API::wallLeft())
	{
		API::setWall(x_, y_, fp::directions[(direction_ + 3) % 4]);
		if (maze.containCell(c_left))
			maze.setWall(GetCell(), c_left);
	}
	if (API::wallRight())
	{
		API::setWall(x_, y_, fp::directions[(direction_ + 1) % 4]);
		if (maze.containCell(c_right))
			maze.setWall(GetCell(), c_right);
	}
}

/**
 * @brief A function to update the position of robot.
 */
void fp::LandBasedRobot::UpdatePosition()
{
	switch (direction_)
	{
	case fp::North:	++y_; break;
	case fp::East:	++x_; break;
	case fp::South:	--y_; break;
	case fp::West:	--x_; break;
	}
}

/**
 * @brief A function to return the cells surrounding the current position of the robot in the maze.
 * @return Tuple of cells
 */
std::tuple<fp::Cell, fp::Cell, fp::Cell> fp::LandBasedRobot::GetSurroundingCells() const
{
	fp::Cell c{ GetCell() }, c_up{ c.x,c.y + 1 }, c_left{ c.x - 1,c.y }, c_down{ c.x,c.y - 1 }, c_right{ c.x + 1,c.y };

	switch (direction_)
	{
	case fp::North:
		return { c_up,c_left,c_right };
		break;
	case fp::East:
		return { c_right,c_up,c_down };
		break;
	case fp::West:
		return { c_left,c_down,c_up };
	case fp::South:
		return { c_down,c_right,c_left };
		break;
	default:
		return {};
		break;
	}
}