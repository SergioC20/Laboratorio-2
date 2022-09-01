

#include <iostream>
using std::cout;
using std::cin;
using std::endl;



struct Poligonos 
{
	double base;
	double altura;
}Triangulo, Cuadrilatero, Pentagono, Hexagono, Heptagono, Octagono, Eneagono, Decagono;



int main(int argc, char** argv)
{
	int escoger;
	cout << "LABORATORIO #2 - SERGIO CARDONA\n";
	cout << "------------------ POLIGONOS -------------- \n ";
	cout << "1.Triangulo   2.Cuadrilatero   3.Pentagono   4.Hexagono   5.Heptagono   6.Octagono   7.Eneagono   8.Decagono\n";
	cout << "Ingrese el numero del poligono que quiere escoger: ";
	cin >> escoger;
	switch (escoger)
	{
	case 1: 
		double a, b, areaT, perimetroT;
		cout << " --------- Triangulo ---------------- \n ";
		cout << "Ingrese valor a la altura: \n";
		cin>>(Triangulo.altura);
		cout << "Ingrese valor a la base: \n";
		cin >>(Triangulo.base);

		a = Triangulo.altura;
		b = Triangulo.base;
		areaT = b * a / 2;
		cout << "El area es: " << areaT;

		perimetroT = b * 3;
		cout << "\nEl perimetro es: " << perimetroT;
		break;

	case 2:
		double c, areaC, perimetroC;
		cout << " --------- Cuadrilatero ---------------- \n ";
		cout << "Ingrese valor a la altura: \n";
		cin >> (Cuadrilatero.altura);

		c = Cuadrilatero.altura;
		areaC = c * c;
		cout << "El area es: " << areaC;

		perimetroC = c * 4;
		cout << "\n El perimetro es: " << perimetroC;
		break;

	case 3:
		double d, e, areaP, perimetroP;
		cout << " --------- Pentagono ---------------- \n ";
		cout << "Ingrese valor a la altura: \n";
		cin >> (Pentagono.altura);

		cout << "Ingrese valor la base: \n";
		cin >> (Pentagono.base);
		d = Pentagono.altura;
		e = Pentagono.base;
		areaP = (5 * d * e) / 2;
		cout << "El area es: " << areaP;

		perimetroP = e * 5;
		cout << "\n El perimetro es: " << perimetroP;
		break;

	case 4:
		double f, g, areaH, perimetroH;
		cout << " --------- Hexagono ---------------- \n ";
		cout << "Ingrese valor a la altura: \n";
		cin >> (Hexagono.altura);

		cout << "Ingrese valor la base: \n";
		cin >> (Hexagono.base);

		f = Hexagono.altura;
		g = Hexagono.base;

		areaH = (6 * f * g) / 2;
		cout << "El area es: " << areaH;

		perimetroH = g * 6;
		cout << "\n El perimetro es: " << perimetroH;
		break;

	case 5:
		double h, i, areaHep, perimetroHep;
		cout << " --------- Heptagono ---------------- \n ";
		cout << "Ingrese valor a la altura: \n";
		cin >> (Heptagono.altura);

		cout << "Ingrese valor la base: \n";
		cin >> (Heptagono.base);

		h = Heptagono.altura;
		i = Heptagono.base;

		areaHep = (7 *h * i) / 2;
		cout << "El area es: " << areaHep;

		perimetroHep = i * 7;
		cout << "\n El perimetro es: " << perimetroHep;
		break;

	case 6:
		double j, k, areaO, perimetroO;
		cout << " --------- Octagono ---------------- \n ";
		cout << "Ingrese valor a la altura: \n";
		cin >> (Octagono.altura);

		cout << "Ingrese valor la base: \n";
		cin >> (Octagono.base);

		j = Octagono.altura;
		k = Octagono.base;

		areaO = (8 * j * k) / 2;
		cout << "El area es: " << areaO;

		perimetroO = k * 8;
		cout << "\n El perimetro es: " << perimetroO;
		break;

	case 7:
		double L, m, areaE, perimetroE;
		cout << " --------- Eneagono ---------------- \n ";
		cout << "Ingrese valor a la altura: \n";
		cin >> (Eneagono.altura);

		cout << "Ingrese valor la base: \n";
		cin >> (Eneagono.base);

		L = Eneagono.altura;
		m = Eneagono.base;

		areaE = (9 * L * m) / 2;
		cout << "El area es: " << areaE;

		perimetroE = m * 9;
		cout << "\n El perimetro es: " << perimetroE;
		break;

	case 8:
		double n, o, areaD, perimetroD;
		cout << " --------- Decagono ---------------- \n ";
		cout << "Ingrese valor a la altura: \n";
		cin >> (Decagono.altura);

		cout << "Ingrese valor la base: \n";
		cin >> (Decagono.base);

		n = Decagono.altura;
		o = Decagono.base;

		areaD = (10 * n * o) / 2;
		cout << "El area es: " << areaD;

		perimetroD = o * 10;
		cout << "\n El perimetro es: " << perimetroD;
		break;

	default:
		cout << "Ingrese un numero valido";
		break;
	}
}


