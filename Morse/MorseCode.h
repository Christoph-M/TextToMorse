#pragma once


#define CODENUM 36


template <typename T, size_t N>
T* arBegin(T(&arr)[N]) { return &arr[0]; }
template <typename T, size_t N>
T* arEnd(T(&arr)[N]) { return &arr[0] + N; }


struct MorseCode {
	MorseCode() {}
	MorseCode(char letter, std::vector<int> code) :
		letter_(letter),
		code_(code)
	{}

	char letter_;
	std::vector<int> code_;
};


MorseCode morseCodes[CODENUM] = {	MorseCode('a', std::vector<int>(arBegin(a), arEnd(a))),
									MorseCode('b', std::vector<int>(arBegin(b), arEnd(b))),
									MorseCode('c', std::vector<int>(arBegin(c), arEnd(c))),
									MorseCode('d', std::vector<int>(arBegin(d), arEnd(d))),
									MorseCode('e', std::vector<int>(arBegin(e), arEnd(e))),
									MorseCode('f', std::vector<int>(arBegin(f), arEnd(f))),
									MorseCode('g', std::vector<int>(arBegin(g), arEnd(g))),
									MorseCode('h', std::vector<int>(arBegin(h), arEnd(h))),
									MorseCode('i', std::vector<int>(arBegin(i), arEnd(i))),
									MorseCode('j', std::vector<int>(arBegin(j), arEnd(j))),
									MorseCode('k', std::vector<int>(arBegin(k), arEnd(k))),
									MorseCode('l', std::vector<int>(arBegin(l), arEnd(l))),
									MorseCode('m', std::vector<int>(arBegin(m), arEnd(m))),
									MorseCode('n', std::vector<int>(arBegin(n), arEnd(n))),
									MorseCode('o', std::vector<int>(arBegin(o), arEnd(o))),
									MorseCode('p', std::vector<int>(arBegin(p), arEnd(p))),
									MorseCode('q', std::vector<int>(arBegin(q), arEnd(q))),
									MorseCode('r', std::vector<int>(arBegin(r), arEnd(r))),
									MorseCode('s', std::vector<int>(arBegin(s), arEnd(s))),
									MorseCode('t', std::vector<int>(arBegin(t), arEnd(t))),
									MorseCode('u', std::vector<int>(arBegin(u), arEnd(u))),
									MorseCode('v', std::vector<int>(arBegin(v), arEnd(v))),
									MorseCode('w', std::vector<int>(arBegin(w), arEnd(w))),
									MorseCode('x', std::vector<int>(arBegin(x), arEnd(x))),
									MorseCode('y', std::vector<int>(arBegin(y), arEnd(y))),
									MorseCode('z', std::vector<int>(arBegin(z), arEnd(z))),
									MorseCode('1', std::vector<int>(arBegin(one), arEnd(one))),
									MorseCode('2', std::vector<int>(arBegin(two), arEnd(two))),
									MorseCode('3', std::vector<int>(arBegin(three), arEnd(three))),
									MorseCode('4', std::vector<int>(arBegin(four), arEnd(four))),
									MorseCode('5', std::vector<int>(arBegin(five), arEnd(five))),
									MorseCode('6', std::vector<int>(arBegin(six), arEnd(six))),
									MorseCode('7', std::vector<int>(arBegin(seven), arEnd(seven))),
									MorseCode('8', std::vector<int>(arBegin(eight), arEnd(eight))),
									MorseCode('9', std::vector<int>(arBegin(nine), arEnd(nine))),
									MorseCode('0', std::vector<int>(arBegin(zero), arEnd(zero))),
};