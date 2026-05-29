#include<stdio.h>
int main()
{
    FILE *file;
    char name[20],status[20],address[30],crime[20];
    int age,phoneNumber,num;
    file = fopen("criminal.txt","a");
    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter the number of criminals: ");
        scanf("%d",&num);
        for(int i=0;i<num;i++)
        {
            printf("Enter criminal name: ");
            scanf("%s",name);
            printf("Enter age: ");
            scanf("%d",&age);
            printf("Enter phone Number: ");
            scanf("%d",&phoneNumber);
            printf("Enter crime: ");
            scanf("%s",crime);
            printf("Enter criminal status: ");
            scanf("%s",status);
            printf("Enter criminal address: ");
            scanf("%s",address);
            fprintf(file,"%s\t\t%d\t%d\t%s\t%s\t%s\n",name,age,phoneNumber,crime,status,address);

        }
        fclose(file);
    }

//stop

    getch();
}
