#include "include\InvestmentInstrument.h"
#include "include\IntRateEngine.h"

#include <iostream>

using namespace std;
int main(){

	BondInstrument bond(40000,250);
	MortgageInstrument mortgage(250,50000,5000);

	IntRateEngine<BondInstrument> engineA;
	IntRateEngine<MortgageInstrument> engineB;

	engineA.setInstrument(bond);
	engineB.setInstrument(mortgage);

	cout <<" bond annual int rate :" <<engineA.getAnnualIntRate()*100 <<"%"<<endl;
	cout <<" mortgage annual int rate :" <<engineB.getAnnualIntRate()*100 <<"%"<<endl;
	return 0;
}
