package Assignment;
import java.util.*;

class Stack {
	String expression;
	String postfix,temp;
	char[] s=new char[20];
	int i=0;
	int top=-1,k=0,p;
	void push(char c)
	{
		s[++top]=c;
	}
	
	char pop()
	{
		return(s[top--]);
	}
	
	
	int precedence(char c)
	{
		switch(c)
		{
		case'(':p=5;
		break;
		case '+':
		case '-':p=2;
		break;
		case '/':
		case '*':p=3;
		break;
		case '^':p=4;
		break;
		}
		return p;
	}
	
	
	
	void infixtopostfix()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the infix expression:");
		expression=sc.next();
		expression += "\0";
		
		while(expression.charAt(i)!='\0')
		{
			char c=expression.charAt(i);
		
			if(Character.isLetterOrDigit(c))
			{
				postfix=postfix+c;
			}
		else
		{
			if(c=='(')
			{
				push(c);
			}
			
			else if(c==')')
			{
				while(s[k]!='(')
				{
					postfix=postfix+pop();
					k++;
				}
				temp=temp+pop();
			}
			else
			{
				int icp=precedence(c);
				int isp=precedence(c);
				if(top==-1)
				{
					push(c);
				}
				else if(isp>=icp)
				{
					postfix=postfix+pop();
				}
				else
				{
					push(c);
				}
			}
			
		}
		     i++;
		}
		while(top!=-1)
		{
			postfix=postfix+pop();
		}
		postfix=postfix+'\0';
	}
	void printpf()
	{
		int l=0;
		while(postfix.charAt(l)!='\0')
		{
			System.out.println(postfix.charAt(l));
			l++;
		}
	}
	
}

public class StackApp
{
	public static void main(String []args)
	{
		
		Stack s=new Stack();
		s.push('\0');
		s.infixtopostfix();
		s.printpf();
	}
	
}