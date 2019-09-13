#include "Calender.h"
#include <iostream>

Calender::Calender(void)
{
	year=1990;
	month=1;
	day=1;
}


Calender::~Calender(void)
{
}

void Calender::now() const
{
	std::cout<<year<<"/"; if(month<10)std::cout<<"0"; std::cout<<month<<"/";if(day<10)std::cout<<"0";std::cout<<day<<"\n";
}