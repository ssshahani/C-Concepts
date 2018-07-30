#ifndef __InvestmentInstrument__
#define __InvestmentInstrument__

#include <iostream>

class BondInstrument {
public:
	BondInstrument() {}
	BondInstrument(double principle, double monthlyPayment);
	~BondInstrument();
	BondInstrument(const BondInstrument &b);
	BondInstrument &operator = (const BondInstrument &b);

	double getMonthlyPayment();
	double getPrinciple();

private:
	double m_monthlyPay;
	double m_principle;
};

/////////////////////////////////////////////////////////////////////////////////////////////
class MortgageInstrument{
public:
	MortgageInstrument() {}
	MortgageInstrument(double monthlyPayment, double propertyValue, double downpayment);
	MortgageInstrument(const MortgageInstrument &m);
	MortgageInstrument& operator =(const MortgageInstrument &m);
	~MortgageInstrument();

	double getMonthlyPayment();
	double getPrinciple();

private:
	double m_propertyValue;
	double m_downPayment;
	double 	m_monthlyPay;

};

#endif
