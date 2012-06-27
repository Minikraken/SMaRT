#ifndef WEAPON_H
#define WEAPON_H

class Weapon
{
public:
	Weapon();
	virtual ~Weapon();

	int GetDamage() const
	{
		return mDamage;
	}

	int GetSpeed() const
	{
		return mSpeed;
	}

	void SetDamage(int lDamage)
	{
		mDamage = lDamage;
	}
	void setSpeed(int lSpeed)
	{
		mSpeed = lSpeed;
	}

private:

private:
	int mDamage;
	int mSpeed;

};


#endif