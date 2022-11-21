#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
 
//complete the functions
class Stack{
	Node *head;
	int s;
	
	public:
	//constructor is called whenever an object of the class is declared
	Stack(){
		cout<<"constructor is Called\n";
		head=NULL;
		s=0; 
	}
	
	//push the value at the back
	void push(int val){
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
		Node* temp=new Node();
		temp->data=val;
		temp->next=head;
		head=temp;
	}
	
	int top(){
		cout<<"returning the value at top or last\n";
		return head->data;
	}
	
	void pop(){
		cout<<"removing the last element\n";
		if(head==NULL){
			cout << "stack underflow" << endl ;
		}
			else {
				head=head->next;
			}
		}
	
	int size(){
		int sum=0 ;
		Node* ptr=head;
		cout<<"return the size of the queue\n";
		while(ptr!=NULL){
			sum=sum+1;
			ptr=ptr->next;
		}
		return sum;
	}
	
	bool isEmpty(){
		cout<<"returning if the stack is empty\n";
		return (head==NULL);
	}
};

int main() {
	Stack s; //constructor is called on this line
	s.push(4);
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	s.push(5);
	s.push(3);
	cout<<"front: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	return 0;
}
