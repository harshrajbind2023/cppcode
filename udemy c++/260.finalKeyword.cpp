//   program for final keyword


class parent
{
	virtual void show() final
	{}
};
class child:parent
{
	void show()
	{}
};