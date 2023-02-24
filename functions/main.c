#include <stdio.h>
#include <stdlib.h>

//int add(int x, int y);

//int main()
//{
  //  int fn=5;
  //int sn=7;
  //  int result = add(fn,sn);
  //  printf("%d",result);
  //  return 0;
//}

//int add(int x, int y)
//{
  //  int sum = x+y;
  //  return sum;
//}

//second method

//int add(int* p1, int* p2);

//int main()
//{
//    int fn=5;
//    int sn=7;
//    int result = add(&fn,&sn);
//    printf("%d",result);
//    return 0;
//}

//int add(int* p1, int* p2)
//{
//    int sum = (*p1)+(*p2);
//    return sum;
//}
void math(int* p1, int* p2, int* psum,int* psub,int* pmult);

int main()
{
    int fn = 5;
    int sn = 7;
    int sum,sub,multi;

    math(&fn,&sn,&sum,&sub,&multi);


    printf("%d",sum,sub,multi);
    return 0;
}


void math(int* p1, int* p2, int* psum, int* psub, int* pmult)
{
    *psum = (*p1) + (*p2);
    *psub = (*p1) - (*p2);
    *pmult = (*p1) * (*p2);
}








