#ifndef STAT_MOD_ARRAY_H
#define STAT_MOD_ARRAY_H

#include "StatModifiers.h"

class StatModArray
{
public:
    StatModArray() {}

    virtual ~StatModArray() {}

    StatModifiers::AttenuationCurveType getAttenuationCurve() const
    {
        return _eAttenuationCurve;
    }

    double getAttakModifier() const
    {
        double AtkMod = 0;
        SizeType uStatusCount( _xoStatus.size() );
        for(SizeType uIndex=0; uIndex<uStatusCount; ++uIndex)
        {
            if( _xoStatus[uIndex].AtkMod != 0 )
            {

            }
        }
        return AtkMod;
    }

    void addStatus(const Status& oStatus)
    {
        _xoStatus.insert(oStatus);
    }

protected:
    StatModifiers::AttenuationCurveType _eAttenuationCurve;
    std::set<Status> _xoStatus;
};

#endif // STAT_MOD_ARRAY_H

