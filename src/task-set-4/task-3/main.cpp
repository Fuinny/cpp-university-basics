#include <iostream>

int main() {
    for (int S = 1; S < 10; S++) {
        for (int E = 0; E < 10; E++) {
            if (E == S) continue;
            for (int N = 0; N < 10; N++) {
                if (N == S || N == E) continue;
                for (int D = 0; D < 10; D++) {
                    if (D == S || D == E || D == N) continue;
                    for (int M = 1; M < 10; M++) {
                        if (M == S || M == E || M == N || M == D) continue;
                        for (int O = 0; O < 10; O++) {
                            if (O == S || O == E || O == N || O == D || O == M) continue;
                            for (int R = 0; R < 10; R++) {
                                if (R == S || R == E || R == N || R == D || R == M || R == O) continue;
                                for (int Y = 0; Y < 10; Y++) {
                                    if (Y == S || Y == E || Y == N || Y == D || Y == M || Y == O || Y == R) continue;

                                    int SEND = S * 1000 + E * 100 + N * 10 + D;
                                    int MORE = M * 1000 + O * 100 + R * 10 + E;
                                    int MONEY = M * 10000 + O * 1000 + N * 100 + E * 10 + Y;

                                    if (SEND + MORE == MONEY) {
                                        std::cout << "SEND (" << SEND << ") + MORE (" << MORE << ") = MONEY (" << MONEY << ")\n";
                                        std::cout << "S = " << S << ", E = " << E << ", N = " << N << ", D = " << D << ", M = " << M << ", O = " << O << ", R = " << R << ", Y = " << Y << '\n';
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}
