/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"

float *
suma_1_svc(nums *argp, struct svc_req *rqstp)
{
	static float  result;

	/*
	 * insert server code here
	 */
	result = argp->n1+argp->n2;
	return &result;
}

float *
resta_1_svc(nums *argp, struct svc_req *rqstp)
{
	static float  result;

	/*
	 * insert server code here
	 */
	result = argp->n1-argp->n2;
	return &result;
}

float *
multiplicacion_1_svc(nums *argp, struct svc_req *rqstp)
{
	static float  result;

	/*
	 * insert server code here
	 */
	result = argp->n1*argp->n2;
	return &result;
}

float *
division_1_svc(nums *argp, struct svc_req *rqstp)
{
	static float  result;

	/*
	 * insert server code here
	 */
	result = argp->n1/argp->n2;
	return &result;
}
