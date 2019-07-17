/*
    Copyright 2013-2019 Paul Colby

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

#include "cloudwatcheventsclient.h"
#include "cloudwatcheventsclient_p.h"

#include "core/awssignaturev4.h"
#include "activateeventsourcerequest.h"
#include "activateeventsourceresponse.h"
#include "createeventbusrequest.h"
#include "createeventbusresponse.h"
#include "createpartnereventsourcerequest.h"
#include "createpartnereventsourceresponse.h"
#include "deactivateeventsourcerequest.h"
#include "deactivateeventsourceresponse.h"
#include "deleteeventbusrequest.h"
#include "deleteeventbusresponse.h"
#include "deletepartnereventsourcerequest.h"
#include "deletepartnereventsourceresponse.h"
#include "deleterulerequest.h"
#include "deleteruleresponse.h"
#include "describeeventbusrequest.h"
#include "describeeventbusresponse.h"
#include "describeeventsourcerequest.h"
#include "describeeventsourceresponse.h"
#include "describepartnereventsourcerequest.h"
#include "describepartnereventsourceresponse.h"
#include "describerulerequest.h"
#include "describeruleresponse.h"
#include "disablerulerequest.h"
#include "disableruleresponse.h"
#include "enablerulerequest.h"
#include "enableruleresponse.h"
#include "listeventbusesrequest.h"
#include "listeventbusesresponse.h"
#include "listeventsourcesrequest.h"
#include "listeventsourcesresponse.h"
#include "listpartnereventsourceaccountsrequest.h"
#include "listpartnereventsourceaccountsresponse.h"
#include "listpartnereventsourcesrequest.h"
#include "listpartnereventsourcesresponse.h"
#include "listrulenamesbytargetrequest.h"
#include "listrulenamesbytargetresponse.h"
#include "listrulesrequest.h"
#include "listrulesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtargetsbyrulerequest.h"
#include "listtargetsbyruleresponse.h"
#include "puteventsrequest.h"
#include "puteventsresponse.h"
#include "putpartnereventsrequest.h"
#include "putpartnereventsresponse.h"
#include "putpermissionrequest.h"
#include "putpermissionresponse.h"
#include "putrulerequest.h"
#include "putruleresponse.h"
#include "puttargetsrequest.h"
#include "puttargetsresponse.h"
#include "removepermissionrequest.h"
#include "removepermissionresponse.h"
#include "removetargetsrequest.h"
#include "removetargetsresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "testeventpatternrequest.h"
#include "testeventpatternresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudWatchEvents
 * \brief Contains classess for accessing Amazon CloudWatch Events.
 *
 * \inmodule QtAwsCloudWatchEvents
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::CloudWatchEventsClient
 * \brief The CloudWatchEventsClient class provides access to the Amazon CloudWatch Events service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudWatchEvents
 *
 *  Amazon EventBridge helps you to respond to state changes in your AWS resources. When your resources change state, they
 *  automatically send events into an event stream. You can create rules that match selected events in the stream and route
 *  them to targets to take action. You can also use rules to take action on a predetermined schedule. For example, you can
 *  configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an AWS Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance
 *  enters the running
 * 
 *  stat> </li> <li>
 * 
 *  Direct specific API records from AWS CloudTrail to an Amazon Kinesis data stream for detailed analysis of potential
 *  security or availability
 * 
 *  risk> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volum> </li> </ul>
 * 
 *  For more information about the features of Amazon EventBridge, see the <a
 *  href="https://docs.aws.amazon.com/eventbridge/latest/userguide/">Amazon EventBridge User
 */

