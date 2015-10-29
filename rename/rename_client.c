/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "rename.h"





int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	CLIENT *clnt;
	char  *result_1;
	name  rename_1_arg;

	rename_1_arg.old= argv[2];
	rename_1_arg.final= argv[3];

	clnt = clnt_create (host, RENAME_PROG, RENAME_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}

	result_1 = rename_1(&rename_1_arg, clnt);
	if (result_1 == (char *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	clnt_destroy (clnt);

exit (0);
}