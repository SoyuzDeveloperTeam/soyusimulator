//#include "MM_H.h"
//#include <cmath>
#include <math.h>


///////////////////////////////////////////////////////////
// ���������� ���������, ������������� ����������� ����� //
///////////////////////////////////////////////////////////

//�������� �������� ���������� ��������������� ���� �����

//��������� �������� ��� ���������������� �������������
double czon[13];
double ctes[78];
double stes[78];

char CharSelF; //to select forces

typedef double TVect3[3];
TVect3 TMatr33[3];
/*
������������ ���������� ��������������� ���� ����� 
� ��� �� ����������� ���������� ����� �������� �������� ��������� � HCSV
*/
void HCSV() 
{
	czon[1]     = 0.0 ;
	czon[2]     = -1.082636023e-03;  //  2   0 -1082.63602298 
	czon[3]     = +2.532435e-0;	     //  3   0     2.53243535 
	czon[4]		= +1.619331e-06;	 //  4   0     1.61933121 
	czon[5]		= +2.277161e-07;	 //  5   0     0.22771610 
	czon[6]		= -5.396485e-07;	 //  6   0    -0.53964849 
	czon[7]		= +3.513684e-07;	 //  7   0     0.35136844 
	czon[8]		= +2.025187e-07;	 //  8   0     0.20251872 
	czon[9]		= +1.193687e-07;	 //  9   0     0.11936871 
	czon[10]	= +2.480569e-07;	 // 10   0     0.24805686 
	czon[11]	= -2.405652e-07;	 // 11   0    -0.24056521 
	czon[12]	= +1.819117e-07;	 // 12   0     0.18191170 
	ctes[1]		= -2.41399954e-10;   //  2   1 
    stes[1]		= +1.54309997e-09;   //  2   1 
	ctes[2]		= +2.19279880e-06;   //  3   1 
    stes[2]		= +2.68011894e-07;   //  3   1 
	ctes[3]		= -5.08725304e-07;   //  4   1 
    stes[3]		= -4.49459935e-07;   //  4   1 
	ctes[4]	    = -5.37165102e-08;   //  5   1 
    stes[4]		= -8.06634638e-08;   //  5   1 
	ctes[5]		= -5.98779769e-08;   //  6   1 
    stes[5]		= +2.11646643e-08;   //  6   1 
	ctes[6]		= +2.05148728e-07;   //  7   1
	stes[6]		= +6.93698935e-08;   //	 8   1
	ctes[7]		= +1.60345872e-08;   //	 8	 1
	stes[7]		= +4.01997816e-08;   //  9	 1
	ctes[8]		= +9.24192722e-08;   //  9	 1
	stes[8]		= +1.42365696e-08;   //
	ctes[9]		= +5.17557870e-08;   //
	stes[9]		= -8.12891488e-08;   //
	ctes[10]	= +9.50842760e-09;   //
	stes[10]	= -1.64654645e-08;   //
	ctes[11]	= -3.06800094e-08;   //
	stes[11]	= -2.37844845e-08;   //
	ctes[12]	= +1.57453604e-06;   //
	stes[12]	= -9.03868073e-07;   //
	ctes[13]	= +3.09016045e-07;   //
	stes[13]	= -2.11402398e-07;   //
	ctes[14]	= +7.84122308e-08;   //
	stes[14]	= +1.48155457e-07;   //
	ctes[15]	= +1.05590535e-07;   //
	stes[15]	= -5.23267240e-08;   //
	ctes[16]	= +6.01209884e-09;   //
	stes[16]	= -4.65039481e-08;   //
	ctes[17]	= +3.28449048e-08;   //
	stes[17]	= +9.28231439e-09;   //
	ctes[18]	= +6.57654233e-09;   //
	stes[18]	= +5.38131641e-09;   //
	ctes[19]	= +1.56687424e-09;   //
	stes[19]	= -2.22867920e-09;   //
	ctes[20]	= -5.56284564e-09;   //
	stes[20]	= -3.05712916e-09;   //
	ctes[21]	= +9.54203028e-10;   //
	stes[21]	= -5.09736032e-09;   //
	ctes[22]	= +6.38039765e-10;   //
	stes[22]	= +1.41642228e-09;   //
	ctes[23]	= +1.00558857e-07;   //
	stes[23]	= +1.97201324e-07;   //
	ctes[24]	= +5.92157432e-08;   //
	stes[24]	= -1.20112918e-08;   //
	ctes[25]	= -1.49261539e-08;   //
	stes[25]	= -7.10087714e-09;   //
	ctes[26]	= +1.18226641e-09;   //
	stes[26]	= +1.84313369e-10;   //
	ctes[27]	= +3.52854052e-09;   //
	stes[27]	= -3.06115024e-09;   //
	ctes[28]	= -1.94635815e-10;   //
	stes[28]	= -8.72351950e-10;   //
	ctes[29]	= -1.21727527e-09;   //
	stes[29]	= -5.63392145e-10;   //
	ctes[30]	= -4.19599893e-11;   //
	stes[30]	= -8.98933286e-10;   //
	ctes[31]	= -1.40960772e-10;   //
	stes[31]	= -6.86352078e-10;   //
	ctes[32]	= +1.45191793e-10;   //
	stes[32]	= +9.15457482e-11;   //
	ctes[33]	= -3.98239574e-09;   //
	stes[33]	= +6.52560581e-09;   //
	ctes[34]	= -2.29791235e-09;   //
	stes[34]	= +3.87300507e-10;   //
	ctes[35]	= -3.26413891e-10;   //
	stes[35]	= -1.78449133e-09;   //
	ctes[36]	= -5.85119492e-10;   //
	stes[36]	= -2.63618222e-10;   //
	ctes[37]	= -3.18935802e-10;   //
	stes[37]	= +9.11773560e-11;   //
	ctes[38]	= -7.01856112e-12;   //
	stes[38]	= +1.71730872e-11;   //
	ctes[39]	= -4.96702541e-11;   //
	stes[39]	= -4.62248271e-11;   //
	ctes[40]	= -1.68525661e-11;   //
	stes[40]	= -2.67779792e-11;   //
	ctes[41]	= -2.12381469e-11;   //
	stes[41]	= +9.17051709e-13;   //
	ctes[42]	= +4.30476750e-10;   //
	stes[42]	= -1.64820395e-09;   //
	ctes[43]	= -2.15577115e-10;   //
	stes[43]	= -4.32918170e-10;   //
	ctes[44]	= +5.81848555e-13;   //
	stes[44]	= +6.39725265e-12;   //
	ctes[45]	= -4.61517343e-12;   //
	stes[45]	= +1.61252083e-11;   //
	ctes[46]	= -1.66973699e-12;   //
	stes[46]	= -5.55091854e-12;   //
	ctes[47]	= -3.07428287e-12;   //
	stes[47]	= -3.12226930e-12;   //
	ctes[48]	= +1.48944116e-12;   //
	stes[48]	= +1.98250517e-12;   //
	ctes[49]	= +8.27990199e-13;   //
	stes[49]	= +2.03324862e-13;   //
	ctes[50]	= +2.21369255e-12;   //
	stes[50]	= -5.52771222e-11;   //
	ctes[51]	= -2.49071768e-11;   //
	stes[51]	= +1.05348786e-11;   //
	ctes[52]	= -1.83936427e-12;   //
	stes[52]	= +8.62774317e-12;   //
	ctes[53]	= +8.29672520e-13;   //
	stes[53]	= +2.94031315e-12;   //
	ctes[54]	= -2.59723183e-13;   //
	stes[54]	= -5.51559139e-13;   //
	ctes[55]	= -5.75467116e-15;   //
	stes[55]	= +1.34623363e-13;   //
	ctes[56]	= +7.88309139e-15;   //
	stes[56]	= +9.33540765e-14;   //
	ctes[57]	= +2.55907810e-14;   //
	stes[57]	= +4.47598342e-13;   //
	ctes[58]	= +3.42976182e-13;   //
	stes[58]	= +3.81476567e-13;   //
	ctes[59]	= -2.25197343e-13;   //
	stes[59]	= -1.84679217e-13;   //
	ctes[60]	= +6.90915376e-15;   //
	stes[60]	= -2.65068061e-15;   //
	ctes[61]	= +1.95426202e-15;   //
	stes[61]	= -3.72803733e-14;   //
	ctes[62]	= -4.13155736e-15;   //
	stes[62]	= +7.89991291e-15;   //
	ctes[63]	= -1.58033229e-13;   //
	stes[63]	= +1.53533814e-13;   //
	ctes[64]	= +6.14439391e-14;   //
	stes[64]	= -9.85618446e-16;   //
	ctes[65]	= +4.63531420e-15;   //
	stes[65]	= -1.05284266e-14;   //
	ctes[66]	= -2.92494873e-16;   //
	stes[66]	= +1.17044830e-15;   //
	ctes[67]	= -5.70825414e-16;   //
	stes[67]	= +3.70152251e-16;   //
	ctes[68]	= -3.67676273e-15;   //
	stes[68]	= +7.44103881e-15;   //
	ctes[69]	= +2.33014817e-15;   //
	stes[69]	= -7.01194816e-16;   //
	ctes[70]	= -1.93432044e-16;   //
	stes[70]	= +2.58524487e-16;   //
	ctes[71]	= +1.01272849e-16;   //
	stes[71]	= +6.13664388e-17;   //
	ctes[72]	= +4.17080240e-16;   //
	stes[72]	= -9.89260955e-17;   //
	ctes[73]	= -4.94639649e-17;   //
	stes[73]	= -1.73664923e-17;   //
	ctes[74]	= -1.84017258e-18;   //
	stes[74]	= +9.24242436e-18;   //
	ctes[75]	= +9.35170551e-18;   //
	stes[75]	= -1.40785570e-17;   //
	ctes[76]	= +4.97869995e-19;   //
	stes[76]	= -2.79007835e-19;   //
	ctes[77]	= -2.10894892e-20;   //
	stes[77]	= -9.83829860e-20;   //
	}

