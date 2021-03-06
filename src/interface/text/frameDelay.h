/*--------------------------------------------//
Frame Delay Header
This displays the frames delay at the top
left hand corner of the window
//--------------------------------------------*/
#ifndef FRAMEDELEY_H
#define FRAMEDELAY_H
class FrameDelay;

/*--------------------------------------------//
Includes
//--------------------------------------------*/
	#include "../../globals.h"

	#include "../interface.h"
	#include "../element.h"
	#include "../../common/vector.h"

	#include <time.h>
	#include <string.h>

class FrameDelay:public element{
	private:
	protected:
		/*--------------------------------------------//
		Class Variables
		//--------------------------------------------*/
			double oldtime;//For Performance Tracking
			float color[3];//color of text
			float pos[3];//position of text
	public:
		/*--------------------------------------------//
		Constructors
		//--------------------------------------------*/
			FrameDelay();

		/*--------------------------------------------//
		Functions
		//--------------------------------------------*/
			void setPos(Vec3 p);
			void setPos(float p[]);
			void setPos(float x, float y, float z);
			Vec3 getPos();
			void setColor(Vec3 p);
			void setColor(float p[]);
			void setColor(float x, float y, float z);
			Vec3 getColor();
			void draw();
};
#endif
