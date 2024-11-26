#include<stdio.h>
struct Flight{
    char number[50];
    char departure[50];
    char destination[50];
    char date[50];
    int seats;
};
void display(struct Flight f[]){
    for(int i=0;i<3;i++){
        printf("Flight %d\n",i+1);
        printf("Flight Number:%s\n",f[i].number);
        printf("Departure city:%s\n",f[i].departure);
        printf("Destination City:%s\n",f[i].destination);
        printf("Date:%s\n",f[i].date);
        printf("Available Seats:%d\n",f[i].seats);
        printf("\n");
    }
   
}
void bookseat(struct Flight f[]){
    int choice;
    printf("Enter Flight number to book:");
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
    struct Flight f[3]={{"A1","Hyd","Khi","24-11-24",11},{"A2","Hyd","ISL","21-11-24",12},{"A3","Hyd","LHR","23-11-24",9}};
while(1){
printf("1.Display Flight\n");
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
