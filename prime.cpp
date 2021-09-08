#include<iostream>
#include<vector>
#include<cmath>


using namespace std;

//cd Temp/C_C++/C++ Projects/Prime-Numbers/

void primes(int r)
{
  vector<int> primes;
  vector<int> nums;

  int n = 200;
  for(int i = 0; i <= r; i++)
  {
    nums.push_back(1);
  }
  nums[0] = 0;
  nums[1] = 0;

  for(int i = 2; i <= r; i++)
  {
    if(nums[i] == 1)
    {
      for(int j = 2; i*j <= r; j++)
      {
        nums[i*j] = 0;
      }
    }
  }

  for(int i = 0; i < nums.size(); i++)
  {
    nums[i] = nums[i] * i;
    if(nums[i] == 0)
    {
      ;
    }
    else
    {
      primes.push_back(nums[i]);
    }
  }

  for(int i = 0; i < primes.size(); i++)
  {
    cout<<primes[i]<<" ";
    if(i%25 == 0)
      cout<<'\n';
  }

}

int main(void)
{

  primes(1000);

//true means the num != 0
/*
  vector<int> primes;
  vector<int> nums;

  int n = 200;
  for(int i = 0; i <= n; i++)
  {
    nums.push_back(1);
  }
  nums[0] = 0;
  nums[1] = 0;


  //itn temp = 0;
  for(int i = 2; i <= n; i++)
  {
    if(nums[i] == 1)
    {
      for(int j = 2; i*j <= n; j++)
      {
        nums[i*j] = 0;
      }
    }
  }

  for(int i = 0; i < nums.size(); i++)
  {
    nums[i] = nums[i] * i;
    if(nums[i] == 0)
    {
      ;
    }
    else
    {
      primes.push_back(nums[i]);
    }
  }

  for(int i = 0; i < primes.size(); i++)
    cout<<primes[i]<<" ";

*/




}
