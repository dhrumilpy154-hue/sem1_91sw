#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    int a =0;
    
    for(int i= 2;i<=n;i++){
        if(n%i == 0){
            a = 1;
        }
        for(int j=1;j * j<=i;i++){
            if(i%j == 0){
                a = 0;
                break;
            }
        }
        if(a){
            printf("%d",i);
        }
    }
    return 0;
}
    
