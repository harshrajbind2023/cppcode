//  M-1 run
//  change to lower charecter
int main()
{

	string str="welcome";
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
		     str[i]=str[i]+32;
		}
	}
	cout<<str<<endl;
	return 0;
}



//  M-2  run
//  change to upper charecter
int main()
{

	string str="wELcoMe7";
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
		     str[i]=str[i]-32;
		}
	}
	cout<<str<<endl;
	return 0;
}


//  M-3  run
//  count  vowels,consonant,space
int main()
{
	string str="how many words"
	int vowels=0,consonant=0,space=0;
	for(int i=0;str[i]=!'\0';i++)
	{
		if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		      vowels++;
		else if(str[i]==' ')
		      space++;
		else
		      consonant++;
	}
	cout<<"vowels "<<vowels<<endl;
	cout<<"consonant "<<consonant<<endl;
	cout<<"words "<<space++<<endl;
	return 0;
}



