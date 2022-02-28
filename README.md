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
> > > tmp 숫자 atoll로 변환하여 num에 저장 <br/>push_back ..

---
