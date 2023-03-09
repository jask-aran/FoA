#include <math.h>
#include <stdio.h>

#define FL_FMT   "%.2lf"
#define TIME_FMT "%02d:%02d:%02d"
#define PI  3.1415926;

int main(int argc, char *argv[]) {
    double elapsed_hours;
    int start_hour, start_min, start_sec,
        finish_hour, finish_min, finish_sec;

    printf("Enter event start time (hh:mm:ss): ");
    // scanf("%d:%d:%d", &start_hour, &start_min, &start_sec);
    start_hour = 1, start_min = 57, start_sec = 0;

    printf("Enter event finish time (hh:mm:ss): ");
    // scanf("%d:%d:%d", &finish_hour, &finish_min, &finish_sec);
    finish_hour = 7, finish_min = 30, finish_sec = 0;

    /* 5. Time in elapsed hours between the start time
     * (`start_hour`:`start_min`:`start_sec`) and finishing time
     * (`finish_hour`:`finish_min`:`finish_sec`) of some event, assuming those
     * two times are within the same day. */

    double elapsed_seconds = (finish_hour - start_hour) * 60 * 60 + \
    (finish_min - start_min) * 60 + finish_sec - start_sec;    


    elapsed_hours = elapsed_seconds / 3600.0;



    printf("5. The time in elapsed hours between start time\n     " TIME_FMT
           " and finish time " TIME_FMT " of an event  = " FL_FMT "\n",
           start_hour, start_min, start_sec, finish_hour, finish_min,
 
           finish_sec, elapsed_hours);
    
}