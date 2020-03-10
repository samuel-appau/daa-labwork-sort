#include<iostream>
using namespace std; 
  
void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
}  
  
// A function to implement bubble sort  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
  
/* Function to print an array */
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
// Main function for testing the program  
int main()  
{  
     int arr[10] ;
    int n;
	
	cout<<"Using BubbleSort to sort elements of an array  in ascending order"<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"Enter size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements of the array to be sorted:" <<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}  
	
	bubbleSort(arr, n); 
	 
    cout << "Sorted array is: \n"; 
	 
    printArray(arr, n); 
    return 0;  
}  
