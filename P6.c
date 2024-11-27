#include<stdio.h>
struct travel{
    char name[50];
    char destination[50];
    char duration[50];
    float cost;
    int seats;
};
void display(struct travel f[]){
    for(int i=0;i<3;i++){
        printf("Travel Package %d\n",i+1);
        printf("Package Name:%s\n",f[i].name);
        printf("Destination city:%s\n",f[i].destination);
        printf("Duration in Hours:%s\n",f[i].duration);
        printf("Cost in Rs:%f\n",f[i].cost);
        printf("Available Seats:%d\n",f[i].seats);
        printf("\n");
    }
   
}
void bookseat(struct travel f[]){
    int choice;
    printf("Enter Travel number to book:");
    scanf("%d",&choice);
    if(choice==1){
        if(f[0].seats>0){
            f[0].seats--;
            printf("Seat Booked Successfully\n");
        }
        else{
            printf("Seats are not available");
        }
    }
    if(choice==2){
        if(f[1].seats>0){
            f[1].seats--;
            printf("Seat Booked Successfully\n");
        }
        else{
            printf("Seats are not available");
        }
    }
    if(choice==3){
        if(f[2].seats>0){
            f[2].seats--;
            printf("Seat Booked Successfully\n");
        }
        else{
            printf("Seats are not available");
        }
    }
    else{
        printf("invalid choice");
    }
}
int main(){
    struct travel f[3]={{"Dubai tour","Dubai","9hours",30000,11},{"Kashmir tour","Islamabad","12hours",20000,12},{"Disney land","Hongkong","24hours",50000,9}};
while(1){
printf("1.Display Travel Packages\n");
printf("2.Book Seat\n");
printf("3.EXIT\n");
int n;
printf("Enter choice:");
scanf("%d",&n);
if(n==1){
    display(f);
}
if(n==2){
    bookseat(f);
}
if(n==3){
    printf("Existing program");
    break;
}
}
return 0;
}