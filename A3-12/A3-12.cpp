
#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber (int From, int To)
{ 
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

//Problem #1
void FillMatrixWithRandomNumber(int arr[3][3], short Row, short Cols)
{
    for (short i = 0; i < Row; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int arr[3][3], short Row, short Cols)
{
    for (short i = 0; i < Row; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

//Problem #12
bool AreTypicalMatrices(int Matrix1[3][3], int Matrix2[3][3], short Row, short Cols)
{
    for (short i = 0; i < Row; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] == Matrix2[i][j])
            {
                return 1;
            }
            else {
                return 0;
            }
        }
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3], Matrix2[3][3];

    FillMatrixWithRandomNumber(Matrix1, 3, 3);
    cout << "\n MAtrix 1 :\n";
    PrintMatrix(Matrix1, 3, 3);

    FillMatrixWithRandomNumber(Matrix2, 3, 3);
    cout << "\n MAtrix 2 :\n";
    PrintMatrix(Matrix2, 3, 3);

    if (AreTypicalMatrices(Matrix1, Matrix2, 3, 3) == 1)
    {
        cout << "\n YES: Matrices Are Typical";
    }
    else
    {
        cout << "\n NO: Matrices Are NOT Typical";

    }

    system("pause>0");

}

