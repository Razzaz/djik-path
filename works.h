#include "djiks.h"
#include "flagger.h"
#include "queue.h"

void works()
{
  flagger(flag);
  for(i=1;i< N;i++)
  for(j=1;j< N;j++)
  cost[i][j] = IN;
  for(x=1;x< N;x++)
  {
      for(y=x+1, k = kk; k <10, y< N; k++, y++)
      {

          if (k == 8)
          {
            kk = 9;
          }
          else if(k == 6)
          {
            kk = 7;
          }
          else if(k == 3)
          {
            kk = 4;
          }
          cost [x][y] = cost[y][x] = weightNodes[k];
      }
  }
  input();
  queueSys(source, target);
  dijsktra(cost, source, target);
  flag = flag + 1;
}
void input(){
  
  map();
  gotoxy(37,17);
  printf("Location    : ");
  scanf("%d", &source);
  gotoxy(37,18);
  printf("Destination : ");
  scanf("%d", &target);
  if(source > 5 || target > 5){
    //printf("Location Not Found!");
    //getch();
    system("cls");
    kerangka();
    header();
    input();
  }
}
