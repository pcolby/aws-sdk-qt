/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "awsendpoint.h"
#include "awsendpoint_p.h"

#include <QDebug>
#include <QFile>
#include <QMutexLocker>

namespace QtAws {
namespace Core {

/*!
 * \class QtAws::Core::AwsEndpoint
 * \brief The AwsEndpoint class provides information about AWS endpoints.
 *
 * \inmodule QtAwsCore
 *
 * \note  This class provides fairly low-level access to AWS endpoint data.
 *        You should consider using the AwsRegion and/or various
 *        AwsService-derived classes in preference to using this class
 *        directly where possible.
 *
 * This class parses the `endpoint.xml` data available at
 * http://aws-sdk-configurations.amazonwebservices.com/endpoints.xml
 *
 * The `endpoint.xml` file is embedded as a resource in the the AWS SDK for Qt
 * library - not fetched remotely at runtime.
 *
 * Example usage:
 * \code
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
 * \endcode
 *
 * \sa QtAws::Core::AwsRegion
 */

/*!
 * \enum AwsEndpoint::Transport
 *
 * This enum describes types of network transports supported by AWS endpoints.
 *
 * \value HTTP         Hypertext Transfer Protocol.
 * \value HTTPS        Hypertext Transfer Protocol with transport layer security.
 * \value SMTP         Simple Mail Transfer Protocol.
 * \value AnyTransport Any available transport.
 *
 * Not all transports are supported by all endpoints. See isSupported for example.
 */

/*!
 * Constructs an AwsEndpoint object for a UTF-8 encoded AWS \a hostName.
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

/*!
 * Constructs an AwsEndpoint object for AWS \a hostName.
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

/*!
 * Destroys the AWS endpoint.
 */
AwsEndpoint::~AwsEndpoint()
{
    delete d_ptr;
}

/*!
 * Returns the endpoint QUrl for AWS service \a serviceName in region
 * \a regionName, or an invalid QUrl if there is no such endpoint.
 *
 * This function will return a QUrl object for accessing an AWS service.  The
 * region and service names must match those used by Amazon.
 *
 * If the specified region and/or service are not known to be valid for AWS, or
 * the service is not supported in the specified region, then an invalid QUrl
 * will be returned.
 *
 * \note An invalid QUrl is one for which QUrl::isValid() returns \c false.
 *
 * The \a transport parameter may be used to specify one or more transports to
 * consider.  If the specified AWS endpoint exists, but does not support \e any
 * of the given transports, then an invalid QUrl is returned.
 *
 * Where it makes sense to do so, the resulting QUrl's scheme will be set
 * according to the requested transport.  For example, if the selected transport
 * is AwsEndpoint::HTTPS, then the resulting QUrl's schems will be set to
 * \c "https".
 *
 * If \a transport includes both AwsEndpoint::HTTP \e and AwsEndpoint::HTTPS,
 * and both are supported by the AWS endpoint, then \c "https" will be used in
 * preference to \c "http".
 *
 * \note   It is possible for the returned QUrl to specify a host that is not
 *         located in, nor dedicated to the specified region.  For examepl, if
 *         requesting an endpoint for the \c iam service in \c ap-southeast-2,
 *         the returned endpoint is for a host (\c iam.amazonaws.com) which provides
 *         the \c ami services for all regions, not just \c ap-southeast-2.
 *         Services known to behave like this include: \c cloudfront, \c iam,
 *         \c importexport, \c route53, and \c sts.
 *
 * Example usage:
 * \code
 * QUrl ec2 = AwsEndpoint::getEndpoint("ap-southeast-2", "ec2");
 * QUrl iam = AwsEndpoint::getEndpoint("ap-southeast-2", "iam");
 * ec2.host(); // "ec2.ap-southeast-2.amazonaws.com"
 * iam.host(); // "iam.amazonaws.com"
 * \endcode
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

/*!
 * Returns the name of the host represented by this endpoint.
 */
QString AwsEndpoint::hostName() const
{
    Q_D(const AwsEndpoint);
    return d->hostName;
}

/*!
 * Returns \c true if the given \a regionName, \a serviceName, and \a transport
 * combination supported by AWS; \c false otherwise.
 */
bool AwsEndpoint::isSupported(const QString &regionName, const QString &serviceName, const Transports transport)
{
    AwsEndpointPrivate::loadEndpointData();
    QMutexLocker locker(&AwsEndpointPrivate::mutex);
    return ((AwsEndpointPrivate::regions.contains(regionName)) &&
            (AwsEndpointPrivate::regions[regionName].services.contains(serviceName)) &&
            (AwsEndpointPrivate::regions[regionName].services[serviceName].transports & transport));
}

/*!
 * Returns \c true if the given \c transport is supported by this endpoint; \c false otherwise.
 */
bool AwsEndpoint::isSupported(const Transport transport) const
{
    return isSupported(regionName(), serviceName(), AwsEndpoint::Transports(transport));
}

/*!
 * Returns \c true is this endpoint is valid; \c false otherwise.
 *
 * The endpoint is considered valid if the host specified during construction is
 * a known AWS host, and thus we know what region and service(s) it supports.
 *
 * For example:
 * \code
 * AwsEndpoint good(QLatin1String("cloudformation.us-east-1.amazonaws.com"));
 * AwsEndpoint bad(QLatin1String("example.com"));
 * Q_ASSERT(good.isValid()); // good is valid.
 * Q_ASSERT(!bad.isValid()); // bad is not.
 * \endcode
 */
bool AwsEndpoint::isValid() const
{
    return ((!hostName().isEmpty()) && (!regionName().isEmpty()) && (!serviceName().isEmpty()));
}

/*!
 * Returns the endpoint's full service name.
 *
 * The full service name is a human-readbale form.  For example, the full name for
 * the `cloudsearch` service is `Amazon CloudSearch`.  Likewise, the full name for
 * the `rds` service is `Amazon Relational Database Service`.
 *
 * \sa serviceName
 */
QString AwsEndpoint::fullServiceName() const
{
    return fullServiceName(serviceName());
}

/*!
 * Returns the full service name for the given \a serviceName.
 *
 * The full service name is a human-readbale form.  For example, the full name for
 * the `cloudsearch` service is `Amazon CloudSearch`.  Likewise, the full name for
 * the `rds` service is `Amazon Relational Database Service`.
 *
 * \sa serviceName
 */
QString AwsEndpoint::fullServiceName(const QString &serviceName)
{
    AwsEndpointPrivate::loadEndpointData();
    QMutexLocker locker(&AwsEndpointPrivate::mutex);
    const QHash<QString, AwsEndpointPrivate::ServiceInfo>::const_iterator
            service = AwsEndpointPrivate::services.constFind(serviceName);
    return (service == AwsEndpointPrivate::services.constEnd()) ? QString() : service.value().fullName;
}

/*!
 * Returns the endpoint's \e primary region name.
 *
 * It is possible for a single endpiont to support multuple regions, such as
 * \c iam.amazonaws.com, which provides the \c ami servive for all (non-government)
 * regions.
 *
 * In these cases, this function returns the primary region in which the service
 * is located.  The AwsEndpoint::supportedRegions function may be used to fetch
 * the full list of regions this endpoint supports.
 *
 * \sa supportedRegions
 */
QString AwsEndpoint::regionName() const
{
    Q_D(const AwsEndpoint);
    return d->regionName;
}

/*!
 * Returns the endpoint's service name.
 *
 * \sa fullServiceName
 */
QString AwsEndpoint::serviceName() const
{
    Q_D(const AwsEndpoint);
    return d->serviceName;
}

/*!
 * Returns a list of regions the endpoint supports for \e {at least one} of the
 * the given \a {transport}s.
 *
 * Alternatvely, AwsEndpoint::regionName may be used to get this endpoint's
 * \e primary region.
 */
QStringList AwsEndpoint::supportedRegions(const Transports transport) const
{
    return supportedRegions(serviceName(), transport);
}

/*!
 * Returns a list \a serviceName regions that support \e {at least one} of the
 * the given \a {transport}s.
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

/*!
 * Returns a list \a regionName services that support \e {at least one} of the
 * the given \a {transport}s.
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

/*!
 * \class QtAws::Core::AwsEndpointPrivate
 * \brief The AwsEndpointPrivate class provides private implementation for AwsEndpoint.
 * \internal
 *
 * \inmodule QtAwsCore
 */

QHash<QString, AwsEndpointPrivate::HostInfo> AwsEndpointPrivate::hosts;       ///< Hash of hostnames to HostInfo.
QHash<QString, AwsEndpointPrivate::RegionInfo> AwsEndpointPrivate::regions;   ///< Hash of region names to RegionInfo.
QHash<QString, AwsEndpointPrivate::ServiceInfo> AwsEndpointPrivate::services; ///< Hash of service names to ServiceInfo.

QMutex AwsEndpointPrivate::mutex(QMutex::Recursive); ///< Mutex for protecting access to static members.

/*!
 * Constructs an AwsEndpointPrivate object with public implementation \a q.
 */
AwsEndpointPrivate::AwsEndpointPrivate(AwsEndpoint * const q)
    : q_ptr(q)
{
    loadEndpointData();
}

/*!
 * \typedef AwsEndpointPrivate::RegionServices
 *
 * Synonym for QHash<QString, RegionEndpointInfo>.
 */

/*!
 * Loads AWS endpoint data from \a fileName.
 *
 * This function parses AWS endpoint data in XML format.  The XML data is
 * expected to match the same format as the file provided by Amazon at
 * http://aws-sdk-configurations.amazonwebservices.com/endpoints.xml
 *
 * If \e any data has been loaded previously, this function will return
 * immediately with no parsing performed.
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

/*!
 * Loads AWS endpoint data from \a device.
 *
 * This function parses AWS endpoint data in XML format.  The XML data is
 * expected to match the same format as the file provided by Amazon at
 * http://aws-sdk-configurations.amazonwebservices.com/endpoints.xml
 *
 * If \e any data has been loaded previously, this function will return
 * immediately with no parsing performed.
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

/*!
 * Loads AWS endpoint data from \a xml.
 *
 * This function parses AWS endpoint data in XML format.  The XML data is
 * expected to match the same format as the file provided by Amazon at
 * http://aws-sdk-configurations.amazonwebservices.com/endpoints.xml
 *
 * If \e any data has been loaded previously, this function will return
 * immediately with no parsing performed.
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
            qDebug() << "ignoring" << xml.name();
        }
    }
    if (xml.hasError()) {
        qWarning() << "AwsEndpoint:" << xml.errorString();
    }
    Q_ASSERT(!xml.hasError());
    Q_ASSERT(!hosts.isEmpty());
    Q_ASSERT(!regions.isEmpty());
    Q_ASSERT(!services.isEmpty());
}

/*!
 * Parses a \c Region element from the Amazon endpoint XML data \a xml.
 *
 * This function parses XML elements like:
 *
 * \code{xml}
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
 * \endcode
 *
 * The parsed entries are automatically added to AwsEndpointPrivate::hosts
 * and AwsEndpointPrivate::regions.
 *
 * \sa parseRegions
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
                    qDebug() << "ignoring" << xml.name();
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
            //qDebug() << regionName << serviceName << (int)endpoint.transports << endpoint.hostName;
        } else {
            qDebug() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/*!
 * Parses a \c Regions element from the Amazon endpoint XML data \a xml.
 *
 * This function parse an XML element containing a list of \c Region elements.
 * See AwsEndpointPrivate::parseRegion for the \c Region element format.
 *
 * The parsed entries are automatically added to AwsEndpointPrivate::hosts
 * and AwsEndpointPrivate::regions.
 *
 * \sa parseRegion
 */
void AwsEndpointPrivate::parseRegions(QXmlStreamReader &xml)
{
    while ((!xml.atEnd()) && (xml.readNextStartElement())) {
        if (xml.name() == QLatin1String("Region")) {
            parseRegion(xml);
        } else {
            qDebug() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/*!
 * Parses a \c Service element the Amazon endpoint XML data \a xml.
 *
 * This function parses XML elements like:
 *
 * \code{xml}
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
 * \endcode
 *
 * The parsed entries are automatically added to AwsEndpointPrivate::services.
 *
 * \sa parseServices
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
            //qDebug() << serviceName << services[serviceName].fullName << regionName;
        } else {
            qDebug() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/*!
 * Parses a \c Services element the Amazon endpoint XML data \a xml.
 *
 * This function parses an XML element containing a list of \c Service elements.
 * See AwsEndpointPrivate::parseServices for the \c Service element format.
 *
 * The parsed entries are automatically added to AwsEndpointPrivate::services.
 *
 * \sa parseService
 */
void AwsEndpointPrivate::parseServices(QXmlStreamReader &xml)
{
    while ((!xml.atEnd()) && (xml.readNextStartElement())) {
        if (xml.name() == QLatin1String("Service")) {
            parseService(xml);
        } else {
            qDebug() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

} // namespace Core
} // namespace QtAws
