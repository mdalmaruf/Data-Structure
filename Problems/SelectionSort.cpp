//Selection Sort C and C++
#include<iostream>
using namespace std;
#include<stdio.h> 


void selectionSort(int array[], int size);
void swapc(int *min, int *x);
void display(int array[], int size);

int main(){
    
    int array[]={20, 35, 2,45, 12};
    int size = sizeof(array)/sizeof(array[0]);
    
    // printf("Enter the numbers\n");
    // for(i=0; i<5; i++){
    //     scanf("%d", &array[i]);
    // }
   
    printf("\nSize of the Array= %d", size);
    
    selectionSort(array, size);
    
    printf("\nPrint the numbers\n");
    display(array, size);
   
    return 0;
}

void display(int array[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
        //cout << array[i] << " ";
        
    }
}


void selectionSort(int array[], int size){
    int min;
    for (int i=0; i<size-1; i++){
        min=i;
        for(int j=i+1;j<size; j++){
            if(array[j]<array[min]){
                min=j;
            }
            if (min != i){
                // swap(array[min], array[i]); // c++
                swapc(&array[min], &array[i]); // C pointer 
                
                // int temp = array[i];
                // array[i]=array[min];
                // array[min]=temp;
            }
            
        }
    }
    
}


void swapc(int *min, int *x){
    
    int temp = *x;
    *x =*min;
    *min=temp;
}
