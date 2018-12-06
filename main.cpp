#include <iostream>
#include <string>
using namespace std;


/*
                                        ***
                                    MIT License

                            Copyright (c) 2018 Mario Alla

        Permission is hereby granted, free of charge, to any person obtaining a copy
        of this software and associated documentation files (the "Software"), to deal
        in the Software without restriction, including without limitation the rights
        to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
        copies of the Software, and to permit persons to whom the Software is
        furnished to do so, subject to the following conditions:

        The above copyright notice and this permission notice shall be included in all
        copies or substantial portions of the Software.

        THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
        IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
        FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
        AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
        LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
        OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
        SOFTWARE.

                                        ***



*/
int main() {
    int h, l, q = 0, u = 4;
    char g, b = (char) "#";
    cout << "Height :  " << endl;
    cin >> h ;
    int f = h*h;
    int c = 1;
    while (q != 1) {
        cout << "\nGive me a Command: ";
        cin >> l;
        if (c < f){
        if (l == 6) {
            for (int j = 0; j < h*2; ++j) {
                cout << " ";
                for (int i = 0; i < c; ++i) {
                    cout << " ";
                }
                for (int k = 0; k < 4; ++k) {
                    if (h*2 - j <= 4){
                        cout << b;
                    }

                }
                cout << endl;
            }
            c = c + 4 ;
            for (int i = f; i > 0; i --){
                cout  << b;
            }

        } else if (l == 4) {
            for (int j = 0; j < h*2; ++j) {
                cout << " ";
                for (int i = c; i > 0; --i) {
                    cout << " ";
                }
                for (int k = 0; k < 4; ++k) {
                    if (h*2 - j <= 4){
                        cout << b;
                    }

                }
                cout << endl;
            }
            c = c - 4 ;
            for (int i = f; i > 0; i --){
                cout  << b;
            }

        } else if (l == 8) {
            u += 2;
            for (int j = 0; j < h*2; ++j) {
                cout << " ";
                for (int i = c; i > 0; --i) {
                    cout << " ";
                }
                for (int k = 0; k < 4; ++k) {
                    if (h*2 - j <= u && h*2 - j >= u-3){
                        cout << b;
                    }

                }
                cout << endl;
            }
            c +=1 ;
            for (int i = f; i > 0; i --){
                cout  << b;
            }



        } else {
            cout << "Unacceptable Input!!! \n Acceptable input's: ( 4, 8, 6)";

        }
        if (u - 4 != 0){
            u -= 1;
            for (int j = 0; j < h*2; ++j) {
                cout << " ";
                for (int i = c; i > 0; --i) {
                    cout << " ";
                }
                for (int k = 0; k < 4; ++k) {
                    if (h*2 - j <= u && h*2 - j >= u-4){
                        cout << b;
                    }

                }
                cout << endl;
            }
            for (int i = f; i > 0; i --){
                cout  << b;
            }
        }
        } else {
            cout << R"(                                   ____    ____  )" << endl;
            cout << R"(  \      /\      /   |   |\   |   |       |    |)"<< endl;
            cout << R"(   \    /  \    /    |   | \  |   |---    |____|)"<< endl;
            cout << R"(    \  /    \  /     |   |  \ |   |       | \    )"<< endl;
            cout << R"(     \/      \/      |   |   \|   |____   |  \  )"<< endl;
            cout << "#######################################################";
            q = 1;
        }

    }
}