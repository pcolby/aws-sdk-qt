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

#include "computeoptimizerclient.h"
#include "computeoptimizerclient_p.h"

#include "core/awssignaturev4.h"
#include "describerecommendationexportjobsrequest.h"
#include "describerecommendationexportjobsresponse.h"
#include "exportautoscalinggrouprecommendationsrequest.h"
#include "exportautoscalinggrouprecommendationsresponse.h"
#include "exportebsvolumerecommendationsrequest.h"
#include "exportebsvolumerecommendationsresponse.h"
#include "exportec2instancerecommendationsrequest.h"
#include "exportec2instancerecommendationsresponse.h"
#include "exportlambdafunctionrecommendationsrequest.h"
#include "exportlambdafunctionrecommendationsresponse.h"
#include "getautoscalinggrouprecommendationsrequest.h"
#include "getautoscalinggrouprecommendationsresponse.h"
#include "getebsvolumerecommendationsrequest.h"
#include "getebsvolumerecommendationsresponse.h"
#include "getec2instancerecommendationsrequest.h"
#include "getec2instancerecommendationsresponse.h"
#include "getec2recommendationprojectedmetricsrequest.h"
#include "getec2recommendationprojectedmetricsresponse.h"
#include "getenrollmentstatusrequest.h"
#include "getenrollmentstatusresponse.h"
#include "getlambdafunctionrecommendationsrequest.h"
#include "getlambdafunctionrecommendationsresponse.h"
#include "getrecommendationsummariesrequest.h"
#include "getrecommendationsummariesresponse.h"
#include "updateenrollmentstatusrequest.h"
#include "updateenrollmentstatusresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ComputeOptimizer
 * \brief Contains classess for accessing AWS Compute Optimizer.
 *
 * \inmodule QtAwsComputeOptimizer
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::ComputeOptimizerClient
 * \brief The ComputeOptimizerClient class provides access to the AWS Compute Optimizer service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsComputeOptimizer
 *
 *  AWS Compute Optimizer is a service that analyzes the configuration and utilization metrics of your AWS compute
 *  resources, such as EC2 instances, Auto Scaling groups, AWS Lambda functions, and Amazon EBS volumes. It reports whether
 *  your resources are optimal, and generates optimization recommendations to reduce the cost and improve the performance of
 *  your workloads. Compute Optimizer also provides recent utilization metric data, as well as projected utilization metric
 *  data for the recommendations, which you can use to evaluate which recommendation provides the best price-performance
 *  trade-off. The analysis of your usage patterns can help you decide when to move or resize your running resources, and
 *  still meet your performance and capacity requirements. For more information about Compute Optimizer, including the
 *  required permissions to use the service, see the <a href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/">AWS
 *  Compute Optimizer User
 */

/*!
 * \brief Constructs a ComputeOptimizerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ComputeOptimizerClient::ComputeOptimizerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ComputeOptimizerClientPrivate(this), parent)
{
    Q_D(ComputeOptimizerClient);
    d->apiVersion = QStringLiteral("2019-11-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("compute-optimizer");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Compute Optimizer");
    d->serviceName = QStringLiteral("compute-optimizer");
}

/*!
 * \overload ComputeOptimizerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ComputeOptimizerClient::ComputeOptimizerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ComputeOptimizerClientPrivate(this), parent)
{
    Q_D(ComputeOptimizerClient);
    d->apiVersion = QStringLiteral("2019-11-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("compute-optimizer");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Compute Optimizer");
    d->serviceName = QStringLiteral("compute-optimizer");
}

/*!
 * Sends \a request to the ComputeOptimizerClient service, and returns a pointer to an
 * DescribeRecommendationExportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes recommendation export jobs created in the last seven
 *
 * days>
 *
 * Use the <code>ExportAutoScalingGroupRecommendations</code> or <code>ExportEC2InstanceRecommendations</code> actions to
 * request an export of your recommendations. Then use the <code>DescribeRecommendationExportJobs</code> action to view
 * your export
 */
