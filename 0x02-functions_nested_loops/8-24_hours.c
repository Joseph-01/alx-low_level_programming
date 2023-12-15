#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Description: prints every minute of the day
 * Return: void
 */

void jack_bauer(void) {
    // Iterate over hours and minutes
    for (int hours = 0; hours < 24; hours++) {
        for (int minutes = 0; minutes < 60; minutes++) {
            // Print hours and minutes in HH:MM format
            printf("%02d:%02d\n", hours, minutes);
        }
    }
}
