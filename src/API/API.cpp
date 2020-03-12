#include "API.h"

/**
 * @brief A funtion to return the width of the maze.
 * @return 
 */
int API::mazeWidth() {
    std::cout << "mazeWidth" << std::endl;
    std::string response;
    std::cin >> response;
    return atoi(response.c_str());
}

/**
 * @brief A funtion to return the width of the maze.
 * @return 
 */
int API::mazeHeight() {
    std::cout << "mazeHeight" << std::endl;
    std::string response;
    std::cin >> response;
    return atoi(response.c_str());
}

/**
 * @brief A funtion to check if there is a wall in front of the robot in the maze.
 * @return 
 */
bool API::wallFront() {
    std::cout << "wallFront" << std::endl;
    std::string response;
    std::cin >> response;
    return response == "true";
}

/**
 * @brief A funtion to check if there is a wall to the right of the robot in the maze.
 * @return 
 */
bool API::wallRight() {
    std::cout << "wallRight" << std::endl;
    std::string response;
    std::cin >> response;
    return response == "true";
}

/**
 * @brief A funtion to check if there is a wall to the left of the robot in the maze.
 * @return 
 */
bool API::wallLeft() {
    std::cout << "wallLeft" << std::endl;
    std::string response;
    std::cin >> response;
    return response == "true";
}

/**
 * @brief A funtion to move the robot forward by one cell.
 */
void API::moveForward() {
    std::cout << "moveForward" << std::endl;
    std::string response;
    std::cin >> response;
    if (response != "ack") {
        std::cerr << response << std::endl;
        throw;
    }
}

/**
 * @brief A function to turn the robot ninty degrees to the right in the same cell.
 */
void API::turnRight() {
    std::cout << "turnRight" << std::endl;
    std::string ack;
    std::cin >> ack;
}

/**
 * @brief A function to turn the robot ninty degrees to the left in the same cell.
 */
void API::turnLeft() {
    std::cout << "turnLeft" << std::endl;
    std::string ack;
    std::cin >> ack;
}

/**
 * @brief A function to display a wall at the given position in the maze.
 * @param x
 * @param y
 * @param direction
 */
void API::setWall(int x, int y, char direction) {
    std::cout << "setWall " << x << " " << y << " " << direction << std::endl;
}

/**
 * @brief A function to display a wall at the given position in the maze.
 * @param x
 * @param y
 * @param direction
 */
void API::clearWall(int x, int y, char direction) {
    std::cout << "clearWall " << x << " " << y << " " << direction << std::endl;
}

/**
 * @brief A function to set the color of the cell at the given position in the maze.
 * @param x
 * @param y
 * @param color
 */
void API::setColor(int x, int y, char color) {
    std::cout << "setColor " << x << " " << y << " " << color << std::endl;
}

/**
 * @brief A function to lear the color of the cell at the given position in the maze.
 * @param x
 * @param y
 */
void API::clearColor(int x, int y) {
    std::cout << "clearColor " << x << " " << y << std::endl;
}

/**
 * @brief A function to clear the color of all cells in the maze.
 */
void API::clearAllColor() {
    std::cout << "clearAllColor" << std::endl;
}

/**
 * @brief A function to set the text of the cell at the given position in the maze.
 * @param x
 * @param y
 * @param text
 */
void API::setText(int x, int y, const std::string& text) {
    std::cout << "setText " << x << " " << y << " " << text << std::endl;
}

/**
 * @brief A function to clear the text of the cell at the given position.
 * @param x
 * @param y
 */
void API::clearText(int x, int y) {
    std::cout << "clearText " << x << " " << y << std::endl;
}

/**
 * @brief A function clear the text of all cells in the maze.
 */
void API::clearAllText() {
    std::cout << "clearAllText" << std::endl;
}

/**
 * @brief A function to check whether the reset button is pressed or not.
 * @return 
 */
bool API::wasReset() {
    std::cout << "wasReset" << std::endl;
    std::string response;
    std::cin >> response;
    return response == "true";
}

/**
 * @brief A function to acknowledge the reset and allow the robot to move back to the start of the maze.
 */
void API::ackReset() {
    std::cout << "ackReset" << std::endl;
    std::string ack;
    std::cin >> ack;
}