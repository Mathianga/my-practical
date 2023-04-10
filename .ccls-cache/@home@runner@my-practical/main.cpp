#include <stdio.h>
/**
  * main - this is to grade
  * Return: always 0
  */
int main(void)
{
  int score;

    printf("Enter your score here");
    scanf("%d", &score);
  if (score >= 80 && <= 100)
  else if (score >= 65 && score <=79)
  {
    printf ("B");
  }
  else if (score >= 50 && score <= 64)
  {
    printf("c");
  }
  else
  {
    printf("You entered an invailed score");
  }
  return (0);
}