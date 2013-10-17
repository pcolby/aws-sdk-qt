/*
    Copyright 2013 Paul Colby

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

#include "awsendpoint.h"
#include "awsendpoint_p.h"

#include <QDebug>
#include <QFile>
#include <QMutexLocker>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsEndpoint
 *
 * @brief  Provides AWS endpoint information.
 *
 * @note  This class provides fairly low-level access to AWS endpoint data.
 *        You should consider using the AwsRegion and/or various
 *        AwsService-derived classes in preference to using this class
 *        directly where possible.
 *
 * This class parses the `endpoint.xml` data available at
 * http://aws-sdk-configurations.amazonwebservices.com/endpoints.xml
 *
 * The `endpoint.xml` file is embedded as a resource in the libqtaws
 * library - not fetched remotely at runtime.
 *
 * Example usage:
 * @code
 * AwsEndpoint endpoint(QLatin1String("cloudformation.us-east-1.amazonaws.com"));
 *
 * endpoint.hostName();    // "cloudformation.us-east-1.amazonaws.com"
 * endpoint.regionName();  // "us-east-1"
 * endpoint.serviceName(); // "cloudformation"
 *
 * endpoint.supportedRegions(); // [ "us-east-1" ]
 *
 * endpoint.isSupported(AwsEndpoint::HTTP);  // false
 * endpoint.isSupported(AwsEndpoint::HTTPS); // true
 *
 * QUrl ec2 = AwsEndpoint::getEndpoint("ap-southeast-2", "ec2");
 * QUrl iam = AwsEndpoint::getEndpoint("ap-southeast-2", "iam");
 *
 * ec2.host(); // "ec2.ap-southeast-2.amazonaws.com"
 * iam.host(); // "iam.amazonaws.com"
 * @endcode
 *
 * @see    AwsRegion
 * @see    AwsService
 */

/**
 * @brief  Constructs a new AwsEndpoint object.
 *
 * @param  hostName  Name of an AWS host, encoded as UTF-8.
 */
AwsEndpoint::AwsEndpoint(const QByteArray &hostName)
    : d_ptr(new AwsEndpointPrivate(this))
{
    Q_D(AwsEndpoint);
    d->hostName = QString::fromUtf8(hostName);
    QMutexLocker locker(&AwsEndpointPrivate::mutex);
    if (AwsEndpointPrivate::hosts.contains(d->hostName)) {
        if (!AwsEndpointPrivate::hosts[d->hostName].regionNames.empty()) {
            d->regionName = AwsEndpointPrivate::hosts[d->hostName].regionNames.first();
        }
        d->serviceName = AwsEndpointPrivate::hosts[d->hostName].serviceName;
    }
}

/**
 * @brief  Constructs a new AwsEndpoint object.
 *
 * @param  hostName  Name of an AWS host.
 */
AwsEndpoint::AwsEndpoint(const QString &hostName)
    : d_ptr(new AwsEndpointPrivate(this))
{
    Q_D(AwsEndpoint);
    d->hostName = hostName;
    QMutexLocker locker(&AwsEndpointPrivate::mutex);
    if (AwsEndpointPrivate::hosts.contains(d->hostName)) {
        if (!AwsEndpointPrivate::hosts[d->hostName].regionNames.empty()) {
            d->regionName = AwsEndpointPrivate::hosts[d->hostName].regionNames.first();
        }
        d->serviceName = AwsEndpointPrivate::hosts[d->hostName].serviceName;
    }
}

/**
 * @brief AwsEndpoint destructor.
 */
AwsEndpoint::~AwsEndpoint()
{
    delete d_ptr;
}

