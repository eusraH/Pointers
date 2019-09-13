#include "Clock.h"
#include <iostream>

Clock::Clock(void)
{
	hour= 0;
	minute= 0;
	second= 0;
}


Clock::~Clock(void)
{

}

void Clock::now() const
{
			if(hour<10)std::cout<<"0"; std::cout<<hour<<"/"; if(minute<10)std::cout<<"0"; std::cout<<minute<<"/";if(second<10)std::cout<<"0";std::cout<<second<<"\n";
}
