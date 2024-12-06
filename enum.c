#include <stdio.h>

enum Weekday {
    SUNDAY,    // Default value is 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

int main() {
    enum Weekday today = WEDNESDAY;

    if (today == WEDNESDAY) {
        printf("It's Wednesday!\n\n");
    }

    // Display the integer value of each day
    printf("Sunday is %d\n", SUNDAY);
    printf("Monday is %d\n", MONDAY);
    printf("Tuesday is %d\n", TUESDAY);
    printf("Wednesday is %d\n", WEDNESDAY);
    printf("Thursday is %d\n", THURSDAY);
    printf("Friday is %d\n", FRIDAY);
    printf("Saturday is %d\n", SATURDAY);

    return 0;
}