/**
 * @brief  Get a QUrl for an AWS endpoint.
 *
 * This function will return a QUrl object for accessing an AWS service.  The
 * region and service names must match those used by Amazon.
 *
 * If the specified region and/or service are not known to be valid for AWS, or
 * the service is not supported in the specified region, then an invalid QUrl
 * will be returned.
 *
 * @note   An invalid QUrl is one for which QUrl::isValid returns `false`.
 *
 * The \p transport parameter may be used to specify one or more transports to
 * consider.  If the specified AWS endpoint exists, but does not support //any//
 * of the given transports, then an invalid QUrl is returned.
 *
 * Where it makes sense to do so, the resulting QUrl's scheme will be set
 * according to the requested transport.  For example, if the selected transport
 * is AwsEndpoint::HTTPS, then the resulting QUrl's schems will be set to
 * "https".
 *
 * If \p transport includes both AwsEndpoint::HTTP //and// AwsEndpoint::HTTPS,
 * and both are supported by the AWS endpoint, then "https" will be chosed in
 * preference to "http".
 *
 * @note   It is possible for the returned QUrl to specify a host that is not
 *         located in, nor dedicated to the specified region.  For examepl, if
 *         requesting an endpoint for the `iam` service in `ap-southeast-2`, the
 *         return endpoint is for a host (`iam.amazonaws.com`) which provides
 *         the `ami` services for all regions, not just `ap-southeast-2`.
 *         Services known to behave like this include: `cloudfront`, `iam`,
 *         `importexport`, `route53`, and `sts`.
 *
 * Example usage:
 * @code
 * QUrl ec2 = AwsEndpoint::getEndpoint("ap-southeast-2", "ec2");
 * QUrl iam = AwsEndpoint::getEndpoint("ap-southeast-2", "iam");
 * ec2.host(); // "ec2.ap-southeast-2.amazonaws.com"
 * iam.host(); // "iam.amazonaws.com"
 * @endcode
 *
 * @param  regionName   Endpoint's region name.
 * @param  serviceName  Endpoint's service name.
 * @param  transport    Optional network transport(s) for the endpoint.
 *
 * @return  A QUrl representing the AWS endpoint, or an invalid QUrl if there
 *          is no such _known_ AWS endpoint.
 */
QUrl AwsEndpoint::getEndpoint(const QString &regionName, const QString &serviceName,
                              const Transports transport)
{
    AwsEndpointPrivate::loadEndpointData();
    QMutexLocker locker(&AwsEndpointPrivate::mutex);
    if ((!AwsEndpointPrivate::regions.contains(regionName)) ||
        (!AwsEndpointPrivate::regions[regionName].services.contains(serviceName))) {
        return QUrl();
    }
    const AwsEndpointPrivate::RegionEndpointInfo &endpointInfo =
        AwsEndpointPrivate::regions[regionName].services[serviceName];
    if (!(endpointInfo.transports & transport)) {
        return QUrl();
    }

    QUrl url;
    url.setHost(endpointInfo.hostName);
    if ((endpointInfo.transports & HTTPS) && (transport & HTTPS))
        url.setScheme(QLatin1String("https"));
    else if ((endpointInfo.transports & HTTP) && (transport & HTTP))
        url.setScheme(QLatin1String("http"));
    /// @todo  Handle SMTP here?
    return url;
}

/**
 * @brief   Get the name of host represented by this endpoint.
 *
 * @return  Name of host represented by this endpoint.
 */
QString AwsEndpoint::hostName() const
{
    Q_D(const AwsEndpoint);
    return d->hostName;
}

/**
 * @brief  Is a region / service / transport combination supported by Amazon?
 *
 * @param regionName   AWS region name to check support for.
 * @param serviceName  AWS service name to check support for.
 * @param transport    Optional transport to check support for.
 *
 * @return `true` if the service is supported in the \p regionName region for at least
 *         one of the specified transports, `false` otherwise.
 */
bool AwsEndpoint::isSupported(const QString &regionName, const QString &serviceName, const Transports transport)
{
    AwsEndpointPrivate::loadEndpointData();
    QMutexLocker locker(&AwsEndpointPrivate::mutex);
    return ((AwsEndpointPrivate::regions.contains(regionName)) &&
            (AwsEndpointPrivate::regions[regionName].services.contains(serviceName)) &&
            (AwsEndpointPrivate::regions[regionName].services[serviceName].transports & transport));
}

