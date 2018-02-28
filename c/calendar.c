#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define is_leap(year) \
            (1==stm->tm_mon && \
            ((!(stm->tm_year%4) && (stm->tm_year%100)) || \
                !(stm->tm_year%400)))

int
main(int argc, const char *argv[])
{
    if (argc < 3) {
        exit(EXIT_SUCCESS);
    }
    int offset = atoi(argv[1]);
    char base_color = *argv[2];
    char highlight_color = *argv[3];
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    time_t t;
    time(&t);
    struct tm *stm = localtime(&t);
    int wday = (stm->tm_wday + 36 - stm->tm_mday) % 7;

    printf("${offset %d}", offset);
    for (int i=0; i<wday; ++i) {
        printf("   ");
    }
    int max_day = days[stm->tm_mon];
    for (int d=1; d<=max_day; ++d) {
        if (!wday) {
            printf("\n${offset %d}", offset);
        }
        if (d == stm->tm_mday) {
            printf("${color%c}%2d${color%c} ",
                    highlight_color, d, base_color);
        } else {
            printf("%2d ", d);
        }
        if (6 == wday) {
            wday = 0;
        } else {
            ++wday;
        }
    }


    exit(EXIT_SUCCESS);
}
