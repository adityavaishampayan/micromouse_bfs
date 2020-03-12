#include "LandBasedTracked.h"

/**
 * @brief Object of the derived class.
 * @param name
 */
fp::LandBasedTracked::LandBasedTracked(std::string name)
	: LandBasedRobot(name), track_type{} {}

/**
 * @brief A funtion to move the robot forward by one cell. 
 */
void fp::LandBasedTracked::MoveForward()
{
	std::cerr << "LandBasedTracked::MoveForward is called\n";
	API::moveForward();
	UpdatePosition();
	ScanSurroundings();
}

/**
 * @brief Function which turns the robot to left by ninety degrees in the same cell.
 */
void fp::LandBasedTracked::TurnLeft()
{
	std::cerr << "LandBasedTracked::TurnLeft is called\n";
	API::turnLeft();
	direction_ = (--direction_ + 4) % 4; // update direction
	ScanSurroundings();
}

/**
 * @brief Function which turns the robot to right by ninety degrees in the same cell.
 */
void fp::LandBasedTracked::TurnRight()
{
	std::cerr << "LandBasedTracked::TurnRight is called\n";
	API::turnRight();
	direction_ = ++direction_ % 4; // update direction
	ScanSurroundings();
}