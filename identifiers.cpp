#include <iostream> //the library in which the namespace std is located, short for input/output stream

/*NOTE: All unnecessary white spaces are ignored by the compiler (including tabs and linebreaks)*/

// An identifier is the name of any user-defined element. Let's see an example.
int main()
{
    int num;
    num = 2;
    std::cout<<num<<std::endl;

    //C++ is a case-sensitive language, hence Num is not num:
    int Num;
    Num = 3;
    std::cout<<num+Num<<std::endl;

    /*Some words are predefined and reserved in C++ and cannot be used
    as keywords :

        asm	auto	bool
        break	case	catch
        char	class	const
        const_cast	continue	default
        delete	do	double
        dynamic_cast	else	enum
        explicit	export	extern
        false	float	for
        friend	goto	if
        inline	int	long
        mutable	namespace	new
        operator	private	protected
        public	register	reinterpret_cast
        return	short	signed
        sizeof	static	static_cast
        struct	switch	template
        this	throw	true
        try	typedef	typeid
        typename	union	unsigned
        using	virtual	void
        volatile	wchar_t	while
    */

    //What if we use cout and endl very often and don't want to type std::cout every time we do it?
    //We can use the 'using' keyword
    using std::cout;
    using std::endl;
    cout<<"New Try"<<endl;

    /*If we use std::cout and cout with some other use, then compiler will prefer std::cout.
    A specified namespace has priority over the default namespace.
    */

    /*What if the std namespace is used very frequently with lots of different identifiers?
    In this case, we can simply declare we are using the whole namespace.*/

    using namespace std;
    cout<<"New Try with whole namespace"<<endl;

    /*Taking Inputs */
    cout<< "Enter a number to know its square" <<endl;
    int n;
    cin >> n; //warning : here, the arrows are pointed towars the right, because the 'cin' user input is stored into n
    cout<< n*n;
    //sometimes, we want our script to run based on the values given by the user
    //In this case, we use the cin object in the std namespace
    return 0;
}

/*CONVENTIONS
- Identifier cannot be given the name of a keyword
- Identifier can consist of only letters, digits and underscore(_)
- An identifier can only start with a letter or an underscore: No 2num, value@, etc...
- Within each pair of braces, each statement should start from a distance of one tab from
 the alignment of the braces (for readability as it doesn't change anything for the compiler)
- We can also name a function, class or a variable in either CamelCase or underscore_case.
Though it is a general convention to name methods or functions with camelCase starting with lower case.
For example, getMarks(), setAge().
The braces enclosing the body of a function should be aligned with the function name. Although it will not
generate any error, it makes our code more readable.
*/
