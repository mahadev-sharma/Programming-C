// Recursion in one of the most powerfull,dangerous and controverial tool
//recursion is process in which function calls itself
#include <stdio.h>
#include <stdlib.h>
int numberSeries(int k)
{
printf("k=%d\n",k);//print k
numberSeries(k+1);//do not do this
return 0;
}
int recursiveHalf(int j,double val)
{
    printf("step+%d val=%lf",j,val);
    recursiveHalf(j+1,val/2.0);
    return 0;
}

int main()
{
    //numberSeries(1);//just adding number in  recursive mannner
    recursiveHalf(1,1000.0);
    return 0;
}

