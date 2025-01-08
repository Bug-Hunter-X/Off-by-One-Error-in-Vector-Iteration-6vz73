std::vector<int> myVector = {1, 2, 3, 4, 5};

for (int i = 0; i <= myVector.size(); ++i) { // <= instead of < 
  std::cout << myVector[i] << " ";
}

//Expected output: 1 2 3 4 5
//Actual output: 1 2 3 4 5 0 // or a crash