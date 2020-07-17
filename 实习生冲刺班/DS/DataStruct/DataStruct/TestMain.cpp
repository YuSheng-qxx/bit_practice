//#include"seqlist.h"
#include"slist.h"

int main()
{
	//SeqList list;
	//SeqListInit(&list);

	SList list;

	ElemType item;
	int pos;
	bool flag;
	int select = 1;
	while(select)
	{
		printf("*********************************************\n");
		printf("*  [1] push_back           [2] push_front   *\n");
		printf("*  [3] show_list           [0] quit_system  *\n");
		printf("*  [4] pop_back            [5] pop_front    *\n");
		printf("*  [6] insert_pos          [7] insert_val   *\n");
		printf("*  [8] erase_pos           [9] erase_val    *\n");
		printf("*  [10] find               [11] length      *\n");
		printf("*  [12] capacity           [13] sort        *\n");
		printf("*  [14] reverse            [15] clear       *\n");
		printf("*  [16] front              [17] back        *\n");
		printf("*  [18] binary_find        [19] erase_all   *\n");
		printf("*********************************************\n");
		printf("��ѡ��:>");
		scanf("%d", &select);
		if(select == 0)
			break;
		switch(select)
		{
		case 1:
			printf("������Ҫ���������<��-1����>:");
			while(scanf("%d", &item), item!=-1)
			{
				//SeqListPushBack(&list, item);
			}
			printf("ͷ���������ݳɹ�......\n");
			break;
		case 2:
			printf("������Ҫ���������<��-1����>:");
			while(scanf("%d", &item), item!=-1)
			{
				//SeqListPushFront(&list, item);
			}
			printf("β���������ݳɹ�......\n");
			break;
		case 3:
			//SeqListShow(&list);
			break;
		case 4:
			//SeqListPopBack(&list);
			printf("β��ɾ�����ݳɹ�......\n");
			break;
		case 5:
			//SeqListPopFront(&list);
			printf("ͷ��ɾ�����ݳɹ�......\n");
			break;
		case 6:
			printf("������Ҫ�����λ��:>");
			scanf("%d", &pos);
			printf("������Ҫ�����Ԫ��:>");
			scanf("%d", &item);
			//flag = SeqListInsertByPos(&list, pos, item);
			if(flag)
				printf("�������ݳɹ�.......\n");
			else
				printf("��������ʧ��.......\n");
			break;
		case 7:
			printf("������Ҫ�����Ԫ��:>");
			scanf("%d", &item);
			//SeqListSort(&list);
			//SeqListInsertByVal(&list, item);
			printf("�������ݳɹ�.......\n");
			break;
		case 8:
			printf("������Ҫɾ����λ��:>");
			scanf("%d", &pos);
			//SeqListEraseByPos(&list, pos);
			printf("ɾ�����ݳɹ�.......\n");
			break;
		case 9:
			printf("������Ҫɾ����Ԫ��:>");
			scanf("%d", &item);
			//SeqListEraseByVal(&list, item);
			printf("ɾ�����ݳɹ�.......\n");
			break;
		case 10:
			printf("������Ҫ���ҵĹؼ�ֵ:>");
			scanf("%d", &item);
			//pos = SeqListFind(&list, item);
			if(pos == -1)
				printf("���ݲ���ʧ��.\n");
			else
				printf("���ݲ��ҳɹ�.\n");
			break;
		case 11:
			//printf("SeqList Length = %d\n", SeqListLength(&list));
			break;
		case 12:
			//printf("SeqList Capacity = %d\n", SeqListCapacity(&list));
			break;
		case 13:
			//SeqListSort(&list);
			printf("˳�������ɹ�......\n");
			break;
		case 14:
			//SeqListReverse(&list);
			printf("ת�����.\n");
			break;
		case 15:
			//SeqListClear(&list);
			break;
		default:
			printf("�������,����������......\n");
			break;
		}
		system("pause");
		system("cls");
	}

	//SeqListDestroy(&list);
	return 0;
}