#include<stdio.h>  
 
void fibonacci(int n, int n1, int n2){    
    int n3;  
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);    
         fibonacci(n-1, n1, n2);
    } 
    
}    
int main(){    
    int n;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    
    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);    
    fibonacci(n-2, 0, 1); // 0 and 1 are the starting fibonnaci numbers  

    return 0;  
}  