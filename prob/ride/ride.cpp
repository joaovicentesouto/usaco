/*
ID: joaovic2
PROG: ride
LANG: C++11
*/
#include <fstream>
#include <string>

int main(int argc, char const *argv[]) {

  std::string ufo, group;
  unsigned int mult_ufo = 1, mult_group = 1;

  std::ifstream in("ride.in");
  in >> ufo >> group;
  in.close();

  for (size_t i = 0; i < ufo.length(); i++)
    mult_ufo *= (ufo[i] - 64);

  for (size_t i = 0; i < group.length(); i++)
    mult_group *= (group[i] - 64);

  std::ofstream out("ride.out");
  out << (mult_ufo % 47 == mult_group % 47 ? "GO" : "STAY") << std::endl;
  out.close();

  return 0;
}
