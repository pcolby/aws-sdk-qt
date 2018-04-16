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

#include "cloudwatcheventsclient.h"
#include "cloudwatcheventsclient_p.h"

#include "core/awssignaturev4.h"
#include "deleterulerequest.h"
#include "deleteruleresponse.h"
#include "describeeventbusrequest.h"
#include "describeeventbusresponse.h"
#include "describerulerequest.h"
#include "describeruleresponse.h"
#include "disablerulerequest.h"
#include "disableruleresponse.h"
#include "enablerulerequest.h"
#include "enableruleresponse.h"
#include "listrulenamesbytargetrequest.h"
#include "listrulenamesbytargetresponse.h"
#include "listrulesrequest.h"
#include "listrulesresponse.h"
#include "listtargetsbyrulerequest.h"
#include "listtargetsbyruleresponse.h"
#include "puteventsrequest.h"
#include "puteventsresponse.h"
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
#include "testeventpatternrequest.h"
#include "testeventpatternresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudWatchEvents
 * \brief The QtAws::CloudWatchEvents contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::CloudWatchEventsClient
 *
 * \brief The CloudWatchEventsClient class provides access the Amazon CloudWatch Events service.
 *
 * \ingroup CloudWatchEvents
 *
 *  Amazon CloudWatch Events helps you to respond to state changes in your AWS resources. When your resources change state,
 *  they automatically send events into an event stream. You can create rules that match selected events in the stream and
 *  route them to targets to take action. You can also use rules to take action on a pre-determined schedule. For example,
 *  you can configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an AWS Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance
 *  enters the running
 * 
 *  state> </li> <li>
 * 
 *  Direct specific API records from CloudTrail to an Amazon Kinesis stream for detailed analysis of potential security or
 *  availability
 * 
 *  risks> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volume> </li> </ul>
 * 
 *  For more information about the features of Amazon CloudWatch Events, see the <a
 *  href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events">Amazon CloudWatch Events User
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
 * \a  AwsEndpoint::getEndpoint()
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
 * Deletes the specified
 *
 * rule>
 *
 * You must remove all targets from a rule using <a>RemoveTargets</a> before you can delete the
 *
 * rule>
 *
 * When you delete a rule, incoming events might continue to match to the deleted rule. Please allow a short period of time
 * for changes to take
 *
 * @param  request Request to send to Amazon CloudWatch Events.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRuleResponse * CloudWatchEventsClient::deleteRule(const DeleteRuleRequest &request)
{
    return qobject_cast<DeleteRuleResponse *>(send(request));
}

