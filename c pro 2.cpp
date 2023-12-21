#include <stdio.h>

int main() {
    int totalHoursNeeded, numberOfDays, numberOfWorkers;

    printf("Enter the total number of hours needed: ");
    scanf("%d", &totalHoursNeeded);

    printf("Enter the number of days: ");
    scanf("%d", &numberOfDays);

    printf("Enter the number of workers: ");
    scanf("%d", &numberOfWorkers);

    int totalWorkingHours = numberOfDays * 8 * 0.9;

    int totalProjectHours = totalHoursNeeded + numberOfDays * numberOfWorkers * 2;

    if (totalWorkingHours >= totalProjectHours) {
        int hoursLeft = totalWorkingHours - totalProjectHours;
        printf("Yes! %d hours left.\n", hoursLeft);
    } else {
        int additionalHours = totalProjectHours - totalWorkingHours;
        printf("Not enough time! %d hours needed.\n", additionalHours);
    }

    return 0;
}

