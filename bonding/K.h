#ifndef BONDING_H
#define BONDING_H

#include <string>
namespace K
{
	const unsigned int MAX_ELEMENTS = 10;
	const unsigned int MAX_ATOMS = 3000;
	const unsigned int MAX_BONDS = 26;		//max bonds per atom... should probaly set to MAX_ELEMENTS*MAX_ATOMS to advoid complications?
	//in future, use array of bond lengths... limiting factor is reading these in from a file... [shrug] easy nuff.
	//const double BOND_LENGTH[ ((MAX_ELEMENTS+1) * MAX_ELEMENTS)/2 ];
	// const double BOND_LENGTH = 1.9;		//in Angstroms... 
	const unsigned int PRECISION = 4;	//precision in output
	const double MOLE = 6.022e23;//		Si 				C 				H
	const double MASS[MAX_ELEMENTS] = {28.085/MOLE ,12.011/MOLE, 1.00794/MOLE};
H	1	0.32
He	2	0.93
Li	3	1.23
Be	4	0.9
B	5	0.82
C	6	0.77
N	7	0.75
O	8	0.73
F	9	0.72
Ne	10	0.71
Na	11	1.54
Mg	12	1.36
Al	13	1.18
Si	14	1.11
P	15	1.06
S	16	1.02
Cl	17	0.99
Ar	18	0.98
K	19	2.03
Ca	20	1.74
Sc	21	1.44
Ti	22	1.32
V	23	1.22
Cr	24	1.18
Mn	25	1.17
Fe	26	1.17
Co	27	1.16
Ni	28	1.15
Cu	29	1.17
Zn	30	1.25
Ga	31	1.26
Ge	32	1.22
As	33	1.2
Se	34	1.16
Br	35	1.14
Kr	36	1.12
Rb	37	2.16
Sr	38	1.91
Y	39	1.62
Zr	40	1.45
Nb	41	1.34
Mo	42	1.3
Tc	43	1.27
Ru	44	1.25
Rh	45	1.25
Pd	46	1.28
Ag	47	1.34
Cd	48	1.48
In	49	1.44
Sn	50	1.41
Sb	51	1.41
Te	52	1.36
I	53	1.33
Xe	54	1.31
Cs	55	2.35
Ba	56	1.98
La	57	1.69
Ce	58	1.65
Pr	59	1.65
Nd	60	1.64
Pm	61	1.63
Sm	62	1.62
Eu	63	1.85
Gd	64	1.61
Tb	65	1.59
Dy	66	1.59
Ho	67	1.58
Er	68	1.57
Tm	69	1.56
Yb	70	1.74
Lu	71	1.56
Hf	72	1.44
Ta	73	1.34
W	74	1.3
Re	75	1.28
Os	76	1.26
Ir	77	1.27
Pt	78	1.3
Au	79	1.34
Hg	80	1.49
Tl	81	1.48
Pb	82	1.47
Bi	83	1.46
Po	84	1.46
At	85	1.45
Th	90	1.65
U	92	1.42
}
const unsigned int MAX_ELEMENTS=118;	//# of elements (may not be used for elements on future )
const double covalentRad[MAX_ELEMENTS] = 
const std::string elementSym = 

#endif
