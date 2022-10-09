## CIRCULAR ARRAY

An array is called circular if we consider the first element as next of the last element. Circular arrays are used to implement queue (Refer to this and this).
An example problem : 
Suppose n people are sitting at a circular table with names A, B, C, D, … Given a name, we need to print all n people (in order) starting from the given name.
For example, consider 6 people A B C D E F and given name as ‘D’. People sitting in a circular manner starting from D are D E F A B C.
A simple solution is to create an auxiliary array of size 2*n and store it in another array. For example for 6 people, we create below the auxiliary array. 
A B C D E F A B C D E F 
Now for any given index, we simply print n elements starting from it. For example, we print the following 6. 
A B C D E F A B C D E F