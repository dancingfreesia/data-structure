#include <stdio.h>

int main(void)
{
  int num = 0;
  int len = 0;
  int sum = 0;
  double avg;

  printf("please input some numbers:(end with -1)\n");
  while (1) {
    scanf("%d", &num);
    if (num == -1) {
      break; 
    }
    sum += num;
    len += 1;
  }
  avg = sum * 1.0 / len;
  printf("average = %.1f\n", avg);
  return 0;
}
