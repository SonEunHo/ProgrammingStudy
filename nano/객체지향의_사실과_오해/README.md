객체지향의 사실과 오해
===========================

객체지향이란 무엇일까?
평소에 생각하던 객체지향이란 무엇이었나??

## 1. 객체지향과 객체란
현 소프트웨어 개발 방법에서 가장 애용되는 패러다임이다. 많은 사람들은 "객체지향이란 실세계를 직접적이고 직관적으로 모델링하는 것" 이라고 이해한다. 이 설명의 핵심 전제는" 객체 지향 프로그래밍이란 현실 속의 사물을 최대한 유사하게 모방해 SW내부로 옮겨오는 것" 이다. 

이 책에서는 객체지향을 설명하는 모방이라는 개념은 객체지향을 철학적 관점에서 설명하기에는 적합할지 모르겠으나, 실용적인 관점에서는 부적합하다고 주장한다.

이 책에서 주장하는 객체지향이란
<pre>
객체지향의 목표는 실세계를 모방하는 것이 아니다.
오히려 새로운 세계를 창조하는 것이다.
</pre>
라고 말한다. 

우리가 평소에 알고있던 객체지향은 무엇이고, 어떤 오해가 존재하고, 사실은 무엇인지 살펴보자.

#### 객체
객체 지향에서 객체는 역할을 가지고, 책임에 충실히 임하며, 다른 객체와 협력하는 존재이다.
나아가 객체지향 시스템은, 서비스 제공을 위해 수많은 객체가 각자의 역할과 책임을 다하며, 서로협력하는 과정이 존재한다.

가장 중요한 키워드는 역할, 협력, 과정이다.

## 2. 객체지향의 사실은?
>우리는 평소에 객체지향이란 무엇이라고 생각했는가?
나는 개인적으로 객체지향이란 모든 것을 객체로 만드는 것 이라고 이해를 했지만 이는 표면적인 이해에 그쳤고, 앞서말한 실세계를 모방하는 것이라고 얼추 이해를 하고 있었다.

>그러면 객체지향에서 가장 중요한 개념은 무엇이라고 생각했는가?
면접을 대비하면서, 수업을 들으면서 암기적으로 때려넣은 결과로
"상속, 캡슐화, 다형성" 이 내 머리에서 나온 답이다.
이 3가지 개념도 무척이나 중요하지만 객체지향에서 객체에 집중하면 근본적으로 중요한 것은,
객체가 어떤 역할, 책임을 가지는 것인지, 다른 객체와 어떻게 협력하는지 이다.


#### 객체에 대해서 더 자세히 알아보자.
예전에는, 데이터와 행동을 철저히 분리하는 개발 방법이 유행이었지만, 이는 유연하지 못하고 유지보수가 쉽지 않다. 객체는 자신의 상태와 그에 따른 행동을 함께 가지고 있다.
자신의 상태를 알고, 상태에 따라서 외부의 요청을 어떻게 처리할지는 객체 스스로 판단할 수 있다.
즉, 요청에 대해 수동적이지 않고 능동적이다.

여기서 객체지향이란 단순히 실세계에대한 모방에서 그치지 않는다라는 것을 알 수 있다.
예를 들어 실세계에서 음료는 지극히 수동적인 존재로, 누군가에 의해 마셔진다.
하지만 객체지향 세계에서는 음료는 스스로의 상태(양)를 알고 외부의 요청에 따라서 자신의 양을 조절할 수 있다( 여기서 외부의 요청은 마신다, 음료를 더 따라붓는다 등이 있을 수 있다.)

객체가 자신의 상태를 관장하고 그에 따라 능동적인 행동을 하기 위해서는 본인만이 상태를 조작할 수 있어야한다. 여기서 캡슐화의 개념이 등장한다. 

캡슐화를 통해 객체는 외부로 자신의 상태를 감추고, 행동만을 노출한다. 외부에서는 객체에게 요청을 할 수 있지만 상태를 직접적으로 알지 못하고, 직접 수정할 수 없다. 결과적으로 외부에서 객체에게 접근할 수 있는 방식은 행동 뿐이다. 나아가서 객체를 설계할 때는 행동을 우선 고려하는 것이 좋다.

요약해서 간추리자면 객체는 다음과 같은 특징이 있다.
<pre>
- 객체는 상태를 가지며 상태는 변경가능하다.
- 객체의 상태를 변경시키는 것은 객체의 행동이다.
	-행동의 결과는 상태에 의존적이며 상태를 이용해서 서술할 수 있다.
	-행동의 순서가 결과에 영향을 미친다.
- 객체는 어떠한 상태에 있더라도 유일하게 식별가능하다.
</pre>

#### 객체지향에 대한 오해
무성한 소문처럼, 객체지향에 대해 퍼진 일반적인 오해를 살펴보자.

