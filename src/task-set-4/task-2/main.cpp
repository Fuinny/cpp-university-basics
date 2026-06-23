#include <iostream>

int main() {
    for (int O = 1; O < 10; O++) {
        for (int H = 0; H < 10; H++) {
            if (H == O) continue;
            for (int A = 1; A < 10; A++) {
                if (A == O || A == H) continue;

                int OHOHO = (O * 10000) + (H * 1000) + (O * 100) + (H * 10) + O;
                int AHAHA = (A * 10000) + (H * 1000) + (A * 100) + (H * 10) + A;
                int AHAHAH = (A * 100000) + (H * 10000) + (A * 1000) + (H * 100) + (A * 10) + H;

                if (OHOHO + AHAHA == AHAHAH) {
                    std::cout << "OHOHO (" << OHOHO << ") + AHAHA (" << AHAHA << ") = AHAHAH (" << AHAHAH << ")\n";
                    std::cout << "O = " << O << ", H = " << H << ", A = " << A << '\n';
                    break;
                }
            }
        }
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}
