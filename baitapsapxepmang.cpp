 //#include <iostream>
//
//int main()
//{
//    int n;
//    char characters[10];
//
//    std::cin >> n;
//
//
//    for (int i = 0; i < n; i ++) {
//        std::cin >> characters[i];
//    }
//    
//    for (int i = n - 1; i > 0; i--)
//    {
//    	for (int j = 0; j < n; j++)
//    	{
//    		if ((int)characters[j] > (int)characters[j + 1]) 
//    		{
//    			char tam = characters[j];
//    			characters [j] = characters[j + 1];
//    			characters [j + 1] = tam;
//			}
//		}
//	}
//    
//    for (int i = 0; i < n; i++) {
//    	std::cout << characters[i] << " ";
//	}
//
//    return 0;
//}

#include <iostream>

int main()
{
    int n;
    char characters[10];

    std::cin >> n;

   
    for (int i = 0; i < n; i++) {
        std::cin >> characters[i];
    }

    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if ((int) characters[j] > (int) characters[j + 1]) {
                char tmp = characters[j];
                characters[j] = characters[j + 1];
                characters[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << characters[i] << " ";
    }
    
    return 0;
}



