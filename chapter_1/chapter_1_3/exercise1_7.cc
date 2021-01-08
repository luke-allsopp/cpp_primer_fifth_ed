//compile a program that has incorrectly nested comments:

/*
 * comment pairs /* */ cannot nest.
 * "cannot nest" is considered source code,
 * as is the res of the program
 */
int main()
{
return 0;
}

//output returned:
//exercise1_7.cc:4:24: error: ‘cannot’ does not name a type
//  * comment pairs /* */ cannot nest.
//                        ^~~~~~




