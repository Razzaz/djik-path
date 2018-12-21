#define N 6
#define IN 99
int traffic[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int trafficCon[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int weightNodes[10] = {16, 2, 1, 4, 11, 13, 2, 4, 5, 6};
int flag = 0;
int source, target,x,y;

int flagger(int flag);
int dijkstra(int cost[][N], int source, int target);
int queueSys(int loc, int des);
void works(), map(), input();

int a,b,k,kk = 0;
int cost[N][N],i,j,w,ch,co;
