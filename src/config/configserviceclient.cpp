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

#include "configserviceclient.h"
#include "configserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "batchgetresourceconfigrequest.h"
#include "batchgetresourceconfigresponse.h"
#include "deleteconfigrulerequest.h"
#include "deleteconfigruleresponse.h"
#include "deleteconfigurationrecorderrequest.h"
#include "deleteconfigurationrecorderresponse.h"
#include "deletedeliverychannelrequest.h"
#include "deletedeliverychannelresponse.h"
#include "deleteevaluationresultsrequest.h"
#include "deleteevaluationresultsresponse.h"
#include "deliverconfigsnapshotrequest.h"
#include "deliverconfigsnapshotresponse.h"
#include "describecompliancebyconfigrulerequest.h"
#include "describecompliancebyconfigruleresponse.h"
#include "describecompliancebyresourcerequest.h"
#include "describecompliancebyresourceresponse.h"
#include "describeconfigruleevaluationstatusrequest.h"
#include "describeconfigruleevaluationstatusresponse.h"
#include "describeconfigrulesrequest.h"
#include "describeconfigrulesresponse.h"
#include "describeconfigurationrecorderstatusrequest.h"
#include "describeconfigurationrecorderstatusresponse.h"
#include "describeconfigurationrecordersrequest.h"
#include "describeconfigurationrecordersresponse.h"
#include "describedeliverychannelstatusrequest.h"
#include "describedeliverychannelstatusresponse.h"
#include "describedeliverychannelsrequest.h"
#include "describedeliverychannelsresponse.h"
#include "getcompliancedetailsbyconfigrulerequest.h"
#include "getcompliancedetailsbyconfigruleresponse.h"
#include "getcompliancedetailsbyresourcerequest.h"
#include "getcompliancedetailsbyresourceresponse.h"
#include "getcompliancesummarybyconfigruleresponse.h"
#include "getcompliancesummarybyresourcetyperequest.h"
#include "getcompliancesummarybyresourcetyperesponse.h"
#include "getdiscoveredresourcecountsrequest.h"
#include "getdiscoveredresourcecountsresponse.h"
#include "getresourceconfighistoryrequest.h"
#include "getresourceconfighistoryresponse.h"
#include "listdiscoveredresourcesrequest.h"
#include "listdiscoveredresourcesresponse.h"
#include "putconfigrulerequest.h"
#include "putconfigruleresponse.h"
#include "putconfigurationrecorderrequest.h"
#include "putconfigurationrecorderresponse.h"
#include "putdeliverychannelrequest.h"
#include "putdeliverychannelresponse.h"
#include "putevaluationsrequest.h"
#include "putevaluationsresponse.h"
#include "startconfigrulesevaluationrequest.h"
#include "startconfigrulesevaluationresponse.h"
#include "startconfigurationrecorderrequest.h"
#include "startconfigurationrecorderresponse.h"
#include "stopconfigurationrecorderrequest.h"
#include "stopconfigurationrecorderresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace ConfigService {

/**
 * @class  ConfigServiceClient
 *
 * @brief  Client for AWS Config (Config Service)
 *
 * <fullname>AWS Config</fullname>
 *
 * AWS Config provides a way to keep track of the configurations of all the AWS resources associated with your AWS account.
 * You can use AWS Config to get the current and historical configurations of each AWS resource and also to get information
 * about the relationship between the resources. An AWS resource can be an Amazon Compute Cloud (Amazon EC2) instance, an
 * Elastic Block Store (EBS) volume, an Elastic network Interface (ENI), or a security group. For a complete list of
 * resources currently supported by AWS Config, see <a
 * href="http://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
 * AWS
 *
 * Resources</a>>
 *
 * You can access and manage AWS Config through the AWS Management Console, the AWS Command Line Interface (AWS CLI), the
 * AWS Config API, or the AWS SDKs for AWS
 *
 * Confi>
 *
 * This reference guide contains documentation for the AWS Config API and the AWS CLI commands that you can use to manage
 * AWS
 *
 * Config>
 *
 * The AWS Config API uses the Signature Version 4 protocol for signing requests. For more information about how to sign a
 * request with this protocol, see <a
 * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 *
 * Process</a>>
 *
 * For detailed information about AWS Config features and their associated actions or commands, as well as how to work with
 * AWS Management Console, see <a href="http://docs.aws.amazon.com/config/latest/developerguide/WhatIsConfig.html">What Is
 * AWS Config?</a> in the <i>AWS Config Developer
 */

