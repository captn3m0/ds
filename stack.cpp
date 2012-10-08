#include <assert.h>
#define MAX 50
//Todo: Take care of the zero pop condition
//Todo: Take care of the stack full condition
class Stack
{
	private: 
		int data[MAX];
		int ptr;
	public:
		Stack()
		{
			ptr=-1;
		}

		void push(int elem)
		{
			data[++ptr]=elem;
		}
		int pop()
		{
			return data[ptr--];
		}
};

int main()
{
	Stack s;
	s.push(1);
	s.push(2);
	assert(s.pop()==2);
	assert(s.pop()==1);
}