# push_swap

### 2022.02.28

##### main <br/>

인자가 순서대로 들어왔는지 확인(check_already_sorted) 후 <br/>
정렬 함수 실행(ft_sort)<br/>

##### ft_sort <br/>

크기가 1일 때 : 그대로 return <br/>
크기가 2일 때 : head 숫자가 tail 숫자보다 작다면 sa <br/>
크기가 3일 때 : ft_sort_three 함수 실행 <br/>
그 이상일 때 : ft_sort_big 함수 실행 <br/>

##### ft_parsing <br/>

> 들어온 인자 수 만큼 반복
>
> > ' '를 기준으로 잘라서 숫자 tmp에 저장
> > tmp만큼 반복
> >
> > > tmp 숫자 atoll로 변환하여 num에 저장 <br/>push_back ..<br/>

---<br/>

### 2022.03.01 <br/>

과제에서 사용할 수 있는 연산 (첫 번째 원소는 가장 최근에 삽입된 원소) <br/>

- pa : 스택 B의 첫 번째 원소를 a로 옮긴다.<br/>
- pb : 스택 A의 첫 번째 원소를 b로 옮긴다.<br/>
- sa : 스택 A의 첫 번째 원소와 두 번째 원소가 자리를 바꾼다.<br/>
- sb : 스택 B의 첫 번째 원소와 두 번째 원소가 자리를 바꾼다.<br/>
- ss : sa와 sb를 동시에 실행한다.<br/>
- ra : 스택 A의 원소를 회전시킨다(첫 번째 원소가 마지막으로)<br/>
- rb : 스택 B의 원소를 회전시킨다(첫 번째 원소가 마지막으로)<br/>
- rr : ra와 rb를 동시에 실행한다.<br/>
- rra : 스택 A의 원소를 회전시킨다(첫 번째 원소가 마지막으로)<br/>
- rrb : 스택 B의 원소를 회전시킨다(첫 번째 원소가 마지막으로)<br/>
- rrr : rra와 rrb를 동시에 실행한다.<br/>

---<br/>

### 2022.03.02<br/>

---<br/>

### 2022.03.02<br/>

ft_p <br/>
스택 B(A)의 첫 번째 원소를 a(b)로 옮긴다.<br/>
pop_back을 수행 성공 시 push_back <br/>
스택 B 사이즈 줄이고 스택 A 사이즈 늘리기<br/>
ft_putendl_fd : "pa"를 주어진 파일디스크립터로<br/> 출력하고 newline으로 끝내기<br/>
