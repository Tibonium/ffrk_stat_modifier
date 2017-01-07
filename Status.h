#ifndef STAT_H
#define STAT_H

#include <set>

typedef std::size_t     SizeType;

class Status
{
public:
    // Status Aligment IDs
    typedef enum
    {

    } StatusAligmentIDType;

    Status() :
        _uID(0)
    {}

    double getAttackModifier() const
    {
        return _lfAttackModifier;
    }

    double getMagicModifier() const
    {
        return _lfMagicModifier;
    }

    double getDefenseModifier() const
    {
        return _lfDefenseModifier;
    }

    bool operator<(const Status& oRhs) const
    {
        return _uID < oRhs._uID;
    }

    bool operator>(const Status& oRhs) const
    {
        return _uID > oRhs._uID;
    }

    bool operator<=(const Status& oRhs) const
    {
        return !operator>(oRhs);
    }

    bool operator>=(const Status& oRhs) const
    {
        return !operator<(oRhs)
    }

    bool operator==(const Status& oRhs) const
    {
        return _uID == oRhs._uID;
    }

    bool operator !=(const Status& oRhs) const
    {
        return !operator==(oRhs);
    }

protected:
    SizeType _uID;
    double _lfAttackModifier;
    double _lfDefenseModifier;
    double _lfMagicModifier;
    StatusAligmentIDType _eStatusID;
};

#endif // STAT_H

