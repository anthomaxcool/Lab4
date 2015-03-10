template <typename T>
T TrouverMax(T tab[], const int &nbElement)
{
	T valeurRetour = tab[0];
	for (int i = 1; i < nbElement; i++)
	{
		if (valeurRetour < tab[i])
		{
			valeurRetour = tab[i];
		}
	}
	return valeurRetour;
}

template <typename T>
T CalculerSomme(T tab[], int nbElement)
{
	T valeurRetour = tab[0];
	for (int i = 1; i < nbElement; i++)
	{
		valeurRetour += tab[i];
	}
	return valeurRetour;
}

template <typename T>
unsigned int CompterElement(T valeur, T tab[], int nbElement)
{
	unsigned int valeurRetour = 0;
	for (int i = 0; i < nbElement; i++)
	{
		if (valeur == tab[i]) valeurRetour++;
	}
	return valeurRetour;
}