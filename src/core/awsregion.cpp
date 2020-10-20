/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "awsregion.h"
#include "awsregion_p.h"

#include <QDebug>

namespace QtAws {
namespace Core {

/*!
 * \class QtAws::Core::AwsRegion
 * \brief The AwsRegion class provides information about AWS regions.
 *
 * \inmodule QtAwsCore
 *
 * Basic usage example:
 * \code
 * const AwsRegion region(AwsRegion::AP_Northeast_1);
 * region.name();          // "ap-northeast-1"
 * region.fullName();      // "Asia Pacific (Tokyo) Region"
 * region.hostName("iam"); // "iam.amazonaws.com"
 * \endcode
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html
 */

/*!
 * \enum AwsRegion::CardinalDirection
 *
 * This enum describes cardinal direction bit-flags for AWS regions.
 *
 * \value North          North.
 * \value NorthNorthEast North-north-east.
 * \value NorthEast      North-east.
 * \value EastNorthEast  East-north-east.
 * \value East           East.
 * \value EastSouthEast  East-south-east.
 * \value SouthEast      South-east.
 * \value SouthSouthEast South-south-east.
 * \value South          South.
 * \value SouthSouthWest South-sputh-west.
 * \value SouthWest      South-west.
 * \value WestSouthWest  West-south-west.
 * \value West           West.
 * \value WestNorthWest  West-north-west.
 * \value NorthWest      North-west.
 * \value NortNorthWest  Nort-north-west.
 */

/*!
 * \enum AwsRegion::MacroRegion
 *
 * This enum describes macro region bit-flags for AWS regions.
 *
 * \value AsiaPacific     Asia-Pacific.
 * \value Europe          Europe.
 * \value SouthAmerica    South America.
 * \value UnitedStates    United States of America.
 * \value UnitedStatesGov United States Government.
 */

/*!
 * \enum AwsRegion::Region
 *
 * This enum describes the available AWS regions.
 *
 * \value InvalidRegion  Not a valid AWS region.
 * \value AP_Northeast_1 Asia Pacific (Tokyo) Region.
 * \value AP_Southeast_1 Asia Pacific (Singapore) Region.
 * \value AP_Southeast_2 Asia Pacific (Sydney) Region.
 * \value EU_West_1      EU (Ireland) Region.
 * \value SA_East_1      São Paulo Region.
 * \value US_East_1      US East (Northern Virginia) Region.
 * \value US_Gov_West_1  AWS GovCloud (US) Region.
 * \value US_West_1      US West (Northern California) Region.
 * \value US_West_2      US West (Oregon) Region.
 */

/*!
 * Constructs an AwsRegion object for AWS \a region.
 */
AwsRegion::AwsRegion(const Region region)
    : d_ptr(new AwsRegionPrivate(region, this))
{

}

/*!
 * Constructs an AwsRegion object for AWS \a regionName.
 *
 * If \a regionName is not recognised as a valid AWS region, isValid() will return \c false.
 */
AwsRegion::AwsRegion(const QString &regionName)
    : d_ptr(new AwsRegionPrivate(fromName(regionName), this))
{

}

/*!
 * Destroys the AWS region.
 */
AwsRegion::~AwsRegion()
{
    delete d_ptr;
}

/*!
 * Returns the region as an AwsRegion::Region enum, or AwsRegion::InvalidRegion
 * if the region is invalid.
 *
 * If this object was given an AwsRegion::Region value during construction, this
 * function will simply return that enumeration value.
 *
 * If this object was constructed from an AWS region name, then this function will
 * return the AwsRegion::Region enumeration value corresponding to that AWS region
 * name, or AwsRegion::InvalidRegion if the given region name did not name a known,
 * valid AWS region.
 */
AwsRegion::Region AwsRegion::region() const
{
    Q_D(const AwsRegion);
    return static_cast<AwsRegion::Region>(d->region);
}

/*!
 * Returns \c true if this region is valid; \c false otherwise.
 *
 * Any AwsRegion object created using one of the valid AwsRegion::Region enumeration
 * values (ie any but AwsRegion::InvalidRegion) will be considered valid.
 *
 * However, if an unknown region name is supplied to the overloaded
 * AwsRegion(const QString &regionName) constructor, then the constructed object will
 * be considered invalid.
 */
bool AwsRegion::isValid() const
{
    return (region() != AwsRegion::InvalidRegion);
}

/*!
 * Returns the canonical AWS name for this region, or a null string if invalid.
 *
 * \sa isValid
 */
QString AwsRegion::name() const
{
    Q_D(const AwsRegion);
    return name(static_cast<AwsRegion::Region>(d->region));
}

/*!
 * Returns the canonical AWS name for \a region.
 */
QString AwsRegion::name(const Region &region)
{
    switch (region) {
        case AP_Northeast_1: return QLatin1String("ap-northeast-1");
        case AP_Southeast_1: return QLatin1String("ap-southeast-1");
        case AP_Southeast_2: return QLatin1String("ap-southeast-2");
        case EU_West_1:      return QLatin1String("eu-west-1");
        case SA_East_1:      return QLatin1String("sa-east-1");
        case US_East_1:      return QLatin1String("us-east-1");
        case US_Gov_West_1:  return QLatin1String("us-gov-west-1");
        case US_West_1:      return QLatin1String("us-west-1");
        case US_West_2:      return QLatin1String("us-west-2");
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, qPrintable(QString::fromLatin1("invalid region: %1").arg(region)));
    }
    return QString();
}

/*!
 * Returns the full name for this AWS region.
 *
 * This returns a humand-readable name for this object's region.  For example,
 * for the AwsRegion::US_East_1 region, this will return something like
 * "US East (Northern Virginia) Region".
 *
 * These full names were gleaned from
 * http://aws.amazon.com/about-aws/globalinfrastructure/ and
 * http://docs.aws.amazon.com/general/latest/gr/rande.html.
 */
QString AwsRegion::fullName() const
{
    return fullName(region());
}

/*!
 * Returns the full name for AWS \a region.
 *
 * This returns a humand-readable name for the specified AWS region.  For example,
 * for the AwsRegion::US_East_1 region, this will return something like
 * "US East (Northern Virginia) Region".
 *
 * These full names were gleaned from
 * http://aws.amazon.com/about-aws/globalinfrastructure/ and
 * http://docs.aws.amazon.com/general/latest/gr/rande.html.
 */
QString AwsRegion::fullName(const Region &region)
{
    switch (region) {
        case AP_Northeast_1: return QLatin1String("Asia Pacific (Tokyo) Region");
        case AP_Southeast_1: return QLatin1String("Asia Pacific (Singapore) Region");
        case AP_Southeast_2: return QLatin1String("Asia Pacific (Sydney) Region");
        case EU_West_1:      return QLatin1String("EU (Ireland) Region");
        case SA_East_1:      return QLatin1String("São Paulo Region");
        case US_East_1:      return QLatin1String("US East (Northern Virginia) Region");
        case US_Gov_West_1:  return QLatin1String("AWS GovCloud (US) Region");
        case US_West_1:      return QLatin1String("US West (Northern California) Region");
        case US_West_2:      return QLatin1String("US West (Oregon) Region");
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, qPrintable(QString::fromLatin1("invalid region: %1").arg(region)));
    }
    return QString();
}