/**
 * @brief  Constructs a new ConfigServiceClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ConfigServiceClient::ConfigServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ConfigServiceClientPrivate(this), parent)
{
    Q_D(ConfigServiceClient);
    d->apiVersion = QStringLiteral("2014-11-12");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("config");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Config");
    d->serviceName = QStringLiteral("config");
}

/**
 * @brief  Constructs a new ConfigServiceClient object.
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
ConfigServiceClient::ConfigServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ConfigServiceClientPrivate(this), parent)
{
    Q_D(ConfigServiceClient);
    d->apiVersion = QStringLiteral("2014-11-12");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("config");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Config");
    d->serviceName = QStringLiteral("config");
}

/**
 * Returns the current configuration for one or more requested resources. The operation also returns a list of resources
 * that are not processed in the current request. If there are no unprocessed resources, the operation returns an empty
 * unprocessedResourceKeys list.
 *
 * </p <note> <ul> <li>
 *
 * The API does not return results for deleted
 *
 * resources> </li> <li>
 *
 * The API does not return any tags for the requested resources. This information is filtered out of the
 * supplementaryConfiguration section of the API
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchGetResourceConfigResponse * ConfigServiceClient::batchGetResourceConfig(const BatchGetResourceConfigRequest &request)
{
    return qobject_cast<BatchGetResourceConfigResponse *>(send(request));
}

/**
 * Deletes the specified AWS Config rule and all of its evaluation
 *
 * results>
 *
 * AWS Config sets the state of a rule to <code>DELETING</code> until the deletion is complete. You cannot update a rule
 * while it is in this state. If you make a <code>PutConfigRule</code> or <code>DeleteConfigRule</code> request for the
 * rule, you will receive a
 *
 * <code>ResourceInUseException</code>>
 *
 * You can check the state of a rule by using the <code>DescribeConfigRules</code>
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteConfigRuleResponse * ConfigServiceClient::deleteConfigRule(const DeleteConfigRuleRequest &request)
{
    return qobject_cast<DeleteConfigRuleResponse *>(send(request));
}

/**
 * Deletes the configuration
 *
 * recorder>
 *
 * After the configuration recorder is deleted, AWS Config will not record resource configuration changes until you create
 * a new configuration
 *
 * recorder>
 *
 * This action does not delete the configuration information that was previously recorded. You will be able to access the
 * previously recorded information by using the <code>GetResourceConfigHistory</code> action, but you will not be able to
 * access this information in the AWS Config console until you create a new configuration
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteConfigurationRecorderResponse * ConfigServiceClient::deleteConfigurationRecorder(const DeleteConfigurationRecorderRequest &request)
{
    return qobject_cast<DeleteConfigurationRecorderResponse *>(send(request));
}

/**
 * Deletes the delivery
 *
 * channel>
 *
 * Before you can delete the delivery channel, you must stop the configuration recorder by using the
 * <a>StopConfigurationRecorder</a>
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDeliveryChannelResponse * ConfigServiceClient::deleteDeliveryChannel(const DeleteDeliveryChannelRequest &request)
{
    return qobject_cast<DeleteDeliveryChannelResponse *>(send(request));
}

/**
 * Deletes the evaluation results for the specified Config rule. You can specify one Config rule per request. After you
 * delete the evaluation results, you can call the <a>StartConfigRulesEvaluation</a> API to start evaluating your AWS
 * resources against the
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEvaluationResultsResponse * ConfigServiceClient::deleteEvaluationResults(const DeleteEvaluationResultsRequest &request)
{
    return qobject_cast<DeleteEvaluationResultsResponse *>(send(request));
}

/**
 * Schedules delivery of a configuration snapshot to the Amazon S3 bucket in the specified delivery channel. After the
 * delivery has started, AWS Config sends following notifications using an Amazon SNS topic that you have
 *
 * specified> <ul> <li>
 *
 * Notification of starting the
 *
 * delivery> </li> <li>
 *
 * Notification of delivery completed, if the delivery was successfully
 *
 * completed> </li> <li>
 *
 * Notification of delivery failure, if the delivery failed to
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeliverConfigSnapshotResponse * ConfigServiceClient::deliverConfigSnapshot(const DeliverConfigSnapshotRequest &request)
{
    return qobject_cast<DeliverConfigSnapshotResponse *>(send(request));
}

/**
 * Indicates whether the specified AWS Config rules are compliant. If a rule is noncompliant, this action returns the
 * number of AWS resources that do not comply with the
 *
 * rule>
 *
 * A rule is compliant if all of the evaluated resources comply with it, and it is noncompliant if any of these resources
 * do not
 *
 * comply>
 *
 * If AWS Config has no current evaluation results for the rule, it returns <code>INSUFFICIENT_DATA</code>. This result
 * might indicate one of the following
 *
 * conditions> <ul> <li>
 *
 * AWS Config has never invoked an evaluation for the rule. To check whether it has, use the
 * <code>DescribeConfigRuleEvaluationStatus</code> action to get the <code>LastSuccessfulInvocationTime</code> and
 *
 * <code>LastFailedInvocationTime</code>> </li> <li>
 *
 * The rule's AWS Lambda function is failing to send evaluation results to AWS Config. Verify that the role that you
 * assigned to your configuration recorder includes the <code>config:PutEvaluations</code> permission. If the rule is a
 * custom rule, verify that the AWS Lambda execution role includes the <code>config:PutEvaluations</code>
 *
 * permission> </li> <li>
 *
 * The rule's AWS Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation results. This can occur if
 * the resources were deleted or removed from the rule's
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeComplianceByConfigRuleResponse * ConfigServiceClient::describeComplianceByConfigRule(const DescribeComplianceByConfigRuleRequest &request)
{
    return qobject_cast<DescribeComplianceByConfigRuleResponse *>(send(request));
}

/**
 * Indicates whether the specified AWS resources are compliant. If a resource is noncompliant, this action returns the
 * number of AWS Config rules that the resource does not comply
 *
 * with>
 *
 * A resource is compliant if it complies with all the AWS Config rules that evaluate it. It is noncompliant if it does not
 * comply with one or more of these
 *
 * rules>
 *
 * If AWS Config has no current evaluation results for the resource, it returns <code>INSUFFICIENT_DATA</code>. This result
 * might indicate one of the following conditions about the rules that evaluate the
 *
 * resource> <ul> <li>
 *
 * AWS Config has never invoked an evaluation for the rule. To check whether it has, use the
 * <code>DescribeConfigRuleEvaluationStatus</code> action to get the <code>LastSuccessfulInvocationTime</code> and
 *
 * <code>LastFailedInvocationTime</code>> </li> <li>
 *
 * The rule's AWS Lambda function is failing to send evaluation results to AWS Config. Verify that the role that you
 * assigned to your configuration recorder includes the <code>config:PutEvaluations</code> permission. If the rule is a
 * custom rule, verify that the AWS Lambda execution role includes the <code>config:PutEvaluations</code>
 *
 * permission> </li> <li>
 *
 * The rule's AWS Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation results. This can occur if
 * the resources were deleted or removed from the rule's
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeComplianceByResourceResponse * ConfigServiceClient::describeComplianceByResource(const DescribeComplianceByResourceRequest &request)
{
    return qobject_cast<DescribeComplianceByResourceResponse *>(send(request));
}

/**
 * Returns status information for each of your AWS managed Config rules. The status includes information such as the last
 * time AWS Config invoked the rule, the last time AWS Config failed to invoke the rule, and the related error for the last
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConfigRuleEvaluationStatusResponse * ConfigServiceClient::describeConfigRuleEvaluationStatus(const DescribeConfigRuleEvaluationStatusRequest &request)
{
    return qobject_cast<DescribeConfigRuleEvaluationStatusResponse *>(send(request));
}

/**
 * Returns details about your AWS Config
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConfigRulesResponse * ConfigServiceClient::describeConfigRules(const DescribeConfigRulesRequest &request)
{
    return qobject_cast<DescribeConfigRulesResponse *>(send(request));
}

/**
 * Returns the current status of the specified configuration recorder. If a configuration recorder is not specified, this
 * action returns the status of all configuration recorder associated with the
 *
 * account> <note>
 *
 * Currently, you can specify only one configuration recorder per region in your
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConfigurationRecorderStatusResponse * ConfigServiceClient::describeConfigurationRecorderStatus(const DescribeConfigurationRecorderStatusRequest &request)
{
    return qobject_cast<DescribeConfigurationRecorderStatusResponse *>(send(request));
}

/**
 * Returns the details for the specified configuration recorders. If the configuration recorder is not specified, this
 * action returns the details for all configuration recorders associated with the
 *
 * account> <note>
 *
 * Currently, you can specify only one configuration recorder per region in your
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConfigurationRecordersResponse * ConfigServiceClient::describeConfigurationRecorders(const DescribeConfigurationRecordersRequest &request)
{
    return qobject_cast<DescribeConfigurationRecordersResponse *>(send(request));
}

/**
 * Returns the current status of the specified delivery channel. If a delivery channel is not specified, this action
 * returns the current status of all delivery channels associated with the
 *
 * account> <note>
 *
 * Currently, you can specify only one delivery channel per region in your
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDeliveryChannelStatusResponse * ConfigServiceClient::describeDeliveryChannelStatus(const DescribeDeliveryChannelStatusRequest &request)
{
    return qobject_cast<DescribeDeliveryChannelStatusResponse *>(send(request));
}

/**
 * Returns details about the specified delivery channel. If a delivery channel is not specified, this action returns the
 * details of all delivery channels associated with the
 *
 * account> <note>
 *
 * Currently, you can specify only one delivery channel per region in your
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDeliveryChannelsResponse * ConfigServiceClient::describeDeliveryChannels(const DescribeDeliveryChannelsRequest &request)
{
    return qobject_cast<DescribeDeliveryChannelsResponse *>(send(request));
}

/**
 * Returns the evaluation results for the specified AWS Config rule. The results indicate which AWS resources were
 * evaluated by the rule, when each resource was last evaluated, and whether each resource complies with the
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetComplianceDetailsByConfigRuleResponse * ConfigServiceClient::getComplianceDetailsByConfigRule(const GetComplianceDetailsByConfigRuleRequest &request)
{
    return qobject_cast<GetComplianceDetailsByConfigRuleResponse *>(send(request));
}

/**
 * Returns the evaluation results for the specified AWS resource. The results indicate which AWS Config rules were used to
 * evaluate the resource, when each rule was last used, and whether the resource complies with each
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetComplianceDetailsByResourceResponse * ConfigServiceClient::getComplianceDetailsByResource(const GetComplianceDetailsByResourceRequest &request)
{
    return qobject_cast<GetComplianceDetailsByResourceResponse *>(send(request));
}

/**
 * Returns the number of AWS Config rules that are compliant and noncompliant, up to a maximum of 25 for
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetComplianceSummaryByConfigRuleResponse * ConfigServiceClient::getComplianceSummaryByConfigRule()
{
    return qobject_cast<GetComplianceSummaryByConfigRuleResponse *>(send(request));
}

/**
 * Returns the number of resources that are compliant and the number that are noncompliant. You can specify one or more
 * resource types to get these numbers for each resource type. The maximum number returned is
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetComplianceSummaryByResourceTypeResponse * ConfigServiceClient::getComplianceSummaryByResourceType(const GetComplianceSummaryByResourceTypeRequest &request)
{
    return qobject_cast<GetComplianceSummaryByResourceTypeResponse *>(send(request));
}

/**
 * Returns the resource types, the number of each resource type, and the total number of resources that AWS Config is
 * recording in this region for your AWS account.
 *
 * </p <p class="title"> <b>Example</b>
 *
 * </p <ol> <li>
 *
 * AWS Config is recording three resource types in the US East (Ohio) Region for your account: 25 EC2 instances, 20 IAM
 * users, and 15 S3
 *
 * buckets> </li> <li>
 *
 * You make a call to the <code>GetDiscoveredResourceCounts</code> action and specify that you want all resource types.
 *
 * </p </li> <li>
 *
 * AWS Config returns the
 *
 * following> <ul> <li>
 *
 * The resource types (EC2 instances, IAM users, and S3
 *
 * buckets> </li> <li>
 *
 * The number of each resource type (25, 20, and
 *
 * 15> </li> <li>
 *
 * The total number of all resources
 *
 * (60> </li> </ul> </li> </ol>
 *
 * The response is paginated. By default, AWS Config lists 100 <a>ResourceCount</a> objects on each page. You can customize
 * this number with the <code>limit</code> parameter. The response includes a <code>nextToken</code> string. To get the
 * next page of results, run the request again and specify the string for the <code>nextToken</code>
 *
 * parameter> <note>
 *
 * If you make a call to the <a>GetDiscoveredResourceCounts</a> action, you may not immediately receive resource counts in
 * the following
 *
 * situations> <ul> <li>
 *
 * You are a new AWS Config
 *
 * custome> </li> <li>
 *
 * You just enabled resource
 *
 * recordin> </li> </ul>
 *
 * It may take a few minutes for AWS Config to record and count your resources. Wait a few minutes and then retry the
 * <a>GetDiscoveredResourceCounts</a> action.
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDiscoveredResourceCountsResponse * ConfigServiceClient::getDiscoveredResourceCounts(const GetDiscoveredResourceCountsRequest &request)
{
    return qobject_cast<GetDiscoveredResourceCountsResponse *>(send(request));
}

/**
 * Returns a list of configuration items for the specified resource. The list contains details about each state of the
 * resource during the specified time
 *
 * interval>
 *
 * The response is paginated. By default, AWS Config returns a limit of 10 configuration items per page. You can customize
 * this number with the <code>limit</code> parameter. The response includes a <code>nextToken</code> string. To get the
 * next page of results, run the request again and specify the string for the <code>nextToken</code>
 *
 * parameter> <note>
 *
 * Each call to the API is limited to span a duration of seven days. It is likely that the number of records returned is
 * smaller than the specified <code>limit</code>. In such cases, you can make another call, using the
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetResourceConfigHistoryResponse * ConfigServiceClient::getResourceConfigHistory(const GetResourceConfigHistoryRequest &request)
{
    return qobject_cast<GetResourceConfigHistoryResponse *>(send(request));
}

/**
 * Accepts a resource type and returns a list of resource identifiers for the resources of that type. A resource identifier
 * includes the resource type, ID, and (if available) the custom resource name. The results consist of resources that AWS
 * Config has discovered, including those that AWS Config is not currently recording. You can narrow the results to include
 * only resources that have specific resource IDs or a resource
 *
 * name> <note>
 *
 * You can specify either resource IDs or a resource name but not both in the same
 *
 * request> </note>
 *
 * The response is paginated. By default, AWS Config lists 100 resource identifiers on each page. You can customize this
 * number with the <code>limit</code> parameter. The response includes a <code>nextToken</code> string. To get the next
 * page of results, run the request again and specify the string for the <code>nextToken</code>
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDiscoveredResourcesResponse * ConfigServiceClient::listDiscoveredResources(const ListDiscoveredResourcesRequest &request)
{
    return qobject_cast<ListDiscoveredResourcesResponse *>(send(request));
}

/**
 * Adds or updates an AWS Config rule for evaluating whether your AWS resources comply with your desired
 *
 * configurations>
 *
 * You can use this action for custom Config rules and AWS managed Config rules. A custom Config rule is a rule that you
 * develop and maintain. An AWS managed Config rule is a customizable, predefined rule that AWS Config
 *
 * provides>
 *
 * If you are adding a new custom Config rule, you must first create the AWS Lambda function that the rule invokes to
 * evaluate your resources. When you use the <code>PutConfigRule</code> action to add the rule to AWS Config, you must
 * specify the Amazon Resource Name (ARN) that AWS Lambda assigns to the function. Specify the ARN for the
 * <code>SourceIdentifier</code> key. This key is part of the <code>Source</code> object, which is part of the
 * <code>ConfigRule</code> object.
 *
 * </p
 *
 * If you are adding an AWS managed Config rule, specify the rule's identifier for the <code>SourceIdentifier</code> key.
 * To reference AWS managed Config rule identifiers, see <a
 * href="http://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">About AWS Managed
 * Config
 *
 * Rules</a>>
 *
 * For any new rule that you add, specify the <code>ConfigRuleName</code> in the <code>ConfigRule</code> object. Do not
 * specify the <code>ConfigRuleArn</code> or the <code>ConfigRuleId</code>. These values are generated by AWS Config for
 * new
 *
 * rules>
 *
 * If you are updating a rule that you added previously, you can specify the rule by <code>ConfigRuleName</code>,
 * <code>ConfigRuleId</code>, or <code>ConfigRuleArn</code> in the <code>ConfigRule</code> data type that you use in this
 *
 * request>
 *
 * The maximum number of rules that AWS Config supports is
 *
 * 50>
 *
 * For more information about requesting a rule limit increase, see <a
 * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_config">AWS Config Limits</a> in the
 * <i>AWS General Reference
 *
 * Guide</i>>
 *
 * For more information about developing and using AWS Config rules, see <a
 * href="http://docs.aws.amazon.com/config/latest/developerguide/evaluate-config.html">Evaluating AWS Resource
 * Configurations with AWS Config</a> in the <i>AWS Config Developer
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutConfigRuleResponse * ConfigServiceClient::putConfigRule(const PutConfigRuleRequest &request)
{
    return qobject_cast<PutConfigRuleResponse *>(send(request));
}

/**
 * Creates a new configuration recorder to record the selected resource
 *
 * configurations>
 *
 * You can use this action to change the role <code>roleARN</code> and/or the <code>recordingGroup</code> of an existing
 * recorder. To change the role, call the action on the existing configuration recorder and specify a
 *
 * role> <note>
 *
 * Currently, you can specify only one configuration recorder per region in your
 *
 * account>
 *
 * If <code>ConfigurationRecorder</code> does not have the <b>recordingGroup</b> parameter specified, the default is to
 * record all supported resource
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutConfigurationRecorderResponse * ConfigServiceClient::putConfigurationRecorder(const PutConfigurationRecorderRequest &request)
{
    return qobject_cast<PutConfigurationRecorderResponse *>(send(request));
}

/**
 * Creates a delivery channel object to deliver configuration information to an Amazon S3 bucket and Amazon SNS
 *
 * topic>
 *
 * Before you can create a delivery channel, you must create a configuration
 *
 * recorder>
 *
 * You can use this action to change the Amazon S3 bucket or an Amazon SNS topic of the existing delivery channel. To
 * change the Amazon S3 bucket or an Amazon SNS topic, call this action and specify the changed values for the S3 bucket
 * and the SNS topic. If you specify a different value for either the S3 bucket or the SNS topic, this action will keep the
 * existing value for the parameter that is not
 *
 * changed> <note>
 *
 * You can have only one delivery channel per region in your
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutDeliveryChannelResponse * ConfigServiceClient::putDeliveryChannel(const PutDeliveryChannelRequest &request)
{
    return qobject_cast<PutDeliveryChannelResponse *>(send(request));
}

/**
 * Used by an AWS Lambda function to deliver evaluation results to AWS Config. This action is required in every AWS Lambda
 * function that is invoked by an AWS Config
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutEvaluationsResponse * ConfigServiceClient::putEvaluations(const PutEvaluationsRequest &request)
{
    return qobject_cast<PutEvaluationsResponse *>(send(request));
}

/**
 * Runs an on-demand evaluation for the specified Config rules against the last known configuration state of the resources.
 * Use <code>StartConfigRulesEvaluation</code> when you want to test a rule that you updated is working as expected.
 * <code>StartConfigRulesEvaluation</code> does not re-record the latest configuration state for your resources; it re-runs
 * an evaluation against the last known state of your resources.
 *
 * </p
 *
 * You can specify up to 25 Config rules per request.
 *
 * </p
 *
 * An existing <code>StartConfigRulesEvaluation</code> call must complete for the specified rules before you can call the
 * API again. If you chose to have AWS Config stream to an Amazon SNS topic, you will receive a
 * <code>ConfigRuleEvaluationStarted</code> notification when the evaluation
 *
 * starts> <note>
 *
 * You don't need to call the <code>StartConfigRulesEvaluation</code> API to run an evaluation for a new rule. When you
 * create a new rule, AWS Config automatically evaluates your resources against the rule.
 *
 * </p </note>
 *
 * The <code>StartConfigRulesEvaluation</code> API is useful if you want to run on-demand evaluations, such as the
 * following
 *
 * example> <ol> <li>
 *
 * You have a custom rule that evaluates your IAM resources every 24
 *
 * hours> </li> <li>
 *
 * You update your Lambda function to add additional conditions to your
 *
 * rule> </li> <li>
 *
 * Instead of waiting for the next periodic evaluation, you call the <code>StartConfigRulesEvaluation</code>
 *
 * API> </li> <li>
 *
 * AWS Config invokes your Lambda function and evaluates your IAM
 *
 * resources> </li> <li>
 *
 * Your custom rule will still run periodic evaluations every 24
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartConfigRulesEvaluationResponse * ConfigServiceClient::startConfigRulesEvaluation(const StartConfigRulesEvaluationRequest &request)
{
    return qobject_cast<StartConfigRulesEvaluationResponse *>(send(request));
}

/**
 * Starts recording configurations of the AWS resources you have selected to record in your AWS
 *
 * account>
 *
 * You must have created at least one delivery channel to successfully start the configuration
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartConfigurationRecorderResponse * ConfigServiceClient::startConfigurationRecorder(const StartConfigurationRecorderRequest &request)
{
    return qobject_cast<StartConfigurationRecorderResponse *>(send(request));
}

/**
 * Stops recording configurations of the AWS resources you have selected to record in your AWS
 *
 * @param  request Request to send to AWS Config.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopConfigurationRecorderResponse * ConfigServiceClient::stopConfigurationRecorder(const StopConfigurationRecorderRequest &request)
{
    return qobject_cast<StopConfigurationRecorderResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  ConfigServiceClientPrivate
 *
 * @brief  Private implementation for ConfigServiceClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfigServiceClientPrivate object.
 *
 * @param  q  Pointer to this object's public ConfigServiceClient instance.
 */
ConfigServiceClientPrivate::ConfigServiceClientPrivate(ConfigServiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ConfigService
} // namespace QtAws
