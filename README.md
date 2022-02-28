# push_swap

### 2022.02.28

<main>  
인자가 순서대로 들어왔는지 확인(check_already_sorted) 후  
정렬 함수 실행(ft_sort)    
---
<ft_sort>
크기가 1일 떄 : 그대로 return  
크기가 2일 때 : head 숫자가 tail 숫자보다 작다면 sa  
크기가 3일 때 : ft_sort_three 함수 실행  
그 이상일 때 : ft_sort_big 함수 실행
