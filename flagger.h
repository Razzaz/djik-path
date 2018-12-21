int flagger(int flag)
{
  if((traffic[0] != 0) && (flag - trafficCon[0]*2 == 0))
  {
    weightNodes[0] = 16;
  }
  if((traffic[1] != 0) && (flag - trafficCon[1]*2 == 0))
  {
    weightNodes[1] = 2;
  }
  if((traffic[2] != 0) && (flag - trafficCon[2]*2 == 0))
  {
    weightNodes[2] = 1;
  }
  if((traffic[3] != 0) && (flag - trafficCon[3]*2 == 0))
  {
    weightNodes[3] = 4;
  }
  if((traffic[4] != 0) && (flag - trafficCon[4]*2 == 0))
  {
    weightNodes[4] = 11;
  }
  if((traffic[5] != 0) && (flag - trafficCon[5]*2 == 0))
  {
    weightNodes[5] = 13;
  }
  if((traffic[6] != 0) && (flag - trafficCon[6]*2 == 0))
  {
    weightNodes[6] = 2;
  }
  if((traffic[7] != 0) && (flag - trafficCon[7]*2 == 0))
  {
    weightNodes[7] = 4;
  }
  if((traffic[8] != 0) && (flag - trafficCon[8]*2 == 0))
  {
    weightNodes[8] = 5;
  }
  if((traffic[9] != 0) && (flag - trafficCon[9]*2 == 0))
  {
    weightNodes[9] = 6;
  }
  return weightNodes;
}
