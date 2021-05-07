/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calc.h"
#include <stdio.h>
#include <string.h>

int *calc_1_svc(numbers *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	printf("requested operation is %d %s %d \n", argp->a,argp->c,argp->b);
	
	if(strcmp("+",argp->c)==0){
		result = argp->a + argp->b;
	}	
	if(strcmp("-",argp->c)==0)
		result = argp->a - argp->b;
	if(strcmp("x",argp->c)==0)
		result = (argp->a)*(argp->b);
	if(strcmp("/",argp->c)==0)
		result = (argp->a)/(argp->b);
	
	return &result;
}
