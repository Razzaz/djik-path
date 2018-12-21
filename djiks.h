int dijsktra(int cost[][N],int source,int target)
{
	int nav[10]={0,0,0,0,0,0,0,0,0,0};
    int dist[N],prev[N],selected[N]={0},i,m,min,start,d,j;
    
    char path[N];
    for(i=1;i< N;i++)
    {
        dist[i] = IN;
        prev[i] = -1;
    }
    start = source;
    selected[start]=1;
    dist[start] = 0;
    while(selected[target] ==0)
    {
        min = IN;
        m = 0;
        for(i=1;i< N;i++)
        {
            d = dist[start] +cost[start][i];
            if(d< dist[i]&&selected[i]==0)
            {
                dist[i] = d;
                prev[i] = start;
            }
            if(min>dist[i] && selected[i]==0)
            {
                min = dist[i];
                m = i;
            }
        }
        start = m;
        selected[start] = 1;
    }
    start = target;
    j = 0, i = 0;
    int len = -1;
    while(start != -1)
    {
        path[j++] = start+65;
        nav[i++] = start;
        start = prev[start];
    }

    for(i = 0; i <10; i++)
    {
      if(nav[i] != 0)
      {
        len += 1;
      }
      else{
        break;
      }
    }
    gotoxy(37,20);
    for(i = len; i>=0; i--){
      printf("%d -> ", nav[i]);
    }
    printf("\n");
    return dist[target];
}
