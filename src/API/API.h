#pragma once

#include <iostream>  
#include <string>
#include <vector>
#include <array>
#include <cstdlib>
#include <memory>
#include <tuple>
#include <algorithm>

#define print(x) std::cerr << (x) << std::endl

/**
 * @class API
 * @author Group 4
 * @date 02/12/19
 * @file API.h
 * @brief A class that has methods to integrate with the micromouse simulator.
 */
class API 
{
public:
    static int mazeWidth();			//method to get maze width
    static int mazeHeight();		//method to get maze height

    static bool wallFront();		//method to check if there is a wall in front
    static bool wallRight();		//method to check if there is a wall in right
    static bool wallLeft();			//method to check if there is a wall in left

    static void moveForward();		//method to move forward
    static void turnRight();		//method to turn right
    static void turnLeft();			//method to turn left

    static void setWall(int x, int y, char direction);			//method to highlight a wall
    static void clearWall(int x, int y, char direction);		//method to clear a highlighted wall

    static void setColor(int x, int y, char color);			//method to set the color of the cell
    static void clearColor(int x, int y);					//method to clear the color of the cell
    static void clearAllColor();							//method to clear all the colored cells

    static void setText(int x, int y, const std::string& text);			//method to show a text on the cell
    static void clearText(int x, int y);								//method to clear the text
    static void clearAllText();											//method to clear text from all the cells

    static bool wasReset();			//check reset
    static void ackReset();			//acknowledge reset
};