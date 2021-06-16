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

#include "configserviceclient.h"
#include "configserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "batchgetaggregateresourceconfigrequest.h"
#include "batchgetaggregateresourceconfigresponse.h"
#include "batchgetresourceconfigrequest.h"
#include "batchgetresourceconfigresponse.h"
#include "deleteaggregationauthorizationrequest.h"
#include "deleteaggregationauthorizationresponse.h"
#include "deleteconfigrulerequest.h"
#include "deleteconfigruleresponse.h"
#include "deleteconfigurationaggregatorrequest.h"
#include "deleteconfigurationaggregatorresponse.h"
#include "deleteconfigurationrecorderrequest.h"
#include "deleteconfigurationrecorderresponse.h"
#include "deletedeliverychannelrequest.h"
#include "deletedeliverychannelresponse.h"
#include "deleteevaluationresultsrequest.h"
#include "deleteevaluationresultsresponse.h"
#include "deleteorganizationconfigrulerequest.h"
#include "deleteorganizationconfigruleresponse.h"
#include "deletependingaggregationrequestrequest.h"
#include "deletependingaggregationrequestresponse.h"
#include "deleteremediationconfigurationrequest.h"
#include "deleteremediationconfigurationresponse.h"
#include "deleteretentionconfigurationrequest.h"
#include "deleteretentionconfigurationresponse.h"
#include "deliverconfigsnapshotrequest.h"
#include "deliverconfigsnapshotresponse.h"
#include "describeaggregatecompliancebyconfigrulesrequest.h"
#include "describeaggregatecompliancebyconfigrulesresponse.h"
#include "describeaggregationauthorizationsrequest.h"
#include "describeaggregationauthorizationsresponse.h"
#include "describecompliancebyconfigrulerequest.h"
#include "describecompliancebyconfigruleresponse.h"
#include "describecompliancebyresourcerequest.h"
#include "describecompliancebyresourceresponse.h"
#include "describeconfigruleevaluationstatusrequest.h"
#include "describeconfigruleevaluationstatusresponse.h"
#include "describeconfigrulesrequest.h"
#include "describeconfigrulesresponse.h"
#include "describeconfigurationaggregatorsourcesstatusrequest.h"
#include "describeconfigurationaggregatorsourcesstatusresponse.h"
#include "describeconfigurationaggregatorsrequest.h"
#include "describeconfigurationaggregatorsresponse.h"
#include "describeconfigurationrecorderstatusrequest.h"
#include "describeconfigurationrecorderstatusresponse.h"
#include "describeconfigurationrecordersrequest.h"
#include "describeconfigurationrecordersresponse.h"
#include "describedeliverychannelstatusrequest.h"
#include "describedeliverychannelstatusresponse.h"
#include "describedeliverychannelsrequest.h"
#include "describedeliverychannelsresponse.h"
#include "describeorganizationconfigrulestatusesrequest.h"
#include "describeorganizationconfigrulestatusesresponse.h"
#include "describeorganizationconfigrulesrequest.h"
#include "describeorganizationconfigrulesresponse.h"
#include "describependingaggregationrequestsrequest.h"
#include "describependingaggregationrequestsresponse.h"
#include "describeremediationconfigurationsrequest.h"
#include "describeremediationconfigurationsresponse.h"
#include "describeremediationexecutionstatusrequest.h"
#include "describeremediationexecutionstatusresponse.h"
#include "describeretentionconfigurationsrequest.h"
#include "describeretentionconfigurationsresponse.h"
#include "getaggregatecompliancedetailsbyconfigrulerequest.h"
#include "getaggregatecompliancedetailsbyconfigruleresponse.h"
#include "getaggregateconfigrulecompliancesummaryrequest.h"
#include "getaggregateconfigrulecompliancesummaryresponse.h"
#include "getaggregatediscoveredresourcecountsrequest.h"
#include "getaggregatediscoveredresourcecountsresponse.h"
#include "getaggregateresourceconfigrequest.h"
#include "getaggregateresourceconfigresponse.h"
#include "getcompliancedetailsbyconfigrulerequest.h"
#include "getcompliancedetailsbyconfigruleresponse.h"
#include "getcompliancedetailsbyresourcerequest.h"
#include "getcompliancedetailsbyresourceresponse.h"
#include "getcompliancesummarybyconfigrulerequest.h"
#include "getcompliancesummarybyconfigruleresponse.h"
#include "getcompliancesummarybyresourcetyperequest.h"
#include "getcompliancesummarybyresourcetyperesponse.h"
#include "getdiscoveredresourcecountsrequest.h"
#include "getdiscoveredresourcecountsresponse.h"
#include "getorganizationconfigruledetailedstatusrequest.h"
#include "getorganizationconfigruledetailedstatusresponse.h"
#include "getresourceconfighistoryrequest.h"
#include "getresourceconfighistoryresponse.h"
#include "listaggregatediscoveredresourcesrequest.h"
#include "listaggregatediscoveredresourcesresponse.h"
#include "listdiscoveredresourcesrequest.h"
#include "listdiscoveredresourcesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putaggregationauthorizationrequest.h"
#include "putaggregationauthorizationresponse.h"
#include "putconfigrulerequest.h"
#include "putconfigruleresponse.h"
#include "putconfigurationaggregatorrequest.h"
#include "putconfigurationaggregatorresponse.h"
#include "putconfigurationrecorderrequest.h"
#include "putconfigurationrecorderresponse.h"
#include "putdeliverychannelrequest.h"
#include "putdeliverychannelresponse.h"
#include "putevaluationsrequest.h"
#include "putevaluationsresponse.h"
#include "putorganizationconfigrulerequest.h"
#include "putorganizationconfigruleresponse.h"
#include "putremediationconfigurationsrequest.h"
#include "putremediationconfigurationsresponse.h"
#include "putretentionconfigurationrequest.h"
#include "putretentionconfigurationresponse.h"
#include "selectresourceconfigrequest.h"
#include "selectresourceconfigresponse.h"
#include "startconfigrulesevaluationrequest.h"
#include "startconfigrulesevaluationresponse.h"
#include "startconfigurationrecorderrequest.h"
#include "startconfigurationrecorderresponse.h"
#include "startremediationexecutionrequest.h"
#include "startremediationexecutionresponse.h"
#include "stopconfigurationrecorderrequest.h"
#include "stopconfigurationrecorderresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ConfigService
 * \brief Contains classess for accessing AWS Config (Config Service).
 *
 * \inmodule QtAwsConfigService
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::ConfigServiceClient
 * \brief The ConfigServiceClient class provides access to the AWS Config (Config Service) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsConfigService
 *
 *  <fullname>AWS Config</fullname>
 * 
 *  AWS Config provides a way to keep track of the configurations of all the AWS resources associated with your AWS account.
 *  You can use AWS Config to get the current and historical configurations of each AWS resource and also to get information
 *  about the relationship between the resources. An AWS resource can be an Amazon Compute Cloud (Amazon EC2) instance, an
 *  Elastic Block Store (EBS) volume, an elastic network Interface (ENI), or a security group. For a complete list of
 *  resources currently supported by AWS Config, see <a
 *  href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
 *  AWS
 * 
 *  Resources</a>>
 * 
 *  You can access and manage AWS Config through the AWS Management Console, the AWS Command Line Interface (AWS CLI), the
 *  AWS Config API, or the AWS SDKs for AWS Config. This reference guide contains documentation for the AWS Config API and
 *  the AWS CLI commands that you can use to manage AWS Config. The AWS Config API uses the Signature Version 4 protocol for
 *  signing requests. For more information about how to sign a request with this protocol, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>.
 *  For detailed information about AWS Config features and their associated actions or commands, as well as how to work with
 *  AWS Management Console, see <a href="https://docs.aws.amazon.com/config/latest/developerguide/WhatIsConfig.html">What Is
 *  AWS Config</a> in the <i>AWS Config Developer
 */

