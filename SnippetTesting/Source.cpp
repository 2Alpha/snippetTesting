#include <iostream> 
#include <fstream>
#include <cstdio> 
#include <iomanip>
#include <string>

using namespace std;
const int YARDAGE_DEVISOR = 10; 

class stats
{
	private:
		int yardagePoints,
			tdPoints,
			interceptionPoints;
			
	public:
		stats();
		stats(int rushYards, int passYards, int rushTDs, int passTDs, int interceptions);
		void gameStats(int rushYards, int passYards, int rushTDs, int passTDs, int interceptions);
		int displayPoints();

		int totalPoints;


};


int main()
{
	int yardagePoints,
		tdPoints,
		interceptionPoints;


	stats aaronRogers;

	aaronRogers.gameStats(25, 345, 0, 3, 1);
	cout << "Total Points for Aaron Rogers = " << aaronRogers.displayPoints();


}

void stats::gameStats(int rushYards, int passYards, int rushTDs, int passTDs, int interceptions)
{
	int totalYards,
		totalTDs;

	totalYards = rushYards + passYards; 
	totalTDs = rushTDs + passTDs; 

	yardagePoints = (totalYards / 10);
	tdPoints = (totalTDs * 6);
	interceptionPoints = (interceptions * 4);

}

int stats::displayPoints()
{

	totalPoints = yardagePoints + tdPoints + interceptionPoints;

	return totalPoints; 

}