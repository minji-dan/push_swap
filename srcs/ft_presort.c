#include "../includes/push_swap.h"

void make_array(t_info *info)
{
    int i;
    t_deque *tmp;

    i = 0;
    info->arr = (int *)malloc(sizeof(int) * info->size_a + 1);
    tmp = info->bot_a;
    while (tmp)
    {
        info->arr[i] = tmp->num;
        tmp = tmp->next;
        i++;
    }
}

void init_m_info(int low, int mid, int hight, t_merge *m_info)
{
    m_info->b = (int *)malloc(sizeof(int) * (hight + 1));
    m_info->low_index = low;
    m_info->mid_index = mid + 1;
    m_info->b_index = 0;
}

void merge(int *a, int low, int mid, int hight)
{
    t_merge m_info;

    init_m_info(low, mid, hight, &m_info);
    while (m_info.low_index <= mid && m_info.mid_index <= hight)
    {
        if (a[m_info.low_index] >= a[m_info.mid_index]) //분리된 왼쪽 배열과 오른쪽 배열 비교
            m_info.b[m_info.b_index++] = a[m_info.low_index++];
        else
            m_info.b[m_info.b_index++] = a[m_info.mid_index++];
    }
    while (m_info.low_index <= mid) //비교하지 않은 왼쪽 배열이 있다면 배열 b에 전부 채우기
        m_info.b[m_info.b_index++] = a[m_info.low_index++];
    while (m_info.mid_index <= hight)
        m_info.b[m_info.b_index++] = a[m_info.mid_index++]; //비교하지 않은 오른쪽 배열이 있다면 배열 b에 전부 채우기
    m_info.b_index--;
    while (m_info.b_index >= 0) //배열 bd 내용을 배열 a 내용에 덮어쓰기
    {
        a[low + m_info.b_index] = m_info.b[m_info.b_index++];
        m_info.b_index--;
    }
    free(m_info.b);
    m_info.b = NULL;
}

void mergeSort(int *a, int low, int hight) //배열의 요소 분할하는 함수
{
    int mid;

    if (low < hight)
    {
        mid = (low + hight) / 2;
        mergeSort(a, low, mid);       //왼쪽 배열의 요소 분리
        mergeSort(a, mid + 1, hight); //오른쪽 배열의 요소 분리
        merge(a, low, mid, hight);    //분리된 배열 정렬 및 병합 함수
    }
}

void ft_presort(t_info *info)
{
    int i;

    make_array(info);
    mergeSort(info->arr, 0, info->size_a - 1);
    i = 1;
    while (i < info->size_a)
    {
        if (info->arr[i] == info->arr[i - 1])
            print_error();
        i++;
    }
}