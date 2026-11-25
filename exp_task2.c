#include <stdio.h>

int main()
{
    float physics, chemistry, maths;
    float average;

    printf("Enter Physics marks: ");
    scanf("%f", &physics);

    printf("Enter Chemistry marks: ");
    scanf("%f", &chemistry);

    printf("Enter Mathematics marks: ");
    scanf("%f", &maths);

    average = (physics + chemistry + maths) / 3;

    printf("\n----- STUDENT RESULT -----\n");
    printf("Physics Marks: %.2f\n", physics);
    printf("Chemistry Marks: %.2f\n", chemistry);
    printf("Mathematics Marks: %.2f\n", maths);
    printf("Average: %.2f%%\n", average);

    (average >= 50) ?
        printf("Eligible for Admission\n") :
        printf("Not Eligible for Admission\n");

    return 0;
}
