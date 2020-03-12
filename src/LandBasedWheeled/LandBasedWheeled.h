#pragma once

#include "../LandBasedRobot/LandBasedRobot.h"

namespace fp
{
	/**
	 * @class LandBasedWheeled
	 * @author Group 4
	 * @date 02/12/19
	 * @file LandBasedWheeled.h
	 * @brief A concrete, derived class from LandBasedRobot. It has overridden virtual methods to allow dynamic binding. It has a protected atttribute which specifies the no of wheels mounted on the robot.
	 */
	class LandBasedWheeled : public LandBasedRobot
	{
	public:
		LandBasedWheeled(std::string name);			//constructor

		virtual void MoveForward() override;		//overridden move forward method
		virtual void TurnLeft() override;			//overridden turn left method
		virtual void TurnRight() override;			//overriden turn right method

		void SpeedUp(int stepSize); 				// dummy method

	protected:
		int wheel_number; 			// dummy attribute
	};
}