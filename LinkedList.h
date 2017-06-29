#ifndef LinkedList_h
#define LinkedList_h

struct node
{
	Room room;
	node *next;
	
};

class LinkedList
{
	private:
	node *head;
	node *iterator;
	int list_length;
	
	public:
	LinkedList();
	bool insertNode(node *newNode);
	bool removeNode(int position);
	void printList();
	~LinkedList();
	
}

#endif