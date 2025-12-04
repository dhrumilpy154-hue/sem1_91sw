#include<stdio.h>
int main(){

    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int a[n];
    printf("Enter the %d number of array: ",n);
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }

    int k;
    printf("Enter the value of k: ");
    scanf("%d",&k);

    if(k<=n){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(a[j] > a[j+1]){
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
        printf("The %dth smallest element is: %d",k,a[k-1]);
    }
    else{
        printf("The value of k is not valide");
    }

    return 0;
}
