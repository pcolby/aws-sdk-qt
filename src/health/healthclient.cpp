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

#include "healthclient.h"
#include "healthclient_p.h"

#include "core/awssignaturev4.h"
#include "describeaffectedentitiesrequest.h"
#include "describeaffectedentitiesresponse.h"
#include "describeentityaggregatesrequest.h"
#include "describeentityaggregatesresponse.h"
#include "describeeventaggregatesrequest.h"
#include "describeeventaggregatesresponse.h"
#include "describeeventdetailsrequest.h"
#include "describeeventdetailsresponse.h"
#include "describeeventtypesrequest.h"
#include "describeeventtypesresponse.h"
#include "describeeventsrequest.h"
#include "describeeventsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Health
 * \brief The QtAws::Health contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Health {

/*!
 * \class QtAws::Health::HealthClient
 *
 * \brief The HealthClient class provides access the AWS Health APIs and Notifications service.
 *
 * \ingroup Health
 *
 *  <fullname>AWS Health</fullname>
 * 
 *  The AWS Health API provides programmatic access to the AWS Health information that is presented in the <a
 *  href="https://phd.aws.amazon.com/phd/home#/">AWS Personal Health Dashboard</a>. You can get information about events
 *  that affect your AWS
 * 
 *  resources> <ul> <li>
 * 
 *  <a>DescribeEvents</a>: Summary information about
 * 
 *  events> </li> <li>
 * 
 *  <a>DescribeEventDetails</a>: Detailed information about one or more
 * 
 *  events> </li> <li>
 * 
 *  <a>DescribeAffectedEntities</a>: Information about AWS resources that are affected by one or more
 * 
 *  events> </li> </ul>
 * 
 *  In addition, these operations provide information about event types and summary counts of events or affected
 * 
 *  entities> <ul> <li>
 * 
 *  <a>DescribeEventTypes</a>: Information about the kinds of events that AWS Health
 * 
 *  tracks> </li> <li>
 * 
 *  <a>DescribeEventAggregates</a>: A count of the number of events that meet specified
 * 
 *  criteria> </li> <li>
 * 
 *  <a>DescribeEntityAggregates</a>: A count of the number of affected entities that meet specified
 * 
 *  criteria> </li> </ul>
 * 
 *  The Health API requires a Business or Enterprise support plan from <a href="http://aws.amazon.com/premiumsupport/">AWS
 *  Support</a>. Calling the Health API from an account that does not have a Business or Enterprise support plan causes a
 *  <code>SubscriptionRequiredException</code>.
 * 
 *  </p
 * 
 *  For authentication of requests, AWS Health uses the <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  See the <a href="http://docs.aws.amazon.com/health/latest/ug/what-is-aws-health.html">AWS Health User Guide</a> for
 *  information about how to use the
 * 
 *  API>
 * 
 *  <b>Service Endpoint</b>
 * 
 *  </p
 * 
 *  The HTTP endpoint for the AWS Health API
 * 
 *  is> <ul> <li>
 * 
 *  https://health.us-east-1.amazonaws.com
 */

/*!
 * \brief Constructs a HealthClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
HealthClient::HealthClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new HealthClientPrivate(this), parent)
{
    Q_D(HealthClient);
    d->apiVersion = QStringLiteral("2016-08-04");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("health");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Health APIs and Notifications");
    d->serviceName = QStringLiteral("health");
}

/*!
 * \overload HealthClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
HealthClient::HealthClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new HealthClientPrivate(this), parent)
{
    Q_D(HealthClient);
    d->apiVersion = QStringLiteral("2016-08-04");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("health");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Health APIs and Notifications");
    d->serviceName = QStringLiteral("health");
}

/*!
 * Returns a list of entities that have been affected by the specified events, based on the specified filter criteria.
 * Entities can refer to individual customer resources, groups of customer resources, or any other construct, depending on
 * the AWS service. Events that have impact beyond that of the affected entities, or where the extent of impact is unknown,
 * include at least one entity indicating
 *
 * this>
 *
 * At least one event ARN is required. Results are sorted by the <code>lastUpdatedTime</code> of the entity, starting with
 * the most
 *
 * @param  request Request to send to AWS Health APIs and Notifications.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAffectedEntitiesResponse * HealthClient::describeAffectedEntities(const DescribeAffectedEntitiesRequest &request)
{
    return qobject_cast<DescribeAffectedEntitiesResponse *>(send(request));
}

/*!
 * Returns the number of entities that are affected by each of the specified events. If no events are specified, the counts
 * of all affected entities are
 *
 * @param  request Request to send to AWS Health APIs and Notifications.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEntityAggregatesResponse * HealthClient::describeEntityAggregates(const DescribeEntityAggregatesRequest &request)
{
    return qobject_cast<DescribeEntityAggregatesResponse *>(send(request));
}

/*!
 * Returns the number of events of each event type (issue, scheduled change, and account notification). If no filter is
 * specified, the counts of all events in each category are
 *
 * @param  request Request to send to AWS Health APIs and Notifications.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventAggregatesResponse * HealthClient::describeEventAggregates(const DescribeEventAggregatesRequest &request)
{
    return qobject_cast<DescribeEventAggregatesResponse *>(send(request));
}

/*!
 * Returns detailed information about one or more specified events. Information includes standard event data (region,
 * service, etc., as returned by <a>DescribeEvents</a>), a detailed event description, and possible additional metadata
 * that depends upon the nature of the event. Affected entities are not included; to retrieve those, use the
 * <a>DescribeAffectedEntities</a>
 *
 * operation>
 *
 * If a specified event cannot be retrieved, an error message is returned for that
 *
 * @param  request Request to send to AWS Health APIs and Notifications.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventDetailsResponse * HealthClient::describeEventDetails(const DescribeEventDetailsRequest &request)
{
    return qobject_cast<DescribeEventDetailsResponse *>(send(request));
}

/*!
 * Returns the event types that meet the specified filter criteria. If no filter criteria are specified, all event types
 * are returned, in no particular
 *
 * @param  request Request to send to AWS Health APIs and Notifications.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventTypesResponse * HealthClient::describeEventTypes(const DescribeEventTypesRequest &request)
{
    return qobject_cast<DescribeEventTypesResponse *>(send(request));
}

/*!
 * Returns information about events that meet the specified filter criteria. Events are returned in a summary form and do
 * not include the detailed description, any additional metadata that depends on the event type, or any affected resources.
 * To retrieve that information, use the <a>DescribeEventDetails</a> and <a>DescribeAffectedEntities</a>
 *
 * operations>
 *
 * If no filter criteria are specified, all events are returned. Results are sorted by <code>lastModifiedTime</code>,
 * starting with the most
 *
 * @param  request Request to send to AWS Health APIs and Notifications.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventsResponse * HealthClient::describeEvents(const DescribeEventsRequest &request)
{
    return qobject_cast<DescribeEventsResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  HealthClientPrivate
 *
 * @brief  Private implementation for HealthClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new HealthClientPrivate object.
 *
 * @param  q  Pointer to this object's public HealthClient instance.
 */
HealthClientPrivate::HealthClientPrivate(HealthClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Health
} // namespace QtAws
