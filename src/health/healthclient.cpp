/*
    Copyright 2013-2021 Paul Colby

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
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "healthclient.h"
#include "healthclient_p.h"

#include "core/awssignaturev4.h"
#include "describeaffectedaccountsfororganizationrequest.h"
#include "describeaffectedaccountsfororganizationresponse.h"
#include "describeaffectedentitiesrequest.h"
#include "describeaffectedentitiesresponse.h"
#include "describeaffectedentitiesfororganizationrequest.h"
#include "describeaffectedentitiesfororganizationresponse.h"
#include "describeentityaggregatesrequest.h"
#include "describeentityaggregatesresponse.h"
#include "describeeventaggregatesrequest.h"
#include "describeeventaggregatesresponse.h"
#include "describeeventdetailsrequest.h"
#include "describeeventdetailsresponse.h"
#include "describeeventdetailsfororganizationrequest.h"
#include "describeeventdetailsfororganizationresponse.h"
#include "describeeventtypesrequest.h"
#include "describeeventtypesresponse.h"
#include "describeeventsrequest.h"
#include "describeeventsresponse.h"
#include "describeeventsfororganizationrequest.h"
#include "describeeventsfororganizationresponse.h"
#include "describehealthservicestatusfororganizationrequest.h"
#include "describehealthservicestatusfororganizationresponse.h"
#include "disablehealthserviceaccessfororganizationrequest.h"
#include "disablehealthserviceaccessfororganizationresponse.h"
#include "enablehealthserviceaccessfororganizationrequest.h"
#include "enablehealthserviceaccessfororganizationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Health
 * \brief Contains classess for accessing AWS Health APIs and Notifications.
 *
 * \inmodule QtAwsHealth
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Health {

/*!
 * \class QtAws::Health::HealthClient
 * \brief The HealthClient class provides access to the AWS Health APIs and Notifications service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsHealth
 *
 *  <fullname>Health</fullname>
 * 
 *  The Health API provides programmatic access to the Health information that appears in the <a
 *  href="https://phd.aws.amazon.com/phd/home#/">Personal Health Dashboard</a>. You can use the API operations to get
 *  information about events that might affect your Amazon Web Services services and
 * 
 *  resources> <note> <ul> <li>
 * 
 *  You must have a Business, Enterprise On-Ramp, or Enterprise Support plan from <a
 *  href="http://aws.amazon.com/premiumsupport/">Amazon Web Services Support</a> to use the Health API. If you call the
 *  Health API from an Amazon Web Services account that doesn't have a Business, Enterprise On-Ramp, or Enterprise Support
 *  plan, you receive a <code>SubscriptionRequiredException</code>
 * 
 *  error> </li> <li>
 * 
 *  You can use the Health endpoint health.us-east-1.amazonaws.com (HTTPS) to call the Health API operations. Health
 *  supports a multi-Region application architecture and has two regional endpoints in an active-passive configuration. You
 *  can use the high availability endpoint example to determine which Amazon Web Services Region is active, so that you can
 *  get the latest information from the API. For more information, see <a
 *  href="https://docs.aws.amazon.com/health/latest/ug/health-api.html">Accessing the Health API</a> in the <i>Health User
 * 
 *  Guide</i>> </li> </ul> </note>
 * 
 *  For authentication of requests, Health uses the <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  If your Amazon Web Services account is part of Organizations, you can use the Health organizational view feature. This
 *  feature provides a centralized view of Health events across all accounts in your organization. You can aggregate Health
 *  events in real time to identify accounts in your organization that are affected by an operational event or get notified
 *  of security vulnerabilities. Use the organizational view API operations to enable this feature and return event
 *  information. For more information, see <a
 *  href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating Health events</a> in the <i>Health
 *  User
 * 
 *  Guide</i>> <note>
 * 
 *  When you use the Health API operations to return Health events, see the following
 * 
 *  recommendations> <ul> <li>
 * 
 *  Use the <a
 *  href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html#AWSHealth-Type-Event-eventScopeCode">eventScopeCode</a>
 *  parameter to specify whether to return Health events that are public or
 * 
 *  account-specific> </li> <li>
 * 
 *  Use pagination to view all events from the response. For example, if you call the
 *  <code>DescribeEventsForOrganization</code> operation to get all events in your organization, you might receive several
 *  page results. Specify the <code>nextToken</code> in the next request to return more
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
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
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
 * Sends \a request to the HealthClient service, and returns a pointer to an
 * DescribeAffectedAccountsForOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of accounts in the organization from Organizations that are affected by the provided event. For more
 * information about the different types of Health events, see <a
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>.
 *
 * </p
 *
 * Before you can call this operation, you must first enable Health to work with Organizations. To do this, call the <a
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
 * operation from your organization's management
 *
 * account> <note>
 *
 * This API operation uses pagination. Specify the <code>nextToken</code> parameter in the next request to return more
 */
