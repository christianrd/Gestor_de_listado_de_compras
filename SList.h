#include <iostream>
#include <string>

class SList
{
private:
	typedef struct node
	{
		int idProduct;
		int quantity;
		std::string name;
		node* next;
	} * nodePtr;

	nodePtr head;
	nodePtr current;
	nodePtr temp;

public:
	SList();
	void addNode(int id, std::string addName, int addQuantity);
	void deleteNode(int delData);
	void printList();
};

