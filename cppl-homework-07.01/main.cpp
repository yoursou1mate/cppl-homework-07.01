//
//  main.cpp
//  cppl-homework-07.01
//
//  Created by a1ex on 2/26/24.
//

#include <iostream>
#include <set>
#include <vector>



int main(int argc, const char * argv[]) {
   
    std::multiset<char> hW;
    std::set<char> printedChars;
    
    hW.insert('H');
    hW.insert('e');
    hW.insert('l');
    hW.insert('l');
    hW.insert('o');
    hW.insert(' ');
    hW.insert('W');
    hW.insert('o');
    hW.insert('r');
    hW.insert('l');
    hW.insert('d');
    hW.insert('!');

    std::cout << "[IN]: Hello World!" << std::endl;
    std::cout << std::endl;

    std::cout << "[OUT]: " << '\n';
    std::set<char> my_set(hW.begin(), hW.end());
    std::vector<char> my_vec(my_set.begin(), my_set.end());
    std::sort(my_vec.begin(), my_vec.end(),
      [&](const char &i1, const char &i2) {
          return hW.count(i1) > hW.count(i2);
      }
    );

    for(auto i : my_vec) {
          std::cout << i << ": " << hW.count(i) << '\n';;
    }
    std::cout << std::endl;
    
    return 0;
}
   
       
    
    
    

