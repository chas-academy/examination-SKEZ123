#include <stdio.h>
#include <string.h>

#define MAX_NAME 10
#define MAX_NUM 13

int middle_score(int *array, const int size)
{
    int sum = 0;
    
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return sum / size;
}

int all_middle_score(int i_1, int i_2, int i_3, int i_4, int i_5)
{
    return (i_1 + i_2 + i_3 + i_4 + i_5) / 5;
}

void print_name_capitalized(const char* name)
{
    if (name[0] >= 'a' && name[0] <= 'z')
    {
        putchar(name[0] - 32);
    }
    else
    {
        putchar(name[0]);
    }

    for (int i = 1; name[i] != '\0'; i++)
    {
        putchar(name[i]);
    }

    putchar('\n');
}

int main()
{
    char name1[MAX_NAME]; char name2[MAX_NAME]; char name3[MAX_NAME]; char name4[MAX_NAME]; char name5[MAX_NAME];
    int numbers1[MAX_NUM]; int numbers2[MAX_NUM]; int numbers3[MAX_NUM]; int numbers4[MAX_NUM]; int numbers5[MAX_NUM];

    scanf("%9s", name1);
    for (int i = 0; i < MAX_NUM; i++) scanf("%d", &numbers1[i]);

    scanf("%9s", name2);
    for (int i = 0; i < MAX_NUM; i++) scanf("%d", &numbers2[i]);

    scanf("%9s", name3);
    for (int i = 0; i < MAX_NUM; i++) scanf("%d", &numbers3[i]);

    scanf("%9s", name4);
    for (int i = 0; i < MAX_NUM; i++) scanf("%d", &numbers4[i]);

    scanf("%9s", name5);
    for (int i = 0; i < MAX_NUM; i++) scanf("%d", &numbers5[i]);

    int name1_ms = middle_score(numbers1, MAX_NUM);
    int name2_ms = middle_score(numbers2, MAX_NUM);
    int name3_ms = middle_score(numbers3, MAX_NUM);
    int name4_ms = middle_score(numbers4, MAX_NUM);
    int name5_ms = middle_score(numbers5, MAX_NUM);

    if (name1_ms > name2_ms && name1_ms > name3_ms && name1_ms > name4_ms && name1_ms > name5_ms)
        print_name_capitalized(name1);

    if (name2_ms > name1_ms && name2_ms > name3_ms && name2_ms > name4_ms && name2_ms > name5_ms)
        print_name_capitalized(name2);

    if (name3_ms > name2_ms && name3_ms > name1_ms && name3_ms > name4_ms && name3_ms > name5_ms)
        print_name_capitalized(name3);

    if (name4_ms > name2_ms && name4_ms > name1_ms && name4_ms > name3_ms && name4_ms > name5_ms)
        print_name_capitalized(name4);

    if (name5_ms > name2_ms && name5_ms > name1_ms && name5_ms > name3_ms && name5_ms > name4_ms)
        print_name_capitalized(name5);

    int a_m_s = all_middle_score(name1_ms, name2_ms, name3_ms, name4_ms, name5_ms);

    if (name1_ms < a_m_s) print_name_capitalized(name1);
    if (name2_ms < a_m_s) print_name_capitalized(name2);
    if (name3_ms < a_m_s) print_name_capitalized(name3);
    if (name4_ms < a_m_s) print_name_capitalized(name4);
    if (name5_ms < a_m_s) print_name_capitalized(name5);

    return 0;
}