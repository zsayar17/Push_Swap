# Push_Swap
The purpose of the project is to sort a given set of mixed numbers provided by users using only the stack structure and following specific rules. For this, I implemented the radix sort algorithm. 
Rules are; 

"rotate a" (Shift up all elements of stack a by 1. The first element becomes the last one), 

"rotate b" ( Shift up all elements of stack b by 1. The first element becomes the last one), 

"reverse rotate a" (Shift down all elements of stack a by 1. The last element becomes the first one.), 

"reverse rotate b" (Shift down all elements of stack b by 1. The last element becomes the first one.), 

"swap a" (Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements), 

"swap b" (Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements), 

"push a" (Take the first element at the top of b and put it at the top of a. Do nothing if b is empty), 

"push b" (Take the first element at the top of a and put it at the top of b. Do nothing if a is empty)

