# Week 9 — Binary Heaps

Anh Huynh



1.

**Draw what the following heap would look like after we insert the value 11 into it:**

![image](https://user-images.githubusercontent.com/11669149/229943640-2f9f7951-a9c6-4e4a-86f2-ea5dcd4bc64a.png)



Inserting 11 into the max heap causes 11 to become the new root after the heaping process since it's now the largest value: 



![binaryheap.drawio](/Users/anhpls/Desktop/SWE/CISC187 Data Structures in C++/Week9/assets/binaryheap.drawio-1356588.png)









2.

**Draw what the previous heap would look like after we delete the root node.**

Removing 10 from the max heap means that the last node (3) would replace where 10 is. Then it would trickle down into its proper place, leaving node 9 as the new root node. The 3 node would trickle down, swapping with largest children nodes in order to keep the max heap structure. 

![image-20251024190020517](/Users/anhpls/Desktop/SWE/CISC187 Data Structures in C++/Week9/assets/image-20251024190020517.png)





3.
**Imagine you’ve built a brand-new heap by inserting the following numbers into the heap in this particular order: 55, 22, 34, 10, 2, 99, 68. If you then pop them from the heap one at a time and insert the numbers into a new array, in what order would the numbers now appear?**

```

			55
		   /   \
		  22    34
         /  \   / 
        10   2 99  

			
			55
		   /   \
		  22    99
         /  \   / \
        10   2 34  
        
        	
        	99
		   /   \
		  22    55
         /  \   / \
        10   2 34  68
        
        	
        	99
		   /   \
		  22    68
         /  \   / \
        10   2 34  55
        
        
Before pop: [99, 22, 68, 10, 2, 34, 55]		
Heapify		[68, 22, 55, 10, 2, 34]			New Array: [99]
   			[55, 22, 34, 10, 2]			    New Array: [99, 68]
			[34, 22, 2, 10]				    New Array: [99, 68, 55]
			[22, 10, 2]						New Array: [99, 68, 55, 34]
			[10, 2]							New Array: [99, 68, 55, 34, 22]
			[2]								New Array: [99, 68, 55, 34, 22, 10]
			[]								New Array: [99, 68, 55, 34, 22, 10, 2]
			
```

When you pop repeatedly from a max heap, you get the numbers in descending order. 
The new array is:
[99, 68, 55, 34, 22, 10, 2]



**Video Link:** 

