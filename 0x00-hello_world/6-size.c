#include <stdio.h>
/**
 *main - Entry point
 *
 * *Return: Always 0 (Success)
 */
int main(void)

{

		char c;

			int i;

				long int li;

					long long int lli;

						float f;



							printf("Size of a char: %i byte(s)\n", (int)sizeof(c));

								printf("Size of an int: %i byte(s)\n", (int)sizeof(i));

									printf("Size of a long int: %i byte(s)\n", (int)sizeof(li));

										printf("Size of a long long int: %i byte(s)\n", (int)sizeof(lli));

											printf("Size of a float: %i byte(s)\n", (int)sizeof(f));

												char acharacter;

													int ainteger;

														long along;

															long long alonglong;

																float afloat;



																	printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));

																		printf("Size of an int: %lu byte(s)\n", sizeof(ainteger));

																			printf("Size of a long int: %lu byte(s)\n", sizeof(along));

																				printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglong));

																					printf("Size of a float: %lu byte(s)\n", sizeof(afloat));



																						return (0);

}
