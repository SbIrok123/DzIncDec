#include "Bus.h"
Bus::Bus()
{
	startTime = Time_(6, 0, 0);
	endTime = Time_(11, 0, 0);
	roadTime = Time_(0, 30, 0);
	pererivTime=Time_(0, 10, 0);
}

Bus::Bus(Time_ startTime, Time_ endTime, Time_ roadTime, Time_ pererivTime)
{
	this->startTime = startTime;
	this->endTime = endTime;
	this->roadTime = roadTime;
	this->pererivTime = pererivTime;
}

void Bus::setStartTime(Time_ startTime)
{
	this->startTime = startTime;
}

void Bus::setEndTime(Time_ endTime)
{
	this->endTime = endTime;
}

void Bus::setRoadTime(Time_ roadTime)
{
	this->roadTime = roadTime;
}

void Bus::setPererivTime(Time_ pererivTime)
{
	this->pererivTime = pererivTime;
}

Time_ Bus::getStartTime()const
{
	return startTime;
}

Time_ Bus::getEndTime()const
{
	return endTime;
}

Time_ Bus::getRoadTime()const
{
	return roadTime;
}

Time_ Bus::getPererivTime()const
{
	return pererivTime;
}

void Bus::showInfo() const
{
	cout << "������ ���� : "<<startTime << endl;
	cout << "����� ���� : "<<endTime<< endl;
	cout << "������� : "<<pererivTime << endl;
	cout << "B���� �� ���� : "<<roadTime << endl;
	Time_ tmpTime = startTime;
	cout << "���������� :" << endl;
	while (tmpTime < endTime) 
	{
		cout << tmpTime<<"\t"<<tmpTime+roadTime<<endl;
		tmpTime = tmpTime + roadTime+pererivTime;
	}
}