DescribeRecommendationExportJobsResponse * ComputeOptimizerClient::describeRecommendationExportJobs(const DescribeRecommendationExportJobsRequest &request)
{
    return qobject_cast<DescribeRecommendationExportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComputeOptimizerClient service, and returns a pointer to an
 * ExportAutoScalingGroupRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports optimization recommendations for Auto Scaling
 *
 * groups>
 *
 * Recommendations are exported in a comma-separated values (.csv) file, and its metadata in a JavaScript Object Notation
 * (.json) file, to an existing Amazon Simple Storage Service (Amazon S3) bucket that you specify. For more information,
 * see <a href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
 * Recommendations</a> in the <i>Compute Optimizer User
 *
 * Guide</i>>
 *
 * You can have only one Auto Scaling group export job in progress per AWS
 */
ExportAutoScalingGroupRecommendationsResponse * ComputeOptimizerClient::exportAutoScalingGroupRecommendations(const ExportAutoScalingGroupRecommendationsRequest &request)
{
    return qobject_cast<ExportAutoScalingGroupRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComputeOptimizerClient service, and returns a pointer to an
 * ExportEBSVolumeRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports optimization recommendations for Amazon EBS
 *
 * volumes>
 *
 * Recommendations are exported in a comma-separated values (.csv) file, and its metadata in a JavaScript Object Notation
 * (.json) file, to an existing Amazon Simple Storage Service (Amazon S3) bucket that you specify. For more information,
 * see <a href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
 * Recommendations</a> in the <i>Compute Optimizer User
 *
 * Guide</i>>
 *
 * You can have only one Amazon EBS volume export job in progress per AWS
 */
ExportEBSVolumeRecommendationsResponse * ComputeOptimizerClient::exportEBSVolumeRecommendations(const ExportEBSVolumeRecommendationsRequest &request)
{
    return qobject_cast<ExportEBSVolumeRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComputeOptimizerClient service, and returns a pointer to an
 * ExportEC2InstanceRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports optimization recommendations for Amazon EC2
 *
 * instances>
 *
 * Recommendations are exported in a comma-separated values (.csv) file, and its metadata in a JavaScript Object Notation
 * (.json) file, to an existing Amazon Simple Storage Service (Amazon S3) bucket that you specify. For more information,
 * see <a href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
 * Recommendations</a> in the <i>Compute Optimizer User
 *
 * Guide</i>>
 *
 * You can have only one Amazon EC2 instance export job in progress per AWS
 */
ExportEC2InstanceRecommendationsResponse * ComputeOptimizerClient::exportEC2InstanceRecommendations(const ExportEC2InstanceRecommendationsRequest &request)
{
    return qobject_cast<ExportEC2InstanceRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComputeOptimizerClient service, and returns a pointer to an
 * ExportLambdaFunctionRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports optimization recommendations for AWS Lambda
 *
 * functions>
 *
 * Recommendations are exported in a comma-separated values (.csv) file, and its metadata in a JavaScript Object Notation
 * (.json) file, to an existing Amazon Simple Storage Service (Amazon S3) bucket that you specify. For more information,
 * see <a href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
 * Recommendations</a> in the <i>Compute Optimizer User
 *
 * Guide</i>>
 *
 * You can have only one Lambda function export job in progress per AWS
 */
ExportLambdaFunctionRecommendationsResponse * ComputeOptimizerClient::exportLambdaFunctionRecommendations(const ExportLambdaFunctionRecommendationsRequest &request)
{
    return qobject_cast<ExportLambdaFunctionRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComputeOptimizerClient service, and returns a pointer to an
 * GetAutoScalingGroupRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns Auto Scaling group
 *
 * recommendations>
 *
 * AWS Compute Optimizer generates recommendations for Amazon EC2 Auto Scaling groups that meet a specific set of
 * requirements. For more information, see the <a
 * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported resources and
 * requirements</a> in the <i>AWS Compute Optimizer User
 */
GetAutoScalingGroupRecommendationsResponse * ComputeOptimizerClient::getAutoScalingGroupRecommendations(const GetAutoScalingGroupRecommendationsRequest &request)
{
    return qobject_cast<GetAutoScalingGroupRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComputeOptimizerClient service, and returns a pointer to an
 * GetEBSVolumeRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns Amazon Elastic Block Store (Amazon EBS) volume
 *
 * recommendations>
 *
 * AWS Compute Optimizer generates recommendations for Amazon EBS volumes that meet a specific set of requirements. For
 * more information, see the <a href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
 * resources and requirements</a> in the <i>AWS Compute Optimizer User
 */
GetEBSVolumeRecommendationsResponse * ComputeOptimizerClient::getEBSVolumeRecommendations(const GetEBSVolumeRecommendationsRequest &request)
{
    return qobject_cast<GetEBSVolumeRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComputeOptimizerClient service, and returns a pointer to an
 * GetEC2InstanceRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns Amazon EC2 instance
 *
 * recommendations>
 *
 * AWS Compute Optimizer generates recommendations for Amazon Elastic Compute Cloud (Amazon EC2) instances that meet a
 * specific set of requirements. For more information, see the <a
 * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported resources and
 * requirements</a> in the <i>AWS Compute Optimizer User
 */
GetEC2InstanceRecommendationsResponse * ComputeOptimizerClient::getEC2InstanceRecommendations(const GetEC2InstanceRecommendationsRequest &request)
{
    return qobject_cast<GetEC2InstanceRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComputeOptimizerClient service, and returns a pointer to an
 * GetEC2RecommendationProjectedMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the projected utilization metrics of Amazon EC2 instance
 *
 * recommendations> <note>
 *
 * The <code>Cpu</code> and <code>Memory</code> metrics are the only projected utilization metrics returned when you run
 * this action. Additionally, the <code>Memory</code> metric is returned only for resources that have the unified
 * CloudWatch agent installed on them. For more information, see <a
 * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling Memory Utilization with
 * the CloudWatch
 */
GetEC2RecommendationProjectedMetricsResponse * ComputeOptimizerClient::getEC2RecommendationProjectedMetrics(const GetEC2RecommendationProjectedMetricsRequest &request)
{
    return qobject_cast<GetEC2RecommendationProjectedMetricsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComputeOptimizerClient service, and returns a pointer to an
 * GetEnrollmentStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the enrollment (opt in) status of an account to the AWS Compute Optimizer
 *
 * service>
 *
 * If the account is the management account of an organization, this action also confirms the enrollment status of member
 * accounts within the
 */
GetEnrollmentStatusResponse * ComputeOptimizerClient::getEnrollmentStatus(const GetEnrollmentStatusRequest &request)
{
    return qobject_cast<GetEnrollmentStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ComputeOptimizerClient service, and returns a pointer to an
 * GetLambdaFunctionRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns AWS Lambda function
 *
 * recommendations>
 *
 * AWS Compute Optimizer generates recommendations for functions that meet a specific set of requirements. For more
 * information, see the <a href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
 * resources and requirements</a> in the <i>AWS Compute Optimizer User
 */
GetLambdaFunctionRecommendationsResponse * ComputeOptimizerClient::getLambdaFunctionRecommendations(const GetLambdaFunctionRecommendationsRequest &request)
{
    return qobject_cast<GetLambdaFunctionRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComputeOptimizerClient service, and returns a pointer to an
 * GetRecommendationSummariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the optimization findings for an
 *
 * account>
 *
 * It returns the number
 *
 * of> <ul> <li>
 *
 * Amazon EC2 instances in an account that are <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
 *
 * <code>Optimized</code>> </li> <li>
 *
 * Auto Scaling groups in an account that are <code>NotOptimized</code>, or
 *
 * <code>Optimized</code>> </li> <li>
 *
 * Amazon EBS volumes in an account that are <code>NotOptimized</code>, or
 *
 * <code>Optimized</code>> </li> <li>
 *
 * Lambda functions in an account that are <code>NotOptimized</code>, or
 */
GetRecommendationSummariesResponse * ComputeOptimizerClient::getRecommendationSummaries(const GetRecommendationSummariesRequest &request)
{
    return qobject_cast<GetRecommendationSummariesResponse *>(send(request));
}

/*!
 * Sends \a request to the ComputeOptimizerClient service, and returns a pointer to an
 * UpdateEnrollmentStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the enrollment (opt in and opt out) status of an account to the AWS Compute Optimizer
 *
 * service>
 *
 * If the account is a management account of an organization, this action can also be used to enroll member accounts within
 * the
 *
 * organization>
 *
 * You must have the appropriate permissions to opt in to Compute Optimizer, to view its recommendations, and to opt out.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/security-iam.html">Controlling access with AWS Identity
 * and Access Management</a> in the <i>AWS Compute Optimizer User
 *
 * Guide</i>>
 *
 * When you opt in, Compute Optimizer automatically creates a Service-Linked Role in your account to access its data. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/using-service-linked-roles.html">Using Service-Linked
 * Roles for AWS Compute Optimizer</a> in the <i>AWS Compute Optimizer User
 */
UpdateEnrollmentStatusResponse * ComputeOptimizerClient::updateEnrollmentStatus(const UpdateEnrollmentStatusRequest &request)
{
    return qobject_cast<UpdateEnrollmentStatusResponse *>(send(request));
}

/*!
 * \class QtAws::ComputeOptimizer::ComputeOptimizerClientPrivate
 * \brief The ComputeOptimizerClientPrivate class provides private implementation for ComputeOptimizerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a ComputeOptimizerClientPrivate object with public implementation \a q.
 */
ComputeOptimizerClientPrivate::ComputeOptimizerClientPrivate(ComputeOptimizerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ComputeOptimizer
} // namespace QtAws
