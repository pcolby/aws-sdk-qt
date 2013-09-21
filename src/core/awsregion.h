#ifndef AWSREGION_H
#define AWSREGION_H

#include "qtawsglobal.h"
#include "awsendpoint.h"

#include <QFlags>
#include <QStringList>

QTAWS_BEGIN_NAMESPACE

class AwsRegionPrivate;

class QTAWS_EXPORT AwsRegion {
    Q_DECLARE_PRIVATE(AwsRegion)

public:
    /// Bit flags representing the possible cardinal directions of
    /// AWS regions within macro-regions.
    enum CardinalDirection {
        North          = 0x00,
        NorthNorthEast = 0x10,
        NorthEast      = 0x20,
        EastNorthEast  = 0x30,
        East           = 0x40,
        EastSouthEast  = 0x50,
        SouthEast      = 0x60,
        SouthSouthEast = 0x70,
        South          = 0x80,
        SouthSouthWest = 0x90,
        SouthWest      = 0xA0,
        WestSouthWest  = 0xB0,
        West           = 0xC0,
        WestNorthWest  = 0xD0,
        NorthWest      = 0xE0,
        NortNorthWest  = 0xF0
    };

    /// AWS macro-regions.
    enum MacroRegion {
        AsiaPacific     = 0x100,
        Europe          = 0x300,
        SouthAmerica    = 0xA00,
        UnitedStates    = 0xB00,
        UnitedStatesGov = 0xC00
    };

    /// AWS regions.
    enum Region {
        InvalidRegion  = 0,
        AP_Northeast_1 = AsiaPacific     + NorthEast + 0x1,
        AP_Southeast_1 = AsiaPacific     + SouthEast + 0x1,
        AP_Southeast_2 = AsiaPacific     + SouthEast + 0x2,
        EU_Eest_1      = Europe          + East      + 0x1,
        SA_East_1      = SouthAmerica    + East      + 0x1,
        US_East_1      = UnitedStates    + East      + 0x1,
        US_Gov_West_1  = UnitedStatesGov + West      + 0x1,
        US_West_1      = UnitedStates    + West      + 0x1,
        US_West_2      = UnitedStates    + West      + 0x2
    };
    Q_DECLARE_FLAGS(Regions, Region)

    AwsRegion(const Region region);
    AwsRegion(const QString &regionName);
    ~AwsRegion();

    bool isValid() const;
    Region region() const;

    QString name() const;
    static QString name(const Region &region);

    QString fullName() const;
    static QString fullName(const Region &region);

    QString hostName(const QString &serviceName) const;

    bool isSupported(const QString &serviceName,
                     const AwsEndpoint::Transport transport = AwsEndpoint::AnyTransport) const;

    QStringList supportedServices(const AwsEndpoint::Transport transport = AwsEndpoint::AnyTransport) const;

    static Region fromName(const QString &regionName);

private:
    AwsRegionPrivate * const d_ptr; ///< Internal d-pointer.
    friend class TestAwsRegion;
};

Q_DECLARE_OPERATORS_FOR_FLAGS(AwsRegion::Regions)

QTAWS_END_NAMESPACE

#endif