> 객체지향에서 중요한 것은 클래스가 아닌, 객체이다.
 클래스는 분명 중요한 개념이긴 하지만, 객체지향의 핵심이라고 부르기엔 무리가 있다.
객체지향을 제대로 이해하기 위해서는 클래스 관점에서 객체 관점으로 사고의 중심을 옮겨갈 필요가 있다.
클래스의 구조와 메소드가 아닌, 객체의 역할,책임,협력에 집중하자. 객체지향은 객체를 지향하는 것이지 클래스를 지향하는 것이 아니다.

> 객체지향은 현실세계에 대한 모방이다.
 이에 대한 설명은 간략히 앞에서 했다. 요약하자면, 객체는 상태와 행동을 가지고 캡슐화를 통해 능동적인 행동을 하는 존재이다. 객체지향은 현실세계를 은유하여 객체로 의인화하는 패러다임이라고 할 수 있다.
(현실세계에서는 음료가 능동적인 존재라고 상상조차 할 수 없지만, 객체지향 세계에서는 가능하다)
다른 말로 표현하자면, 객체지향 세계는 이상한 나라의 앨리스와 같은 세계이다.

객체지향의 사실은, 능동적인 객체들이, 역할,책임을 갖고 서로 협력하는 유기적인 공동체를 만드는 것 이다.

## 3. 타입과 추상화
객체 지향 시스템이란, 역할을 가지고 책임을 다하며 서로 협력하는 객체들의 공동체이다.
거대한 시스템에는 수 맣은 객체들이 서로 협력하고 있을텐데, 객체의 수가 너무나 많으면 협력관계가 복잡하게 느껴져서 인지 과부하를 일으킬 수 있다.

#### 추상화
<pre>
말 그대로 두리뭉실하게, 단순하게, 표현하는 것으로 두가지 추상화 방식이 있다.

1. 구체적인 사물들 간에 공통점은 취하고 차이점은 버리는 일반화
2. 중요한 부분을 강조하기 위해 불필요한 세부 사항을 제거함으로써 단순하게 만드는 것.

어떤 경우건, 추상화의 목적은 복잡성을 이해하기 쉬운 수준으로 단순화 하는 것.
</pre>
객체지향 패러다임은 추상화를 통해 현실의 복잡성을 극복할 수 있다.

추상화를 통해 객체들을 적절한 개념으로 분류(classification)하면 유지보수가 용이하고 변경에 유연하게 대처할 수 있다.
여기서 개념이란 공통점을 기반으로 객체들을 묶기 위한 그릇의 뜻이다.

#### 타입
타입은 앞서 말한 개념을 좀더 프로그래밍 용어 처럼 표현한 것으로 의미는 완전히 동일하다.

타입의 중요한 사실 두가지는
> 첫째, 타입은 데이터가 어떻게 사용되느냐에 관한 것이다.
> 둘째, 타입에 속한 데이터를 메모리에 어떻게 표현하는지는 외부로부터 철저하게 감춰진다.

즉, 이러한 객체의 타입을 결정하는 기준은 객체가 어떤 행동을 하느냐이다.
상태는 다르더라도 같은 행동(예를 들어 축구 선수의 체격, 성격은 모두 다르지만, 공을 찬다 라는 행동을 한다)을 하느냐가  타입(축구선수)을 구분하는 중요한 기준이다.

여기서 다형성이라는 것을 설명할 수 있다.
다형썽이란, 동일한 요청에 대해 서로 다른 방식으로 응답할 수 있는 능력을 뜻 한다. 
결과적으로 다형적인 객체들은 동일한 타입에 속한다.

아무튼 훌륭한 객체지향 설계는 외부에 행동만을 제공하고 데이터는 뒤에 감춰야한다.
이 원칙을 캡슐화라고 한다. 
이 때에도 추상화를 사용하면 아주 효과적이다.

#### 타입의 계층
행동으로 특정 타입을 정의내려보자.
축구선수 라는 타입은 다음과 같은 행동을 가진다.
<pre>
- 축구공을 발로 잘 찬다.
</pre>

그런데 골키퍼라는 타입을 정의내리면 다음과 같다.
<pre>
- 축구공을 잘 다룬다.
- 손을 사용하여 공을 막아낸다.
</pre>

이 두 개념(타입) 사이에는 일반화 / 특수화 라는 관계가 존재한다.
일반화에 비해 특수화는 좀더 세분화된 행동을 가진다.

즉, 일반화, 세분화를 구분하는 기준 또한 행동이다.
일반화에 속하는 객체들의 다이어그램과, 특수화에 속하는 객체들의 다이어그램의 관계는,
전자가 후자를 포함하는 형식이다.

#### 타입과 클래스
흔히 하는 오해가 클래스와 타입을 동일시하는 것이다. 클래스는 단지 타입을 구현할 수 있는 여러 구현 메커니즘 중 하나일 뿐이다.

