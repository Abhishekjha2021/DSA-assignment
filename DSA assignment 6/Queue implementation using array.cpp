#include <iostream>
using namespace std;

//complete the functions
class Queue{
	int A[100000];
	int start;
	int end;
	
	public:
	//constructor is called whenever an object of the class is declared
	Queue(){
		cout<<"constructor is Called\n";
		start=-1;
		end=-1;
	}
	
	//push the value at the back
	void push(int val){
		if(end>=100000-1){
			cout<< "stack overflow" << endl ;
		}else {
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
		end++;
		A[end]=val;
		if(start==-1){
			start++ ;
		}
	}
}
	
	int front(){
		cout<<"returning the value at front\n";
		return A[start];
	}
	
	void pop(){
		cout<<"removing the first element\n";
		if(end==-1){
			cout<<"stack underflow" << endl ;
		}
		else {
			start ++;
		}
	}
	
	int size(){
		int count=0;
		cout<<"return the size of the queue\n";
		for(int i=1;i<end;i++){
			count=count+1;
		}
		return count;
	}
	
	bool isEmpty(){
		cout<<"returning if the queue is empty\n";
		if (end==-1 || start>end){
			return true;
		} else {
			return false;
		}
	}
};

int main() {
	Queue q; //constructor is called on this line
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}
