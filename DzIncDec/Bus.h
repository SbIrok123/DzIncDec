#pragma once
#include<iostream>
#include"Time_.h"
using namespace std;
class Bus
{

public:
	Time_ startTime;
	Time_ endTime;
	Time_ roadTime;
	Time_ pererivTime;
	Bus();
	Bus(Time_ startTime, Time_ endTime, Time_ roadTime, Time_ pererivTime);
	void setStartTime(Time_ startTime);
	void setEndTime(Time_ endTime);
	void setRoadTime(Time_ roadTime);
	void setPererivTime(Time_ pererivTime);
	Time_ getStartTime()const;
	Time_ getEndTime()const;
	Time_ getRoadTime()const;
	Time_ getPererivTime()const;

	void showInfo()const;
};

