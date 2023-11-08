// William Diamond
// 1224931045

#include<iostream>
#include<string>
#include<vector>
#include "pet.hpp"
#include "dog.hpp"
#include "cat.hpp"
using namespace std;

int main (int argc, const char * argv[])
{
  dog* p1 = new dog("Bob", 65);
  dog* p2 = new dog("Stan", 37);
  cat* p3 = new cat("Tom", 12);
  vector<pet*> pvec;
  pvec.push_back(p1);
  pvec.push_back(p2);
  pvec.push_back(p3);
  float total_fee = 0.0;
  for (int i = 0; i < pvec.size (); i++)
    {
      cout << pvec[i]->GetName () << ' ' << pvec[i]->CalculateFee () << endl;
      total_fee = total_fee + pvec[i]->CalculateFee ();
    }
  cout << "total licensing fee = " << total_fee << endl;
  
  return 0;
}