/*!
 * Displays the external AWS accounts that are permitted to write events to your account using your account's event bus,
 * and the associated policy. To enable your account to receive events from other accounts, use
 *
 * @param  request Request to send to Amazon CloudWatch Events.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventBusResponse * CloudWatchEventsClient::describeEventBus(const DescribeEventBusRequest &request)
{
    return qobject_cast<DescribeEventBusResponse *>(send(request));
}

/*!
 * Describes the specified
 *
 * @param  request Request to send to Amazon CloudWatch Events.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeRuleResponse * CloudWatchEventsClient::describeRule(const DescribeRuleRequest &request)
{
    return qobject_cast<DescribeRuleResponse *>(send(request));
}

/*!
 * Disables the specified rule. A disabled rule won't match any events, and won't self-trigger if it has a schedule
 *
 * expression>
 *
 * When you disable a rule, incoming events might continue to match to the disabled rule. Please allow a short period of
 * time for changes to take
 *
 * @param  request Request to send to Amazon CloudWatch Events.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisableRuleResponse * CloudWatchEventsClient::disableRule(const DisableRuleRequest &request)
{
    return qobject_cast<DisableRuleResponse *>(send(request));
}

/*!
 * Enables the specified rule. If the rule does not exist, the operation
 *
 * fails>
 *
 * When you enable a rule, incoming events might not immediately start matching to a newly enabled rule. Please allow a
 * short period of time for changes to take
 *
 * @param  request Request to send to Amazon CloudWatch Events.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EnableRuleResponse * CloudWatchEventsClient::enableRule(const EnableRuleRequest &request)
{
    return qobject_cast<EnableRuleResponse *>(send(request));
}

/*!
 * Lists the rules for the specified target. You can see which of the rules in Amazon CloudWatch Events can invoke a
 * specific target in your
 *
 * @param  request Request to send to Amazon CloudWatch Events.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRuleNamesByTargetResponse * CloudWatchEventsClient::listRuleNamesByTarget(const ListRuleNamesByTargetRequest &request)
{
    return qobject_cast<ListRuleNamesByTargetResponse *>(send(request));
}

/*!
 * Lists your Amazon CloudWatch Events rules. You can either list all the rules or you can provide a prefix to match to the
 * rule
 *
 * @param  request Request to send to Amazon CloudWatch Events.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRulesResponse * CloudWatchEventsClient::listRules(const ListRulesRequest &request)
{
    return qobject_cast<ListRulesResponse *>(send(request));
}

/*!
 * Lists the targets assigned to the specified
 *
 * @param  request Request to send to Amazon CloudWatch Events.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTargetsByRuleResponse * CloudWatchEventsClient::listTargetsByRule(const ListTargetsByRuleRequest &request)
{
    return qobject_cast<ListTargetsByRuleResponse *>(send(request));
}

/*!
 * Sends custom events to Amazon CloudWatch Events so that they can be matched to
 *
 * @param  request Request to send to Amazon CloudWatch Events.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutEventsResponse * CloudWatchEventsClient::putEvents(const PutEventsRequest &request)
{
    return qobject_cast<PutEventsResponse *>(send(request));
}

/*!
 * Running <code>PutPermission</code> permits the specified AWS account to put events to your account's default <i>event
 * bus</i>. CloudWatch Events rules in your account are triggered by these events arriving to your default event bus.
 *
 * </p
 *
 * For another account to send events to your account, that external account must have a CloudWatch Events rule with your
 * account's default event bus as a
 *
 * target>
 *
 * To enable multiple AWS accounts to put events to your default event bus, run <code>PutPermission</code> once for each of
 * these
 *
 * accounts>
 *
 * The permission policy on the default event bus cannot exceed 10KB in
 *
 * @param  request Request to send to Amazon CloudWatch Events.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutPermissionResponse * CloudWatchEventsClient::putPermission(const PutPermissionRequest &request)
{
    return qobject_cast<PutPermissionResponse *>(send(request));
}

/*!
 * Creates or updates the specified rule. Rules are enabled by default, or based on value of the state. You can disable a
 * rule using
 *
 * <a>DisableRule</a>>
 *
 * If you are updating an existing rule, the rule is completely replaced with what you specify in this <code>PutRule</code>
 * command. If you omit arguments in <code>PutRule</code>, the old values for those arguments are not kept. Instead, they
 * are replaced with null
 *
 * values>
 *
 * When you create or update a rule, incoming events might not immediately start matching to new or updated rules. Please
 * allow a short period of time for changes to take
 *
 * effect>
 *
 * A rule must contain at least an EventPattern or ScheduleExpression. Rules with EventPatterns are triggered when a
 * matching event is observed. Rules with ScheduleExpressions self-trigger based on the given schedule. A rule can have
 * both an EventPattern and a ScheduleExpression, in which case the rule triggers on matching events as well as on a
 *
 * schedule>
 *
 * Most services in AWS treat : or / as the same character in Amazon Resource Names (ARNs). However, CloudWatch Events uses
 * an exact match in event patterns and rules. Be sure to use the correct ARN characters when creating event patterns so
 * that they match the ARN syntax in the event you want to
 *
 * @param  request Request to send to Amazon CloudWatch Events.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutRuleResponse * CloudWatchEventsClient::putRule(const PutRuleRequest &request)
{
    return qobject_cast<PutRuleResponse *>(send(request));
}

/*!
 * Adds the specified targets to the specified rule, or updates the targets if they are already associated with the
 *
 * rule>
 *
 * Targets are the resources that are invoked when a rule is
 *
 * triggered>
 *
 * You can configure the following as targets for CloudWatch
 *
 * Events> <ul> <li>
 *
 * EC2
 *
 * instance> </li> <li>
 *
 * AWS Lambda
 *
 * function> </li> <li>
 *
 * Streams in Amazon Kinesis
 *
 * Stream> </li> <li>
 *
 * Delivery streams in Amazon Kinesis
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
 * Pipelines in Amazon Code
 *
 * Pipelin> </li> <li>
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
 * Note that creating rules with built-in targets is supported only in the AWS Management
 *
 * Console>
 *
 * For some target types, <code>PutTargets</code> provides target-specific parameters. If the target is an Amazon Kinesis
 * stream, you can optionally specify which shard the event goes to by using the <code>KinesisParameters</code> argument.
 * To invoke a command on multiple EC2 instances with one rule, you can use the <code>RunCommandParameters</code>
 *
 * field>
 *
 * To be able to make API calls against the resources that you own, Amazon CloudWatch Events needs the appropriate
 * permissions. For AWS Lambda and Amazon SNS resources, CloudWatch Events relies on resource-based policies. For EC2
 * instances, Amazon Kinesis streams, and AWS Step Functions state machines, CloudWatch Events relies on IAM roles that you
 * specify in the <code>RoleARN</code> argument in <code>PutTargets</code>. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/auth-and-access-control-cwe.html">Authentication and
 * Access Control</a> in the <i>Amazon CloudWatch Events User
 *
 * Guide</i>>
 *
 * If another AWS account is in the same region and has granted you permission (using <code>PutPermission</code>), you can
 * send events to that account by setting that account's event bus as a target of the rules in your account. To send the
 * matched events to the other account, specify that account's event bus as the <code>Arn</code> when you run
 * <code>PutTargets</code>. If your account sends events to another account, your account is charged for each sent event.
 * Each event sent to antoher account is charged as a custom event. The account receiving the event is not charged. For
 * more information on pricing, see <a href="https://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
 *
 * Pricing</a>>
 *
 * For more information about enabling cross-account events, see
 *
 * <a>PutPermission</a>>
 *
 * <b>Input</b>, <b>InputPath</b> and <b>InputTransformer</b> are mutually exclusive and optional parameters of a target.
 * When a rule is triggered due to a matched
 *
 * event> <ul> <li>
 *
 * If none of the following arguments are specified for a target, then the entire event is passed to the target in JSON
 * form (unless the target is Amazon EC2 Run Command or Amazon ECS task, in which case nothing from the event is passed to
 * the
 *
 * target)> </li> <li>
 *
 * If <b>Input</b> is specified in the form of valid JSON, then the matched event is overridden with this
 *
 * constant> </li> <li>
 *
 * If <b>InputPath</b> is specified in the form of JSONPath (for example, <code>$.detail</code>), then only the part of the
 * event specified in the path is passed to the target (for example, only the detail part of the event is
 *
 * passed)> </li> <li>
 *
 * If <b>InputTransformer</b> is specified, then one or more specified JSONPaths are extracted from the event and used as
 * values in a template that you specify as the input to the
 *
 * target> </li> </ul>
 *
 * When you specify <code>InputPath</code> or <code>InputTransformer</code>, you must use JSON dot notation, not bracket
 *
 * notation>
 *
 * When you add targets to a rule and the associated rule triggers soon after, new or updated targets might not be
 * immediately invoked. Please allow a short period of time for changes to take
 *
 * effect>
 *
 * This action can partially fail if too many requests are made at the same time. If that happens,
 * <code>FailedEntryCount</code> is non-zero in the response and each entry in <code>FailedEntries</code> provides the ID
 * of the failed target and the error
 *
 * @param  request Request to send to Amazon CloudWatch Events.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutTargetsResponse * CloudWatchEventsClient::putTargets(const PutTargetsRequest &request)
{
    return qobject_cast<PutTargetsResponse *>(send(request));
}

/*!
 * Revokes the permission of another AWS account to be able to put events to your default event bus. Specify the account to
 * revoke by the <code>StatementId</code> value that you associated with the account when you granted it permission with
 * <code>PutPermission</code>. You can find the <code>StatementId</code> by using
 *
 * @param  request Request to send to Amazon CloudWatch Events.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemovePermissionResponse * CloudWatchEventsClient::removePermission(const RemovePermissionRequest &request)
{
    return qobject_cast<RemovePermissionResponse *>(send(request));
}

/*!
 * Removes the specified targets from the specified rule. When the rule is triggered, those targets are no longer be
 *
 * invoked>
 *
 * When you remove a target, when the associated rule triggers, removed targets might continue to be invoked. Please allow
 * a short period of time for changes to take
 *
 * effect>
 *
 * This action can partially fail if too many requests are made at the same time. If that happens,
 * <code>FailedEntryCount</code> is non-zero in the response and each entry in <code>FailedEntries</code> provides the ID
 * of the failed target and the error
 *
 * @param  request Request to send to Amazon CloudWatch Events.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveTargetsResponse * CloudWatchEventsClient::removeTargets(const RemoveTargetsRequest &request)
{
    return qobject_cast<RemoveTargetsResponse *>(send(request));
}

/*!
 * Tests whether the specified event pattern matches the provided
 *
 * event>
 *
 * Most services in AWS treat : or / as the same character in Amazon Resource Names (ARNs). However, CloudWatch Events uses
 * an exact match in event patterns and rules. Be sure to use the correct ARN characters when creating event patterns so
 * that they match the ARN syntax in the event you want to
 *
 * @param  request Request to send to Amazon CloudWatch Events.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TestEventPatternResponse * CloudWatchEventsClient::testEventPattern(const TestEventPatternRequest &request)
{
    return qobject_cast<TestEventPatternResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  CloudWatchEventsClientPrivate
 *
 * @brief  Private implementation for CloudWatchEventsClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CloudWatchEventsClientPrivate object.
 *
 * @param  q  Pointer to this object's public CloudWatchEventsClient instance.
 */
CloudWatchEventsClientPrivate::CloudWatchEventsClientPrivate(CloudWatchEventsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudWatchEvents
} // namespace QtAws
