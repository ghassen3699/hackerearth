#include <stdio.h>
 
int main(void) {
    
	int N, i;
	scanf("%d", &N);
 
	int numArray[N]; // Define an array of four integers
    
	// Get inputs for the array elements
	for (i=0;i<N; i++) {
    	scanf("%d", &numArray[i]);
	}
	
	int sum = 0;
	// Write here the logic to add these integers:
    for (i = 0 ; i <N ; i++)
	{
		sum = sum + numArray[i] ;
	}
    
    
   
	printf("%d\n",sum);  // Print the sum
    
	return 0;
}