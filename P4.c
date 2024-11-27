#include<stdio.h>
#include<string.h>
struct car{
    char make[50];
    char model[50];
    int year;
    char price[50];
    int age;
};
void display(struct car m[],int size){
    printf("Make-------Model--------Year--------Price-----MileAge\n");
    for(int i=0;i<size;i++){
        printf("%s\t\t%s\t\t%d\t\t%s\t\t%d\n",m[i].make,m[i].model,m[i].year,m[i].price,m[i].age);
    }
}
void addcar(struct car m[],int size){
    printf("Enter Make of Car to Add:");
    scanf("%s",m[size].make);
    printf("Enter Model:");
    scanf("%s",m[size].model);
    printf("Enter Year:");
    scanf("%d",&m[size].year);
    printf("Enter Price:");
    scanf("%S",m[size].price);
    printf("Enter Mileage:");
    scanf("%d",&m[size].age);
    printf("Car Added\n");
}
void search(struct car m[],int size){
    int count=0;
    char mdl[50];
    printf("Enter Model of Car:");
    scanf("%s",mdl);
    for(int i=0;i<size;i++){
        if(strcmp(mdl,m[i].model)==0){
            printf("%s\t\t%s\t\t%d\t\t%s\t\t%d\n",m[i].make,m[i].model,m[i].year,m[i].price,m[i].age);
            count++;
        }
    }
    if(count==0)printf("Not found\n");
}
int main(){
    int choice;
    struct car m[50]={{"Toyota","Carola",2019,"20lakhs",20},{"suzuki","Swift",2018,"14lakhs",17},{"BMW","Bmw4",2016,"38lakhs",50}};
    int size=3;
    while(1){
    printf("1.Display Cars\n2.Search Cars\n3.Add Cars\n4.Exit\n");
    printf("Enter choice:");
    scanf("%d",&choice);
    if(choice==1){
        display(m,size);
    }
    else if(choice==2){
        search(m,size);
    }
    else if(choice==3){
        addcar(m,size);
        size++;
    }
    else if(choice==4){
        printf("Exiting");
        break;
    }
    else{
        printf("Invalid Choice! try again");
    }
    }
    return 0;
}