////////////////////////////////
//  �������������� ���������  //
//      	��������          //
////////////////////////////////

// ������� ����������� ����� ���������� �������������� 
// ����������������� ��������� ��������.
// Everhart �. Implicit single-sequence methods for integrating orbits.

	double StepRada[8];
	double DimCoefR[8];
	double DimCoefV[8];
	TVect3 CoefEver[8];
	TVect3 EverAlfa[8];
	int MemAlpha;
	double AlphaMom[2][4];

void EerInit() {
	StepRada[1] = 0.000000000000000000;
	StepRada[2] = 0.056262560526922147;
	StepRada[3] = 0.180240691736892365;
	StepRada[4] = 0.352624717113169637;
	StepRada[5] = 0.547153626330555383;
	StepRada[6] = 0.734210177215410532;
	StepRada[7] = 0.885320946839095768;
	StepRada[8] = 0.977520613561287501;
	DimCoefR[1] = 0.500000000000000000;
	DimCoefR[2] = 0.166666666666666667;
	DimCoefR[3] = 0.083333333333333333;
	DimCoefR[4] = 0.050000000000000000;
	DimCoefR[5] = 0.033333333333333333;
	DimCoefR[6] = 0.023809523809523810;
	DimCoefR[7] = 0.017857142857142857;
	DimCoefR[8] = 0.013888888888888889;
	DimCoefV[1] = 1.000000000000000000;
	DimCoefV[2] = 0.500000000000000000;
	DimCoefV[3] = 0.333333333333333333;
	DimCoefV[4] = 0.250000000000000000;
	DimCoefV[5] = 0.200000000000000000;
	DimCoefV[6] = 0.166666666666666667;
	DimCoefV[7] = 0.142857142857142857;
	DimCoefV[8] = 0.125000000000000000;
	CharSelF = 'A'; //all forces var from MM_H.h
}

void ECNullo() { //initial moment nullo to start
	int i, j;
	for(i=1; i<9; ++i)
		for (j = 1; j < 9; ++j) {
			CoefEver[i][j] = 0.0;
			EverAlfa[i][j] = 0.0;
		}
	MemAlpha = 0;
	for (i = 1; i < 2; ++i)
		for (j = 1; j < 4; ++j)
			AlphaMom[i][j] = 0.0;
}

int KeplerEqation(double ElmE, double MeanAnom) {
	int iter, numitere;
	double EccAnom;
	double cura, difa;
	double ECECE;
	cura = MeanAnom + ElmE * sin(MeanAnom);
	EccAnom = cura;
	difa = 1.0;
	iter = 0;
	while ((difa>1.0e-15)and(iter<241))
	{
		EccAnom = cura - (cura - ElmE * sin(cura) - MeanAnom) / (1 - ElmE * cos(cura));
		difa = fabs(cura - EccAnom);
		iter = iter + 1;
	}
	numitere = iter + 1;
	ECECE = EccAnom;
	return  ECECE;
}
