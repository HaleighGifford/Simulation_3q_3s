//****************************************************************************************************
//
//		File:					customer.h
//		
//		Student:				Haleigh Cates
//
//		Assignment:	 			Program  #14
//
//		Course Name:			Data Structures I 
//
//		Course Number:			COSC 3050 - 01
//
//		Due:					December 19, 2018
//
//
//		This program determines how long it takes to serve all arriving 
//			customers using 3 queues and 3 servers.
//
//		Other files required:	
//								node.h
//								queue.h
//								server.h
//								sim3q3s.cpp
//								customerList.txt
//								trace.txt								
//								assumptions.txt
//		
//****************************************************************************************************

#ifndef CUSTOMER_H
#define CUSTOMER_H

//****************************************************************************************************

struct Customer
{
	int id;
	int arrivalTime;
	int serviceTime;

	Customer();
};

//****************************************************************************************************

Customer::Customer()
{
	id = 0;
	arrivalTime = 0;
	serviceTime = 0;
}

//****************************************************************************************************

#endif


