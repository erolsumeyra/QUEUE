#include <iostream>
#include<conio.h>
#include<stdlib.h>

#define SIZE 5
using namespace std;

int array[SIZE],front=0,rear=0;

int main(int argc, char** argv) {
	int c;
	void enqueue();
	void dequeue();
	void display();
	
	while(1){
		cout<<"\n 1.add element";
		cout<<"\n 2.delete element";
		cout<<"\n 3.print on the screen elements";
		cout<<"\n4.exit";
		cout<<"Enter your choice:";
		cin>>c;
	switch(c)
	{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
			break;
		default:
		cout<<"\nInvalid choice";
	}
	}
	return 0;
}
void enqueue(){
	int number;
	if(rear==SIZE && front==0)
	cout<<"Queue is full";
	else
	{
		cout<<"Enter a number:";
		cin>>number;
		array[rear]=number;
	}
	rear++;
}
void dequeue(){
	int number;
	if(rear==0 && front==SIZE)
		cout<<"The queue is empty";
	else{
		number=array[front];
		front++;
		cout<<"\n"<<number<<"-removed from the queue";
	}
}
void display(){
	int i,temp=front;
	if(front==rear)
	cout<<"The queue is empty";
	else
	{
		cout<<"\nThe elements in the queue:";
		for(i=temp;i<rear;i++)
		{
			cout<<array[i]<<" ";
		}
	}
}
