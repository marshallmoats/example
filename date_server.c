/* date_server.c */
#include "date.h"
#include <time.h>
long *
bin_date_1_svc(void *argp, struct svc_req *rqstp)
{
static long result;
/*
* insert server code here
*/
result = time((long *) 0);
return &result;
}
char **
str_date_1_svc(long *argp, struct svc_req *rqstp)
{
static char * result;
/*
* insert server code here
*/
printf("str_date_1_svc: start!\n");
result = ctime(argp);
return &result;
}