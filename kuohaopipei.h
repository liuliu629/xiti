#ifndef KUOHAOPIPEI_H_
#define KUOHAOPIPEI_H_

const int MaxSize = 1000;
template<class T>
class SeqStack
{
public:
	SeqStack(){top = 0;length = 0;};
	void Push(T x);
	T Pop();
	T GetTop();
	int GetLength();
private:
	int top;
	int length;
	T data[MaxSize];
};

#endif


template<class T>
void SeqStack<T>::Push(T x)
{
  if(length > MaxSize)throw"…œ“Á";
  top = top + 1;
  data[top] = x;
  length++;
}

template<class T>
T SeqStack<T>::Pop()
{
  if(top < 0)throw"œ¬“Á";
  T x;
  x = data[top];
  top --;
  length --;
  return x;
}

template<class T>
T SeqStack<T>::GetTop()
{
  if(top < 0)throw"œ¬“Á";
  T x;
  x = data[top];
  return x;
}

template<class T>
int SeqStack<T>::GetLength()
{
 return length;
}