/**
 * @brief  Is the given transport supported by this endpoint?
 *
 * @param  transport  Transport to check for support for.
 *
 * @return `true` is the transport is supported by this endpoint, `false` otherwise.
 */
bool AwsEndpoint::isSupported(const Transport transport) const
{
    return isSupported(regionName(), serviceName(), AwsEndpoint::Transports(transport));
}

/**
 * @brief  Is this endpoint valid?
 *
 * An endpoint is considered valid if the host specified during construction is
 * a known AWS host, and thus we know what region and service(s) it supports.
 *
 * For example:
 * @code
 * AwsEndpoint good(QLatin1String("cloudformation.us-east-1.amazonaws.com"));
 * AwsEndpoint bad(QLatin1String("example.com"));
 * Q_ASSERT(good.isValid()); // good is valid.
 * Q_ASSERT(!bad.isValid()); // bad is not.
 * @endcode
 *
 * @return `true` is this endpoint is valid, `false` otherwise.
 */
bool AwsEndpoint::isValid() const
{
    return ((!hostName().isEmpty()) && (!regionName().isEmpty()) && (!serviceName().isEmpty()));
}

/**
 * @brief  Get this endpoint's full service name.
 *
 * The full service name is a human-readbale form.  For example, the full name for
 * the `cloudsearch` service is `Amazon CloudSearch`.  Likewise, the full name for
 * the `rds` service is `Amazon Relational Database Service`.
 *
 * @return This endpoint's full service name.
 *
 * @see    serviceName
 */
QString AwsEndpoint::fullServiceName() const
{
    return fullServiceName(serviceName());
}

/**
 * @brief  Get the full name for given service.
 *
 * The full service name is a human-readbale form.  For example, the full name for
 * the `cloudsearch` service is `Amazon CloudSearch`.  Likewise, the full name for
 * the `rds` service is `Amazon Relational Database Service`.
 *
 * @param  serviceName  Canonical AWS service name to get the full name of.
 *
 * @return This endpoint's full service name.
 *
 * @see    serviceName
 */
QString AwsEndpoint::fullServiceName(const QString &serviceName)
{
    AwsEndpointPrivate::loadEndpointData();
    QMutexLocker locker(&AwsEndpointPrivate::mutex);
    const QHash<QString, AwsEndpointPrivate::ServiceInfo>::const_iterator
            service = AwsEndpointPrivate::services.constFind(serviceName);
    return (service == AwsEndpointPrivate::services.constEnd()) ? QString() : service.value().fullName;
}

/**
 * @brief  Get this endpoint's _primary_ region name.
 *
 * It is possible for a single endpiont to support multuple regions, such as
 * `iam.amazonaws.com`, which provides the `ami` servive for all (non-government)
 * regions.
 *
 * In these cases, this function returns the primary region in which the service
 * is located.  The AwsEndpoint::supportedRegions function may be used to fetch
 * the full list of regions this endpoint supports.
 *
 * @return This endpoint's region name.
 *
 * @see supportedRegions
 */
QString AwsEndpoint::regionName() const
{
    Q_D(const AwsEndpoint);
    return d->regionName;
}

/**
 * @brief  Get this endpoint's service name.
 *
 * @return This endpoint's service name.
 *
 * @see    fullServiceName
 */
QString AwsEndpoint::serviceName() const
{
    Q_D(const AwsEndpoint);
    return d->serviceName;
}

/**
 * @brief  Get the full list of regions this endpoint supports.
 *
 * Alternatvely, AwsEndpoint::regionName may be used to get this endpoint's
 * _primary_ region.
 *
 * @param  transport  Optional transport to check for support.
 *
 * @return A list of all regions this endpoint supports for //at least one// of
 *         the specified transports.
 *
 * @see    regionName
 */
QStringList AwsEndpoint::supportedRegions(const Transports transport) const
{
    return supportedRegions(serviceName(), transport);
}

/**
 * @brief  Get a list of regions that supported for a given service.
 *
 * @param  serviceName  AWS service to get the supported regions for.
 * @param  transport    Optional transport(s) to check for support.
 *
 * @return A list of AWS regions supported for the given service, for
 *         _at least one_ of the specified transports.
 */
