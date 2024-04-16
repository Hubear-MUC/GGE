int dice(int vl)
{int a;
srand(time(0));a=rand();
while (a > vl)
{a = a / 10;}
return (a);}

int dice10()
{
  return dice(10);
}

