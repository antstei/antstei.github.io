/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                                       */
/* Copyright 2018 Tobias Antensteiner                                                    */
/*                                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining a copy of       */
/* this software and associated documentation files (the "Software"), to deal in the     */
/* Software without restriction, including without limitation the rights to use,         */
/* copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the       */
/* Software, and to permit persons to whom the Software is furnished to do so, subject   */
/* to the following conditions:                                                          */
/*                                                                                       */
/* The above copyright notice and this permission notice shall be included in all        */
/* copies or substantial portions of the Software.                                       */
/*                                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,   */
/* INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A         */
/* PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT    */
/* HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF  */
/* CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE  */
/* OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                                         */
/*                                                                                       */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/******************************************************/
/*  https://repl.it/repls/VoluminousMindlessDemoware  */
/*                       Slide 2                      */
/******************************************************/

#include <stdio.h>

int main(void)
{
  char our_string[] = {'H', 'a', 'l', 'l', 'i', ' ', 'H', 'a', 'l', 'l', 'o', '\0'};
  //double pi = 3.1415;

  puts(our_string);
  return 0;
}


/******************************************************/
/*   https://repl.it/repls/JovialTeemingFlashmemory   */
/*                       Slide 3                      */
/******************************************************/

#include <stdio.h>

int main(void)
{
  char our_string[] = "Halli Hallo";
  //char our_string[] = "Halli \0 Hallo";
  //double pi = 3.1415;

  puts(our_string);
  return 0;
}


/******************************************************/
/*    https://repl.it/repls/DarkredRapidApplication   */
/*              Slide 4 – Assignment 1                */
/******************************************************/

#include <stdio.h>

int main(void)
{
  /*declare and initialize string*/
  char our_string[] = "Halli Hallo";

  /*compute length*/
  int index = 0;
  while (our_string[index] != '\0')
  {
    index += 1;
  }

  /*output length*/
  printf("'%s' is %d char(s) long!\n", our_string, index);
  
  return 0;
}


/******************************************************/
/*   https://repl.it/repls/BonyCourageousCoolingfan   */
/*                       Slide 5                      */
/******************************************************/

#include <stdio.h>

int main(void)
{
  /*declare string*/
  char our_string[20];

  /*get string*/
  printf("You want to say: ");
  fgets(our_string, 20, stdin);

  /*output string*/
  printf("I understood: ");
  fputs(our_string, stdout); //same as printf("%s", our_string);
  return 0;
}


/******************************************************/
/*       https://repl.it/repls/GrowlingTealGames      */
/*              Slide 6 – Assignment 2                */
/******************************************************/

#include <stdio.h>

int main(void)
{  
  /*declare and initialize string and char*/
  char our_string[] = "Halli Hallo";
  char char_to_find = 'i';

  /*compute position of char_to_find*/
  int index = 0;
  while (our_string[index] != '\0' &&
         our_string[index] != char_to_find)
  {
    index += 1;
  }

  /*output the position*/
  printf("'%c' is the %d character in '%s'!\n", char_to_find, index + 1, our_string);

  return 0;
}


/******************************************************/
/*       https://repl.it/repls/ConcreteLazyDisc       */
/*              Slide 7 – Assignment 2½               */
/******************************************************/

#include <stdio.h>

int main(void)
{  
  /*declare and initialize string and char*/
  char our_string[] = "Halli Hallo";
  char char_to_find = 'x';

  /*compute length*/
  int length = 0;
  while (our_string[length] != '\0')
  {
    length += 1;
  }

  /*compute position of char_to_find*/
  int index = 0;
  while (our_string[index] != '\0' &&
         our_string[index] != char_to_find)
  {
    index += 1;
  }

  /*output the position if char_to_find was found*/
  if (length != index)
  {
    printf("'%c' is the %d character in '%s'!\n", char_to_find, index + 1, our_string);
  }

  return 0;
}


/******************************************************/
/*      https://repl.it/repls/ForkedLiquidLight       */
/*                       Slide 9                      */
/******************************************************/

#include <stdio.h>

int main(void)
{
  /*declare and initialize two strings*/
  char string_1[] = "Halli Hallo";
  char string_2[20];

  string_2 = string_1; //unfortunately this does not work ... :(

  /*ouput string_2*/
  fputs(string_2, stdout);

  return 0;
}


/******************************************************/
/*     https://repl.it/repls/LeadingHotpinkBases      */
/*              Slide 10 – Assignment 3               */
/******************************************************/

