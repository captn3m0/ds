#include <assert.h>
#include <cstddef>
#include <string>
#include <stdio.h>
struct node
{
	int data;
	node* next;
};
class LinkedList
{
	private:
		node* head;
	public:
		LinkedList()
		{
			head=NULL;
		}
		void insert(int elem)
		{
			node* t=new node;
			t->data=elem;
			t->next=NULL;
			//this is the first insert
			if(head==NULL)
				head=t;
			else
			{
				//We transverse it entirely
				//And insert at end
				node* n=head;
				while(n->next!=NULL)
					n=n->next;
				//Now n->next is NULL
				n->next=t;//Point n to t instead
			}
		}
		int removeFromStart()
		{
			//grab the data, move the head and return
			int data=head->data;
			head=head->next;
			return data;
		}
		int search(int t)
		{
			node* n=head;
			int pos=0;
			while(n!=NULL)
			{
				if(n->data==t)
				{
					return pos;
				}
				pos++;
				n=n->next;
			}
			return -1;
		}
		//Get nth Item
		int get(int position)
		{
			
		}
};

int main()
{
	LinkedList l;
	l.insert(100);
	l.insert(101);
	l.insert(102);
	assert(l.removeFromStart()==100);
	assert(l.removeFromStart()==101);
	assert(l.search(102)==0);
	l.insert(10);
	l.insert(5);
	assert(l.search(10)==1);
	assert(l.search(5)==2);
}