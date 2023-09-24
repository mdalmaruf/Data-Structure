// selection sort
#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int array[]={20, 35, 2, 45, 12};
    int i,j;
    
    // printf("Enter the numbers\n");
    // for(i=0; i<5; i++){
    //     scanf("%d", &array[i]);
    // }
   
    int size = sizeof(array)/sizeof(array[0]);
    
    printf("\nSize of the Array= %d", size);
    int min;
    for (i=0; i<size-1; i++){
        min=i;
        for(j=i+1;j<size; j++){
            if(array[j]<array[min]){
                min=j;
            }
            int temp = array[i];
            array[i]=array[min];
            array[min]=temp;
            
        }
    }
    
    printf("\nPrint the numbers\n");
    for(i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    
    return 0;
}
