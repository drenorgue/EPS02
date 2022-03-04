#include <iostream>

using namespace std;

int main() {
	int NombreEleve;
	cout << "Nombre d'eleve : ";
	cin >> NombreEleve;

	

	for (int i = 1; i <= NombreEleve; i++)
	{
		string nomDeEleve[100];
		cout << "prenom de l'eleve : ";
		cin >> nomDeEleve[i];
		cout << endl;

		int vma[100];
		cout << "VMA de l'eleve : ";
		cin >> vma[i];
		cout << endl;


		int PointObserv [100];
		cout << "Nombre de point d'observation : ";
		cin >> PointObserv[i];
		cout << endl;

		int NombreDePlotCourse1 [100];
		cout << "Nombre de plot course 1 : ";
		cin >> NombreDePlotCourse1[i];
		cout << endl;

		int NombreDePlotCourse2[100];
		cout << "Nombre de plot de course 2 : ";
		cin >> NombreDePlotCourse2[i];
		cout << endl;

		int note[100];

	}


	return 0;
}