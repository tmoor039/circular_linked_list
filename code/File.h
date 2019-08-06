//
//  File.h
//  Josephus
//  Created by TJ Moore on 11/12/12.
//  Reviewed 4/24/19

#ifndef NAMELIST_H
#define NAMELIST_H

#include <string>
using namespace std;


// add a function that converts the total number of people in the list, converts it to binary and then does a bitshift for the upper most bit to the first most bit to determine winner 



class NameList
{
private:
    // Declare a structure for the list
    struct ListNode
    {
        string name;           // The name in this node
        struct ListNode *next;  // To point to the next node
    };
    
    ListNode *head;            // List head pointer: pointing to the 1st node
    ListNode *tail;             // List tail pointer: pointing to the last node
    int numberOfNodes;         // the number of nodes in the list
    
public:
    // Constructor
    NameList() {
        head = NULL;
        tail = NULL;
        numberOfNodes = 0;
    }
    
    // Destructor
    ~NameList();
    
    // Linked list operations
    // for the hw question: Josephus problem, we do not need the insertNode() function. Therefore, I deleted it.
    void apptailNode(string);
    void deleteNode(string);
    
    void displayList() const;
    bool isEmpty() const; // returns true if the list is empty
    int getsize() const; // returns the numberOfNodes in the list    
    void JosephusFunction( string, int);




// version 2 solution


// add a function that turns getsize into a binary char 
// this function should take in the result from getSize and return the binary number in a char variable 
// this function should also perform one left bitshift to return the winning number reflecting the josephus problem 
unsigned char getJosephusByte(int size);






    
};
#tailif

