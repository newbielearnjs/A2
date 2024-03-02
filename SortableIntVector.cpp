#include "SortableIntVector.h"

using namespace std;

SortableIntVector::SortableIntVector(const int aArrayOfIntegers[], size_t aNumberOfElements) : IntVector(aArrayOfIntegers,aNumberOfElements){
}

void SortableIntVector::sort(Comparable aOrderFunction) {
	for (int i = 0; i < (*this).size(); i++) {
		for (int j = 0; j < (*this).size() - 1; j++) {
			if (aOrderFunction((*this).get(j), (*this).get(j+1))) {
				(*this).swap(j,j+1);
			}
		}
	}
}