QStringList AwsEndpoint::supportedRegions(const QString &serviceName, const Transports transport)
{
    AwsEndpointPrivate::loadEndpointData();
    QMutexLocker locker(&AwsEndpointPrivate::mutex);

    if (transport == AnyTransport) {
        return AwsEndpointPrivate::services[serviceName].regionNames;
    }

    QStringList regions;
    foreach (const QString &regionName, AwsEndpointPrivate::services[serviceName].regionNames) {
        if (AwsEndpointPrivate::regions[regionName].services[serviceName].transports & transport)
            regions.append(regionName);
    }
    return regions;
}

/**
 * @brief  Get a list of services that support a given region.
 *
 * @param  regionName  AWS region to get the supported services for.
 * @param  transport   Optional transport(s) to check for support.
 *
 * @return A list of AWS services supported for the given region, for
 *         _at least one_ of the specified transports.
 */
QStringList AwsEndpoint::supportedServices(const QString &regionName, const Transports transport)
{
    AwsEndpointPrivate::loadEndpointData();
    QMutexLocker locker(&AwsEndpointPrivate::mutex);

    if (transport == AnyTransport) {
        return AwsEndpointPrivate::regions[regionName].services.keys();
    }

    QStringList serviceNames;
    const AwsEndpointPrivate::RegionServices &services = AwsEndpointPrivate::regions[regionName].services;
    for (AwsEndpointPrivate::RegionServices::const_iterator iter = services.constBegin(); iter != services.constEnd(); ++iter) {
        if (iter.value().transports & transport)
            serviceNames.append(iter.key());
    }
    return serviceNames;
}

/**
 * @internal
 *
 * @class  AwsEndpointPrivate
 *
 * @brief  Private implementation for AwsEndpoint.
 */

QHash<QString, AwsEndpointPrivate::HostInfo> AwsEndpointPrivate::hosts;       ///< Hash of hostnames to HostInfo.
QHash<QString, AwsEndpointPrivate::RegionInfo> AwsEndpointPrivate::regions;   ///< Hash of region names to RegionInfo.
QHash<QString, AwsEndpointPrivate::ServiceInfo> AwsEndpointPrivate::services; ///< Hash of service names to ServiceInfo.

QMutex AwsEndpointPrivate::mutex(QMutex::Recursive); ///< Mutex for protecting access to static members.

/**
 * @internal
 *
 * @brief  Constructs a new AwsEndpointPrivate object.
 *
 * @param  q  Pointer to this object's public AwsEndpoint instance.
 *
 * @see   http://aws-sdk-configurations.amazonwebservices.com/endpoints.xml
 */
AwsEndpointPrivate::AwsEndpointPrivate(AwsEndpoint * const q)
    : q_ptr(q)
{
    loadEndpointData();
}

/**
 * @internal
 *
 * @brief  Load endpoint data
 *
 * This function parses AWS endpoint data in XML format.  The XML data is
 * expected to match the same format as the file provided by Amazon at
 * http://aws-sdk-configurations.amazonwebservices.com/endpoints.xml
 *
 * If _any_ data has been loaded previously, this function will return
 * immediately with no parsing performed.
 *
 * @param  fileName  Name of the endpoint XML data file to load.
 */
void AwsEndpointPrivate::loadEndpointData(const QString &fileName)
{
    QMutexLocker locker(&mutex);
    if (!hosts.empty()) {
        return; // Already loaded.
    }

    // Open the data file.
    QFile file(fileName);
    loadEndpointData(file);
}

/**
 * @internal
 *
 * @brief  Load endpoint data
 *
 * This function parses AWS endpoint data in XML format.  The XML data is
 * expected to match the same format as the file provided by Amazon at
 * http://aws-sdk-configurations.amazonwebservices.com/endpoints.xml
 *
 * If _any_ data has been loaded previously, this function will return
 * immediately with no parsing performed.
 *
 * @param  device Device to parse XML data from.
 */
