/*
 通讯录中的一条记录包含下述基本信息：朋友的姓名、出生日期、性别、固定电话号码、移动电话号码。 本题要求编写程序，录入N条记录，并且根据要求显示任意某条记录。
 
 输入格式：
 
 输入在第一行给出正整数N（≤10）；随后N行，每行按照格式姓名 生日 性别 固话 手机给出一条记录。其中姓名是不超过10个字符、不包含空格的非空字符串；生日按yyyy/mm/dd的格式给出年月日；性别用M表示“男”、F表示“女”；固话和手机均为不超过15位的连续数字，前面有可能出现+。
 
 在通讯录记录输入完成后，最后一行给出正整数K，并且随后给出K个整数，表示要查询的记录编号（从0到N−1顺序编号）。数字间以空格分隔。
 
 输出格式：
 
 对每一条要查询的记录编号，在一行中按照姓名 固话 手机 性别 生日的格式输出该记录。若要查询的记录不存在，则输出Not Found。
 
 输入样例：
 
 3
 Chris 1984/03/10 F +86181779452 13707010007
 LaoLao 1967/11/30 F 057187951100 +8618618623333
 QiaoLin 1980/01/01 M 84172333 10086
 2 1 7
 输出样例：
 
 LaoLao 057187951100 +8618618623333 F 1967/11/30
 Not Found
 */
#include <stdio.h>
#define Max 10
typedef struct
{
    char name[11];
    char year[11];
    char sex;
    char tel[17];
    char phone[17];
}
Person;

int main()
{
    int i, j, n;
    int k;
    Person person[Max];
    Person *p;
    
    scanf("%d", &n);
    
    if (n<=0)
        return 0;
    for (p = person; p < person + n; p++)
        scanf("%s %s %c %s %s", p->name, p->year, &p->sex, p->tel, p->phone);
    
    scanf("%d", &k);
    if (k <= 0)
        return 0;
    for (i = 0; i < k; i++)
    {
        scanf("%d", &j);
        if (j < n && j >= 0)
        {
            printf("%s %s %s %c %s\n", person[j].name, person[j].tel, person[j].phone, person[j].sex, person[j].year);
        }
        else
        {
            printf("Not Found\n");
        }
    }

    return 0;
}