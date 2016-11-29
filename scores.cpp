
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

// Function Prototypes
void CalculateWinner();
void getJudgeData(std::string,std::string fname,double,double,double,double);
void calcScore(double, double, double, double);
int findHighest(double, double, double, double);
int findLowest(double, double, double, double);
std::string first_name[10];
std::string last_name[10];
  double Score1[10];
  double Score2[10];
  double Score3[10];
  double Score4[10];
  double Average[10];
  int winnder_id;
int counter=0;
  int main()
{
  std::string firstname;
  std::string lastname;
  double score1;
  double score2;
  double score3;
  double score4;

	std::ifstream ifile("starsDance.txt", std::ios::in);
    if (!ifile.is_open()) {
        std::cerr << "There was a problem opening the input file!\n";
        exit(1);//exit or do additional error checking
    }
	while (ifile >> firstname >> lastname >> score1 >> score2 >> score3 >> score4)
	{	getJudgeData(firstname,lastname,score1,score2,score3,score4);
    calcScore(score1,score2,score3,score4);
    counter++;


  }
CalculateWinner();
cout<<" \n \nWinner with highest average is " << first_name[winnder_id] << " " << last_name[winnder_id] << " with highest average  score:: " << Average[winnder_id] << endl;
}

void getJudgeData(std::string fname,std::string lname,double s1, double s2,double s3,double s4)
{       // score validation first
        if ( (s1 < 0 || s1 > 10) || (s2 < 0 || s2 > 10) || (s3 < 0 || s3 > 10) || (s4 < 0 || s4 > 10) )
      {
        cout << "\nError! Invalid score.\n"
           << "Judge's score must be greater than 0 and less than 10.\n";
      }

first_name[counter]=fname;
last_name[counter]= lname;
Score1[counter]=s1;
Score2[counter]=s2;
Score3[counter]=s3;
Score4[counter]=s4;
}

void calcScore(double s1, double s2, double s3, double s4)
{  double scores[4];
  scores[0]=s1;
  scores[1]=s2;
  scores[2]=s3;
  scores[3]=s4;
  double low = s1;
  int av_counter=0;
  double av_scores[3];
  for (int j=1;j<4;j++)
  { if (low > scores[j])
   low = scores[j];
   else
   {
    av_scores[av_counter]=scores[j];
    av_counter++;
   }

   }
double average = (av_scores[0] + av_scores[1]+ av_scores[2])/3 ; 
Average[counter]= average;
cout << "Average of " << first_name[counter] << " " <<last_name[counter] <<" is "<< Average[counter] << endl;
}
void CalculateWinner()
{ double win_av = Average[0];
  winnder_id=0;
  for (int i=1; i < 10; i++)
  {
    if (win_av < Average[i])
    {
      winnder_id = i;
      win_av = Average[i];

    }
  }
}