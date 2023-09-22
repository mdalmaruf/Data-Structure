#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int array[5];
    int i,j;
    
    printf("Enter the numbers\n");
    for(i=0; i<5; i++){
        scanf("%d", &array[i]);
    }
    
    int size = sizeof(array)/sizeof(array[0]);
    
    printf("\nSize of the Array= %d", size);
    
    for (i=0; i<size-1; i++){
        for(j=0;j<size-i-1; j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            
        }
    }
    
    
    printf("\nPrint the numbers\n");
    for(i=0; i<5; i++){
        printf("%d ", array[i]);
    }
    
    return 0;
}
