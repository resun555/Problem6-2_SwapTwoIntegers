// Problem6-2_SwapTwoIntegers.c : Defines the entry point for the console application.
//

#include "stdafx.h"


int main( void )
{
	int integer1;
	printf( "Enter Integer 1: " );
	scanf_s( "%d", &integer1 );
	int integer2;
	printf( "Enter Integer 2: " );
	scanf_s( "%d", &integer2 );
	swap( &integer1, &integer2 );
	printf( "Integer 1: %d", integer1 );
	printf( "\n" );
	printf( "Integer 2: %d", integer2 );
    return 0;
}

