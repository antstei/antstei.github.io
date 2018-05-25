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