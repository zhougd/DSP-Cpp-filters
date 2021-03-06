/**
* Second order band-stop filter
* Dimitris Tassopoulos 2016
*
* fc , corner frequency
* Q , quality factor controlling width of peak or notch = 1/BW
*/
#pragma once
#include "filter_common.h"

class SO_BSF {
public:
	SO_BSF();
	virtual ~SO_BSF();
	tp_coeffs calculate_coeffs(float Q, int fc, int fs = 44100);
	F_SIZE filter(F_SIZE sample);

private:
	F_SIZE m_xnz1, m_xnz2, m_ynz1, m_ynz2;
	tp_coeffs m_coeffs;
};
