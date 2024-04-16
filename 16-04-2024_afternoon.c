#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct Student{
    
    char name[20];
    int age;
    int total_marks;
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    struct Student s[10];
    int i,member;
    scanf("%d",&member);
    for(i=0;i<member;i++){
        
        scanf("%s",s[i].name);
        scanf("%d",&s[i].age);
        scanf("%d",&s[i].total_marks);
        
    }for(i=0;i<member;i++){
        printf("Name: %s\n",s[i].name);
        printf("Age: %d\n",s[i].age);
        printf("Total Marks: %d\n",s[i].total_marks);
        if(i<1){
            printf("\n");
        }
    }
    return 0;
}


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct car{
  int id;
  char model[10];  
  int rate;
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    struct car c[10];
    int i,cars;
    scanf("%d",&cars);
    for(i=0;i<cars;i++){
        
        scanf("%d",&c[i].id);
        scanf("%s",c[i].model);
        scanf("%d",&c[i].rate);
    }
    if(cars>0){
        for(i=0;i<cars;i++){
        printf("Car ID: %d\n",c[i].id);
        printf("Model: %s\n",c[i].model);
        printf("Rental Rate per Day: %d\n",c[i].rate);
        printf("Total Rental Cost for Car %d: %d\n",i+1,c[i].rate*10);
        
    }
    }
    
    return 0;
}


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct student{
  char name[20];
  int roll_no;
  int marks[5];
  int total;
  float percentage;  
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    struct student s[10];
    int i,j,std,sum;
    scanf("%d",&std);
    for(i=0;i<std;i++){
        scanf("%s",s[i].name);
        scanf("%d",&s[i].roll_no);
        s[i].total=0;
        for(j=0;j<5;j++){
            scanf("%d",&s[i].marks[j]);
            s[i].total+=s[i].marks[j];
            s[i].percentage=s[i].total/5.0;
        } 
    }
    for(i=0;i<std;i++){
        printf("Name: %s\n",s[i].name);
        printf("Roll No: %d\n",s[i].roll_no);
        
        printf("Percentage: %.1f\n",s[i].percentage);
    }
    return 0;
}
