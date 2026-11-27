#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include <cstddef>
#include <iosfwd>
#include <memory>

class matrix {
private:
    int n = 0;
    std::size_t pojemnosc = 0;
    std::unique_ptr<int[]> dane;

public:
    matrix();
    matrix(int n);
    matrix(int n, int* t);
    matrix(matrix& m);
    ~matrix();

    matrix& alokuj(int n);
    matrix& wstaw(int x, int y, int wartosc);
    int pokaz(int x, int y);
    matrix& dowroc();
    matrix& losuj();
    matrix& losuj(int x);
    matrix& diagonalna(int* t);
    matrix& diagonalna_k(int k, int* t);
    matrix& kolumna(int x, int* t);
    matrix& wiersz(int y, int* t);
    matrix& przekatna();
    matrix& pod_przekatna();
    matrix& nad_przekatna();
    matrix& szachownica();

    friend matrix operator+(int a, matrix& m);
    friend matrix operator*(int a, matrix& m);
    friend matrix operator-(int a, matrix& m);
    friend std::ostream& operator<<(std::ostream& o, matrix& m);

    matrix& operator+(matrix& m);
    matrix& operator*(matrix& m);
    matrix& operator+(int a);
    matrix& operator*(int a);
    matrix& operator-(int a);

    matrix& operator++(int);
    matrix& operator--(int);
    matrix& operator+=(int a);
    matrix& operator-=(int a);
    matrix& operator*=(int a);
    matrix& operator()(double wartosc);

    bool operator==(const matrix& m);
    bool operator>(const matrix& m);
    bool operator<(const matrix& m);
};


#endif //MATRIX_MATRIX_H