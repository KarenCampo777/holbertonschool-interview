# 0x02. Heap Insert

## <b>Data structures</b>

In C, a data structure is a way to arrange data in computers, for example you when we need to store data in: 
- Linear fashion – Array/ Linked List
- One on the other – Stacks
- Hierarchical Fashion – Trees
- Connect nodes – Graph

##  Binary Tree
It is a tree whose elements have 2 children at most that we call left and right child 
In C, we can represent a tree node using structures. A tree is represented by a pointer to the node at the top of the tree. If the tree is empty, then value of the root is NULL. A Tree node contains following parts: 
1. Data 
2. Pointer to left child 
3. Pointer to right child


## Binary Heap

a Binary Heap is a Binary Tree with following properties: 

1) It’s a complete tree (All levels are completely filled except possibly the last level and the last level has all keys as left as possible). This property of Binary Heap makes them suitable to be stored in an array.

2) A Binary Heap is either Min Heap or Max Heap. In a Min Binary Heap, the key at root must be minimum among all keys present in Binary Heap. The same property must be recursively true for all nodes in Binary Tree. Max Binary Heap is similar to MinHeap.