void AwsEndpointPrivate::loadEndpointData(QIODevice &device)
{
    QMutexLocker locker(&mutex);
    if (!hosts.empty()) {
        return; // Already loaded.
    }

    // Open the device, if not already open.
    if ((!device.isOpen()) && (!device.open(QIODevice::ReadOnly))) {
        qWarning() << "AwsEndpoint:" << device.errorString();
        return;
    }

    // Parse the data.
    QXmlStreamReader xml(&device);
    loadEndpointData(xml);
}

/**
 * @internal
 *
 * @brief  Load endpoint data
 *
 * This function parses AWS endpoint data in XML format.  The XML data is
 * expected to match the same format as the file provided by Amazon at
 * http://aws-sdk-configurations.amazonwebservices.com/endpoints.xml
 *
 * If _any_ data has been loaded previously, this function will return
 * immediately with no parsing performed.
 *
 * @param  xml  XML document to parse.
 */
void AwsEndpointPrivate::loadEndpointData(QXmlStreamReader &xml)
{
    QMutexLocker locker(&mutex);
    if (!hosts.empty()) {
        return; // Already loaded.
    }

    // Parse the XML data.
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("Regions")) {
            parseRegions(xml);
        } else if (xml.name() == QLatin1String("Services")) {
            parseServices(xml);
        } else if (xml.name() != QLatin1String("XML")) {
            qDebug() << Q_FUNC_INFO << "ignoring" << xml.name();
        }
    }
    if (xml.hasError()) {
        qWarning() << "AwsEndpoint:" << xml.errorString();
    }
    Q_ASSERT(!xml.hasError());
    Q_ASSERT(!hosts.isEmpty());
    Q_ASSERT(!regions.hasError());
    Q_ASSERT(!services.hasError());
}

/**
 * @internal
 *
 * @brief  Parse a `Region` element from Amazon's endpoint XML data
 *
 * This function parses XML elements like:
 *
 * @code{xml}
 * <Region>
 *   <Name>us-east-1</Name>
 *   <Endpoint>
 *     <ServiceName>cloudformation</ServiceName>
 *     <Http>false</Http>
 *     <Https>true</Https>
 *     <Hostname>cloudformation.us-east-1.amazonaws.com</Hostname>
 *   </Endpoint>
 *   <Endpoint>
 *     <ServiceName>cloudfront</ServiceName>
 *     <Http>true</Http>
 *     <Https>true</Https>
 *     <Hostname>cloudfront.amazonaws.com</Hostname>
 *   </Endpoint>
 * </Region>
 * @endcode
 *
 * The parsed entries are automatically added to AwsEndpointPrivate::hosts
 * and AwsEndpointPrivate::regions.
 *
 * @param  xml  XML element to parse.
 *
 * @see    parseRegion
 */
