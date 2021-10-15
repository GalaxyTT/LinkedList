#include <iostream>

using namespace std;

struct node{
	int* value;
	node* nextnode;
};

int main(){
	node head;
	node tail;

	head.value = new int[4];
	
	*head.value = 3;
	head.nextnode = &tail;

	
	tail.value = new int[2];
	
	cout << *(head.value + 1) << endl;
	cout << &head.nextnode;
	
	return 0;
}
