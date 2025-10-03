# CPP-19-QUEUE-USING-ARRAY
## Aim

To implement a queue data structure using arrays in C++ and perform basic operations such as enqueue (add), dequeue (remove), and display.

## Objectives

To understand the concept of a queue as a linear data structure.

To implement a queue using arrays and classes in C++.

To handle errors such as queue overflow and underflow.

To understand the FIFO (First In, First Out) principle used in queues.

## Theory
### What is a Queue?

A queue is a linear data structure where elements are inserted at one end called rear and removed from the other end called front.

First In, First Out (FIFO): The element added first will be removed first.

You can imagine a queue like people waiting in a line at a ticket counter: the first person to join the line is the first to get the ticket.

### Basic Queue Operations

Enqueue (Add): Insert an element at the rear of the queue.

Dequeue (Remove): Remove the element from the front of the queue.

Display: Show all elements currently in the queue.

### Real-Life Examples of Queue

Ticket booking systems (first come, first served).

Printer queue (documents printed in order).

Call center support (calls answered in order of arrival).

CPU scheduling in operating systems.

### Overflow and Underflow

Overflow: Happens when the queue is full, and we try to add another element.

Underflow: Happens when the queue is empty, and we try to remove or display elements.

## Comparison Table (Array vs Linked List Implementation of Queue)
| Feature             | Array-based Queue (used here)      | Linked-list-based Queue                |
| ------------------- | ---------------------------------- | -------------------------------------- |
| Memory Allocation   | Fixed size (`MAX_QUEUE`)           | Dynamic, grows as needed               |
| Speed of Operations | Fast (direct indexing)             | Slightly slower (pointer management)   |
| Memory Usage        | May waste memory if not fully used | Exact memory usage, extra for pointers |
| Implementation      | Simple and easy                    | More complex                           |

## Algorithm
### Algorithm for add(value) (Enqueue)

Check if rear == MAX_QUEUE - 1.

If yes, print “Queue is full” (overflow).

If the queue is empty (front == -1), set front = 0.

Increment rear and insert value at arr[rear].

### Algorithm for remove() (Dequeue)

Check if the queue is empty (front == -1 or front > rear).

If yes, print “Queue is empty” (underflow) and return error code.

Return arr[front] and increment front by 1.

### Algorithm for show() (Display Queue)

If the queue is empty (front == -1 or front > rear), print “Queue is empty”.

Else, loop from front to rear and print all elements.

## Program Description

The program defines a class Queue which contains:

### Private data:

arr[MAX_QUEUE] → Array to store queue elements.

front → Index of the front element.

rear → Index of the last element.

### Public functions:

add(int value) → To enqueue an element.

remove() → To dequeue the front element.

show() → To display all queue elements.

### The main() function:

Creates a queue object.

Adds elements to the queue.

Displays the current queue.

Removes one element and prints it.

Displays the queue after removal.

## Concepts Used

Class and Object → Encapsulation of queue operations.

Array → To store queue elements in sequential memory.

Encapsulation → Data is private, accessed only through class methods.

Conditionals (if-else) → To check overflow and underflow.

Loop (for loop) → To display all elements.

Macros (#define) → For constants like MAX_QUEUE and EMPTY_ERROR.

## Conclusion

The queue is implemented successfully using arrays in C++.

The program demonstrates the FIFO principle clearly.

Overflow and underflow conditions are handled.
