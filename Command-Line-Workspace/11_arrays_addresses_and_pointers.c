/*
 * Author: Matt Johnson
 * Subject: arrays, addresses, and pointers
 * Purpose:
 * Date: 06/01/2023
 *
 * Notes:
 *
 * 	- an array is the address of the array
 * 	- the adddress of the array is the same
 * 	  as the value of the array
 *
 * 	- but a pointer variable is not an array,
 * 	  it is a variable that stores the address
 * 	  of an array
 * 	- the pointer is stored at one address,
 * 	  while the array is stored at another
 * 	  address
 *
 * 	- str1 is the start of the array location
 * 	  in memory
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char str1[] = "Hello"; 	// array
	char *str2 = "Goodbye";	// pointer

	// &str1 is the address and str1 is the value
	printf("%d %d %s %d\n", &str1, str1, str1, *str1);
	// &str2 is the address and str2 is the value
	printf("%d %d %s %d\n", &str2, str2, str2, *str2);

	// test 1
	str2 = &str1;

	// &str1 is the address and str1 is the value
	printf("\n%d %d %s %d\n", &str1, str1, str1, *str1);
	// &str2 is the address and str2 is the address of str1
	printf("%d %d %s %d\n", &str2, str1, str1, *str2);

	// test 2
	str2 = str1;

	// &str1 is the address and str1 is the value
	printf("\n%d %d %s %d\n", &str1, str1, str1, *str1);
	// &str2 is the address and str2 is the address of str1
	printf("%d %d %s %d\n", &str2, str2, str2, *str2);

	return 0;
}
