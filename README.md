# DSA
Data Structures &amp; Algorithms

## Types of Data-Structure
1. Linear
2. Non-Linear

## Linear
1. Array
2. Stack
3. Queues (Simple, Circular, Double Ended, Priority)
4. Linked Lists (Singly, Doubly, Circular)
## Non-Linear
1. Trees
2. Graphs
3. Tables
4. Sets

## Arrays

### What is an Array❓❓
-  An array is a collection of items of the same variable type that are stored at contiguous memory locations.
-  Each item in an array is indexed starting with 0 . Each element in an array is accessed through its index.
### Need of Array Data Structures 🤔
-  Storing data for processing
-  Representing data in tables and matrices
-  Creating dynamic data structures such as linked lists and trees
-  Implementing data structures such as stacks and queues
### Types of Array 🎞
-  There are two main types of arrays:
-  One-dimensional arrays: These arrays store a single row of elements.
-  Multidimensional arrays: These arrays store multiple rows of elements.
### Array Operations 🖇
- 1 Traversal : Visiting each element of an array in a specific order (e.g., sequential, reverse).
-   [Traversal](./Arrays/traversal.c)
- 2 Insertion : Adding a new element to an array at a specific index.
-   [Insertion at the beginning](./Arrays/insert_start.c)
-   [Insertion at the end](Arrays/insert_end.c)
-   [Insertion at the specified position (Unsorted)](Arrays/insert_end.c)
-   Insertion at the specified position (Sorted)
- 3 Deletion : Removing an element from an array at a specific index.
-   [Deletion from the beginning](Arrays/delete_start.c)
-   [Deletion from the end](Arrays/delete_end.c)
-   [Deletion at the specified position (Unsorted)](Arrays/delete_pos.c)
-   Deletion at the specified position (Sorted)
- 4 Searching : Finding the index of an element in an array.
### Applications of Array 🚀
- Storing data for processing
- Implementing data structures such as stacks and queues
- Representing data in tables and matrices
- Creating dynamic data structures such as linked lists and trees

## Linked List
### What is a Linked List 🔗❓❓
- A linked list is a linear data structure that consists of a series of nodes connected by pointers.
- Each node contains data and a reference to the next node in the list.
- Unlike arrays, linked lists allow for efficient insertion or removal of elements from any position in the list, as the nodes are not stored contiguously in memory.
### Types of Linked List 🔗🔗
  1. Singly Linked List 🔗
  -  It is the simplest type of linked list in which every node contains some data and a pointer to the next node of the same data type.
  2. Doubly Linked List ⛓
  -  A doubly linked list or a two-way linked list is a more complex type of linked list that contains a pointer to the next as well as the previous node in sequence.
  3. Circular Linked List 🖇
  -  A circular linked list is that in which the last node contains the pointer to the first node of the list.
### Operations on Singly Linked List:
  -  [Traversal](./Linked_List/linkedlist.c)
  -  [Searching]()
  -  [Length]()
  -  Insertion:➕➕
     - [Insert at the beginning](./Linked_List/insert_LL.c)
     - [Insert at the end](./Linked_List/insert_end.c)
     - [Insert at a specific position](./Linked_List/insert_pos.c)
 -  Deletion:➖➖
      - [Delete from the beginning](./Linked_List/delete_start.c)
      - [Delete from the end](./Linked_List/delete_end.c)
      - [Delete a specific node](./Linked_List/delete_pos.c)
### Operations on Doubly Linked List:
- [Traversal in Doubly Linked List](./Linked_List/doubly_linked_list/create_traverse.c)
- [Searching in Doubly Linked List]()
- [Finding Length of Doubly Linked List()
- Insertion in Doubly Linked List:➕➕
      - [Insertion at the beginning of Doubly Linked List](./Linked_List/doubly_linked_list/insert_start.c)
      - [Insertion at the end of the Doubly Linked List](./Linked_List/doubly_linked_list/insert_end.c)
      - [Insertion at a specific position in Doubly Linked List](./Linked_List/doubly_linked_list/insert_at_pos.c)
- Deletion in Doubly Linked List:➖➖
      - [Deletion of a node at the beginning of Doubly Linked List](./Linked_List/doubly_linked_list/deleteStart.c)
      - [Deletion of a node at a specific position in Doubly Linked List](./Linked_List/doubly_linked_list/deletePos.c)
      - [Deletion of a node at the end of Doubly Linked List](./Linked_List/doubly_linked_list/deleteEnd.c)
### Circular Linked List Operations    
- [Traversal in Circular Linked List](./Linked_List/Circular_Linkedlist/traverse_create.c)
- [Insertion at the beginning of Circular Linked List](./Linked_List/Circular_Linkedlist/insert_start.c)
- [Insertion at a specific position in Circular Linked List](./Linked_List/Circular_Linkedlist/insert_pos.c)
- [Deletion of a node at the beginning of Circular Linked List](./Linked_List/Circular_Linkedlist/delete_start.c)
- [Deletion of a node at a specific position in Circular Linked List](./Linked_List/Circular_Linkedlist/delete_pos.c)
- [Deletion of a node at the end of Circular Linked List](./Linked_List/Circular_Linkedlist/delete_end.c)
### [Applications, Advantages and Disadvantages of Linked List](https://www.geeksforgeeks.org/applications-advantages-and-disadvantages-of-linked-list/)🔗💻
