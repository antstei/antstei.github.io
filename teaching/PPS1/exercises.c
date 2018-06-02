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
/* https://repl.it/repls/ExcitedPlaintiveArchitecture */
/*             Slide 2 – Exercises 1 a)               */
/******************************************************/

#include <stdio.h>
//#include <string.h>

int main(void)
{
  /*declare and initialize string*/
  char our_string[] = "Rhinozeros";

  /*compute length*/
  int length = 0;
  while (our_string[length] != '\0')
  {
    length += 1;
  }

  /*alternatively using string.h*/
  //int length = strlen(our_string);

  /*output length*/
  printf("'%s' is %d chars long.\n", our_string, length);
  
  return 0;
}


/******************************************************/
/*    https://repl.it/repls/ThirdNativeBooleanvalue   */
/*             Slide 3 – Exercises 1 b)               */
/******************************************************/

#include <stdio.h>

#include <stdio.h>
//#include <string.h>

int main(void)
{
  /*declare string*/
  char our_string[21];

  /*get string*/
  printf("You want to say:");
  scanf("%20s", our_string);

  /*compute length*/
  int length = 0;
  while (our_string[length] != '\0')
  {
    length += 1;
  }

  /*alternatively using string.h*/
  //int length = strlen(our_string);

  /*output length*/
  printf("'%s' is %d char(s) long.\n", our_string, length);

  return 0;
}


/******************************************************/
/*   https://repl.it/repls/KindheartedGlumNormalform  */
/*             Slide 4 – Exercises 2 a)               */
/******************************************************/

#include <stdio.h>

int main(void)
{  
  /*declare and initialize string and char*/
  char our_string[] = "Rhinozeros";
  char char_to_find = 'z';

  /*compute position of char_to_find*/
  int index = 0;
  while (our_string[index] != char_to_find)
  {
    index += 1;
  }

  /*output the position*/
  printf("'%c' is the character #%d in '%s'!\n", char_to_find, index + 1, our_string);

  return 0;
}


/******************************************************/
/*   https://repl.it/repls/TrivialSomberComputergame  */
/*             Slide 5 – Exercises 2 b)               */
/******************************************************/

#include <stdio.h>

int main(void)
{  
  /*declare and initialize string and char*/
  char our_string[] = "Rhinozeros";
  char char_to_find;

  /*get char_to_find*/
  printf("You wanna search for the character:");
  scanf("%c", &char_to_find);

  /*compute position of char_to_find*/
  int index = 0;
  while (our_string[index] != '\0' &&
         our_string[index] != char_to_find)
  {
    index += 1;
  }

  /*output the position*/
  printf("'%c' is the character #%d in '%s'!\n", char_to_find, index + 1, our_string);

  return 0;
}


/******************************************************/
/*   https://repl.it/repls/OptimalSaddlebrownMonotone */
/*             Slide 6 – Exercises 3 a)               */
/******************************************************/

#include <stdio.h>
//#include <string.h>

int main(void)
{
  /*declare and initialize two strings*/
  char string_1[] = "Rhinozeros";
  char string_2[11];

  /*copy all chars from string_1 into second_string*/
  int index = 0;
  while ((string_2[index] = string_1[index]) != '\0')
  {
    index += 1;
  }

  /*alternatively using string.h*/
  //strcpy(string_2, string_1);

  /*output string_2*/
  printf("string_2 = %s\n", string_2);
  return 0;
}


/******************************************************/
/*     https://repl.it/repls/SilverConstantResource   */
/*             Slide 7 – Exercises 3 b)               */
/******************************************************/

#include <stdio.h>
//#include <string.h>

int main(void)
{
  /*declare and initialize two strings*/
  char string_1[21];
  char string_2[21];

  /*get string*/
  printf("You want to say:");
  scanf("%20s", string_1);

  /*copy all chars from string_1 into second_string*/
  int index = 0;
  while ((string_2[index] = string_1[index]) != '\0')
  {
    index += 1;
  }

  /*alternatively using string.h*/
  //strcpy(string_2, string_1);

  /*output string_2*/
  printf("string_2 = %s\n", string_2);
  return 0;
}


/******************************************************/
/*     https://repl.it/repls/AgreeableCircularNasm    */
/*             Slide 8 – Exercises 4 a)               */
/******************************************************/

#include <stdio.h>
#include <string.h>

int main(void) {
  /*declare two strings*/
  char string_1[20] = "Das Rhinozeros";
  char string_2[11];

  /*find index of first char after the space
    and copy all succeeding chars from string_1 into string_2*/
  int index = 0;
  while (string_1[index] != ' ')
  {
    index += 1;
  }

  strcpy(string_2, string_1 + index  + 1);

  /*output trimmed string_1, that is string_2*/
  printf("I understood: %s", string_2);

  return 0;
}


/******************************************************/
/*     https://repl.it/repls/AuthorizedAntiqueCad     */
/*             Slide 9 – Exercises 4 b)               */
/******************************************************/

#include <stdio.h>
#include <string.h>

int main(void) {
  /*declare two strings*/
  char string_1[21];
  char string_2[21];

  /*get string_1*/
  printf("You want to say:");
  fgets(string_1, 21, stdin);

  /*find index of first char after the space
    and copy all succeeding chars from string_1 into string_2*/
  int index = 0;
  while (string_1[index] != ' ' && string_1[index] != '\0')
  {
    index += 1;
  }

  strcpy(string_2, string_1 + index  + 1);

  /*output trimmed string_1, that is string_2*/
  printf("I understood: %s", string_2);

  return 0;
}