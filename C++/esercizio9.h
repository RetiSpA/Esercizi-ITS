#ifndef complesso_h
#define complesso_h

#include <iostream>
#include <iomanip>

class complesso {
	public:
		complesso();
		complesso(const double& re, const double& im);
		complesso(const complesso& original);

		complesso& operator= (const complesso& original);
		complesso operator+ (const complesso& original);
		complesso operator- (const complesso& original);
		complesso operator* (const complesso& original);
		complesso operator/ (const complesso& original);
		complesso operator^ (const int& potenza);
		complesso& operator= (const double& original);
		complesso operator+ (const double& original);
		complesso operator- (const double& original);
		complesso operator* (const double& original);
		complesso operator/ (const double& original);

		double Re() const;
		double Im() const;
		double Mod() const;
		double Rho() const;
		double Theta() const;
		void Print() const;

	private:
		double re_p;
		double im_p;
};

#endif
