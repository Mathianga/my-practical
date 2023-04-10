#include <stdio.h>
/**
  * main - this is to grade
  * Return: always 0
  */
int main(void)
{
  int score;

    printf("Enter your score here\n");
    scanf("%d", &score);
  if (score >= 80 && score <= 100)
  {
    printf("excellent you got an A");
  }
  else if (score >= 65 && score <=79)
  {
    printf ("good work try your best you got B");
  }
  else if (score >= 50 && score <= 64)
  {
    printf("poor reults try to be active you got C");
  }
  else
  {
    printf("You entered an invailed score");
  }
  return (0);
}