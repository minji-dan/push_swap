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

---

### 2022.03.01 <br/>

과제에서 사용할 수 있는 연산 (첫 번째 원소는 가장 최근에 삽입된 원소) <br/>

- **`sa`**(**swap a**) : `a`의 가장 위에 있는 두 요소를 교환한다. (요소가 하나도 없거나 한 개만 있을 때는 아무것도 수행하지 않는다.)<br/>
- **`sb`**(**swap b**) : `b`의 가장 위에 있는 두 요소를 교환한다. (요소가 하나도 없거나 한 개만 있을 때는 아무것도 수행하지 않는다.)<br/>
- **`ss`**: `sa`와 `sb`를 동시에 수행한다.<br/>
- **`pa`**(**push a**) : `b`의 가장 위에 있는 요소를 `a`의 가장 위에 넣는다. (`b`가 비었을 때는 아무것도 수행하지 않는다.)<br/>
- **`pb`**(**push b**) : `a`의 가장 위에 있는 요소를 `b`의 가장 위에 넣는다. (`a`가 비었을 때는 아무것도 수행하지 않는다.)<br/>
- **`ra`**(**rotate a**) : `a`의 모든 요소를 1만큼 위로 이동시킨다. 첫 번째 요소는 마지막 요소가 된다.<br/>
- **`rb`**(**rotate b**) : `b`의 모든 요소를 1만큼 위로 이동시킨다. 첫 번째 요소는 마지막 요소가 된다.<br/>
- **`rr`**: `ra`와 `rb`를 동시에 수행한다. (ra → rb / rb → ra 의 명령어는 rr로 압축시킬 수 있다.)<br/>
- **`rra`**(**reverse rotate a**) : `a`의 모든 요소를 1만큼 아래로 이동시킨다. 마지막 요소는 첫 번째 요소가 된다.<br/>
- **`rrb`**(**reverse rotate b**) : `b`의 모든 요소를 1만큼 아래로 이동시킨다. 마지막 요소는 첫 번째 요소가 된다.<br/>
- **`rrr`**: `rra`와 `rrb`를 동시에 수행한다. (rra → rrb / rrb → rra 의 명령어는 rrr로 압축시킬 수 있다.) <br/>
  • rr → rrr / rrr → rr 순으로 실행되는 명령어는 불필요하므로 삭제시킬 수 있다.<br/>
  • pa → pb / pb → pa / ra → rra / rb → rrb / sa → sa / sb → sb 와 같이 실행하나 마나 동일한 명령어 쌍은 삭제시킬 수 있다.<br/>
  ![image](https://user-images.githubusercontent.com/69064310/156873891-c0497901-9e40-43a0-b1ae-697165b3412d.png)

---

### 2022.03.02<br/>

---

### 2022.03.03<br/>

##### ft_p <br/>

스택 B(A)의 첫 번째 원소를 a(b)로 옮긴다.<br/>
pop_back을 수행 성공 시 push_back <br/>
스택 B(A) 사이즈 줄이고 스택 A(B) 사이즈 늘리기<br/>
flag 값이 1이면, "pa"("pb")를 출력하고 newline으로 끝내기<br/>

##### ft_s <br/>

스택 사이즈가 2라면, pop_back, push_front <br/>
2보다 크다면 ...
flag 값이 1이면, "sa"("sb")를 출력하고 newline으로 끝내기<br/>
스택 A, B 사이즈가 3 이상이거나 같으면 sa와 sb를 동시에 실행 <br/>
flag 값이 1이면, "ss"("ss")를 출력하고 newline으로 끝내기<br/>

##### ft_r <br/>

pop_back 수행 성공 시, push_front<br/>
flag 값이 1이면, "ra"("rb")를 출력하고 newline으로 끝내기<br/>

---

### 2022.03.04<br/>

##### ft_rr <br/>

pop_front 수행 성공 시, push_back<br/>
flag 값이 1이면, "rra"("rrb")를 출력하고 newline으로 끝내기<br/>

---

### 2022.03.05<br/>

##### ft_free<br/>

![image](https://user-images.githubusercontent.com/69064310/156880423-e9033100-4810-43fc-b3c3-a15a63e68a2d.png)

---

### 2022.03.13<br/>

##### ft_presort<br/>

mergeSort : 배열의 요소를 분할하는 함수<br/>

> low < hight 이라면<br/>
>
> > low와 hight의 중간 값 구하고 <br/>
> > 왼쪽 배열의 요소 분리 <br/>
> > 오른쪽 배열 요소 분리 <br/>
> > 분리된 배열 정렬 및 병합 함수 merge 수행 <br/>

merge : 분리된 배열 정렬 및 병합 함수 <br/>
