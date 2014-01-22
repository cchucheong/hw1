#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

void generator(std::string s, std::string written, int n,int start);

using namespace std;
int main(int argc, char *argv[])
{

   if (argc != 3)
     {
      cout<< "invalid input arguments" <<endl;
      return -1;
     }

   string source_word = argv[1];
   //cout << source_word <<endl;
   int source_num = atoi(argv[2]);
  // cout << source_num <<endl;
   char *testy = new char [source_num +1];
   for (int y = 0; y< source_num ; y++)
      {
       testy[y] = source_word.at(1);
      }
   string target = testy; 
   int begin = 0;
   generator(source_word,target, source_num,begin);
   delete [] testy;
return 0;
}

void generator(std::string source, std::string written, int n ,int begin)
  {     
       if (begin != n)
        { 
         for (unsigned int k =0; k < source.length(); k++)
          {
           written.at(begin) = source.at(k);
           generator( source, written,n, begin + 1);
          }
        }
       else if (begin ==n)
        {
          cout<< written<<endl;
        }
       

  }
