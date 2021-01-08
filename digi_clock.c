#include<stdio.h>
#include<time.h>
int main(){
   time_t ts, flag = 1;
      struct tm *ct;
      printf("\n\n\n\tDigital Clock\n\t");
      while(1) 
      {
            ts = time(NULL);
            ct = localtime(&ts);
            if(flag || ct -> tm_min % 59 == 0) 
            {                  
                  printf("\n\b\b\b\b\b\b");
                  printf("%s",ct->date);
                  printf("%9d:%02d:%02d", ct -> tm_hour, ct -> tm_min, ct -> tm_sec);
                  flag = 0;
                  printf("\b\b");
                  continue;
            }
            if(ct -> tm_sec % 59 == 0) 
            {
                  printf("\b\b\b");
                  printf("%02d:", ct -> tm_min);
            }
            printf("%02d", ct ->tm_sec);
            printf("\b\b");
      }
      return 0;
}
