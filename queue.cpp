//Jasnoor Kaur
//24070123049
//Batch:A2

#include <iostream>
using namespace std;

#define MAX_QUEUE 5
#define EMPTY_ERROR -9999

class Queue {
    int arr[MAX_QUEUE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void add(int value);
    int remove();
    void show();
};

void Queue::add(int value) {
    if (rear == MAX_QUEUE - 1) {
        cout << "Queue is full!" << endl;
        return;
    }

    if (front == -1) {  // first element being added
        front = 0;
    }

    arr[++rear] = value;
}

int Queue::remove() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty!" << endl;
        return EMPTY_ERROR;
    }

    return arr[front++];
}

void Queue::show() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty!" << endl;
        return;
    }

    for (int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    Queue q;

    q.add(4);
    q.add(8);
    q.add(3);

    cout << "Queue elements: ";
    q.show();

    int removedValue = q.remove();
    cout << "Removed element: " << removedValue << endl;

    cout << "Queue after removal: ";
    q.show();
}


/*
OUTPUT:

Queue elements: 4 8 3 
Removed element: 4
Queue after removal: 8 3
*/
