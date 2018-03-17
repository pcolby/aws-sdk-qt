/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "awsregion.h"
#include "awsregion_p.h"

#include <QDebug>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsRegion
 *
 * @brief  Provides AWS region information.
 *
 * Basic usage example:
 * @code
 * const AwsRegion region(AwsRegion::AP_Northeast_1);
 * region.name();          // "ap-northeast-1"
 * region.fullName();      // "Asia Pacific (Tokyo) Region"
 * region.hostName("iam"); // "iam.amazonaws.com"
 * @endcode
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html
 */

/**
 * @brief  Constructs a new AwsRegion object.
 *
 * @param  region  AWS region for this object to represent.
 */
AwsRegion::AwsRegion(const Region region)
    : d_ptr(new AwsRegionPrivate(region, this))
{

}

/**
 * @brief  Constructs a new AwsRegion object.
 *
 * If \p regionName is not recognised as a valid AWS region, AwsRegion::isValid
 * will return `false` for the created object.
 *
 * @param  regionName  Name of the AWS region for this object to represent.
 */
AwsRegion::AwsRegion(const QString &regionName)
    : d_ptr(new AwsRegionPrivate(fromName(regionName), this))
{

}

/**
 * @brief  AwsRegion destructor.
 */
AwsRegion::~AwsRegion()
{
    delete d_ptr;
}

/**
 * @brief  Get the region this object represents.
 *
 * If this object was given an AwsRegion::Region value during construction, this
 * function will simply return that enumeration value.
 *
 * If this object was constructed from an AWS region name, then this function will
 * return the AwsRegion::Region enumeration value corresponding to that AWS region
 * name, or AwsRegion::InvalidRegion if the given region name did not name a known,
 * valid AWS region.
 *
 * @return The region this object represents, or AwsRegion::InvalidRegion if this
 *         object does not represent a valid region.
 */
AwsRegion::Region AwsRegion::region() const
{
    Q_D(const AwsRegion);
    return static_cast<AwsRegion::Region>(d->region);
}

/**
 * @brief  Is this AWS region object valid?
 *
 * Any AwsRegion object created using one of the valid AwsRegion::Region enumeration
 * values (ie any but AwsRegion::InvalidRegion) will be considered valid.
 *
 * However, if an unknown region name is supplied to the overloaded
 * AwsRegion(const QString &regionName) constructor, then the constructed object will
 * be considered invalid.
 *
 * @return `true` if this object is valid, `false` otherwise.
 */
bool AwsRegion::isValid() const
{
    return (region() != AwsRegion::InvalidRegion);
}

/**
 * @brief  Get the canonical AWS name for this region.
 *
 * @return The canonical AWS name for this region, or null string if this object is invalid.
 *
 * @see    isValid
 */
QString AwsRegion::name() const
{
    Q_D(const AwsRegion);
    return name(static_cast<AwsRegion::Region>(d->region));
}

/**
 * @brief  Get the canonical AWS name for a region.
 *
 * @param  region  AWS region to get the canonical name of.
 *
 * @return The canonical AWS name for \p region, or null string if \p region is invalid.
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

/**
 * @brief  Get the full name for this region.
 *
 * This returns a humand-readable name for this object's region.  For example,
 * for the AwsRegion::US_East_1 region, this will return something like
 * "US East (Northern Virginia) Region".
 *
 * These full names were gleaned from
 * http://aws.amazon.com/about-aws/globalinfrastructure/ and
 * http://docs.aws.amazon.com/general/latest/gr/rande.html.
 *
 * @return The full name for this region.
 *
 * @see    http://aws.amazon.com/about-aws/globalinfrastructure/
 * @see    http://docs.aws.amazon.com/general/latest/gr/rande.html
 */
QString AwsRegion::fullName() const
{
    return fullName(region());
}

/**
 * @brief  Get the full name for an AWS region.
 *
 * This returns a humand-readable name for the specified AWS region.  For example,
 * for the AwsRegion::US_East_1 region, this will return something like
 * "US East (Northern Virginia) Region".
 *
 * These full names were gleaned from
 * http://aws.amazon.com/about-aws/globalinfrastructure/ and
 * http://docs.aws.amazon.com/general/latest/gr/rande.html.
 *
 * @param  region  AWS region to get the full name of.
 *
 * @return The full name for the specified AWS region.
 *
 * @see    http://aws.amazon.com/about-aws/globalinfrastructure/
 * @see    http://docs.aws.amazon.com/general/latest/gr/rande.html
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

/**
 * @brief  Get name of the host the supports a given service for this region.
 *
 * @param  serviceName  The service to get the hostname for.
 *
 * @return The name of the host that supports the given service for this region,
 *         or a null string if the this service is not supported for this region.
 */
QString AwsRegion::hostName(const QString &serviceName) const
{
    return AwsEndpoint::getEndpoint(name(), serviceName).host();
}

/**
 * @brief  Is a given service supported for this region?
 *
 * @param  serviceName  The service to check support for.
 * @param  transports   An optional set of transports to test for support.
 *
 * @return The name of the host that supports the given service for this region for
 *         _at least one_ of the specified transports, or a null string if the this
 *         service is not supported for this region with any such transports.
 */
bool AwsRegion::isSupported(const QString &serviceName, const AwsEndpoint::Transports transports) const
{
    return AwsEndpoint::isSupported(name(), serviceName, transports);
}

/**
 * @brief  Get a list of services supported by this region.
 *
 * @param  transports  Optional set of transports to test for support.
 *
 * @return A list of the names of all AWS services support by this region for
 *         _at least one_ of the specified transports. The list may be empty.
 */
QStringList AwsRegion::supportedServices(const AwsEndpoint::Transports transports) const
{
    return AwsEndpoint::supportedServices(name(), transports);
}

/**
 * @brief  Get an AwsRegion::Region enumeration value from a region name.
 *
 * @note   The region name is evaluated in a case-insensitve manner.
 *
 * @param  regionName  AWS region name to get an enumeration value for.
 *
 * @return An AwsRegion::Region enumeration value corresponding to the specified
 *         AWS region name, or AwsRegion::InvalidRegion if the region name is not
 *         valid or not recognised.
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

/**
 * @internal
 *
 * @class  AwsRegionPrivate
 *
 * @brief  Private implementation for AwsRegion.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AwsRegionPrivate object.
 *
 * @param  region  AwsRegion::Region represented by this object.
 * @param  q       Pointer to this object's public AwsRegion instance.
 *
 * @note  The \a region parameter is type \p int to avoid cyclic dependencies
 *        between \p AwsRegion and \p AwsRegionPrivate.  However it must always
 *        be set to valid \p AwsRegion::Region enumerator value.
 */
AwsRegionPrivate::AwsRegionPrivate(const int region, AwsRegion * const q)
    : region(region), q_ptr(q)
{

}

QTAWS_END_NAMESPACE
