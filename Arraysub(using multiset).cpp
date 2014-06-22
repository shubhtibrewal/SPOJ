#include <stdio.h>
#include <set>
#include <algorithm>
using namespace std;
#define N 1000000
int vals[N+1];
typedef multiset<int,greater<int> > mi;

void solve(int n, int k)
{
  mi v(vals,vals+k);
  int i=k;
  for(;i<n;++i)
  {
    printf("%d ",*v.begin());
    v.erase(v.find(vals[i-k]));
    v.insert(vals[i]);
  }
  printf("%d\n",*v.begin());
}

int main()
{
  int t,i;
  int n,k;
  scanf("%d",&n);
  for(i=0;i<n;++i)
  scanf("%d",&vals[i]);
  scanf("%d",&k);
  solve(n,k);
  return 0;
}
