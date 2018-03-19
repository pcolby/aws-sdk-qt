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

#include "mobileanalyticsclient.h"
#include "mobileanalyticsclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace MobileAnalytics {

/**
 * @class  MobileAnalyticsClient
 *
 * @brief  Client for Amazon Mobile Analytics
 *
 * Amazon Mobile Analytics is a service for collecting, visualizing, and understanding app usage data at
 */

/**
 * @brief  Constructs a new MobileAnalyticsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
MobileAnalyticsClient::MobileAnalyticsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MobileAnalyticsClientPrivate(this), parent)
{
    Q_D(MobileAnalyticsClient);
    d->apiVersion = QStringLiteral("2014-06-05");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("mobileanalytics");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Mobile Analytics");
    d->serviceName = QStringLiteral("mobileanalytics");
}

/**
 * @brief  Constructs a new MobileAnalyticsClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
MobileAnalyticsClient::MobileAnalyticsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MobileAnalyticsClientPrivate(this), parent)
{
    Q_D(MobileAnalyticsClient);
    d->apiVersion = QStringLiteral("2014-06-05");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("mobileanalytics");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Mobile Analytics");
    d->serviceName = QStringLiteral("mobileanalytics");
}

/**
 * The PutEvents operation records one or more events. You can have up to 1,500 unique custom events per app, any
 * combination of up to 40 attributes and metrics per custom event, and any number of attribute or metric
 *
 * @param  request Request to send to Amazon Mobile Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutEventsResponse * MobileAnalyticsClient::putEvents(const PutEventsRequest &request)
{

}

/**
 * @internal
 *
 * @class  MobileAnalyticsClientPrivate
 *
 * @brief  Private implementation for MobileAnalyticsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MobileAnalyticsClientPrivate object.
 *
 * @param  q  Pointer to this object's public MobileAnalyticsClient instance.
 */
MobileAnalyticsClientPrivate::MobileAnalyticsClientPrivate(MobileAnalyticsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace MobileAnalytics
} // namespace AWS
