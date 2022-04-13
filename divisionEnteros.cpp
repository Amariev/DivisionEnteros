#include <iostream>
#include <bitset>

int main() {
  int dividendo = 7;
  int divisor = 3;
  const int n = 4;

  std::bitset<n> A(0);
  std::bitset<n> Q(dividendo);
  std::bitset<n> M(divisor);

  std::cout << "Q: " << Q << " M: " << M << " A: " << A << "\t| Valores iniciales"<< std::endl;
  for (int i = 0; i < n; i++) {
    A <<= 1;
    A[0] = Q[3];
    Q <<= 1;
    std::cout << "A: " << A << " Q: " << Q << "\t\t| left shift\n";
    std::cout << A << " - " << M << "\t\t| sustraccion en complemento a 2\n";
    A = A.to_ulong() - M.to_ulong();
    std::cout << "Resta: " << A << std::endl;

    if (A[3] == 1) {
      Q[0] = 0;
      A = A.to_ulong() + M.to_ulong();
    } 
    else {
      Q[0]=1;
    }
    std::cout << Q[0] << " -> Q[0]" << "\t\t| Restauración\n";
  }
  std::cout << "residuo: " << A << std::endl;
  std::cout << "cociente: " << Q << std::endl;
  return 0;
}
