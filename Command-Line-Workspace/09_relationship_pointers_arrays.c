/*
 * Author: Matt Johnson
 * Subject: pointers and arrays
 * Purpose:
 * Date: 06/01/2023
 *
 * Notes:
 *
 * 	- the address of the array is the same
 * 	  as the address of the first element
 * 	  in the array, because it is where the
 * 	  array begins
 *
 * 	- the name of the array is the address
 * 	  of the array
 *
 * 	- an array is the same as the address
 * 	  in memory
 *
 * 	- when dealing with arrays, you are
 * 	  dealing with addresses, and when 
 * 	  dealing with addresses, you are
 * 	  dealing with pointers
 *
 * 	- &str1, &str1[0], and str1 print the
 * 	  same address
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char str1[] = "Hello World";

	// returns compiler warnings - build and run
	printf("%s %c %d %d %d\n", str1, str1[0], &str1, &str1[0], str1);

	return 0;
}
