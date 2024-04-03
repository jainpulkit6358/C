
// **********************           Second Day         ********************************//






#include <stdio.h>

int main() {
//      for (int i = 1; i  <=  7; i++) {
//         for (int j = 1; j  <=  5; j++) {
//             // Print stars at the borders
//             if (i == 1 || i == 7 ||i == 4 || j == 1 || j == 5) {
//                 printf("*");
//             } 
            
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//  }

int i,j,k,n;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=n;j>i;j--){
        printf(" ");
    }
    for(k=1;k<=i;k++){
        printf("* ");
    }
    printf("\n");
}

// int i,j,k;
// int m=5,n=4;
//   for(int i = 1; i <= n; i++)  
//     {  
//         for(int j = 1; j <= m - 1; j++)  {  
//             printf(" ");  
//         }  
//         for(int k = 1; k <= 2 * i - 1; k++)  {  
//             printf("*");  
//         }  
//         m--;  
//         printf("\n");  
//     } 
// int n,i,num=9;
    // printf("Enter a Number");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("%d",num);
            
    //     }
    //     if(i<n){
    //         printf("+");
    //     }
    //     else{
    //         break;
    //     }
        
    // }
    
    int i,j,n,c=1;
    printf("Enter a Number");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        for(j=1;j<=i;j++){
            if(c<=n){
                printf("%d ",c);
                c++;
                    }
            }
        printf("\n");
    }

             int n,i,j,x=1;
    float sum=0.0;
    printf("Enter a Number");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        if(i>1)
        printf("%d/%d",x,i);
        else
        printf("1");
        if(i<n)
            printf("+");
        else
            break;
    }
    printf("=");
    for(j=1;j<=n;j++){
        sum=sum+((double)x)/j;
    }
    printf("%.2f",sum);
    return 0;
}




