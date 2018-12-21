int queueSys(int loc, int des)
{
  FILE *fp;
  if(loc == 1 && des == 2)
  {
    traffic[0] += 1 ;
    trafficCon[0] += 1;
    weightNodes[0] += 3;

  }
  else if(loc == 1 && des == 3)
  {
    traffic[1] += 1;
    trafficCon[1] += 1;
    weightNodes[1] += 3;
  }
  else if(loc == 1 && des == 4)
  {
    traffic[2] += 1;
    trafficCon[2] += 1;
    weightNodes[2] += 3;
  }
  else if(loc == 1 && des == 5)
  {
    traffic[3] += 1;
    trafficCon[3] += 1;
    weightNodes[3] += 6;
  }
  else if(loc == 2 && des == 3)
  {
    traffic[4] += 1;
    trafficCon[4] += 1;
    weightNodes[4] += 3;
  }
  else if(loc == 2 && des == 4)
  {
    traffic[5] += 1;
    trafficCon[5] += 1;
    weightNodes[5] += 3;
  }
  else if(loc == 2 && des == 5)
  {
    traffic[6] += 1;
    trafficCon[6] += 1;
    weightNodes[6] += 3;
  }
  else if(loc == 3 && des == 4)
  {
    traffic[7] += 1;
    trafficCon[7] += 1;
    weightNodes[7] += 3;
  }
  else if(loc == 3 && des == 5)
  {
    traffic[8] += 1;
    trafficCon[8] += 1;
    weightNodes[8] += 3;
  }
  else if(loc == 4 && des == 5)
  {
    traffic[9] += 1;
    trafficCon[9] += 1;
    weightNodes[9] += 3;
  }
  return traffic, trafficCon, weightNodes;
}
