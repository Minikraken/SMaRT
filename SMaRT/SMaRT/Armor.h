#ifndef ARMOR_H
#define ARMOR_H


class Armor
{
public:
	Armor();
	virtual ~Armor();

	int getArmorValue()
	{
		return mArmorValue;
	}

	void setArmorValue(int ArmorValue)
	{
		mArmorValue = ArmorValue;
	}

private:

private:
	int mArmorValue;

};

#endif