//****************************************************************************************************
//
//		File:					server.h
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
//								customer.h
//								queue.h
//								sim3q3s.cpp
//								customerList.txt
//								trace.txt								
//								assumptions.txt
//		
//****************************************************************************************************

#ifndef SERVER_H
#define SERVER_H

//****************************************************************************************************

struct Server
{
	int custId;
	int endTime;
	bool busy;

	Server();
};

//****************************************************************************************************

Server::Server()
{
	custId = 0;
	endTime = 0;
	busy = false;
}

//****************************************************************************************************

#endif

