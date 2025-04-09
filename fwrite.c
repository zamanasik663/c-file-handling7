// writing to file using fwrite() function
#include <stdio.h>

// structure to store student data
struct student{
    char name[20];
    int rollno;
    float marks;
};


//driver function
int main(){

    FILE *fp;
    
    struct student s;
    // open file in binary write mode
    char ch = 'y'; // variable to control loop
    fp = fopen("student.txt", "wb"); // open file in binary write mode

    if(fp == NULL){
        printf("Error opening file\n");
        return 1;
    }
    // input student data
    while(ch == 'y'){
        printf("Enter name: ");
        scanf("%s", s.name);
        printf("Enter roll number: ");
        scanf("%d", &s.rollno);
        printf("Enter marks: ");
        scanf("%f", &s.marks);

        // write student data to file
        fwrite(&s, sizeof(s), 1, fp);

        printf("Do you want to enter more data? (y/n): ");
        scanf(" %c", &ch); // space before %c to ignore newline character

    }
    fclose(fp); // close file
    printf("Data written to file successfully\n");






    return 0;
}