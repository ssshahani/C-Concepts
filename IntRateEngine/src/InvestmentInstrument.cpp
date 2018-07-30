#include "..\include\InvestmentInstrument.h"

BondInstrument::BondInstrument(double monthlyPayment, double principle){
	m_monthlyPay = monthlyPayment;
	m_principle = principle;
}

BondInstrument::~BondInstrument(){

}

BondInstrument::BondInstrument(const BondInstrument& b){
	m_monthlyPay = b.m_monthlyPay;
	m_principle = b.m_principle;
}

BondInstrument &BondInstrument::operator =(const BondInstrument& b){
	if(this != &b){
		m_monthlyPay = b.m_monthlyPay;
		m_principle = b.m_principle;
	}
	return *this;
}

double BondInstrument::getMonthlyPayment(){
	return m_monthlyPay;
}

double BondInstrument::getPrinciple(){
	return m_principle;
}

//////////////////////////////////////////////////////////////////////////////////////



MortgageInstrument::MortgageInstrument(double monthlyPay, double propertyValue, double downPayment){
	m_monthlyPay = monthlyPay;
	m_propertyValue = propertyValue;
	m_downPayment = downPayment;
}

MortgageInstrument::MortgageInstrument(const MortgageInstrument &m){
	m_monthlyPay = m.m_monthlyPay;
	m_propertyValue = m.m_propertyValue;
	m_downPayment = m.m_downPayment;
}

MortgageInstrument &MortgageInstrument::operator=(const MortgageInstrument& m){
	if(this != &m){
		m_monthlyPay = m.m_monthlyPay;
		m_propertyValue = m.m_propertyValue;
		m_downPayment = m.m_downPayment;
	}
	return *this;
}

MortgageInstrument::~MortgageInstrument(){

}
double MortgageInstrument::getMonthlyPayment(){
	return m_monthlyPay;
}

double MortgageInstrument::getPrinciple(){
	return (m_propertyValue - m_downPayment);
}
