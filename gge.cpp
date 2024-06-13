#include <stdlib.h>
#include <time.h>
class ggeDice{private:int t,r,s,i,m;public:ggeDice(int mx){m=mx;s=time(0);}int roll(){srand(s);s=rand();return((s%m)+1);}};