/*!
 * \brief Constructs a ConfigServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
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

/*!
 * \overload ConfigServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
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

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * BatchGetAggregateResourceConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the current configuration items for resources that are present in your AWS Config aggregator. The operation also
 * returns a list of resources that are not processed in the current request. If there are no unprocessed resources, the
 * operation returns an empty <code>unprocessedResourceIdentifiers</code> list.
 *
 * </p <note> <ul> <li>
 *
 * The API does not return results for deleted
 *
 * resources> </li> <li>
 *
 * The API does not return tags and
 */
BatchGetAggregateResourceConfigResponse * ConfigServiceClient::batchGetAggregateResourceConfig(const BatchGetAggregateResourceConfigRequest &request)
{
    return qobject_cast<BatchGetAggregateResourceConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * BatchGetResourceConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
BatchGetResourceConfigResponse * ConfigServiceClient::batchGetResourceConfig(const BatchGetResourceConfigRequest &request)
{
    return qobject_cast<BatchGetResourceConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DeleteAggregationAuthorizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the authorization granted to the specified configuration aggregator account in a specified
 */
DeleteAggregationAuthorizationResponse * ConfigServiceClient::deleteAggregationAuthorization(const DeleteAggregationAuthorizationRequest &request)
{
    return qobject_cast<DeleteAggregationAuthorizationResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DeleteConfigRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
DeleteConfigRuleResponse * ConfigServiceClient::deleteConfigRule(const DeleteConfigRuleRequest &request)
{
    return qobject_cast<DeleteConfigRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DeleteConfigurationAggregatorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified configuration aggregator and the aggregated data associated with the
 */
DeleteConfigurationAggregatorResponse * ConfigServiceClient::deleteConfigurationAggregator(const DeleteConfigurationAggregatorRequest &request)
{
    return qobject_cast<DeleteConfigurationAggregatorResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DeleteConfigurationRecorderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
DeleteConfigurationRecorderResponse * ConfigServiceClient::deleteConfigurationRecorder(const DeleteConfigurationRecorderRequest &request)
{
    return qobject_cast<DeleteConfigurationRecorderResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DeleteDeliveryChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the delivery
 *
 * channel>
 *
 * Before you can delete the delivery channel, you must stop the configuration recorder by using the
 * <a>StopConfigurationRecorder</a>
 */
DeleteDeliveryChannelResponse * ConfigServiceClient::deleteDeliveryChannel(const DeleteDeliveryChannelRequest &request)
{
    return qobject_cast<DeleteDeliveryChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DeleteEvaluationResultsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the evaluation results for the specified AWS Config rule. You can specify one AWS Config rule per request. After
 * you delete the evaluation results, you can call the <a>StartConfigRulesEvaluation</a> API to start evaluating your AWS
 * resources against the
 */
DeleteEvaluationResultsResponse * ConfigServiceClient::deleteEvaluationResults(const DeleteEvaluationResultsRequest &request)
{
    return qobject_cast<DeleteEvaluationResultsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DeleteOrganizationConfigRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteOrganizationConfigRuleResponse * ConfigServiceClient::deleteOrganizationConfigRule(const DeleteOrganizationConfigRuleRequest &request)
{
    return qobject_cast<DeleteOrganizationConfigRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DeletePendingAggregationRequestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes pending authorization requests for a specified aggregator account in a specified
 */
DeletePendingAggregationRequestResponse * ConfigServiceClient::deletePendingAggregationRequest(const DeletePendingAggregationRequestRequest &request)
{
    return qobject_cast<DeletePendingAggregationRequestResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DeleteRemediationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the remediation
 */
DeleteRemediationConfigurationResponse * ConfigServiceClient::deleteRemediationConfiguration(const DeleteRemediationConfigurationRequest &request)
{
    return qobject_cast<DeleteRemediationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DeleteRetentionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the retention
 */
DeleteRetentionConfigurationResponse * ConfigServiceClient::deleteRetentionConfiguration(const DeleteRetentionConfigurationRequest &request)
{
    return qobject_cast<DeleteRetentionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DeliverConfigSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Schedules delivery of a configuration snapshot to the Amazon S3 bucket in the specified delivery channel. After the
 * delivery has started, AWS Config sends the following notifications using an Amazon SNS topic that you have
 *
 * specified> <ul> <li>
 *
 * Notification of the start of the
 *
 * delivery> </li> <li>
 *
 * Notification of the completion of the delivery, if the delivery was successfully
 *
 * completed> </li> <li>
 *
 * Notification of delivery failure, if the delivery
 */
DeliverConfigSnapshotResponse * ConfigServiceClient::deliverConfigSnapshot(const DeliverConfigSnapshotRequest &request)
{
    return qobject_cast<DeliverConfigSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeAggregateComplianceByConfigRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of compliant and noncompliant rules with the number of resources for compliant and noncompliant rules.
 *
 * </p <note>
 *
 * The results can return an empty result page, but if you have a nextToken, the results are displayed on the next
 */
DescribeAggregateComplianceByConfigRulesResponse * ConfigServiceClient::describeAggregateComplianceByConfigRules(const DescribeAggregateComplianceByConfigRulesRequest &request)
{
    return qobject_cast<DescribeAggregateComplianceByConfigRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeAggregationAuthorizationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of authorizations granted to various aggregator accounts and
 */
DescribeAggregationAuthorizationsResponse * ConfigServiceClient::describeAggregationAuthorizations(const DescribeAggregationAuthorizationsRequest &request)
{
    return qobject_cast<DescribeAggregationAuthorizationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeComplianceByConfigRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Indicates whether the specified AWS Config rules are compliant. If a rule is noncompliant, this action returns the
 * number of AWS resources that do not comply with the
 *
 * rule>
 *
 * A rule is compliant if all of the evaluated resources comply with it. It is noncompliant if any of these resources do
 * not
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
 * The rule's AWS Lambda function is failing to send evaluation results to AWS Config. Verify that the role you assigned to
 * your configuration recorder includes the <code>config:PutEvaluations</code> permission. If the rule is a custom rule,
 * verify that the AWS Lambda execution role includes the <code>config:PutEvaluations</code>
 *
 * permission> </li> <li>
 *
 * The rule's AWS Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation results. This can occur if
 * the resources were deleted or removed from the rule's
 */
DescribeComplianceByConfigRuleResponse * ConfigServiceClient::describeComplianceByConfigRule(const DescribeComplianceByConfigRuleRequest &request)
{
    return qobject_cast<DescribeComplianceByConfigRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeComplianceByResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
DescribeComplianceByResourceResponse * ConfigServiceClient::describeComplianceByResource(const DescribeComplianceByResourceRequest &request)
{
    return qobject_cast<DescribeComplianceByResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeConfigRuleEvaluationStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns status information for each of your AWS managed Config rules. The status includes information such as the last
 * time AWS Config invoked the rule, the last time AWS Config failed to invoke the rule, and the related error for the last
 */
DescribeConfigRuleEvaluationStatusResponse * ConfigServiceClient::describeConfigRuleEvaluationStatus(const DescribeConfigRuleEvaluationStatusRequest &request)
{
    return qobject_cast<DescribeConfigRuleEvaluationStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeConfigRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details about your AWS Config
 */
DescribeConfigRulesResponse * ConfigServiceClient::describeConfigRules(const DescribeConfigRulesRequest &request)
{
    return qobject_cast<DescribeConfigRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeConfigurationAggregatorSourcesStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns status information for sources within an aggregator. The status includes information about the last time AWS
 * Config verified authorization between the source account and an aggregator account. In case of a failure, the status
 * contains the related error code or message.
 */
DescribeConfigurationAggregatorSourcesStatusResponse * ConfigServiceClient::describeConfigurationAggregatorSourcesStatus(const DescribeConfigurationAggregatorSourcesStatusRequest &request)
{
    return qobject_cast<DescribeConfigurationAggregatorSourcesStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeConfigurationAggregatorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details of one or more configuration aggregators. If the configuration aggregator is not specified, this
 * action returns the details for all the configuration aggregators associated with the account.
 */
DescribeConfigurationAggregatorsResponse * ConfigServiceClient::describeConfigurationAggregators(const DescribeConfigurationAggregatorsRequest &request)
{
    return qobject_cast<DescribeConfigurationAggregatorsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeConfigurationRecorderStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the current status of the specified configuration recorder. If a configuration recorder is not specified, this
 * action returns the status of all configuration recorders associated with the
 *
 * account> <note>
 *
 * Currently, you can specify only one configuration recorder per region in your
 */
DescribeConfigurationRecorderStatusResponse * ConfigServiceClient::describeConfigurationRecorderStatus(const DescribeConfigurationRecorderStatusRequest &request)
{
    return qobject_cast<DescribeConfigurationRecorderStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeConfigurationRecordersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details for the specified configuration recorders. If the configuration recorder is not specified, this
 * action returns the details for all configuration recorders associated with the
 *
 * account> <note>
 *
 * Currently, you can specify only one configuration recorder per region in your
 */
DescribeConfigurationRecordersResponse * ConfigServiceClient::describeConfigurationRecorders(const DescribeConfigurationRecordersRequest &request)
{
    return qobject_cast<DescribeConfigurationRecordersResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeDeliveryChannelStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the current status of the specified delivery channel. If a delivery channel is not specified, this action
 * returns the current status of all delivery channels associated with the
 *
 * account> <note>
 *
 * Currently, you can specify only one delivery channel per region in your
 */
DescribeDeliveryChannelStatusResponse * ConfigServiceClient::describeDeliveryChannelStatus(const DescribeDeliveryChannelStatusRequest &request)
{
    return qobject_cast<DescribeDeliveryChannelStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeDeliveryChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details about the specified delivery channel. If a delivery channel is not specified, this action returns the
 * details of all delivery channels associated with the
 *
 * account> <note>
 *
 * Currently, you can specify only one delivery channel per region in your
 */
DescribeDeliveryChannelsResponse * ConfigServiceClient::describeDeliveryChannels(const DescribeDeliveryChannelsRequest &request)
{
    return qobject_cast<DescribeDeliveryChannelsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeOrganizationConfigRuleStatusesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeOrganizationConfigRuleStatusesResponse * ConfigServiceClient::describeOrganizationConfigRuleStatuses(const DescribeOrganizationConfigRuleStatusesRequest &request)
{
    return qobject_cast<DescribeOrganizationConfigRuleStatusesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeOrganizationConfigRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeOrganizationConfigRulesResponse * ConfigServiceClient::describeOrganizationConfigRules(const DescribeOrganizationConfigRulesRequest &request)
{
    return qobject_cast<DescribeOrganizationConfigRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribePendingAggregationRequestsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all pending aggregation
 */
DescribePendingAggregationRequestsResponse * ConfigServiceClient::describePendingAggregationRequests(const DescribePendingAggregationRequestsRequest &request)
{
    return qobject_cast<DescribePendingAggregationRequestsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeRemediationConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details of one or more remediation
 */
DescribeRemediationConfigurationsResponse * ConfigServiceClient::describeRemediationConfigurations(const DescribeRemediationConfigurationsRequest &request)
{
    return qobject_cast<DescribeRemediationConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeRemediationExecutionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a detailed view of a Remediation Execution for a set of resources including state, timestamps for when steps
 * for the remediation execution occur, and any error messages for steps that have failed. When you specify the limit and
 * the next token, you receive a paginated
 */
DescribeRemediationExecutionStatusResponse * ConfigServiceClient::describeRemediationExecutionStatus(const DescribeRemediationExecutionStatusRequest &request)
{
    return qobject_cast<DescribeRemediationExecutionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * DescribeRetentionConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details of one or more retention configurations. If the retention configuration name is not specified, this
 * action returns the details for all the retention configurations for that
 *
 * account> <note>
 *
 * Currently, AWS Config supports only one retention configuration per region in your
 */
DescribeRetentionConfigurationsResponse * ConfigServiceClient::describeRetentionConfigurations(const DescribeRetentionConfigurationsRequest &request)
{
    return qobject_cast<DescribeRetentionConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * GetAggregateComplianceDetailsByConfigRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the evaluation results for the specified AWS Config rule for a specific resource in a rule. The results indicate
 * which AWS resources were evaluated by the rule, when each resource was last evaluated, and whether each resource
 * complies with the rule.
 *
 * </p <note>
 *
 * The results can return an empty result page. But if you have a nextToken, the results are displayed on the next
 */
GetAggregateComplianceDetailsByConfigRuleResponse * ConfigServiceClient::getAggregateComplianceDetailsByConfigRule(const GetAggregateComplianceDetailsByConfigRuleRequest &request)
{
    return qobject_cast<GetAggregateComplianceDetailsByConfigRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * GetAggregateConfigRuleComplianceSummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the number of compliant and noncompliant rules for one or more accounts and regions in an
 *
 * aggregator> <note>
 *
 * The results can return an empty result page, but if you have a nextToken, the results are displayed on the next
 */
GetAggregateConfigRuleComplianceSummaryResponse * ConfigServiceClient::getAggregateConfigRuleComplianceSummary(const GetAggregateConfigRuleComplianceSummaryRequest &request)
{
    return qobject_cast<GetAggregateConfigRuleComplianceSummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * GetAggregateDiscoveredResourceCountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the resource counts across accounts and regions that are present in your AWS Config aggregator. You can request
 * the resource counts by providing filters and
 *
 * GroupByKey>
 *
 * For example, if the input contains accountID 12345678910 and region us-east-1 in filters, the API returns the count of
 * resources in account ID 12345678910 and region us-east-1. If the input contains ACCOUNT_ID as a GroupByKey, the API
 * returns resource counts for all source accounts that are present in your
 */
GetAggregateDiscoveredResourceCountsResponse * ConfigServiceClient::getAggregateDiscoveredResourceCounts(const GetAggregateDiscoveredResourceCountsRequest &request)
{
    return qobject_cast<GetAggregateDiscoveredResourceCountsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * GetAggregateResourceConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns configuration item that is aggregated for your specific resource in a specific source account and
 */
GetAggregateResourceConfigResponse * ConfigServiceClient::getAggregateResourceConfig(const GetAggregateResourceConfigRequest &request)
{
    return qobject_cast<GetAggregateResourceConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * GetComplianceDetailsByConfigRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the evaluation results for the specified AWS Config rule. The results indicate which AWS resources were
 * evaluated by the rule, when each resource was last evaluated, and whether each resource complies with the
 */
GetComplianceDetailsByConfigRuleResponse * ConfigServiceClient::getComplianceDetailsByConfigRule(const GetComplianceDetailsByConfigRuleRequest &request)
{
    return qobject_cast<GetComplianceDetailsByConfigRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * GetComplianceDetailsByResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the evaluation results for the specified AWS resource. The results indicate which AWS Config rules were used to
 * evaluate the resource, when each rule was last used, and whether the resource complies with each
 */
GetComplianceDetailsByResourceResponse * ConfigServiceClient::getComplianceDetailsByResource(const GetComplianceDetailsByResourceRequest &request)
{
    return qobject_cast<GetComplianceDetailsByResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * GetComplianceSummaryByConfigRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the number of AWS Config rules that are compliant and noncompliant, up to a maximum of 25 for
 */
GetComplianceSummaryByConfigRuleResponse * ConfigServiceClient::getComplianceSummaryByConfigRule(const GetComplianceSummaryByConfigRuleRequest &request)
{
    return qobject_cast<GetComplianceSummaryByConfigRuleResponse *>(send(request));
}

/*!
 * Sends a GetComplianceSummaryByConfigRule request to the ConfigServiceClient service, and returns a pointer to an
 * GetComplianceSummaryByConfigRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the number of AWS Config rules that are compliant and noncompliant, up to a maximum of 25 for
 */
GetComplianceSummaryByConfigRuleResponse * ConfigServiceClient::getComplianceSummaryByConfigRule()
{
    return getComplianceSummaryByConfigRule(GetComplianceSummaryByConfigRuleRequest());
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * GetComplianceSummaryByResourceTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the number of resources that are compliant and the number that are noncompliant. You can specify one or more
 * resource types to get these numbers for each resource type. The maximum number returned is
 */
GetComplianceSummaryByResourceTypeResponse * ConfigServiceClient::getComplianceSummaryByResourceType(const GetComplianceSummaryByResourceTypeRequest &request)
{
    return qobject_cast<GetComplianceSummaryByResourceTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * GetDiscoveredResourceCountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * buckets)> </li> <li>
 *
 * The number of each resource type (25, 20, and
 *
 * 15)> </li> <li>
 *
 * The total number of all resources
 *
 * (60)> </li> </ul> </li> </ol>
 *
 * The response is paginated. By default, AWS Config lists 100 <a>ResourceCount</a> objects on each page. You can customize
 * this number with the <code>limit</code> parameter. The response includes a <code>nextToken</code> string. To get the
 * next page of results, run the request again and specify the string for the <code>nextToken</code>
 *
 * parameter> <note>
 *
 * If you make a call to the <a>GetDiscoveredResourceCounts</a> action, you might not immediately receive resource counts
 * in the following
 *
 * situations> <ul> <li>
 *
 * You are a new AWS Config
 *
 * customer> </li> <li>
 *
 * You just enabled resource
 *
 * recording> </li> </ul>
 *
 * It might take a few minutes for AWS Config to record and count your resources. Wait a few minutes and then retry the
 * <a>GetDiscoveredResourceCounts</a> action.
 */
GetDiscoveredResourceCountsResponse * ConfigServiceClient::getDiscoveredResourceCounts(const GetDiscoveredResourceCountsRequest &request)
{
    return qobject_cast<GetDiscoveredResourceCountsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * GetOrganizationConfigRuleDetailedStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetOrganizationConfigRuleDetailedStatusResponse * ConfigServiceClient::getOrganizationConfigRuleDetailedStatus(const GetOrganizationConfigRuleDetailedStatusRequest &request)
{
    return qobject_cast<GetOrganizationConfigRuleDetailedStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * GetResourceConfigHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of configuration items for the specified resource. The list contains details about each state of the
 * resource during the specified time interval. If you specified a retention period to retain your
 * <code>ConfigurationItems</code> between a minimum of 30 days and a maximum of 7 years (2557 days), AWS Config returns
 * the <code>ConfigurationItems</code> for the specified retention period.
 *
 * </p
 *
 * The response is paginated. By default, AWS Config returns a limit of 10 configuration items per page. You can customize
 * this number with the <code>limit</code> parameter. The response includes a <code>nextToken</code> string. To get the
 * next page of results, run the request again and specify the string for the <code>nextToken</code>
 *
 * parameter> <note>
 *
 * Each call to the API is limited to span a duration of seven days. It is likely that the number of records returned is
 * smaller than the specified <code>limit</code>. In such cases, you can make another call, using the
 */
GetResourceConfigHistoryResponse * ConfigServiceClient::getResourceConfigHistory(const GetResourceConfigHistoryRequest &request)
{
    return qobject_cast<GetResourceConfigHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * ListAggregateDiscoveredResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts a resource type and returns a list of resource identifiers that are aggregated for a specific resource type
 * across accounts and regions. A resource identifier includes the resource type, ID, (if available) the custom resource
 * name, source account, and source region. You can narrow the results to include only resources that have specific
 * resource IDs, or a resource name, or source account ID, or source
 *
 * region>
 *
 * For example, if the input consists of accountID 12345678910 and the region is us-east-1 for resource type
 * <code>AWS::EC2::Instance</code> then the API returns all the EC2 instance identifiers of accountID 12345678910 and
 * region
 */
ListAggregateDiscoveredResourcesResponse * ConfigServiceClient::listAggregateDiscoveredResources(const ListAggregateDiscoveredResourcesRequest &request)
{
    return qobject_cast<ListAggregateDiscoveredResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * ListDiscoveredResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts a resource type and returns a list of resource identifiers for the resources of that type. A resource identifier
 * includes the resource type, ID, and (if available) the custom resource name. The results consist of resources that AWS
 * Config has discovered, including those that AWS Config is not currently recording. You can narrow the results to include
 * only resources that have specific resource IDs or a resource
 *
 * name> <note>
 *
 * You can specify either resource IDs or a resource name, but not both, in the same
 *
 * request> </note>
 *
 * The response is paginated. By default, AWS Config lists 100 resource identifiers on each page. You can customize this
 * number with the <code>limit</code> parameter. The response includes a <code>nextToken</code> string. To get the next
 * page of results, run the request again and specify the string for the <code>nextToken</code>
 */
ListDiscoveredResourcesResponse * ConfigServiceClient::listDiscoveredResources(const ListDiscoveredResourcesRequest &request)
{
    return qobject_cast<ListDiscoveredResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the tags for AWS Config
 */
ListTagsForResourceResponse * ConfigServiceClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * PutAggregationAuthorizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Authorizes the aggregator account and region to collect data from the source account and region.
 */
PutAggregationAuthorizationResponse * ConfigServiceClient::putAggregationAuthorization(const PutAggregationAuthorizationRequest &request)
{
    return qobject_cast<PutAggregationAuthorizationResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * PutConfigRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates an AWS Config rule for evaluating whether your AWS resources comply with your desired
 *
 * configurations>
 *
 * You can use this action for custom AWS Config rules and AWS managed Config rules. A custom AWS Config rule is a rule
 * that you develop and maintain. An AWS managed Config rule is a customizable, predefined rule that AWS Config
 *
 * provides>
 *
 * If you are adding a new custom AWS Config rule, you must first create the AWS Lambda function that the rule invokes to
 * evaluate your resources. When you use the <code>PutConfigRule</code> action to add the rule to AWS Config, you must
 * specify the Amazon Resource Name (ARN) that AWS Lambda assigns to the function. Specify the ARN for the
 * <code>SourceIdentifier</code> key. This key is part of the <code>Source</code> object, which is part of the
 * <code>ConfigRule</code> object.
 *
 * </p
 *
 * If you are adding an AWS managed Config rule, specify the rule's identifier for the <code>SourceIdentifier</code> key.
 * To reference AWS managed Config rule identifiers, see <a
 * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">About AWS Managed
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
 * 150>
 *
 * For information about requesting a rule limit increase, see <a
 * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_config">AWS Config Limits</a> in the
 * <i>AWS General Reference
 *
 * Guide</i>>
 *
 * For more information about developing and using AWS Config rules, see <a
 * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config.html">Evaluating AWS Resource
 * Configurations with AWS Config</a> in the <i>AWS Config Developer
 */
PutConfigRuleResponse * ConfigServiceClient::putConfigRule(const PutConfigRuleRequest &request)
{
    return qobject_cast<PutConfigRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * PutConfigurationAggregatorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates and updates the configuration aggregator with the selected source accounts and regions. The source account can
 * be individual account(s) or an
 *
 * organization> <note>
 *
 * AWS Config should be enabled in source accounts and regions you want to
 *
 * aggregate>
 *
 * If your source type is an organization, you must be signed in to the master account and all features must be enabled in
 * your organization. AWS Config calls <code>EnableAwsServiceAccess</code> API to enable integration between AWS Config and
 * AWS Organizations.
 */
PutConfigurationAggregatorResponse * ConfigServiceClient::putConfigurationAggregator(const PutConfigurationAggregatorRequest &request)
{
    return qobject_cast<PutConfigurationAggregatorResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * PutConfigurationRecorderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new configuration recorder to record the selected resource
 *
 * configurations>
 *
 * You can use this action to change the role <code>roleARN</code> or the <code>recordingGroup</code> of an existing
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
 */
PutConfigurationRecorderResponse * ConfigServiceClient::putConfigurationRecorder(const PutConfigurationRecorderRequest &request)
{
    return qobject_cast<PutConfigurationRecorderResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * PutDeliveryChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
PutDeliveryChannelResponse * ConfigServiceClient::putDeliveryChannel(const PutDeliveryChannelRequest &request)
{
    return qobject_cast<PutDeliveryChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * PutEvaluationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by an AWS Lambda function to deliver evaluation results to AWS Config. This action is required in every AWS Lambda
 * function that is invoked by an AWS Config
 */
PutEvaluationsResponse * ConfigServiceClient::putEvaluations(const PutEvaluationsRequest &request)
{
    return qobject_cast<PutEvaluationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * PutOrganizationConfigRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
PutOrganizationConfigRuleResponse * ConfigServiceClient::putOrganizationConfigRule(const PutOrganizationConfigRuleRequest &request)
{
    return qobject_cast<PutOrganizationConfigRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * PutRemediationConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates the remediation configuration with a specific AWS Config rule with the selected target or action. The
 * API creates the <code>RemediationConfiguration</code> object for the AWS Config rule. The AWS Config rule must already
 * exist for you to add a remediation configuration. The target (SSM document) must exist and have permissions to use the
 * target.
 */
PutRemediationConfigurationsResponse * ConfigServiceClient::putRemediationConfigurations(const PutRemediationConfigurationsRequest &request)
{
    return qobject_cast<PutRemediationConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * PutRetentionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates and updates the retention configuration with details about retention period (number of days) that AWS Config
 * stores your historical information. The API creates the <code>RetentionConfiguration</code> object and names the object
 * as <b>default</b>. When you have a <code>RetentionConfiguration</code> object named <b>default</b>, calling the API
 * modifies the default object.
 *
 * </p <note>
 *
 * Currently, AWS Config supports only one retention configuration per region in your
 */
PutRetentionConfigurationResponse * ConfigServiceClient::putRetentionConfiguration(const PutRetentionConfigurationRequest &request)
{
    return qobject_cast<PutRetentionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * SelectResourceConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts a structured query language (SQL) <code>SELECT</code> command, performs the corresponding search, and returns
 * resource configurations matching the
 *
 * properties>
 *
 * For more information about query components, see the <a
 * href="https://docs.aws.amazon.com/config/latest/developerguide/query-components.html"> <b>Query Components</b> </a>
 * section in the AWS Config Developer
 */
SelectResourceConfigResponse * ConfigServiceClient::selectResourceConfig(const SelectResourceConfigRequest &request)
{
    return qobject_cast<SelectResourceConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * StartConfigRulesEvaluationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs an on-demand evaluation for the specified AWS Config rules against the last known configuration state of the
 * resources. Use <code>StartConfigRulesEvaluation</code> when you want to test that a rule you updated is working as
 * expected. <code>StartConfigRulesEvaluation</code> does not re-record the latest configuration state for your resources.
 * It re-runs an evaluation against the last known state of your resources.
 *
 * </p
 *
 * You can specify up to 25 AWS Config rules per request.
 *
 * </p
 *
 * An existing <code>StartConfigRulesEvaluation</code> call for the specified rules must complete before you can call the
 * API again. If you chose to have AWS Config stream to an Amazon SNS topic, you will receive a
 * <code>ConfigRuleEvaluationStarted</code> notification when the evaluation
 *
 * starts> <note>
 *
 * You don't need to call the <code>StartConfigRulesEvaluation</code> API to run an evaluation for a new rule. When you
 * create a rule, AWS Config evaluates your resources against the rule automatically.
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
 */
StartConfigRulesEvaluationResponse * ConfigServiceClient::startConfigRulesEvaluation(const StartConfigRulesEvaluationRequest &request)
{
    return qobject_cast<StartConfigRulesEvaluationResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * StartConfigurationRecorderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts recording configurations of the AWS resources you have selected to record in your AWS
 *
 * account>
 *
 * You must have created at least one delivery channel to successfully start the configuration
 */
StartConfigurationRecorderResponse * ConfigServiceClient::startConfigurationRecorder(const StartConfigurationRecorderRequest &request)
{
    return qobject_cast<StartConfigurationRecorderResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * StartRemediationExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs an on-demand remediation for the specified AWS Config rules against the last known remediation configuration. It
 * runs an execution against the current state of your resources. Remediation execution is
 *
 * asynchronous>
 *
 * You can specify up to 100 resource keys per request. An existing StartRemediationExecution call for the specified
 * resource keys must complete before you can call the API
 */
StartRemediationExecutionResponse * ConfigServiceClient::startRemediationExecution(const StartRemediationExecutionRequest &request)
{
    return qobject_cast<StartRemediationExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * StopConfigurationRecorderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops recording configurations of the AWS resources you have selected to record in your AWS
 */
StopConfigurationRecorderResponse * ConfigServiceClient::stopConfigurationRecorder(const StopConfigurationRecorderRequest &request)
{
    return qobject_cast<StopConfigurationRecorderResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified tags to a resource with the specified resourceArn. If existing tags on a resource are not
 * specified in the request parameters, they are not changed. When a resource is deleted, the tags associated with that
 * resource are deleted as
 */
TagResourceResponse * ConfigServiceClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ConfigServiceClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes specified tags from a
 */
UntagResourceResponse * ConfigServiceClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::ConfigService::ConfigServiceClientPrivate
 * \brief The ConfigServiceClientPrivate class provides private implementation for ConfigServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a ConfigServiceClientPrivate object with public implementation \a q.
 */
ConfigServiceClientPrivate::ConfigServiceClientPrivate(ConfigServiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ConfigService
} // namespace QtAws
