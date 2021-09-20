//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream.h>
#include "math.h"
#include <conio.h>

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
        double x, y, z, a, b, c, d, rez ;
        cout << "Vvedite x, y, z ";
        cin >> x >> y >> z;
        a = 1+pow(sin(x+y),2);
        b = fabs(x-2*y/1+pow(x,2)*pow(y,2));
        c = pow(x,fabs(y));
        d = pow(cos(atan(1/z)),2);

        rez = a/b*c+d;


        cout << rez;

        getch();

        return 0;
}
//---------------------------------------------------------------------------
