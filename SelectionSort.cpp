#include<iostream>
using namespace std; 
  
void swap(int *a, int *b)  
{  
    int temp = *a;  
    *a= *b;  
    *b= temp;  
}  
  
void selectionSort(int arr[], int n)  
{  
    int i, j, minElement;  
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        minElement = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[minElement])  
            minElement = j;  
  
        // Swap the found minimum element with the first element  
        swap(&arr[minElement], &arr[i]);  
    }  
}  
  
/* Function to print an array */
void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
// Main function of the program
int main()  
{  
    int arr[10] ;
    int n;
	
	cout<<"Using SelectionSort to sort elements of an array  in ascending order"<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"Enter size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements of the array to be sorted:" <<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
    selectionSort(arr, n); 
	 
    cout << "Sorted array is: \n"; 
	 
    printArray(arr, n);  
    return 0;  
}  
