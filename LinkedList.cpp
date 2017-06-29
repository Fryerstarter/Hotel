#include "LinkedList.h"

LinkedList::LinkedList()
{
	head->room = NULL;
	head->next = NULL;
	list_length = 0;
	
}

bool LinkedList::insertNode(node *newNode)
{
	iterator = head;
	while(iterator->next != NULL){
		iterator = iterator->next;
	}
	iterator->next = newNode;
	listLength++;
	return true;
	
}

