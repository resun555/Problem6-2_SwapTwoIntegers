// stdafx.cpp : source file that includes just the standard includes
// Problem6-2_SwapTwoIntegers.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file


void swap( int* _Candidate1, int* _Candidate2 )
{
	int temp = *_Candidate1;
	*_Candidate1 = *_Candidate2;
	*_Candidate2 = temp;
	return;
}