/*!
 * \brief Constructs a CloudWatchEventsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudWatchEventsClient::CloudWatchEventsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudWatchEventsClientPrivate(this), parent)
{
    Q_D(CloudWatchEventsClient);
    d->apiVersion = QStringLiteral("2015-10-07");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("events");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon CloudWatch Events");
    d->serviceName = QStringLiteral("events");
}

/*!
 * \overload CloudWatchEventsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CloudWatchEventsClient::CloudWatchEventsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudWatchEventsClientPrivate(this), parent)
{
    Q_D(CloudWatchEventsClient);
    d->apiVersion = QStringLiteral("2015-10-07");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("events");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon CloudWatch Events");
    d->serviceName = QStringLiteral("events");
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * ActivateEventSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Activates a partner event source that has been deactivated. Once activated, your matching event bus will start receiving
 * events from the event
 *
 * source> <note>
 *
 * This operation is performed by AWS customers, not by SaaS
 */
ActivateEventSourceResponse * CloudWatchEventsClient::activateEventSource(const ActivateEventSourceRequest &request)
{
    return qobject_cast<ActivateEventSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * CreateEventBusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from
 * your own custom applications and services, or it can be a partner event bus which can be matched to a partner event
 *
 * source> <note>
 *
 * This operation is used by AWS customers, not by SaaS
 */
CreateEventBusResponse * CloudWatchEventsClient::createEventBus(const CreateEventBusRequest &request)
{
    return qobject_cast<CreateEventBusResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * CreatePartnerEventSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Called by an SaaS partner to create a partner event
 *
 * source> <note>
 *
 * This operation is not used by AWS
 *
 * customers> </note>
 *
 * Each partner event source can be used by one AWS account to create a matching partner event bus in that AWS account. A
 * SaaS partner must create one partner event source for each AWS account that wants to receive those event types.
 *
 * </p
 *
 * A partner event source creates events based on resources in the SaaS partner's service or
 *
 * application>
 *
 * An AWS account that creates a partner event bus that matches the partner event source can use that event bus to receive
 * events from the partner, and then process them using AWS Events rules and
 *
 * targets>
 *
 * Partner event source names follow this
 *
 * format>
 *
 * <code>aws.partner/<i>partner_name</i>/<i>event_namespace</i>/<i>event_name</i> </code>
 *
 * </p <ul> <li>
 *
 * <i>partner_name</i> is determined during partner registration and identifies the partner to AWS
 *
 * customers> </li> <li>
 *
 * For <i>event_namespace</i>, we recommend that partners use a string that identifies the AWS customer within the
 * partner's system. This should not be the customer's AWS account
 *
 * ID> </li> <li>
 *
 * <i>event_name</i> is determined by the partner, and should uniquely identify an event-generating resource within the
 * partner system. This should help AWS customers decide whether to create an event bus to receive these
 */
CreatePartnerEventSourceResponse * CloudWatchEventsClient::createPartnerEventSource(const CreatePartnerEventSourceRequest &request)
{
    return qobject_cast<CreatePartnerEventSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * DeactivateEventSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * An AWS customer uses this operation to temporarily stop receiving events from the specified partner event source. The
 * matching event bus isn't deleted.
 *
 * </p
 *
 * When you deactivate a partner event source, the source goes into <code>PENDING</code> state. If it remains in
 * <code>PENDING</code> state for more than two weeks, it's
 *
 * deleted>
 *
 * To activate a deactivated partner event source, use
 */
DeactivateEventSourceResponse * CloudWatchEventsClient::deactivateEventSource(const DeactivateEventSourceRequest &request)
{
    return qobject_cast<DeactivateEventSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * DeleteEventBusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified custom event bus or partner event bus. All rules associated with this event bus are also deleted.
 * You can't delete your account's default event
 *
 * bus> <note>
 *
 * This operation is performed by AWS customers, not by SaaS
 */
DeleteEventBusResponse * CloudWatchEventsClient::deleteEventBus(const DeleteEventBusRequest &request)
{
    return qobject_cast<DeleteEventBusResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * DeletePartnerEventSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation is used by SaaS partners to delete a partner event source. AWS customers don't use this
 *
 * operation>
 *
 * When you delete an event source, the status of the corresponding partner event bus in the AWS customer account becomes
 */
DeletePartnerEventSourceResponse * CloudWatchEventsClient::deletePartnerEventSource(const DeletePartnerEventSourceRequest &request)
{
    return qobject_cast<DeletePartnerEventSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * DeleteRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * rule>
 *
 * Before you can delete the rule, you must remove all targets, using
 *
 * <a>RemoveTargets</a>>
 *
 * When you delete a rule, incoming events might continue to match to the deleted rule. Allow a short period of time for
 * changes to take
 *
 * effect>
 *
 * Managed rules are rules created and managed by another AWS service on your behalf. These rules are created by those
 * other AWS services to support functionality in those services. You can delete these rules using the <code>Force</code>
 * option, but you should do so only if you're sure that the other service isn't still using that
 */
DeleteRuleResponse * CloudWatchEventsClient::deleteRule(const DeleteRuleRequest &request)
{
    return qobject_cast<DeleteRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * DescribeEventBusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays details about an event bus in your account. This can include the external AWS accounts that are permitted to
 * write events to your default event bus, and the associated policy. For custom event buses and partner event buses, it
 * displays the name, ARN, policy, state, and creation
 *
 * time>
 *
 * To enable your account to receive events from other accounts on its default event bus, use
 *
 * <a>PutPermission</a>>
 *
 * For more information about partner event buses, see
 */
DescribeEventBusResponse * CloudWatchEventsClient::describeEventBus(const DescribeEventBusRequest &request)
{
    return qobject_cast<DescribeEventBusResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * DescribeEventSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation lists details about a partner event source that is shared with your
 *
 * account> <note>
 *
 * This operation is run by AWS customers, not by SaaS
 */
DescribeEventSourceResponse * CloudWatchEventsClient::describeEventSource(const DescribeEventSourceRequest &request)
{
    return qobject_cast<DescribeEventSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * DescribePartnerEventSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * An SaaS partner can use this operation to list details about a partner event source that they have
 *
 * created> <note>
 *
 * AWS customers do not use this operation. Instead, AWS customers can use <a>DescribeEventSource</a> to see details about
 * a partner event source that is shared with
 */
DescribePartnerEventSourceResponse * CloudWatchEventsClient::describePartnerEventSource(const DescribePartnerEventSourceRequest &request)
{
    return qobject_cast<DescribePartnerEventSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * DescribeRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified
 *
 * rule>
 *
 * <code>DescribeRule</code> doesn't list the targets of a rule. To see the targets associated with a rule, use
 */
DescribeRuleResponse * CloudWatchEventsClient::describeRule(const DescribeRuleRequest &request)
{
    return qobject_cast<DescribeRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * DisableRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the specified rule. A disabled rule won't match any events and won't self-trigger if it has a schedule
 *
 * expression>
 *
 * When you disable a rule, incoming events might continue to match to the disabled rule. Allow a short period of time for
 * changes to take
 */
DisableRuleResponse * CloudWatchEventsClient::disableRule(const DisableRuleRequest &request)
{
    return qobject_cast<DisableRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * EnableRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the specified rule. If the rule doesn't exist, the operation
 *
 * fails>
 *
 * When you enable a rule, incoming events might not immediately start matching to a newly enabled rule. Allow a short
 * period of time for changes to take
 */
EnableRuleResponse * CloudWatchEventsClient::enableRule(const EnableRuleRequest &request)
{
    return qobject_cast<EnableRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * ListEventBusesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the event buses in your account, including the default event bus, custom event buses, and partner event
 *
 * buses> <note>
 *
 * This operation is run by AWS customers, not by SaaS
 */
ListEventBusesResponse * CloudWatchEventsClient::listEventBuses(const ListEventBusesRequest &request)
{
    return qobject_cast<ListEventBusesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * ListEventSourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You can use this to see all the partner event sources that have been shared with your AWS account. For more information
 * about partner event sources, see
 *
 * <a>CreateEventBus</a>> <note>
 *
 * This operation is run by AWS customers, not by SaaS
 */
ListEventSourcesResponse * CloudWatchEventsClient::listEventSources(const ListEventSourcesRequest &request)
{
    return qobject_cast<ListEventSourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * ListPartnerEventSourceAccountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * An SaaS partner can use this operation to display the AWS account ID that a particular partner event source name is
 * associated
 *
 * with> <note>
 *
 * This operation is used by SaaS partners, not by AWS
 */
ListPartnerEventSourceAccountsResponse * CloudWatchEventsClient::listPartnerEventSourceAccounts(const ListPartnerEventSourceAccountsRequest &request)
{
    return qobject_cast<ListPartnerEventSourceAccountsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * ListPartnerEventSourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * An SaaS partner can use this operation to list all the partner event source names that they have
 *
 * created> <note>
 *
 * This operation is not used by AWS
 */
ListPartnerEventSourcesResponse * CloudWatchEventsClient::listPartnerEventSources(const ListPartnerEventSourcesRequest &request)
{
    return qobject_cast<ListPartnerEventSourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * ListRuleNamesByTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the rules for the specified target. You can see which rules can invoke a specific target in your
 */
ListRuleNamesByTargetResponse * CloudWatchEventsClient::listRuleNamesByTarget(const ListRuleNamesByTargetRequest &request)
{
    return qobject_cast<ListRuleNamesByTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * ListRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your EventBridge rules. You can either list all the rules or provide a prefix to match to the rule
 *
 * names>
 *
 * <code>ListRules</code> doesn't list the targets of a rule. To see the targets associated with a rule, use
 */
ListRulesResponse * CloudWatchEventsClient::listRules(const ListRulesRequest &request)
{
    return qobject_cast<ListRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the tags associated with an EventBridge resource. In EventBridge, rules can be
 */
ListTagsForResourceResponse * CloudWatchEventsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * ListTargetsByRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the targets assigned to the specified
 */
ListTargetsByRuleResponse * CloudWatchEventsClient::listTargetsByRule(const ListTargetsByRuleRequest &request)
{
    return qobject_cast<ListTargetsByRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * PutEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends custom events to EventBridge so that they can be matched to rules. These events can be from your custom
 * applications and
 */
PutEventsResponse * CloudWatchEventsClient::putEvents(const PutEventsRequest &request)
{
    return qobject_cast<PutEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * PutPartnerEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is used by SaaS partners to write events to a customer's partner event
 *
 * bus> <note>
 *
 * AWS customers do not use this operation. Instead, AWS customers can use <a>PutEvents</a> to write custom events from
 * their own applications to an event
 */
PutPartnerEventsResponse * CloudWatchEventsClient::putPartnerEvents(const PutPartnerEventsRequest &request)
{
    return qobject_cast<PutPartnerEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * PutPermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Running <code>PutPermission</code> permits the specified AWS account or AWS organization to put events to the specified
 * <i>event bus</i>. Rules in your account are triggered by these events arriving to an event bus in your account.
 *
 * </p
 *
 * For another account to send events to your account, that external account must have a rule with your account's event bus
 * as a
 *
 * target>
 *
 * To enable multiple AWS accounts to put events to an event bus, run <code>PutPermission</code> once for each of these
 * accounts. Or, if all the accounts are members of the same AWS organization, you can run <code>PutPermission</code> once
 * specifying <code>Principal</code> as "*" and specifying the AWS organization ID in <code>Condition</code>, to grant
 * permissions to all accounts in that
 *
 * organization>
 *
 * If you grant permissions using an organization, then accounts in that organization must specify a <code>RoleArn</code>
 * with proper permissions when they use <code>PutTarget</code> to add your account's event bus as a target. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-cross-account-event-delivery.html">Sending
 * and Receiving Events Between AWS Accounts</a> in the <i>Amazon EventBridge User
 *
 * Guide</i>>
 *
 * The permission policy on an event bus can't exceed 10 KB in
 */
PutPermissionResponse * CloudWatchEventsClient::putPermission(const PutPermissionRequest &request)
{
    return qobject_cast<PutPermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * PutRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates the specified rule. Rules are enabled by default or based on value of the state. You can disable a
 * rule using
 *
 * <a>DisableRule</a>>
 *
 * A single rule watches for events from a single event bus. Events generated by AWS services go to your account's default
 * event bus. Events generated by SaaS partner services or applications go to the matching partner event bus. If you have
 * custom applications or services, you can specify whether their events go to your default event bus or a custom event bus
 * that you have created. For more information, see
 *
 * <a>CreateEventBus</a>>
 *
 * If you're updating an existing rule, the rule is replaced with what you specify in this <code>PutRule</code> command. If
 * you omit arguments in <code>PutRule</code>, the old values for those arguments aren't kept. Instead, they're replaced
 * with null
 *
 * values>
 *
 * When you create or update a rule, incoming events might not immediately start matching to new or updated rules. Allow a
 * short period of time for changes to take
 *
 * effect>
 *
 * A rule must contain at least an <code>EventPattern</code> or <code>ScheduleExpression</code>. Rules with
 * <code>EventPatterns</code> are triggered when a matching event is observed. Rules with <code>ScheduleExpressions</code>
 * self-trigger based on the given schedule. A rule can have both an <code>EventPattern</code> and a
 * <code>ScheduleExpression</code>, in which case the rule triggers on matching events as well as on a
 *
 * schedule>
 *
 * When you initially create a rule, you can optionally assign one or more tags to the rule. Tags can help you organize and
 * categorize your resources. You can also use them to scope user permissions, by granting a user permission to access or
 * change only rules with certain tag values. To use the <code>PutRule</code> operation and assign tags, you must have both
 * the <code>events:PutRule</code> and <code>events:TagResource</code>
 *
 * permissions>
 *
 * If you are updating an existing rule, any tags you specify in the <code>PutRule</code> operation are ignored. To update
 * the tags of an existing rule, use <a>TagResource</a> and
 *
 * <a>UntagResource</a>>
 *
 * Most services in AWS treat <code>:</code> or <code>/</code> as the same character in Amazon Resource Names (ARNs).
 * However, EventBridge uses an exact match in event patterns and rules. Be sure to use the correct ARN characters when
 * creating event patterns so that they match the ARN syntax in the event that you want to
 *
 * match>
 *
 * In EventBridge, you could create rules that lead to infinite loops, where a rule is fired repeatedly. For example, a
 * rule might detect that ACLs have changed on an S3 bucket, and trigger software to change them to the desired state. If
 * you don't write the rule carefully, the subsequent change to the ACLs fires the rule again, creating an infinite
 *
 * loop>
 *
 * To prevent this, write the rules so that the triggered actions don't refire the same rule. For example, your rule could
 * fire only if ACLs are found to be in a bad state, instead of after any change.
 *
 * </p
 *
 * An infinite loop can quickly cause higher than expected charges. We recommend that you use budgeting, which alerts you
 * when charges exceed your specified limit. For more information, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/budgets-managing-costs.html">Managing Your Costs with
 */
PutRuleResponse * CloudWatchEventsClient::putRule(const PutRuleRequest &request)
{
    return qobject_cast<PutRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * PutTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified targets to the specified rule, or updates the targets if they're already associated with the
 *
 * rule>
 *
 * Targets are the resources that are invoked when a rule is
 *
 * triggered>
 *
 * You can configure the following as targets in
 *
 * EventBridge> <ul> <li>
 *
 * EC2
 *
 * instance> </li> <li>
 *
 * SSM Run
 *
 * Comman> </li> <li>
 *
 * SSM
 *
 * Automatio> </li> <li>
 *
 * AWS Lambda
 *
 * function> </li> <li>
 *
 * Data streams in Amazon Kinesis Data
 *
 * Stream> </li> <li>
 *
 * Data delivery streams in Amazon Kinesis Data
 *
 * Firehos> </li> <li>
 *
 * Amazon ECS
 *
 * task> </li> <li>
 *
 * AWS Step Functions state
 *
 * machine> </li> <li>
 *
 * AWS Batch
 *
 * job> </li> <li>
 *
 * AWS CodeBuild
 *
 * project> </li> <li>
 *
 * Pipelines in AWS
 *
 * CodePipelin> </li> <li>
 *
 * Amazon Inspector assessment
 *
 * template> </li> <li>
 *
 * Amazon SNS
 *
 * topic> </li> <li>
 *
 * Amazon SQS queues, including FIFO
 *
 * queue> </li> <li>
 *
 * The default event bus of another AWS
 *
 * accoun> </li> </ul>
 *
 * Creating rules with built-in targets is supported only on the AWS Management Console. The built-in targets are <code>EC2
 * CreateSnapshot API call</code>, <code>EC2 RebootInstances API call</code>, <code>EC2 StopInstances API call</code>, and
 * <code>EC2 TerminateInstances API call</code>.
 *
 * </p
 *
 * For some target types, <code>PutTargets</code> provides target-specific parameters. If the target is a Kinesis data
 * stream, you can optionally specify which shard the event goes to by using the <code>KinesisParameters</code> argument.
 * To invoke a command on multiple EC2 instances with one rule, you can use the <code>RunCommandParameters</code>
 *
 * field>
 *
 * To be able to make API calls against the resources that you own, Amazon EventBridge needs the appropriate permissions.
 * For AWS Lambda and Amazon SNS resources, EventBridge relies on resource-based policies. For EC2 instances, Kinesis data
 * streams, and AWS Step Functions state machines, EventBridge relies on IAM roles that you specify in the
 * <code>RoleARN</code> argument in <code>PutTargets</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/auth-and-access-control-eventbridge.html">Authentication
 * and Access Control</a> in the <i>Amazon EventBridge User
 *
 * Guide</i>>
 *
 * If another AWS account is in the same Region and has granted you permission (using <code>PutPermission</code>), you can
 * send events to that account. Set that account's event bus as a target of the rules in your account. To send the matched
 * events to the other account, specify that account's event bus as the <code>Arn</code> value when you run
 * <code>PutTargets</code>. If your account sends events to another account, your account is charged for each sent event.
 * Each event sent to another account is charged as a custom event. The account receiving the event isn't charged. For more
 * information, see <a href="https://aws.amazon.com/eventbridge/pricing/">Amazon EventBridge
 *
 * Pricing</a>>
 *
 * If you're setting an event bus in another account as the target and that account granted permission to your account
 * through an organization instead of directly by the account ID, you must specify a <code>RoleArn</code> with proper
 * permissions in the <code>Target</code> structure. For more information, see <a
 * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-cross-account-event-delivery.html">Sending
 * and Receiving Events Between AWS Accounts</a> in the <i>Amazon EventBridge User
 *
 * Guide</i>>
 *
 * For more information about enabling cross-account events, see
 *
 * <a>PutPermission</a>>
 *
 * <code>Input</code>, <code>InputPath</code>, and <code>InputTransformer</code> are mutually exclusive and optional
 * parameters of a target. When a rule is triggered due to a matched
 *
 * event> <ul> <li>
 *
 * If none of the following arguments are specified for a target, the entire event is passed to the target in JSON format
 * (unless the target is Amazon EC2 Run Command or Amazon ECS task, in which case nothing from the event is passed to the
 *
 * target)> </li> <li>
 *
 * If <code>Input</code> is specified in the form of valid JSON, then the matched event is overridden with this
 *
 * constant> </li> <li>
 *
 * If <code>InputPath</code> is specified in the form of JSONPath (for example, <code>$.detail</code>), only the part of
 * the event specified in the path is passed to the target (for example, only the detail part of the event is
 *
 * passed)> </li> <li>
 *
 * If <code>InputTransformer</code> is specified, one or more specified JSONPaths are extracted from the event and used as
 * values in a template that you specify as the input to the
 *
 * target> </li> </ul>
 *
 * When you specify <code>InputPath</code> or <code>InputTransformer</code>, you must use JSON dot notation, not bracket
 *
 * notation>
 *
 * When you add targets to a rule and the associated rule triggers soon after, new or updated targets might not be
 * immediately invoked. Allow a short period of time for changes to take
 *
 * effect>
 *
 * This action can partially fail if too many requests are made at the same time. If that happens,
 * <code>FailedEntryCount</code> is nonzero in the response, and each entry in <code>FailedEntries</code> provides the ID
 * of the failed target and the error
 */
PutTargetsResponse * CloudWatchEventsClient::putTargets(const PutTargetsRequest &request)
{
    return qobject_cast<PutTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * RemovePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes the permission of another AWS account to be able to put events to the specified event bus. Specify the account
 * to revoke by the <code>StatementId</code> value that you associated with the account when you granted it permission with
 * <code>PutPermission</code>. You can find the <code>StatementId</code> by using
 */
RemovePermissionResponse * CloudWatchEventsClient::removePermission(const RemovePermissionRequest &request)
{
    return qobject_cast<RemovePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * RemoveTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified targets from the specified rule. When the rule is triggered, those targets are no longer be
 *
 * invoked>
 *
 * When you remove a target, when the associated rule triggers, removed targets might continue to be invoked. Allow a short
 * period of time for changes to take
 *
 * effect>
 *
 * This action can partially fail if too many requests are made at the same time. If that happens,
 * <code>FailedEntryCount</code> is non-zero in the response and each entry in <code>FailedEntries</code> provides the ID
 * of the failed target and the error
 */
RemoveTargetsResponse * CloudWatchEventsClient::removeTargets(const RemoveTargetsRequest &request)
{
    return qobject_cast<RemoveTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns one or more tags (key-value pairs) to the specified EventBridge resource. Tags can help you organize and
 * categorize your resources. You can also use them to scope user permissions by granting a user permission to access or
 * change only resources with certain tag values. In EventBridge, rules can be
 *
 * tagged>
 *
 * Tags don't have any semantic meaning to AWS and are interpreted strictly as strings of
 *
 * characters>
 *
 * You can use the <code>TagResource</code> action with a rule that already has tags. If you specify a new tag key for the
 * rule, this tag is appended to the list of tags associated with the rule. If you specify a tag key that is already
 * associated with the rule, the new tag value that you specify replaces the previous value for that
 *
 * tag>
 *
 * You can associate as many as 50 tags with a
 */
TagResourceResponse * CloudWatchEventsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * TestEventPatternResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tests whether the specified event pattern matches the provided
 *
 * event>
 *
 * Most services in AWS treat <code>:</code> or <code>/</code> as the same character in Amazon Resource Names (ARNs).
 * However, EventBridge uses an exact match in event patterns and rules. Be sure to use the correct ARN characters when
 * creating event patterns so that they match the ARN syntax in the event that you want to
 */
TestEventPatternResponse * CloudWatchEventsClient::testEventPattern(const TestEventPatternRequest &request)
{
    return qobject_cast<TestEventPatternResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from the specified EventBridge resource. In EventBridge, rules can be
 */
UntagResourceResponse * CloudWatchEventsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::CloudWatchEvents::CloudWatchEventsClientPrivate
 * \brief The CloudWatchEventsClientPrivate class provides private implementation for CloudWatchEventsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a CloudWatchEventsClientPrivate object with public implementation \a q.
 */
CloudWatchEventsClientPrivate::CloudWatchEventsClientPrivate(CloudWatchEventsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudWatchEvents
} // namespace QtAws
