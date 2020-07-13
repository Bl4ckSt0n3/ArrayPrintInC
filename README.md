# ArrayPrintInC

### Passing Array to Function
<br>
<p>
    In the code file printArray.c we demonstrate that how to print an array which is passed to function. Now, let's examine the codes step by step.
    
    Begin the first line code that is function prototype.
    
    int prntArr(int[], int);
    
    And after that coming a main function however, i go to beyond this function. 
    
    int prntArr(int arr[], int size)
    {
	    int i;
	    for(i=0; i<size; i++)
	    {
		    printf("%d\n",arr[i]);
	    }
    }
    
    Array can be declared in the main function but this function sorts an array with array parameter and array size. The size of array declared in 'int size' 
    parameter therefore for loop uses that size.
    
    
    int main()
    {
	    int a[] = {0,1,2,3,4,5,6,7,8,9};
	    prntArr(a,sizeof(a)/4);
	    return 0;
    }
    
    We just use name of array instead of parameter we define, in the main function. The size parameter is also size of array. In this way, if an index come into array 
    than prntArr function will be sorted all index of array.
    
</p>
