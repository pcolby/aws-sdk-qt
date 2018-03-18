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

#include "healthclient.h"
#include "healthclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Health {

/**
 * @class  HealthClient
 *
 * @brief  Client for AWS Health APIs and Notifications
 *
 * <fullname>AWS Health</fullname>
 *
 * The AWS Health API provides programmatic access to the AWS Health information that is presented in the <a
 * href="https://phd.aws.amazon.com/phd/home#/">AWS Personal Health Dashboard</a>. You can get information about events
 * that affect your AWS
 *
 * resources> <ul> <li>
 *
 * <a>DescribeEvents</a>: Summary information about
 *
 * events> </li> <li>
 *
 * <a>DescribeEventDetails</a>: Detailed information about one or more
 *
 * events> </li> <li>
 *
 * <a>DescribeAffectedEntities</a>: Information about AWS resources that are affected by one or more
 *
 * events> </li> </ul>
 *
 * In addition, these operations provide information about event types and summary counts of events or affected
 *
 * entities> <ul> <li>
 *
 * <a>DescribeEventTypes</a>: Information about the kinds of events that AWS Health
 *
 * tracks> </li> <li>
 *
 * <a>DescribeEventAggregates</a>: A count of the number of events that meet specified
 *
 * criteria> </li> <li>
 *
 * <a>DescribeEntityAggregates</a>: A count of the number of affected entities that meet specified
 *
 * criteria> </li> </ul>
 *
 * The Health API requires a Business or Enterprise support plan from <a href="http://aws.amazon.com/premiumsupport/">AWS
 * Support</a>. Calling the Health API from an account that does not have a Business or Enterprise support plan causes a
 * <code>SubscriptionRequiredException</code>.
 *
 * </p
 *
 * For authentication of requests, AWS Health uses the <a
 * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 *
 * Process</a>>
 *
 * See the <a href="http://docs.aws.amazon.com/health/latest/ug/what-is-aws-health.html">AWS Health User Guide</a> for
 * information about how to use the
 *
 * API>
 *
 * <b>Service Endpoint</b>
 *
 * </p
 *
 * The HTTP endpoint for the AWS Health API
 *
 * is> <ul> <li>
 *
 * https://health.us-east-1.amazonaws.com
 */

/**
 * @brief  Constructs a new HealthClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
HealthClient::HealthClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new HealthClientPrivate(this), parent)
{
    Q_D(HealthClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new HealthClient object.
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
HealthClient::HealthClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new HealthClientPrivate(this), parent)
{
    Q_D(HealthClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  HealthClientPrivate
 *
 * @brief  Private implementation for HealthClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new HealthClientPrivate object.
 *
 * @param  q  Pointer to this object's public HealthClient instance.
 */
HealthClientPrivate::HealthClientPrivate(HealthClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Health
} // namespace AWS
