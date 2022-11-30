#include <string>
#include <iostream>

using namespace std;

class Candidate
{
protected:
    string name;
    int votesNum;

public:
	Candidate()
	{
		name = "";
		votesNum = 0;
	}
	Candidate(string name, int votesNum)
	{
		this->name = name;
		this->votesNum = votesNum;
	}
	void enterDat(int z, int* n)
	{
		cout << "Enter candidate`s name" << endl;
		cin >> name;
		cout << "Enter number of votes" << endl;
		cin >> votesNum;
		*n += votesNum;
	}
	void outData(int n)
	{
		cout << "Name - "<< name << ", votes count - "<<votesNum <<", persentage(%) - "<< votesNum*pow(n,-1)*100 << endl;
		cout.precision(2);
	}
	int getVotes()
	{
		return votesNum;
	}
	void winnerOut()
	{
		cout <<"The winner of the election is " << name <<" with "<<votesNum<<" votes" << endl;
	}
};
class Elections
{
public:
	void sorted(Candidate* candidates)
	{
		bubblesort(candidates);
		outWinner(candidates);
	}
	void bubblesort(Candidate candidates[])
	{
		for (int i = 0; i < 6; i++)
			for (int j = 1; j < 6-i; j++)
				if (candidates[j].getVotes() < candidates[j + 1].getVotes())
					swap(&candidates[j], &candidates[j + 1]);
	}
	void swap(Candidate* x, Candidate* y)
	{
		Candidate temp = *x;
		*x = *y;
		*y = temp;
	}
	void outWinner(Candidate candidates[])
	{
		if (candidates[1].getVotes() == candidates[2].getVotes())
			cout << "Reelection (2 or more candidates have the same votes number)" << endl;
		else candidates[1].winnerOut();
	}
};






		
