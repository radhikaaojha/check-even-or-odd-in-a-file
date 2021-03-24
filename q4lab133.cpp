# include <iostream>
# include <fstream>
# include <cstdlib>
using namespace std;

int main()
{
    ifstream in("numbers.txt");

    int oddNumber[100],oddIndex=0;
    int evenNumber[100],evenIndex=0;

    if(in)
    {
        while(in)
        {
            int nbr;
            in >> nbr;
            if(nbr%2)
                oddNumber[oddIndex++] = nbr;
            else evenNumber[evenIndex++] = nbr;
        }

        in.close();
    }else cout << "Cannot open this file" << endl;

    ofstream oddOut("odd.txt"),evenOut("even.txt");

    for(int i=0;i<evenIndex;i++)
        evenOut << evenNumber[i] << " ";

    for(int i=0;i<oddIndex;i++)
        oddOut << oddNumber[i] << " ";

    evenOut.close();
    oddOut.close();

    return 0;
}
