#include <climits>
void intersection(int *input1, int *input2, int size1, int size2)
{
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (input1[i] == input2[j]) {
                cout << input1[i] << " ";
                input2[j] = INT_MIN; //taki agar ham dubara vo no dhundhe to nahi mile A1=10 10 & A2=10 vala case 
                break;//agar ek baar mil gaya to age nahi dhundhna hai A1=6 2 & A2=6 2 6 2 to agar ye nahi lagaya to do baar 6 and do hi baar 2 print ho jaega
            }                    
        }
    }
}