결국 객체지향에서 중요한 것은 동적으로 변하는 객체의 '상태'와 상태를 변경하는 '행동'이다.


## 4. 역할, 책임, 협력

저자는 객체지향에 갓 입문한 사람들이 가장 많이 하는 실수가, 협력이라는 문맥을 고려하지 않은 채 객체가 가져야하는 상태와 행동부터 고민하는 것이라고 주장한다.
앞서 저자는 여러 번 반복해서 객체지향에서 가장 중요한 것은 역할, 책임, 협력 이라고 말했다. 여기서 상태와 행동의 키워드는 들어있지 않다.

상태와 행동은 하나의 객체를 바라볼때는 정말 중요한 요소이지만, 전체적인 객체지향 시스템에서 중요한 것은 협력이다. 

앞서 객체지향 시스템은 역할을 갖고 책임을 다하며 협력하는 객체들의 공동체라고 표현했다.
객체지향 설계의 전체적인 품질을 결정하는 것은 개별 객체의 품질(상태, 행동을 잘 구축해둔 것)이 아니라 여러 객체들이 모여 이뤄내는 협력의 품질이다.

#### 책임
객체지향에서 어떤 객체가 어떤 요청을 처리할 수 있거나, 적절한 행동을 할 의무가 있으면 해당 객체가 책임을 가진다고 말한다.
책임은 객체지향 설계에서 정말 중요하다. 올바른 객체에게 올바른 책임을 부여하는 것이 협력관계를 구성하는 첫걸음이다.
책임을 어떻게 구현하는가라는 문제는 객체와 책임이 제자리를 잡은 후에 고려해도 충분히 늦지 않다.

<pre>
책임은 객체에 의해 정의되는 응집도 있는 행위의 집합으로,
객체가 알아야하는 정보와 객체가 수행할 수 있는 행위에 대해 개략적으로 서술한 문장이다.
</pre>



## 5. 책임과 메세지

객체는 자율적이어야한다. 그러기 위해서는 책임이 너무 구체적이지 않는 것이 좋다.
'증언하라' 와 '목격한 장면을 떠올리고, 순서대로 재구성하고, 6하원칙에 맞게 증언하라'는 다르다.
너무나 많은 제약조건(파라미터)이 주어지면 객체는 수동적이게 된다.
즉, 상세한 책임은 객체가 누려야하는 자유를 훼손하게 될 수도 있다.
그렇다고 너무 추상적인 책임도 피해야한다.

객체는 다른 객체에게 협력을 요청하기 위해 메시지를 사용한다.
객체의 자율성을 보존하기 위해서는 이 메시지가 너무 추상적이도, 너무 구체적이어도 안된다.
그저 원하는 목적만 담백하게 전달해야한다. 그 외로 다른 객체의 상태를 알고자 하면 안 된다.
객체가 자율적이기 위해서는 본인의 상태를 직접 관리할 수 있어야하는데, 반대가 되면 자율성을 잃는다.
따라서 정보은닉과 캡슐화를 통해서, 메시지를 사이에둔 송신자와 수신자는 서로에 대해 매우 적은 정보만으로 협력이 가능하다.

정리하자면 객체지향 설계는 적절한 책임을 적절한 객체에게 할당하면서 메시지를 기반으로 협력하는 객체들의 관계를 발견하는 과정이다.

### 인터페이스
<pre>
- 인터페이스 사용법을 아는 것 만으로 내부 구조나 동작방식은 몰라도 사용할 수 있다.
- 인터페이스를 사이에 두면 내부 동작 방식과 구조를 유연하게 바꿀 수 있다.
- 대상이 변경되더라도 동일한 인터페이스만 제공하면 아무 문제없이 상호작용할 수 있다.
</pre>
이렇게 객체지향 세계에서 인터페이스를 사용하면 OCP를 적극 활용할 수 있다.
이러한 인터페이스는 어떻게 결정해야할까?

객체들간의 메시지를 통해 인터페이스를 발견할 수 있다.
## 6. 객체 지도
 객체지향 설계는 크게 기능을 중심으로 한 기능 설계와 구조를 중심으로 하는 구조 설계로 나뉜다.
기능 설계는 시스템이 사용자에게 제공하는 서비스에 초점을 맞추는 반면, 구조 설계는 제품의 형태가 어떠해야하는지에 초점을 맞춘다.

객체지향에서는 변경이 반드시 있을 수 밖에 없고 이에 유연하게 대처하기 위해서는 안정적인 구조가 자리잡혀 있어야한다.
따라서 구조 설계가 객체지향 설계에서 유지보수에 좋다. 
그렇다면 안정적인 구조를 설계하기 위해 어떤 것이 필요할까?
<pre>
- 유즈케이스
- 도메인 모델
</pre>

이 두 가지 재료를 복합적으로 분석하기 위해서는 각 객체들의  책임과 객체간 메세지가 명확해야 한다.


