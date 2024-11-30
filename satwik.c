#include <stdio.h>
#include <windows.h>

void welcome();
void input(int *x1, int *x2, int *x3, int *x4, int *x5, int *x55, int *x6);
void output(int x1, int x2, int x3, int x4, int x5, int x55, int x6);

void welcome() {
    printf("\n ************");
    printf("\n Welcome to BioAlert Systems");
    printf("\n Bio-statistics based alarm system");
    printf("\n ************");
    printf("\n Press enter to continue...");
    getchar();
}

void input(int *x1, int *x2, int *x3, int *x4, int *x5, int *x55, int *x6) {
    printf("\n Enter your systolic BP: ");
    scanf("%d", x1);
    printf("\n Enter your diastolic BP: ");
    scanf("%d", x2);
    printf("\n Enter your heart rate: ");
    scanf("%d", x3);
    printf("\n Enter your Oxygen level: ");
    scanf("%d", x4);
    printf("\n Enter your Blood Glucose before having meal: ");
    scanf("%d", x5);
    printf("\n Enter your Blood Glucose after having meal: ");
    scanf("%d", x55);
    printf("\n Enter your Body Temperature: ");
    scanf("%d", x6);
}

void output(int x1, int x2, int x3, int x4, int x5, int x55, int x6) {
    printf("\n Your stats are: \n");
    printf("\n Your systolic and Diastolic BP is %d mmHg and %d mmHg", x1, x2);
    printf("\n Your heart rate is %d bpm", x3);
    printf("\n Your Oxygen level is %d %%", x4);
    printf("\n Your Blood Glucose level before having a meal is %d mg/dl", x5);
    printf("\n Your Blood glucose level after having a meal is %d mg/dl", x55);
    printf("\n Your Body Temperature is %d C\n", x6);
}

int main() {
    int x1, x2, x3, x4, x5, x55, x6;

    welcome();
    input(&x1, &x2, &x3, &x4, &x5, &x55, &x6);

    if (x1 < 90 || x1 > 140) {
        printf("\a Alarm: Systolic BP out of range!\n");
        Beep(750, 300);
    }

    if (x2 < 60 || x2 > 90) {
        printf("\a Alarm: Diastolic BP out of range!\n");
        Beep(750, 300);
    }

    if (x3 < 60 || x3 > 100) {
        printf("\a Alarm: Heart Rate out of range!\n");
        Beep(750, 300);
    }

    if (x4 < 95) {
        printf("\a Alarm: Oxygen Level is out of range!\n");
        Beep(750, 300);
    }

    if (x5 < 70 || x55 > 180) {
        printf("\a Alarm: Blood Glucose out of range!\n");
        Beep(750, 300);
    }

    if (x6 < 35 || x6 > 38) {
        printf("\a Alarm: Body Temperature out of range!\n");
        Beep(750, 300);
    }

    output(x1, x2, x3, x4, x5, x55, x6);

    return 0;
}