#include <stdio.h>

int main(void)
{
  /*declare and initialize two strings*/
  char string_1[] = "Halli Hallo";
  char string_2[20];

  /*copy all chars from string_1 into second_string*/
  int index = 0;
  while ((string_2[index] = string_1[index]) != '\0')
  {
    index += 1;
  }

  /*output string_2*/
  printf("string_2 = %s\n", string_2);
  return 0;
}


/******************************************************/
/*       https://repl.it/repls/FondPrizeLoops         */
/*              Slide 11 – Assignment 4               */
/******************************************************/

#include <stdio.h>

int main(void) {
  /*declare and initialize two strings*/
  char string_1[] = " Hallo";
  char string_2[20] = "Halli";

  /*compute length of string_2*/
  int length_2 = 0;
  while (string_2[length_2] != '\0')
  {
    length_2 += 1;
  }

  /*copy all chars from string_1 into string_2*/
  int index = 0;
  while ((string_2[index + length_2] = string_1[index]) != '\0')
  {
    index += 1;
  }

  /*output concatenated string_2*/
  printf("string_2 = %s\n", string_2);

  return 0;
}


/******************************************************/
/*  https://repl.it/repls/PalegreenBlandHypermedia    */
/*              Slide 13 – Assignment 5               */
/******************************************************/

#include <stdio.h>
#include <string.h>

int main(void) {
  /*declare two strings*/
  char string_1[20] = {'\0'};
  char string_2[20] = {'\0'};

  int offset = 2;

  /*get string_1*/
  printf("You want to say:");
  fgets(string_1, 20, stdin);

  /*copy all chars with an index greater or equal than offset from
  string_1 into string_2*/
  strcpy(string_2, string_1 + offset);

  /*output string*/
  printf("\nI understood: %s", string_2);

  return 0;
}


/******************************************************/
/*   https://repl.it/repls/DownrightRealisticCells    */
/*              Slide 14 – Assignment 5½              */
/******************************************************/

#include <stdio.h>
#include <string.h>

int main(void) {
  /*declare two strings*/
  char string_1[20];
  char string_2[20];

  /*get string_1*/
  printf("You want to say:");
  fgets(string_1, 20, stdin);

  /*trim all leading spaces of string_1,
  i.e. copy all chars except the leading spaces from string_1 into string_2*/
  int index = 0;
  while (string_1[index] == ' ')
  {
    index += 1;
  }

  strcpy(string_2, string_1 + index);

  /*output trimmed string_1, that is string_2*/
  printf("I understood: %s", string_2);

  return 0;
}


/******************************************************/
/*    https://repl.it/repls/AgonizingPuzzledGenre     */
/*                       Slide 15                     */
/******************************************************/

#include <stdio.h>

int main(void)
{
  /*declare string*/
  char our_string[20];
  //char our_string[2];

  /*get string*/
  printf("You want to say:");
  scanf("%s", our_string);
  //scanf("%2s", our_string);

  /*output string*/
  printf("I understood: %s\n", our_string);
  return 0;
}


/******************************************************/
/*      https://repl.it/repls/HarmfulGiantMonad       */
/*              Slide 16 – Assignment 6               */
/******************************************************/

#include <stdio.h>
#include <string.h>

int main(void) {
  /*declare string*/
  char string_1[20];

  /*get string_1*/
  printf("You want to say:");
  scanf("%19s", string_1);

  /*output string*/
  printf("\nI understood: %s", string_1);

  /*output reversed version of string_1*/
  printf("\nI reversed: ");
  for (int index = 0; index < strlen(string_1); index++)
  {
    printf("%c", string_1[strlen(string_1) - index - 1]);
  }

  return 0;
}


/******************************************************/
/*     https://repl.it/repls/BustlingHappyPattern     */
/*              Slide 17 – Assignment 6½              */
/******************************************************/

#include <stdio.h>
#include <string.h>

int main(void) {
  /*declare two strings*/
  char string_1[20];
  char string_2[20];

  /*get string_1*/
  printf("You want to say:");
  scanf("%19s", string_1);

  /*create a reversed version of string_1, i.e. copy all chars from string_1 in reversed order into string_2*/
  for (int index = 0; index <= strlen(string_1); index++)
  {
    string_2[index] = string_1[strlen(string_1) - index - 1];
  }

  /*output reversed version of string_1, that is string_2*/
  printf("\nI understood: %s\n", string_2);

  return 0;
}