#include <iostream>
using namespace std;

/**
 * Compute Fibonacci numbers
 */
long long fib( int n )
{
    if( n <= 1 )
        return 1;
    else
        return fib( n - 1 ) + fib( n - 2 );
}

/**
 * Compute Fibonacci numbers
 */
long long fibonacci( int n )
{
    if( n <= 1 )
        return 1;

    long long last = 1;
    long long nextToLast = 1;
    long long answer = 1;

    for( int i = 2; i <= n; ++i )
    {
        answer = last + nextToLast;
        nextToLast = last;
        last = answer;
    }
    return answer;
}

int main( )
{
    cout << "fib( 40 ) = " << fib( 40 ) << endl;
    cout << "fibonacci( 40 ) = " << fibonacci( 40 ) << endl;
    return 0;
}