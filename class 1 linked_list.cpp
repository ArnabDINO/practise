#include<iostream>
using namespace std;

//Generic Programming ....  find out

class node
{
	public:
	// data
	int data; 
	//pointer to the next Node
	node * next;
	//constructor that makes the  ptr to NULL
	node(){
		next = NULL;
	}
};

class LinkedList
{
	// head + circles
	public:
	// head -> circle type pointer
	node *head;
	node *tail;
	
	//construct
	LinkedList(){
		head =NULL;
		tail =NULL;
	}
	// circles inside linked together
	// rules how cicles will be linked with each other
	
	// insert
	void insert(int value)
	{
		//if first node is added
		node* temp = new node;  // new creates the memory space in the heap.... however temp is in he stack... there's no name for this node only address
		temp->data=value ;		// from temp ... go to the address... finds the data .. puts the value with the insert function
								// now we have to make sure it is in the linked list... how?... 
								//head has to point to that... head must have the address of the node
							//for first node only
		if(head==NULL)
			{
				head = temp;
			}
						//for the second node
		else
		tail->next=temp;
		
		tail = temp;
	}
	
	void insertAt(int pos, int value){
		//reach the place before the position
		node* current =head;
		int i=1;
		while(i < pos-1){
			i++; 
			current = current->next;
		}
		//create the node
		node * temp = new node;
		temp -> data = value;
		//moving ptrs like magic ! !
		temp->next=current->next;
		current ->next= temp;
	}
	
	// deletion last element
	void delet()
	{
		// stor tail in the temp
		node * temp =tail;
		// make sure that tail-1 points to NULL
		node * current=head;
		while(current->next != tail)
		{
			
			//cout<<current->data<<"->";
			current=current->next;
		}
		current->next=NULL;
		//update tail to 
		//delete tail
	}
	// display
	void display()
	{
		node *current=head;
		while(current != NULL)
		{
			
			cout<<current->data<<"->";
			current=current->next;
		}
		cout<<endl;
		/*while(){
			cout<<head -> data<<" -> "<<endl;
			temp = head->next
			cout<<temp->data<<endl;
			temp=temp->next;
			
		}*/
	}
};

int main()
{
	LinkedList l1;
	l1.insert(1);
	l1.display();
	l1.insert(2);
	l1.insert(3);
	l1.display();
	l1.delet();
	l1.display();
	
	return 0;
}
