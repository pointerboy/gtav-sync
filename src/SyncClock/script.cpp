
/* 
 *			SyncClock - written by pointerboy.
 *			   ScriptHookV by Alexandar Blade
 *			   
 *						(c) 2019
 */

#include "script.h"

#include <string>
#include <ctime>


void update()
{
	time_t time_t = time(0);
	tm* time_t_ptr = localtime(&time_t);

	TIME::SET_CLOCK_TIME(time_t_ptr->tm_hour,
		time_t_ptr->tm_min,
		0);
}


void main()
{
	while (true)
	{
		WAIT(0);
	}
}

void ScriptMain()
{
	main();
}
