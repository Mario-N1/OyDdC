#include <stdio.h>
#include <stdlib.h>
void main(int argc ,char *argv[],char *env []){
int i;
printf( "The  environment  strings  are:\n" );
i = 0;
while ( env[i] != NULL ){
printf( "Arg %3d: %s\n", i, env[i] );
i++;
		}
	}
