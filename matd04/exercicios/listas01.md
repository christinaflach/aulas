# Listas Lineares

1. Implement in C functions for manipulating integer linear lists (IntegerList).

   - isEmpty(IntegerList*): returns 0 if the argument is a non-empty list, 1 otherwise;
   - int size(IntegerList*): returns the size of the list;
   - insertElement(IntegerList*, int element): insert element at the end of the list;
   - int removeElement(IntegerList*, index i): returns i-th element of the list, i >=1, i <= size(list), and removes it from the list;
   - printList(IntegerList*): prints the elements of the list.


2. Create a linked list of integers from a given array of integers of size N.

Input : arr[]={1, 2, 3, 4, 5}; 
Output : 1->2->3->4->5

Input :arr[]={10, 11, 12, 13}
Output : 10->11->12->13

3. Implement a function to perform binary search in an ordered list of integer elements. You will have to implement a function to sort the list.

   - int binarySearch(int key, IntegerList *): returns order of key in the list, or 0 if key is not found;

4. Calcule O(N) para todas as funções implementadas.


