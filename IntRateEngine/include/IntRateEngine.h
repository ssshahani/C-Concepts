#ifndef __INTRATENGINE__
#define __INTRATEENGINE__

#include <vector>

template <class T>
class IntRateEngine{
public:
	IntRateEngine();
	~IntRateEngine();
	IntRateEngine(const IntRateEngine<T> &ire);
	IntRateEngine<T> &operator =(const IntRateEngine<T> &ire);

	void setInstrument(T &ire);
	double getAnnualIntRate();
private:
	T m_instrument;
};

template <class T>
IntRateEngine<T>::IntRateEngine(){

}

template <class T>
IntRateEngine<T>::~IntRateEngine(){

}

template <class T>
IntRateEngine<T>::IntRateEngine(const IntRateEngine<T> &ire){
	m_instrument = ire.m_instrument;
}

template <class T>
IntRateEngine<T> & IntRateEngine<T>:: operator = (const IntRateEngine<T> &ire){
	if(this != &ire){
		m_instrument = ire.m_instrument;
	}
	return *this;
}

template <class T>
void IntRateEngine<T>::setInstrument(T& ire){
	m_instrument = ire;
}

template <class T>
double IntRateEngine<T>::getAnnualIntRate(){
	double payment = m_instrument.getMonthlyPayment();
	double principle = m_instrument.getPrinciple();
	return (12 * payment)/principle;
}


#endif
