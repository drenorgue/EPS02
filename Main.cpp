#include <iostream>

using namespace std;

// il faut les points de maitrise (uniquement la réussite pour les deux premières course et aussi l'allure pour les 2 dernières) 
// Performance vma moyenne selon garçon / fille



int main() {
	int NombreEleve;
	cout << "Nombre d'eleve : ";
	cin >> NombreEleve;
	string nomDeEleve[100];
	int vma[100];
	int PointObserv[100];
	int NombreDePlotCourse1[100];
	int NombreDePlotCourse2[100];
	int note[100];
	bool Sexe[100];


	for (int i = 1; i <= NombreEleve; i++)
	{
		cout << "prenom de l'eleve : ";
		cin >> nomDeEleve[i];
		cout << endl;

		
		cout << "VMA de l'eleve : ";
		cin >> vma[i];
		cout << endl;
		

		
		cout << "Nombre de point d'observation : ";
		cin >> PointObserv[i];
		cout << endl;

		
		cout << "Nombre de plot course 1 : ";
		cin >> NombreDePlotCourse1[i];
		cout << endl;

		
		cout << "Nombre de plot de course 2 : ";
		cin >> NombreDePlotCourse2[i];
		cout << endl;

		

	}


	return 0;
}