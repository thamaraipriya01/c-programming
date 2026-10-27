#include <stdio.h>
struct student {
    int id;
    char name[20];
    float marks;
 };
 int main() {
     struct student s[3]={
     {1, "Thamarai",90.0},
     {2, "Girish",99.97},
     {3, "harini",95.5},
  };
  for (int i = 0; i<3;i++) {
       printf("%d %s %.1f\n", s[i].id,
		 s[i].name, s[i].marks);
  }
  return 0;
}

