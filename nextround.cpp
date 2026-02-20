#include <iostream>
#include <vector>

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> scores(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> scores[i];
    }

    int threshold = scores[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= threshold && scores[i] > 0)
        {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}