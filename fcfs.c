#include<stdio.h>
#define max 20
int main() 
{
  int i,j,n,bt[max],wt[max],tat[max],at[max],temp[max];
  float awt = 0, atat = 0;
  printf("Enter total number of processes:");
  scanf("%d",&n);

  printf("\nEnter Process Burst Time\n");
  for(i=0;i<n;i++)
  {
   printf("P[%d]:",i+1);
   scanf("%d",&bt[i]);
  }

  printf("\nEnter Process Arrival Time\n");
  for(i=0;i<n;i++)
  {
   printf("P[%d]:",i+1);
   scanf("%d",&at[i]);
  }

  temp[0]=0;   
  printf("\nProcess\t Burst Time\t Waiting Time\t Turnaround Time\n");
 
  for(i=0;i<n;i++)
  {
    wt[i]=0;
    tat[i] = 0;
    temp[i+1] = temp[i]+bt[i];
    wt[i]=temp[i]-at[i];
    tat[i] = wt[i]+bt[i];
    awt = awt+wt[i];
    atat = atat+tat[i];
    printf("\nP[%d]\t\t%d\t\t%d\t\t%d\t\t%d\n\n",i+1,bt[i],at[i],wt[i],tat[i]);
  }
 
    awt/=i;
    atat/=i;
    printf("\nAverage Waiting Time:%f",awt);
    printf("\nAverage Turnaround Time:%f",atat);
    return 0;
}
