#include<iostream>

using namespace std;

#define SIZE 10




    int a[SIZE];
    int rear;   //same as tail
    int front;  //same as head
  struct queue
  {
  

    Queue()
    {
        rear = front = -1;
    }
    
    //declaring enqueue, dequeue and display functions
    void enqueue(int x);     
    int dequeue();
    void display();


// function enqueue - to add data to queue
void enqueue(int x)
{
    if(front == -1) {
        front++;
    }
    if( rear == SIZE-1)
    {
        cout << "Queue is full";
    }
    else
    {
        a[++rear] = x;
    }
}

// function dequeue - to remove data from queue
int  dequeue()
{
    return a[++front];  // following approach [B], explained above
}

// function to display the queue elements
void  display()
{
    int i;
    for( i = front; i <= rear; i++)
    {
        cout << a[i] << endl;
    }
}
};
// the main function
int main()
{
    
    enqueue(queue,10);
    enqueue(queue,100);
    enqueue(queue,1000);
    enqueue(queue,1001);
    enqueue(queue,1002);
    dequeue();
    enqueue(queue,1003);
    dequeue();
    dequeue();
    enqueue(queue,1004);
    
    display();
    
    return 0;
}

