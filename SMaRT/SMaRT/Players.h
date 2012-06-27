#ifndef PLAYERS_H
#define PLAYERS_H




class Players
{
public:
	Players();
	virtual ~Players();


	int getHP()
	{
		return mHP;
	}
	int getMaxHP()
	{
		return mMaxHP;
	}
	int getMovmentSpeed()
	{
		return mMovmentSpeed;
	}

	void setHP(int HP)
	{
		mHP=HP;
	}
	void setMaxHP(int maxHP)
	{
		mMaxHP=maxHP;
	}
	void setMovmentSpeed(int movmentSpeed)
	{
		mMovmentSpeed=movmentSpeed;
	}
private:

private:
	int mHP;
	int mMaxHP;
	int mMovmentSpeed;
};


#endif