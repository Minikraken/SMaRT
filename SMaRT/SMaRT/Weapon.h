#ifndef WEAPON_H
#define WEAPON_H


class Weapon
{
public:
	Weapon();
	virtual ~Weapon();

	int getDamage()
	{
		return mDamage;
	}
	int getSpeed()
	{
		return mSpeed;
	}

	void setDamage(int Damage)
	{
		mDamage=Damage;
	}
	void setSpeed(int speed)
	{
		mSpeed=speed;
	}

private:

private:
	int mDamage;
	int mSpeed;

};


#endif