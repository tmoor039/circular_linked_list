//  File.h
//  Josephus
//  Created by Rogue_ESP on 11/12/12.
//  Reviewed 4/24/19 - Updated 8/7/19

#ifndef NAMELIST_H
#define NAMELIST_H

#include <string>
using namespace std;

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
    void appendNode(string); // Adds to the end of the list
    void deleteNode(string); // Deletes a node from the list
    void displayList() const; // Prints the string list
    bool isEmpty() const; // returns true if the list is empty
    int getsize() const; // returns the numberOfNodes variable in the list - representing size
    void JosephusFunction(string, int); // Main function of operations
    int binaryWinnerFunction(int); // returns winner based on total number on the list (NEW)
    
};
#endif

