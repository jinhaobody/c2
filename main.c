#include <stdio.h>
int main()
{
    char arr[1024];
    int index = 0;
    printf("minganfuguanlixitong\n");

    while (1)
    {
        printf("1---zengtianminganfu\n");
        printf("2---shanchuzuihouyigeminganzifu\n");
        printf("3---chakansuoyouminganzifu\n");
        printf("4---tihuanneirongzhongdeminganzifu\n");
        printf("1---tuichuchengxu\n");

        printf("qingxuanzexiangyinggongneng\n");

        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("qingshuruyaozengjiademinganzifu\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);

            arr[index] = m;
            index++;

            printf("tianjiachenggong,dianjihuichetuichu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 2)
        {
            printf("shanchuzuihouyigeminganzifu\n");
            index--;

            printf("shanchuchenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 3)
        {
            char x;
			int i=0;
			printf("shuchusuoyouminganci：\n");

			for(;i<index;i++){
				printf("%c\n",arr[i]);
			}

			printf("dianjihuichetuichu\n");
			scanf("%c",&x);
			scanf("%c",&x);
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("tuichuchengxu\n");
            break;
        }
    }
    return 0;
}