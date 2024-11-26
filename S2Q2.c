#include<stdio.h>
#include<string.h>
struct movie{
    char title[50];
    char genre[50];
    char director[50];
    int releaseyear;
    float rate;
};
void display(struct movie m[],int size){
    printf("Title-------Genre--------Director--------ReleaseDate-----Rating\n");
    for(int i=0;i<size;i++){
        if(m[i].title!=NULL){
            printf("%s\t\t%s\t\t%s\t\t%d\t\t%f\n",m[i].title,m[i].genre,m[i].director,m[i].releaseyear,m[i].rate);
        }
    }
}
void addmovie(struct movie m[],int size){
    printf("Enter Title of Movie to Add:");
    scanf("%s",m[size].title);
    printf("Enter genre:");
    scanf("%s",m[size].genre);
    printf("Enter Director Name:");
    scanf("%s",m[size].director);
    printf("Enter Release date:");
    scanf("%d",&m[size].releaseyear);
    printf("Enter Rating:");
    scanf("%f",&m[size].rate);
    printf("Movie Added\n");
}
void search(struct movie m[],int size){
    int count=0;
    char gen1[50];
    printf("Enter Genre of Movie:");
    scanf("%s",gen1);
    for(int i=0;i<size;i++){
        if(strcmp(gen1,m[i].genre)==0){
            printf("%s\t\t%s\t\t%s\t\t%d\t\t%f\n",m[i].title,m[i].genre,m[i].director,m[i].releaseyear,m[i].rate);
            count++;
        }
    }
    if(count==0)printf("Not found\n");
}
int main(){
    int choice;
    struct movie m[50]={{"Spider","War","StanLee",2022,4.5},{"Thor","Action","Stanlee",2023,4.7},{"IronMAn","Battle","Stanlee",2024,4.9}};
    int size=3;
    while(1){
    printf("1.Display Movies\n2.Search Movies\n3.Add Movie\n4.Exit\n");
    printf("Enter choice:");
    scanf("%d",&choice);
    if(choice==1){
        display(m,size);
    }
    else if(choice==2){
        search(m,size);
    }
    else if(choice==3){
        addmovie(m,size);
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

