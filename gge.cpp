int dice10()
{int a;
srand(time(0));a=rand();
while (a > 10)
{a = a / 10;}
return (a);}
