//   pattern -1   run

// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16 

int main()
{
	int count=1;
	for(int i=0;i<4;i++)
	{
	     	for(int j=0;j<4;j++)
		{
		    cout<<count<<" ";
		    count++;
		}
		cout<<endl;
	}
	return 0;
}

//   pattern -2   run

// ****
//  ***
//   **
//    *
int main()
{
	for(int i=0;i<4;i++)
	{
	    for(int j=0;j<4;j++)
	    {
		if(i>j)
		  cout<<" ";
		else
		  cout<<"*";
	    }
	    cout<<endl;
	}
	return 0;
}



//   pattern -3   run
// *
// **
// ***
// ****


int main()
{
	for(int i=0;i<4;i++)
	{
	    for(int j=0;j<4;j++)
	    {
		if(i>=j)
		  cout<<"*";
	    }
	    cout<<endl;
	}
	return 0;
}







//   pattern -4   run


//    *
//   **
//  ***
int main()
{
	for(int i=0;i<4;i++)
	{
	    for(int j=0;j<4;j++)
	    {
		if(i+j>4-1)
		  cout<<"*";
		else
		  cout<<" ";
	     }
	     cout<<endl;
	}
	return 0;
}




//   pattern -4   run
