#include <iostream>

using namespace std;

int main()
{
  int np(6);
  double Sw[np], kr_w[np], kr_o[np], dSw, Swr(0.2), Sor(0);
  
  dSw = 1.0/(np-1);

  for(int i(0);i<np;i++)
  {
    Sw[i] = i*dSw;
    
    kr_w[i] = ((Sw[i]-Swr)/(1-Swr-Sor))*((Sw[i]-Swr)/(1-Swr-Sor));
    kr_o[i] = ((1-Sw[i]-Swr)/(1-Swr-Sor))*((1-Sw[i]-Swr)/(1-Swr-Sor));
  }
  
  for(int i(0);i<np;i++)
  cout<<Sw[i]<<endl;
  
  for(int i(0);i<np;i++)
  cout<<kr_o[i]<<endl;
  
  for(int i(0);i<np;i++)
  cout<<kr_w[i]<<endl;
  

  
  return 0;
}