void AwsEndpointPrivate::parseRegion(QXmlStreamReader &xml)
{
    QString regionName;
    while ((!xml.atEnd()) && (xml.readNextStartElement())) {
        if (xml.name() == QLatin1String("Name")) {
            regionName = xml.readElementText();
        } else if (xml.name() == QLatin1String("Endpoint")) {
            Q_ASSERT(!regionName.isEmpty());
            RegionEndpointInfo endpoint;
            QString serviceName;
            while ((!xml.atEnd()) && (xml.readNextStartElement())) {
                if (xml.name() == QLatin1String("ServiceName")) {
                    serviceName = xml.readElementText();
                } else if (xml.name() == QLatin1String("Http")) {
                    if (xml.readElementText() == QLatin1String("true")) {
                        endpoint.transports |= AwsEndpoint::HTTP;
                    }
                } else if (xml.name() == QLatin1String("Https")) {
                    if (xml.readElementText() == QLatin1String("true")) {
                        endpoint.transports |= AwsEndpoint::HTTPS;
                    }
                } else if (xml.name() == QLatin1String("Hostname")) {
                    endpoint.hostName = xml.readElementText();
                } else {
                    qDebug() << Q_FUNC_INFO << "ignoring" << xml.name();
                    xml.skipCurrentElement();
                }
            }
            Q_ASSERT(!serviceName.isEmpty());

            if (serviceName == QLatin1String("email")) {
                endpoint.transports |= AwsEndpoint::SMTP;
            }

            Q_ASSERT((!hosts.contains(endpoint.hostName)) || (hosts.value(endpoint.hostName).serviceName == serviceName));
            hosts[endpoint.hostName].regionNames.append(regionName);
            hosts[endpoint.hostName].serviceName  = serviceName;
            regions[regionName].services[serviceName] = endpoint;
            //qDebug() << Q_FUNC_INFO << regionName << serviceName << (int)endpoint.transports << endpoint.hostName;
        } else {
            qDebug() << Q_FUNC_INFO << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @brief  Parse a `Regions` element from Amazon's endpoint XML data
 *
 * This function parse an XML element containing a list of `Region` elements.
 * See AwsEndpointPrivate::parseRegion for the `Region` element format.
 *
 * The parsed entries are automatically added to AwsEndpointPrivate::hosts
 * and AwsEndpointPrivate::regions.
 *
 * @param  xml  XML element containing regions to parse.
 *
 * @see    parseRegion
 */
void AwsEndpointPrivate::parseRegions(QXmlStreamReader &xml)
{
    while ((!xml.atEnd()) && (xml.readNextStartElement())) {
        if (xml.name() == QLatin1String("Region")) {
            parseRegion(xml);
        } else {
            qDebug() << Q_FUNC_INFO << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @brief  Parse a `Service` element from Amazon's endpoint XML data
 *
 * This function parses XML elements like:
 *
 * @code{xml}
 * <Service>
 *   <Name>cloudformation</Name>
 *   <FullName>Amazon CloudFormation</FullName>
 *   <RegionName>us-east-1</RegionName>
 *   <RegionName>us-west-1</RegionName>
 *   <RegionName>us-west-2</RegionName>
 *   <RegionName>eu-west-1</RegionName>
 *   <RegionName>ap-northeast-1</RegionName>
 *   <RegionName>ap-southeast-1</RegionName>
 *   <RegionName>ap-southeast-2</RegionName>
 *   <RegionName>sa-east-1</RegionName>
 * </Service>
 * @endcode
 *
 * The parsed entries are automatically added to AwsEndpointPrivate::services.
 *
 * @param  xml  XML element to parse.
 *
 * @see    parseServices
 */
void AwsEndpointPrivate::parseService(QXmlStreamReader &xml)
{
    QString serviceName;
    while ((!xml.atEnd()) && (xml.readNextStartElement())) {
        if (xml.name() == QLatin1String("Name")) {
            serviceName = xml.readElementText();
        } else if (xml.name() == QLatin1String("FullName")) {
            Q_ASSERT(!serviceName.isEmpty());
            services[serviceName].fullName = xml.readElementText();
        } else if (xml.name() == QLatin1String("RegionName")) {
            Q_ASSERT(!serviceName.isEmpty());
            const QString &regionName = xml.readElementText();
            services[serviceName].regionNames.append(regionName);
            //qDebug() << Q_FUNC_INFO << serviceName << services[serviceName].fullName << regionName;
        } else {
            qDebug() << Q_FUNC_INFO << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @brief  Parse a `Services` element from Amazon's endpoint XML data
 *
 * This function parses an XML element containing a list of `Service` elements.
 * See AwsEndpointPrivate::parseServices for the `Service` element format.
 *
 * The parsed entries are automatically added to AwsEndpointPrivate::services.
 *
 * @param  xml  XML element containing services to parse.
 *
 * @see    parseService
 */
void AwsEndpointPrivate::parseServices(QXmlStreamReader &xml)
{
    while ((!xml.atEnd()) && (xml.readNextStartElement())) {
        if (xml.name() == QLatin1String("Service")) {
            parseService(xml);
        } else {
            qDebug() << Q_FUNC_INFO << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

QTAWS_END_NAMESPACE
