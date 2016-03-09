#include <iostream>
#include <cstdlib>

#include "SList.h"

using namespace std;

SList::SList()
{
	head = NULL;
	current = NULL;
	temp = NULL;
}

void SList:: addNode(int id, string addName, int addQuantity)
{
	nodePtr addElem = new node;
	addElem->next = NULL;
	addElem->idProduct = id;
	addElem->name = addName;
	addElem->quantity = addQuantity;

	if (head != NULL)
	{
		current = head;
		while(current->next != NULL)
		{
			current = current->next;
		}
		current->next = addElem;
	}
	else
	{
		head = addElem;
	}
	cout << "The product " << addName << " has been added to your list." << endl;
	cout << end;
}

void SList:: deleteNode(int delData)
{
	nodePtr delPtr = NULL;
	temp = head;
	current = head;

	while(current != NULL && current->idProduct != delData)
	{
		temp = current;
		current = current->next;
	}
	if (current = NULL)
	{
		cout << delData << "Is not in the list" << endl;
		delete delPtr;
	}
	else
	{
		delPtr = current;
		current = current->next;
		temp->next = current;
		if (delPtr == head)
		{
			head = head->next;
			temp = NULL;
		}
		delete delPtr;
		cout << "The value " << delData << " was deleted" << endl;
	}
}

void SList:: printList()
{
	current = head;
	cout << "Your list: " endl;
	while(current != NULL)
	{
		cout << "\t\t" << current->idProduct << " - " << current->name << " : " << current->quantity << endl;
		cout << "\t\t *-------------------------------------------------------------------------------------*"
		current = current->next;
	}
}