DescribeAffectedAccountsForOrganizationResponse * HealthClient::describeAffectedAccountsForOrganization(const DescribeAffectedAccountsForOrganizationRequest &request)
{
    return qobject_cast<DescribeAffectedAccountsForOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthClient service, and returns a pointer to an
 * DescribeAffectedEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of entities that have been affected by the specified events, based on the specified filter criteria.
 * Entities can refer to individual customer resources, groups of customer resources, or any other construct, depending on
 * the Amazon Web Services service. Events that have impact beyond that of the affected entities, or where the extent of
 * impact is unknown, include at least one entity indicating
 *
 * this>
 *
 * At least one event ARN is
 *
 * required> <note> <ul> <li>
 *
 * This API operation uses pagination. Specify the <code>nextToken</code> parameter in the next request to return more
 *
 * results> </li> <li>
 *
 * This operation supports resource-level permissions. You can use this operation to allow or deny access to specific
 * Health events. For more information, see <a
 * href="https://docs.aws.amazon.com/health/latest/ug/security_iam_id-based-policy-examples.html#resource-action-based-conditions">Resource-
 * and action-based conditions</a> in the <i>Health User
 */
DescribeAffectedEntitiesResponse * HealthClient::describeAffectedEntities(const DescribeAffectedEntitiesRequest &request)
{
    return qobject_cast<DescribeAffectedEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthClient service, and returns a pointer to an
 * DescribeAffectedEntitiesForOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of entities that have been affected by one or more events for one or more accounts in your organization
 * in Organizations, based on the filter criteria. Entities can refer to individual customer resources, groups of customer
 * resources, or any other construct, depending on the Amazon Web Services
 *
 * service>
 *
 * At least one event Amazon Resource Name (ARN) and account ID are
 *
 * required>
 *
 * Before you can call this operation, you must first enable Health to work with Organizations. To do this, call the <a
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
 * operation from your organization's management
 *
 * account> <note> <ul> <li>
 *
 * This API operation uses pagination. Specify the <code>nextToken</code> parameter in the next request to return more
 *
 * results> </li> <li>
 *
 * This operation doesn't support resource-level permissions. You can't use this operation to allow or deny access to
 * specific Health events. For more information, see <a
 * href="https://docs.aws.amazon.com/health/latest/ug/security_iam_id-based-policy-examples.html#resource-action-based-conditions">Resource-
 * and action-based conditions</a> in the <i>Health User
 */
DescribeAffectedEntitiesForOrganizationResponse * HealthClient::describeAffectedEntitiesForOrganization(const DescribeAffectedEntitiesForOrganizationRequest &request)
{
    return qobject_cast<DescribeAffectedEntitiesForOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthClient service, and returns a pointer to an
 * DescribeEntityAggregatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the number of entities that are affected by each of the specified
 */
DescribeEntityAggregatesResponse * HealthClient::describeEntityAggregates(const DescribeEntityAggregatesRequest &request)
{
    return qobject_cast<DescribeEntityAggregatesResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthClient service, and returns a pointer to an
 * DescribeEventAggregatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the number of events of each event type (issue, scheduled change, and account notification). If no filter is
 * specified, the counts of all events in each category are
 *
 * returned> <note>
 *
 * This API operation uses pagination. Specify the <code>nextToken</code> parameter in the next request to return more
 */
DescribeEventAggregatesResponse * HealthClient::describeEventAggregates(const DescribeEventAggregatesRequest &request)
{
    return qobject_cast<DescribeEventAggregatesResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthClient service, and returns a pointer to an
 * DescribeEventDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns detailed information about one or more specified events. Information includes standard event data (Amazon Web
 * Services Region, service, and so on, as returned by <a
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEvents.html">DescribeEvents</a>), a detailed
 * event description, and possible additional metadata that depends upon the nature of the event. Affected entities are not
 * included. To retrieve the entities, use the <a
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntities.html">DescribeAffectedEntities</a>
 *
 * operation>
 *
 * If a specified event can't be retrieved, an error message is returned for that
 *
 * event> <note>
 *
 * This operation supports resource-level permissions. You can use this operation to allow or deny access to specific
 * Health events. For more information, see <a
 * href="https://docs.aws.amazon.com/health/latest/ug/security_iam_id-based-policy-examples.html#resource-action-based-conditions">Resource-
 * and action-based conditions</a> in the <i>Health User
 */
DescribeEventDetailsResponse * HealthClient::describeEventDetails(const DescribeEventDetailsRequest &request)
{
    return qobject_cast<DescribeEventDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthClient service, and returns a pointer to an
 * DescribeEventDetailsForOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns detailed information about one or more specified events for one or more Amazon Web Services accounts in your
 * organization. This information includes standard event data (such as the Amazon Web Services Region and service), an
 * event description, and (depending on the event) possible metadata. This operation doesn't return affected entities, such
 * as the resources related to the event. To return affected entities, use the <a
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntitiesForOrganization.html">DescribeAffectedEntitiesForOrganization</a>
 *
 * operation> <note>
 *
 * Before you can call this operation, you must first enable Health to work with Organizations. To do this, call the <a
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
 * operation from your organization's management
 *
 * account> </note>
 *
 * When you call the <code>DescribeEventDetailsForOrganization</code> operation, specify the
 * <code>organizationEventDetailFilters</code> object in the request. Depending on the Health event type, note the
 * following
 *
 * differences> <ul> <li>
 *
 * To return event details for a public event, you must specify a null value for the <code>awsAccountId</code> parameter.
 * If you specify an account ID for a public event, Health returns an error message because public events aren't specific
 * to an
 *
 * account> </li> <li>
 *
 * To return event details for an event that is specific to an account in your organization, you must specify the
 * <code>awsAccountId</code> parameter in the request. If you don't specify an account ID, Health returns an error message
 * because the event is specific to an account in your organization.
 *
 * </p </li> </ul>
 *
 * For more information, see <a
 *
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>> <note>
 *
 * This operation doesn't support resource-level permissions. You can't use this operation to allow or deny access to
 * specific Health events. For more information, see <a
 * href="https://docs.aws.amazon.com/health/latest/ug/security_iam_id-based-policy-examples.html#resource-action-based-conditions">Resource-
 * and action-based conditions</a> in the <i>Health User
 */
DescribeEventDetailsForOrganizationResponse * HealthClient::describeEventDetailsForOrganization(const DescribeEventDetailsForOrganizationRequest &request)
{
    return qobject_cast<DescribeEventDetailsForOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthClient service, and returns a pointer to an
 * DescribeEventTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the event types that meet the specified filter criteria. You can use this API operation to find information
 * about the Health event, such as the category, Amazon Web Services service, and event code. The metadata for each event
 * appears in the <a href="https://docs.aws.amazon.com/health/latest/APIReference/API_EventType.html">EventType</a> object.
 *
 * </p
 *
 * If you don't specify a filter criteria, the API operation returns all event types, in no particular order.
 *
 * </p <note>
 *
 * This API operation uses pagination. Specify the <code>nextToken</code> parameter in the next request to return more
 */
DescribeEventTypesResponse * HealthClient::describeEventTypes(const DescribeEventTypesRequest &request)
{
    return qobject_cast<DescribeEventTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthClient service, and returns a pointer to an
 * DescribeEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about events that meet the specified filter criteria. Events are returned in a summary form and do
 * not include the detailed description, any additional metadata that depends on the event type, or any affected resources.
 * To retrieve that information, use the <a
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventDetails.html">DescribeEventDetails</a> and
 * <a
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntities.html">DescribeAffectedEntities</a>
 *
 * operations>
 *
 * If no filter criteria are specified, all events are returned. Results are sorted by <code>lastModifiedTime</code>,
 * starting with the most recent
 *
 * event> <note> <ul> <li>
 *
 * When you call the <code>DescribeEvents</code> operation and specify an entity for the <code>entityValues</code>
 * parameter, Health might return public events that aren't specific to that resource. For example, if you call
 * <code>DescribeEvents</code> and specify an ID for an Amazon Elastic Compute Cloud (Amazon EC2) instance, Health might
 * return events that aren't specific to that resource or service. To get events that are specific to a service, use the
 * <code>services</code> parameter in the <code>filter</code> object. For more information, see <a
 *
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>> </li> <li>
 *
 * This API operation uses pagination. Specify the <code>nextToken</code> parameter in the next request to return more
 */
DescribeEventsResponse * HealthClient::describeEvents(const DescribeEventsRequest &request)
{
    return qobject_cast<DescribeEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthClient service, and returns a pointer to an
 * DescribeEventsForOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about events across your organization in Organizations. You can use the<code>filters</code>
 * parameter to specify the events that you want to return. Events are returned in a summary form and don't include the
 * affected accounts, detailed description, any additional metadata that depends on the event type, or any affected
 * resources. To retrieve that information, use the following
 *
 * operations> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedAccountsForOrganization.html">DescribeAffectedAccountsForOrganization</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventDetailsForOrganization.html">DescribeEventDetailsForOrganization</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntitiesForOrganization.html">DescribeAffectedEntitiesForOrganization</a>
 *
 * </p </li> </ul>
 *
 * If you don't specify a <code>filter</code>, the <code>DescribeEventsForOrganizations</code> returns all events across
 * your organization. Results are sorted by <code>lastModifiedTime</code>, starting with the most recent event.
 *
 * </p
 *
 * For more information about the different types of Health events, see <a
 *
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>>
 *
 * Before you can call this operation, you must first enable Health to work with Organizations. To do this, call the <a
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
 * operation from your organization's management
 *
 * account> <note>
 *
 * This API operation uses pagination. Specify the <code>nextToken</code> parameter in the next request to return more
 */
DescribeEventsForOrganizationResponse * HealthClient::describeEventsForOrganization(const DescribeEventsForOrganizationRequest &request)
{
    return qobject_cast<DescribeEventsForOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the HealthClient service, and returns a pointer to an
 * DescribeHealthServiceStatusForOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation provides status information on enabling or disabling Health to work with your organization. To call this
 * operation, you must sign in as an IAM user, assume an IAM role, or sign in as the root user (not recommended) in the
 * organization's management
 */
DescribeHealthServiceStatusForOrganizationResponse * HealthClient::describeHealthServiceStatusForOrganization(const DescribeHealthServiceStatusForOrganizationRequest &request)
{
    return qobject_cast<DescribeHealthServiceStatusForOrganizationResponse *>(send(request));
}

/*!
 * Sends a DescribeHealthServiceStatusForOrganization request to the HealthClient service, and returns a pointer to an
 * DescribeHealthServiceStatusForOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation provides status information on enabling or disabling Health to work with your organization. To call this
 * operation, you must sign in as an IAM user, assume an IAM role, or sign in as the root user (not recommended) in the
 * organization's management
 */
DescribeHealthServiceStatusForOrganizationResponse * HealthClient::describeHealthServiceStatusForOrganization()
{
    return describeHealthServiceStatusForOrganization(DescribeHealthServiceStatusForOrganizationRequest());
}

/*!
 * Sends \a request to the HealthClient service, and returns a pointer to an
 * DisableHealthServiceAccessForOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables Health from working with Organizations. To call this operation, you must sign in as an Identity and Access
 * Management (IAM) user, assume an IAM role, or sign in as the root user (not recommended) in the organization's
 * management account. For more information, see <a
 * href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating Health events</a> in the <i>Health
 * User
 *
 * Guide</i>>
 *
 * This operation doesn't remove the service-linked role from the management account in your organization. You must use the
 * IAM console, API, or Command Line Interface (CLI) to remove the service-linked role. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html#delete-service-linked-role">Deleting
 * a Service-Linked Role</a> in the <i>IAM User
 *
 * Guide</i>> <note>
 *
 * You can also disable the organizational feature by using the Organizations <a
 * href="https://docs.aws.amazon.com/organizations/latest/APIReference/API_DisableAWSServiceAccess.html">DisableAWSServiceAccess</a>
 * API operation. After you call this operation, Health stops aggregating events for all other Amazon Web Services accounts
 * in your organization. If you call the Health API operations for organizational view, Health returns an error. Health
 * continues to aggregate health events for your Amazon Web Services
 */
DisableHealthServiceAccessForOrganizationResponse * HealthClient::disableHealthServiceAccessForOrganization(const DisableHealthServiceAccessForOrganizationRequest &request)
{
    return qobject_cast<DisableHealthServiceAccessForOrganizationResponse *>(send(request));
}

/*!
 * Sends a DisableHealthServiceAccessForOrganization request to the HealthClient service, and returns a pointer to an
 * DisableHealthServiceAccessForOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables Health from working with Organizations. To call this operation, you must sign in as an Identity and Access
 * Management (IAM) user, assume an IAM role, or sign in as the root user (not recommended) in the organization's
 * management account. For more information, see <a
 * href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating Health events</a> in the <i>Health
 * User
 *
 * Guide</i>>
 *
 * This operation doesn't remove the service-linked role from the management account in your organization. You must use the
 * IAM console, API, or Command Line Interface (CLI) to remove the service-linked role. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html#delete-service-linked-role">Deleting
 * a Service-Linked Role</a> in the <i>IAM User
 *
 * Guide</i>> <note>
 *
 * You can also disable the organizational feature by using the Organizations <a
 * href="https://docs.aws.amazon.com/organizations/latest/APIReference/API_DisableAWSServiceAccess.html">DisableAWSServiceAccess</a>
 * API operation. After you call this operation, Health stops aggregating events for all other Amazon Web Services accounts
 * in your organization. If you call the Health API operations for organizational view, Health returns an error. Health
 * continues to aggregate health events for your Amazon Web Services
 */
DisableHealthServiceAccessForOrganizationResponse * HealthClient::disableHealthServiceAccessForOrganization()
{
    return disableHealthServiceAccessForOrganization(DisableHealthServiceAccessForOrganizationRequest());
}

/*!
 * Sends \a request to the HealthClient service, and returns a pointer to an
 * EnableHealthServiceAccessForOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables Health to work with Organizations. You can use the organizational view feature to aggregate events from all
 * Amazon Web Services accounts in your organization in a centralized location.
 *
 * </p
 *
 * This operation also creates a service-linked role for the management account in the organization.
 *
 * </p <note>
 *
 * To call this operation, you must meet the following
 *
 * requirements> <ul> <li>
 *
 * You must have a Business, Enterprise On-Ramp, or Enterprise Support plan from <a
 * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services Support</a> to use the Health API. If you call the
 * Health API from an Amazon Web Services account that doesn't have a Business, Enterprise On-Ramp, or Enterprise Support
 * plan, you receive a <code>SubscriptionRequiredException</code>
 *
 * error> </li> <li>
 *
 * You must have permission to call this operation from the organization's management account. For example IAM policies,
 * see <a href="https://docs.aws.amazon.com/health/latest/ug/security_iam_id-based-policy-examples.html">Health
 * identity-based policy
 *
 * examples</a>> </li> </ul> </note>
 *
 * If you don't have the required support plan, you can instead use the Health console to enable the organizational view
 * feature. For more information, see <a
 * href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating Health events</a> in the <i>Health
 * User
 */
EnableHealthServiceAccessForOrganizationResponse * HealthClient::enableHealthServiceAccessForOrganization(const EnableHealthServiceAccessForOrganizationRequest &request)
{
    return qobject_cast<EnableHealthServiceAccessForOrganizationResponse *>(send(request));
}

/*!
 * Sends a EnableHealthServiceAccessForOrganization request to the HealthClient service, and returns a pointer to an
 * EnableHealthServiceAccessForOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables Health to work with Organizations. You can use the organizational view feature to aggregate events from all
 * Amazon Web Services accounts in your organization in a centralized location.
 *
 * </p
 *
 * This operation also creates a service-linked role for the management account in the organization.
 *
 * </p <note>
 *
 * To call this operation, you must meet the following
 *
 * requirements> <ul> <li>
 *
 * You must have a Business, Enterprise On-Ramp, or Enterprise Support plan from <a
 * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services Support</a> to use the Health API. If you call the
 * Health API from an Amazon Web Services account that doesn't have a Business, Enterprise On-Ramp, or Enterprise Support
 * plan, you receive a <code>SubscriptionRequiredException</code>
 *
 * error> </li> <li>
 *
 * You must have permission to call this operation from the organization's management account. For example IAM policies,
 * see <a href="https://docs.aws.amazon.com/health/latest/ug/security_iam_id-based-policy-examples.html">Health
 * identity-based policy
 *
 * examples</a>> </li> </ul> </note>
 *
 * If you don't have the required support plan, you can instead use the Health console to enable the organizational view
 * feature. For more information, see <a
 * href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating Health events</a> in the <i>Health
 * User
 */
EnableHealthServiceAccessForOrganizationResponse * HealthClient::enableHealthServiceAccessForOrganization()
{
    return enableHealthServiceAccessForOrganization(EnableHealthServiceAccessForOrganizationRequest());
}

/*!
 * \class QtAws::Health::HealthClientPrivate
 * \brief The HealthClientPrivate class provides private implementation for HealthClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsHealth
 */

/*!
 * Constructs a HealthClientPrivate object with public implementation \a q.
 */
HealthClientPrivate::HealthClientPrivate(HealthClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Health
} // namespace QtAws
