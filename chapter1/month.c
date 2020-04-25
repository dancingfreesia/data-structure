#include <stdio.h>

// 写法1
//int main(void)
//{
//  int month;
//  printf("请输入一个月份:");
//  scanf("%d", &month);
//  switch (month) {
//  case 1:  printf("Jan\n"); break;
//  case 2:  printf("Feb\n"); break;
//  case 3:  printf("March\n"); break;
//  case 4:  printf("April\n"); break;
//  case 5:  printf("May\n"); break;
//  case 6:  printf("June\n"); break;
//  case 7:  printf("July\n"); break;
//  case 8:  printf("August\n"); break;
//  case 9:  printf("Sep\n"); break;
//  case 10: printf("Oct\n"); break;
//  case 11: printf("Nonvember\n"); break;
//  case 12: printf("Dec\n"); break;
//  default:
//    printf("嗯...我好像看不懂!\n");
//    break;
//  }
//  return 0;
//}

int main(void)
{
  char *month[] = {"Jan", "Feb", "March", "April", "May", "June", "July",
                 "August", "Sep", "Oct", "Nonvember", "Dec"};
  int a; 
  printf("请输入一个月份:");
  scanf("%d", &a);
  printf("%s\n", month[a-1]);
  return 0;
}
