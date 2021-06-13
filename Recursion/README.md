***Recursion is costly it costs more (order of n)time and internally uses space in stack memory***
function calls itself called recursion, it should have condition checking statement
otherwise it's leads to the infinite loop

*whatever the recursion takesplace the function called atlast will process during the returing stage with the next value eg: sum(n-1)+1 means this 1 will add at the returning time of the function call


*Recursion has two Phase:
	1.Calling Phase
	2.Returning Phase

1.Calling Phase:
	printf("\n %d",x);            //processing while calling
        fun1(x-1);
excution process will be done before calling is called calling phase, it will excute in ascending order
before the function ends.

2. Returning Phase:
	fun1(x-1);
	printf("%d",x);
excution processs will not be done during calling, after all the calling will happen
the returning will gets happen that time process will be excuted.




*Recursion in stack memory while executing:
//calling phase
Void fun(int n)
{
	if(n>0)
	{
	printf("%d",n);
	fun(n-1);
	}
}

void main()
{
	int x=3;		
	fun(x);
}

1.first the x=3; this will create a space in the stack,
2.after the fun(x) called the local varibale inside the fun n will create a code activitation record for 
each function executes.
3.it will increase the stack size taken until n>0
4.n=3,n=2,n=1 each time every stack frame will be allocated separatly it called as code activitation record
5. this code activition record from stack will be deleted while the recursion returning from the stack
6. atlast all the record will be delted only x=3 will be remain in the stack. no record will be there for fun(x);



total memory consume is o(n);

total calls is (n+1);//activation record created list in fun();


//returning phase:

it is also same memory allocation in stack like calling phase but... it will be delete the top most acttivation record
until the last function called. 
whenever in the function called itself the stack will be created in activation method this is in ascending phase 
and each calling has a seperate activiation record. atlast every function is returning the activaqtion record also
delets from the stack so there is no more any record of the particular record



//Recurrence Relation
Time Complexity of recursion--> for eg: if it takes above eg the time is 

T(n)=[1,T(n-1)+2,n=0,n>0 here n=0-> whenever the if conditions fails it takes time values as 1
the time taken by the function depends by the number of calls



//static and global variables in recursion
why static variable doesnt change during execution? -> bcoz it will created in the main memory not in the stack or heap, and also stacic and global variable have a 
seperate subset of memory under main memory. static variable is created at the loading time of the program so it will not get lost through function call.

so it will remain when returns to the another function even in the local variable named static

*imp: whenever you need to call the same function another time while the passing argumemt/variable is static or global then the value stored in the variable
will be same still the last value bcoz it will not deleted from the memory it will be accesible to all the program


//Types of recursion
1.Tail Recursion -> All the operations will be done by only at the calling phase, nothing will be done during returning phase even during the function return everthing will be done in calling phase
	         -> time is same for both if/loop statement is o(n);
                 -> but in the space constraints looping is more efficient  because in recursion func again calling so it will allocate code activiation record in the stack 
                  so in looping space=o(1) bcoz it is use while and -- so it taking 1 but in recursion using n so space is allocate in stack and returns with o(n)
2.Head Recursion -> All the operations will be done during the returning time nothing will be done during the calling phase of the  function callling time, process will do after all the recursion call
		 ->time is same for both recursion and while
		 ->but we can't able to convert the recursion into looping structure may be while loop but we can use adding extra variable to sort
3.Tree Recursion ->recursion calling more than one time called tree recursion eg: whenever the function is calling in the returning phase after that again one more same recursion is calling itself
calling tree recursion. while using tree recursion we need handle carefully otherwise it takes more time.
4.Indirect Recursion -> it like calling  itself with anouther sub function bu the another subfunction is again calling
			the same function like continous loop recursion this may call at both calling and returning phase or both.
5.Nested Recursion ->the function which calles itself with argument as a same function call eg:
		return fun(fun(n-1);	//nested recursion eg: is given in Data structure and algorithm note_1

/******************************************************************************************/
//Power recursion with space and time complexity common tips

//powerRecursion.c

/*

#include<stdio.h>

int power(int m,int n)
{
    if(n==0)
    {
        return 1;                   //if its add,sub we can return 0 but here pro so we need to return 1 anything produ than its will be same number
    }
    else
    {
        return power(m,n-1)*m;
    }
}
/*
* The normal the above power function return the power of the certain value but 
* the time taken and space complexity is order of n  depends upon the number of
* function called so that the code activation record will be allocated in the stack
* so that stack memory size will be increased to reduce the size of the code activation record
* in the stack we need to minimize using loops because recursion always takes the more time 
* and spacec complexity(those time and space always depends on the number of function called),
* And another way is for divided the function calls, for eg here the power called fun refer here.

int power1(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return power1(m*m,n/2);
    }
    else
    {
        return m*power1(m*m,(n-1)/2);
    }
}

int main()
{
    int m,n;
    printf("Enter the values of m(value to be powered) and n(number of times): ");
    scanf("%d %d",&m,&n);
    int power_result=power(m,n);
    printf("\nThe %d(m) Power of %d(n) is: %d",m,n,power_result);
    int power1_result=power1(m,n);
    printf("\nThe %d(m) power of %d(n) is: %d",m,n,power1_result);
    return 0;
}

*/

/****************************************************************************************/



