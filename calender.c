#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 1 && isLeapYear(year))
        return 29;
    return days[month];
}

// Returns the weekday of January 1st (0 = Sunday, 1 = Monday, ... 6 = Saturday)
int firstDayOfYear(int year) {
    int y = year - 1;
    return (1 + 5 * (y % 4) + 4 * (y % 100) + 6 * (y % 400)) % 7;
}

int main() {
    const char *monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    int year, month, day, i;

    printf("Enter a year: ");
    if (scanf("%d", &year) != 1 || year < 1) {
        printf("Invalid year.\n");
        return 1;
    }

    int startDay = firstDayOfYear(year);

    for (month = 0; month < 12; month++) {
        printf("\n      %s %d\n", monthNames[month], year);
        printf(" Su Mo Tu We Th Fr Sa\n");

        // Print spaces before the first day of the month
        for (i = 0; i < startDay; i++)
            printf("   ");

        int total = daysInMonth(month, year);
        for (day = 1; day <= total; day++) {
            printf("%3d", day);
            startDay = (startDay + 1) % 7;
            // Start a new line after Saturday
            if (startDay == 0 && day != total)
                printf("\n");
        }
        printf("\n");
    }

    return 0;
}