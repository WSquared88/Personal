/*
  Sifer Aseph
  https://github.com/ryra
  Insertion Sort

  Insertion sort can be O(1), O(n) or O(n^2) when properly implemented.
 */

#include <iostream>

vector<int> insertionSort(std::vector<int>& aPie) {
  for (int i = 0; i <= aPie.size()-1; ++i) {
      int j = i;
      while ((j > 0) && (aPie[j-1] > aPie[j])) {
        int key = aPie[j];
        aPie[j] = aPie[j-1];
        aPie[j-1] = key;
        j = j-1;
    }
  }

    return aPie;
}

int main() {
  std::vector<int> tastyPie;
  tastyPie.push_back(59);
  tastyPie.push_back(26);
  tastyPie.push_back(41);
  tastyPie.push_back(58);
  tastyPie.push_back(0);
  tastyPie.push_back(3);
  tastyPie.push_back(53);
  tastyPie.push_back(97);
  tastyPie.push_back(93);
  tastyPie.push_back(1);

  for (int i = 0; i < tastyPie.size(); ++i) {
    std::cout << tastyPie[i] << std::endl;
  }

  std::cout << "\nInsertion sorting in progress." << std::endl;
  insertionSort(tastyPie);
  std::cout << std::endl;

  for (int i = 0; i < tastyPie.size(); ++i) {
    std::cout << tastyPie[i] << std::endl;
  }

  return 0;
}
