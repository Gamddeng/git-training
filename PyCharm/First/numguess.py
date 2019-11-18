import random

answer = random.randint(1,100)
try_cnt = 5

while True:
    if try_cnt == 0:
        print("어이 젊은 친구, 신사답게 행동해. 다음에 다시 와")
        break
    user_answer = eval(input("고니야 (예) 숫자 하나 찔러봐라 : "))
    if answer == user_answer:
        print('''화란아 나도 정답이란게 있다
니가 이런식으로 내 정답을 짓밟으면
마! 그땐 내가 깡패가 되는거야!''')
        break
    else:
        print("찍신은 무너졌냐 이 새X야")
        try_cnt -= 1
        if answer>user_answer:
            print("묻고 더블로 가!")
        else:
            print("이 경운 원래 쇼당이 안붙지")