/*!
 * Returns the name of the host that supports \a serviceName for this region, or
 * a null string if the service is not supported for this region.
 */
QString AwsRegion::hostName(const QString &serviceName) const
{
    return AwsEndpoint::getEndpoint(name(), serviceName).host();
}

/*!
 * Returns \c true if \a serviceName is supported for this region, for \b {at
 * least one} of the specified \a transports; \c false otherwise.
 */
bool AwsRegion::isSupported(const QString &serviceName, const AwsEndpoint::Transports transports) const
{
    return AwsEndpoint::isSupported(name(), serviceName, transports);
}

/*!
 * Returns the list of the names of all AWS services support by this region for
 * \b {at least one} of the specified \a transports. The list may be empty.
 */
QStringList AwsRegion::supportedServices(const AwsEndpoint::Transports transports) const
{
    return AwsEndpoint::supportedServices(name(), transports);
}

/*!
 * Returns the AwsRegion::Region enum value for \a regionName, or InvalidRegion
 * if not a valid region name.
 *
 * \a regionName is not case sensitive.
 */
AwsRegion::Region AwsRegion::fromName(const QString &regionName)
{
    const QString lowerName(regionName.toLower());
    if (lowerName == QLatin1String("ap-northeast-1")) return AP_Northeast_1;
    if (lowerName == QLatin1String("ap-southeast-1")) return AP_Southeast_1;
    if (lowerName == QLatin1String("ap-southeast-2")) return AP_Southeast_2;
    if (lowerName == QLatin1String("eu-west-1"))      return EU_West_1;
    if (lowerName == QLatin1String("sa-east-1"))      return SA_East_1;
    if (lowerName == QLatin1String("us-east-1"))      return US_East_1;
    if (lowerName == QLatin1String("us-gov-west-1"))  return US_Gov_West_1;
    if (lowerName == QLatin1String("us-west-1"))      return US_West_1;
    if (lowerName == QLatin1String("us-west-2"))      return US_West_2;
    Q_ASSERT_X(false, Q_FUNC_INFO, qPrintable(QString::fromLatin1("invalid region name: %1").arg(regionName)));
    return InvalidRegion;
}

/*!
 * \class QtAws::Core::AwsRegionPrivate
 * \brief The AwsRegionPrivate class provides private implementation for the AwsRegion class.
 * \internal
 *
 * \inmodule QtAwsCore
 */

/*!
 * Constructs an AwsRegionPrivate object for \a region, with public implementation \a q.
 *
 * \note \a region is type \c int to avoid cyclic dependencies between AwsRegion and
 * AwsRegionPrivate. However it must always be set to valid AwsRegion::Region value.
 */

AwsRegionPrivate::AwsRegionPrivate(const int region, AwsRegion * const q)
    : region(region), q_ptr(q)
{

}

} // namespace Core
} // namespace QtAws
