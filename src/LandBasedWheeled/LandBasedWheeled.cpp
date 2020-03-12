#include "LandBasedWheeled.h"

/**
 * @brief Object of the derived class. 
 * @param name
 */
fp::LandBasedWheeled::LandBasedWheeled(std::string name)
	: LandBasedRobot(name), wheel_number{} {}

/**
 * @brief A funtion to move the robot forward by one cell. 
 */
void fp::LandBasedWheeled::MoveForward()
{
	std::cerr << "LandBasedWheeled::MoveForward is called\n";
	API::moveForward();
	UpdatePosition();
	ScanSurroundings();
}

/**
 * @brief Function which turns the robot to left by ninety degrees in the same cell.
 */
void fp::LandBasedWheeled::TurnLeft()
{
	std::cerr << "LandBasedWheeled::TurnLeft is called\n";
	API::turnLeft();
	direction_ = (--direction_ + 4) % 4; // update direction
	ScanSurroundings();
}

/**
 * @brief Function which turns the robot to right by ninety degrees in the same cell.
 */
void fp::LandBasedWheeled::TurnRight()
{
	std::cerr << "LandBasedWheeled::TurnRight is called\n";
	API::turnRight();
	direction_ = ++direction_ % 4; // update direction
	ScanSurroundings();
}

/**
 * @brief Function to increase the speed of the robot by the provided step size.
 * @param stepSize
 */
void fp::LandBasedWheeled::SpeedUp(int stepSize)
{
	std::cout << "LandBasedWheeled::SpeedUp is called\n";
}