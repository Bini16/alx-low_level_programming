0x1E. C - Search Algorithms
AUTHOR: Bini16
TASKS
0. Linear search
Write a function that searches for a value in an array of integers using the Linear search algorithm
Prototype : int linear_search(int *array, size_t size, int value);
1. Binary search
Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
Prototype : int binary_search(int *array, size_t size, int value);
2. Big O #0
What is the time complexity (worst case) of a linear search in an array of size n?
3. Big O #1
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?
4. Big O #2
What is the time complexity (worst case) of a binary search in an array of size n?
5. Big O #3
What is the space complexity (worst case) of a binary search in an array of size n?
6. Big O #4
What is the space complexity of this function / algorithm?
7. Jump search
Write a function that searches for a value in a sorted array of integers using the Jump search algorithm
Prototype : int jump_search(int *array, size_t size, int value);
8. Big O #5
What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?
9. Interpolation search
Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm
Prototype : int interpolation_search(int *array, size_t size, int value);
10. Exponential search
Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm
Prototype : int exponential_search(int *array, size_t size, int value);
11. Advanced binary search
You may have noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem.
Write a function that searches for a value in a sorted array of integers.
Prototype : int advanced_binary(int *array, size_t size, int value);
12. Jump search in a singly linked list
You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a singly linked list.
Write a function that searches for a value in a sorted list of integers using the Jump search algorithm.
Prototype : listint_t *jump_list(listint_t *list, size_t size, int value);
13. Linear search in a skip list
As you see now, looking for a specific value in a singly linked list always leads to browse every element of the list. A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an “express lane” to browse it. A linked list with an express lane is called a skip list. This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as sizeof(skiplist_t) > sizeof(listint_t)
Write a function that searches for a value in a sorted skip list of integers.
Prototype : skiplist_t *linear_skip(skiplist_t *list, int value);
14. Big O #6
What is the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)?
15. Big O #7
What is the time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)?
