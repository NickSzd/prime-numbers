#include<iostream>
#include<vector>
#include<cmath>


using namespace std;



void primes(int r)
{
  vector<int> primes;
  vector<int> nums;

  //int n = 200;
  //Stes all the initial values of the vector equal to true(1)
  for(int i = 0; i <= r; i++)
  {
    nums.push_back(1);
  }
  //Prime numbers are all greater than 1
  nums[0] = 0;
  nums[1] = 0;

  /*
  for i = 2 and i <= range the user wants to know prime number
    check if nums[i] is 1
      if a 1 is present
        enter the 2nd for loop which will make all multiples of that prime number 0
        this will eliminate many of the non prime numbers
      else
        itterate

  */
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

  //Takes the prime numbers and puts them in the correct std::vector
  //May just chhange the function to return the vector
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

  //Displays a list of prime numbers
  for(int i = 0; i < primes.size(); i++)
  {
    cout<<primes[i]<<" ";
  }

}

int main(void)
{
  //Example Input
  primes(1000);
}
