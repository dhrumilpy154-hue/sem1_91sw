#include<stdio.h>
#include<limits.h>
int main(){

    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int a[n];
    printf("Enter the %d number of array: ",n);
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }

    for(int i=1;i<=n-1;i++){
        int j=i;
        while(a[j] < a[j-1] && j>=1){
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
    } 

    printf("Array in assendinng order:\n");
    for(int i=0;i<=n-1;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
