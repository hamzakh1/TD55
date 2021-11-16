#pragma once
#include <gsl/pointers>
template<typename T> class ListeLiee;
template<typename T> class Iterateur;
template<typename T>
class Noeud
{
public:
	//TODO: Constructeur(s).
	Noeud(const T& data) : data_(data) {};
private:
	//TODO: Attributs d'un noeud
	Noeud<T>* next_ = past_end; // ptr par defaut
	Noeud<T>* previous_ = past_end; // ptr par defaut
	T donnee_;
	inline static constexpr Noeud* past_end = nullptr;
	friend class ListeLiee<T>;
	friend class Iterateur<T>;
};
