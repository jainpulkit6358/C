
#include <stdio.h>

//                  factorial
// int main()
// {
//     int n,i,fact=1;
//     printf("Enter a Number");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         fact*=i;
//     }
//     printf("%d! =%d",n,fact);
// }




//                  Armstrong



// int power(int a,int b){
//     int power = 1 , i ;  
//     for ( i = 1 ; i <= b ; + + i ) {  
//         power = power * a ;  
//     }  
//     return power ; 
// }
// int main(){
    
// int num,i, originalNum,result=0, remainder,m=0;

//     printf("Enter a  integer: ");
//     scanf("%d", &num);
//     originalNum = num;
//     while (originalNum != 0) {
       
//       originalNum /= 10;
//         m++;
//     }
// originalNum = num;
//     while (originalNum != 0) {
       
//         remainder = originalNum % 10;
        
//          result += power(remainder, m);
      
        
//       originalNum /= 10;
//     }

//     if (result == num)
//         printf("%d is an Armstrong number.", num);
//     else
//         printf("%d is not an Armstrong number.", num);
// return 0;
// }



//                      Perfect 

int main() {
    // Write C code here
   int n,i,s=0;
   printf("Enter a Number");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            s+=i;
        }
    }
    if(s==n)
    printf("%d is a perfect number",n);
    else
    printf("%d not perfect Number",n);
    return 0;
}


//                  Reverse
int main() {
    int n,i,sum=0,rem;
    printf("Enter a number");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }

    
    printf("%d is reverse",sum);
    
}




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


}
