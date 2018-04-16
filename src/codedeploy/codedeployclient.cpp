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

#include "codedeployclient.h"
#include "codedeployclient_p.h"

#include "core/awssignaturev4.h"
#include "addtagstoonpremisesinstancesrequest.h"
#include "addtagstoonpremisesinstancesresponse.h"
#include "batchgetapplicationrevisionsrequest.h"
#include "batchgetapplicationrevisionsresponse.h"
#include "batchgetapplicationsrequest.h"
#include "batchgetapplicationsresponse.h"
#include "batchgetdeploymentgroupsrequest.h"
#include "batchgetdeploymentgroupsresponse.h"
#include "batchgetdeploymentinstancesrequest.h"
#include "batchgetdeploymentinstancesresponse.h"
#include "batchgetdeploymentsrequest.h"
#include "batchgetdeploymentsresponse.h"
#include "batchgetonpremisesinstancesrequest.h"
#include "batchgetonpremisesinstancesresponse.h"
#include "continuedeploymentrequest.h"
#include "continuedeploymentresponse.h"
#include "createapplicationrequest.h"
#include "createapplicationresponse.h"
#include "createdeploymentrequest.h"
#include "createdeploymentresponse.h"
#include "createdeploymentconfigrequest.h"
#include "createdeploymentconfigresponse.h"
#include "createdeploymentgrouprequest.h"
#include "createdeploymentgroupresponse.h"
#include "deleteapplicationrequest.h"
#include "deleteapplicationresponse.h"
#include "deletedeploymentconfigrequest.h"
#include "deletedeploymentconfigresponse.h"
#include "deletedeploymentgrouprequest.h"
#include "deletedeploymentgroupresponse.h"
#include "deletegithubaccounttokenrequest.h"
#include "deletegithubaccounttokenresponse.h"
#include "deregisteronpremisesinstancerequest.h"
#include "deregisteronpremisesinstanceresponse.h"
#include "getapplicationrequest.h"
#include "getapplicationresponse.h"
#include "getapplicationrevisionrequest.h"
#include "getapplicationrevisionresponse.h"
#include "getdeploymentrequest.h"
#include "getdeploymentresponse.h"
#include "getdeploymentconfigrequest.h"
#include "getdeploymentconfigresponse.h"
#include "getdeploymentgrouprequest.h"
#include "getdeploymentgroupresponse.h"
#include "getdeploymentinstancerequest.h"
#include "getdeploymentinstanceresponse.h"
#include "getonpremisesinstancerequest.h"
#include "getonpremisesinstanceresponse.h"
#include "listapplicationrevisionsrequest.h"
#include "listapplicationrevisionsresponse.h"
#include "listapplicationsrequest.h"
#include "listapplicationsresponse.h"
#include "listdeploymentconfigsrequest.h"
#include "listdeploymentconfigsresponse.h"
#include "listdeploymentgroupsrequest.h"
#include "listdeploymentgroupsresponse.h"
#include "listdeploymentinstancesrequest.h"
#include "listdeploymentinstancesresponse.h"
#include "listdeploymentsrequest.h"
#include "listdeploymentsresponse.h"
#include "listgithubaccounttokennamesrequest.h"
#include "listgithubaccounttokennamesresponse.h"
#include "listonpremisesinstancesrequest.h"
#include "listonpremisesinstancesresponse.h"
#include "putlifecycleeventhookexecutionstatusrequest.h"
#include "putlifecycleeventhookexecutionstatusresponse.h"
#include "registerapplicationrevisionrequest.h"
#include "registerapplicationrevisionresponse.h"
#include "registeronpremisesinstancerequest.h"
#include "registeronpremisesinstanceresponse.h"
#include "removetagsfromonpremisesinstancesrequest.h"
#include "removetagsfromonpremisesinstancesresponse.h"
#include "skipwaittimeforinstanceterminationrequest.h"
#include "skipwaittimeforinstanceterminationresponse.h"
#include "stopdeploymentrequest.h"
#include "stopdeploymentresponse.h"
#include "updateapplicationrequest.h"
#include "updateapplicationresponse.h"
#include "updatedeploymentgrouprequest.h"
#include "updatedeploymentgroupresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CodeDeploy
 * \brief The QtAws::CodeDeploy contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CodeDeploy {

/*!
 * \class QtAws::CodeDeploy::CodeDeployClient
 *
 * \brief The CodeDeployClient class provides access to the AWS CodeDeploy service.
 *
 * \ingroup CodeDeploy
 *
 *  <fullname>AWS CodeDeploy</fullname>
 * 
 *  AWS CodeDeploy is a deployment service that automates application deployments to Amazon EC2 instances, on-premises
 *  instances running in your own facility, or serverless AWS Lambda
 * 
 *  functions>
 * 
 *  You can deploy a nearly unlimited variety of application content, such as an updated Lambda function, code, web and
 *  configuration files, executables, packages, scripts, multimedia files, and so on. AWS CodeDeploy can deploy application
 *  content stored in Amazon S3 buckets, GitHub repositories, or Bitbucket repositories. You do not need to make changes to
 *  your existing code before you can use AWS
 * 
 *  CodeDeploy>
 * 
 *  AWS CodeDeploy makes it easier for you to rapidly release new features, helps you avoid downtime during application
 *  deployment, and handles the complexity of updating your applications, without many of the risks associated with
 *  error-prone manual
 * 
 *  deployments>
 * 
 *  <b>AWS CodeDeploy Components</b>
 * 
 *  </p
 * 
 *  Use the information in this guide to help you work with the following AWS CodeDeploy
 * 
 *  components> <ul> <li>
 * 
 *  <b>Application</b>: A name that uniquely identifies the application you want to deploy. AWS CodeDeploy uses this name,
 *  which functions as a container, to ensure the correct combination of revision, deployment configuration, and deployment
 *  group are referenced during a
 * 
 *  deployment> </li> <li>
 * 
 *  <b>Deployment group</b>: A set of individual instances or CodeDeploy Lambda applications. A Lambda deployment group
 *  contains a group of applications. An EC2/On-premises deployment group contains individually tagged instances, Amazon EC2
 *  instances in Auto Scaling groups, or both.
 * 
 *  </p </li> <li>
 * 
 *  <b>Deployment configuration</b>: A set of deployment rules and deployment success and failure conditions used by AWS
 *  CodeDeploy during a
 * 
 *  deployment> </li> <li>
 * 
 *  <b>Deployment</b>: The process and the components used in the process of updating a Lambda function or of installing
 *  content on one or more instances.
 * 
 *  </p </li> <li>
 * 
 *  <b>Application revisions</b>: For an AWS Lambda deployment, this is an AppSpec file that specifies the Lambda function
 *  to update and one or more functions to validate deployment lifecycle events. For an EC2/On-premises deployment, this is
 *  an archive file containing source content—source code, web pages, executable files, and deployment scripts—along with an
 *  AppSpec file. Revisions are stored in Amazon S3 buckets or GitHub repositories. For Amazon S3, a revision is uniquely
 *  identified by its Amazon S3 object key and its ETag, version, or both. For GitHub, a revision is uniquely identified by
 *  its commit
 * 
 *  ID> </li> </ul>
 * 
 *  This guide also contains information to help you get details about the instances in your deployments, to make
 *  on-premises instances available for AWS CodeDeploy deployments, and to get details about a Lambda function
 * 
 *  deployment>
 * 
 *  <b>AWS CodeDeploy Information Resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/codedeploy/latest/userguide">AWS CodeDeploy User Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/codedeploy/latest/APIReference/">AWS CodeDeploy API Reference Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/cli/latest/reference/deploy/index.html">AWS CLI Reference for AWS CodeDeploy</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://forums.aws.amazon.com/forum.jspa?forumID=179">AWS CodeDeploy Developer Forum</a>
 */

/*!
 * \brief Constructs a CodeDeployClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CodeDeployClient::CodeDeployClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CodeDeployClientPrivate(this), parent)
{
    Q_D(CodeDeployClient);
    d->apiVersion = QStringLiteral("2014-10-06");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("codedeploy");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS CodeDeploy");
    d->serviceName = QStringLiteral("codedeploy");
}

/*!
 * \overload CodeDeployClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
CodeDeployClient::CodeDeployClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CodeDeployClientPrivate(this), parent)
{
    Q_D(CodeDeployClient);
    d->apiVersion = QStringLiteral("2014-10-06");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("codedeploy");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS CodeDeploy");
    d->serviceName = QStringLiteral("codedeploy");
}

/*!
 * Adds tags to on-premises
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddTagsToOnPremisesInstancesResponse * CodeDeployClient::addTagsToOnPremisesInstances(const AddTagsToOnPremisesInstancesRequest &request)
{
    return qobject_cast<AddTagsToOnPremisesInstancesResponse *>(send(request));
}

/*!
 * Gets information about one or more application
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchGetApplicationRevisionsResponse * CodeDeployClient::batchGetApplicationRevisions(const BatchGetApplicationRevisionsRequest &request)
{
    return qobject_cast<BatchGetApplicationRevisionsResponse *>(send(request));
}

/*!
 * Gets information about one or more
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchGetApplicationsResponse * CodeDeployClient::batchGetApplications(const BatchGetApplicationsRequest &request)
{
    return qobject_cast<BatchGetApplicationsResponse *>(send(request));
}

/*!
 * Gets information about one or more deployment
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchGetDeploymentGroupsResponse * CodeDeployClient::batchGetDeploymentGroups(const BatchGetDeploymentGroupsRequest &request)
{
    return qobject_cast<BatchGetDeploymentGroupsResponse *>(send(request));
}

/*!
 * Gets information about one or more instance that are part of a deployment
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchGetDeploymentInstancesResponse * CodeDeployClient::batchGetDeploymentInstances(const BatchGetDeploymentInstancesRequest &request)
{
    return qobject_cast<BatchGetDeploymentInstancesResponse *>(send(request));
}

/*!
 * Gets information about one or more
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchGetDeploymentsResponse * CodeDeployClient::batchGetDeployments(const BatchGetDeploymentsRequest &request)
{
    return qobject_cast<BatchGetDeploymentsResponse *>(send(request));
}

/*!
 * Gets information about one or more on-premises
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchGetOnPremisesInstancesResponse * CodeDeployClient::batchGetOnPremisesInstances(const BatchGetOnPremisesInstancesRequest &request)
{
    return qobject_cast<BatchGetOnPremisesInstancesResponse *>(send(request));
}

/*!
 * For a blue/green deployment, starts the process of rerouting traffic from instances in the original environment to
 * instances in the replacement environment without waiting for a specified wait time to elapse. (Traffic rerouting, which
 * is achieved by registering instances in the replacement environment with the load balancer, can start as soon as all
 * instances have a status of Ready.)
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ContinueDeploymentResponse * CodeDeployClient::continueDeployment(const ContinueDeploymentRequest &request)
{
    return qobject_cast<ContinueDeploymentResponse *>(send(request));
}

/*!
 * Creates an
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateApplicationResponse * CodeDeployClient::createApplication(const CreateApplicationRequest &request)
{
    return qobject_cast<CreateApplicationResponse *>(send(request));
}

/*!
 * Deploys an application revision through the specified deployment
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDeploymentResponse * CodeDeployClient::createDeployment(const CreateDeploymentRequest &request)
{
    return qobject_cast<CreateDeploymentResponse *>(send(request));
}

/*!
 * Creates a deployment
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDeploymentConfigResponse * CodeDeployClient::createDeploymentConfig(const CreateDeploymentConfigRequest &request)
{
    return qobject_cast<CreateDeploymentConfigResponse *>(send(request));
}

/*!
 * Creates a deployment group to which application revisions will be
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDeploymentGroupResponse * CodeDeployClient::createDeploymentGroup(const CreateDeploymentGroupRequest &request)
{
    return qobject_cast<CreateDeploymentGroupResponse *>(send(request));
}

/*!
 * Deletes an
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApplicationResponse * CodeDeployClient::deleteApplication(const DeleteApplicationRequest &request)
{
    return qobject_cast<DeleteApplicationResponse *>(send(request));
}

/*!
 * Deletes a deployment
 *
 * configuration> <note>
 *
 * A deployment configuration cannot be deleted if it is currently in use. Predefined configurations cannot be
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDeploymentConfigResponse * CodeDeployClient::deleteDeploymentConfig(const DeleteDeploymentConfigRequest &request)
{
    return qobject_cast<DeleteDeploymentConfigResponse *>(send(request));
}

/*!
 * Deletes a deployment
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDeploymentGroupResponse * CodeDeployClient::deleteDeploymentGroup(const DeleteDeploymentGroupRequest &request)
{
    return qobject_cast<DeleteDeploymentGroupResponse *>(send(request));
}

/*!
 * Deletes a GitHub account
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteGitHubAccountTokenResponse * CodeDeployClient::deleteGitHubAccountToken(const DeleteGitHubAccountTokenRequest &request)
{
    return qobject_cast<DeleteGitHubAccountTokenResponse *>(send(request));
}

/*!
 * Deregisters an on-premises
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeregisterOnPremisesInstanceResponse * CodeDeployClient::deregisterOnPremisesInstance(const DeregisterOnPremisesInstanceRequest &request)
{
    return qobject_cast<DeregisterOnPremisesInstanceResponse *>(send(request));
}

/*!
 * Gets information about an
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApplicationResponse * CodeDeployClient::getApplication(const GetApplicationRequest &request)
{
    return qobject_cast<GetApplicationResponse *>(send(request));
}

/*!
 * Gets information about an application
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApplicationRevisionResponse * CodeDeployClient::getApplicationRevision(const GetApplicationRevisionRequest &request)
{
    return qobject_cast<GetApplicationRevisionResponse *>(send(request));
}

/*!
 * Gets information about a
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDeploymentResponse * CodeDeployClient::getDeployment(const GetDeploymentRequest &request)
{
    return qobject_cast<GetDeploymentResponse *>(send(request));
}

/*!
 * Gets information about a deployment
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDeploymentConfigResponse * CodeDeployClient::getDeploymentConfig(const GetDeploymentConfigRequest &request)
{
    return qobject_cast<GetDeploymentConfigResponse *>(send(request));
}

/*!
 * Gets information about a deployment
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDeploymentGroupResponse * CodeDeployClient::getDeploymentGroup(const GetDeploymentGroupRequest &request)
{
    return qobject_cast<GetDeploymentGroupResponse *>(send(request));
}

/*!
 * Gets information about an instance as part of a
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDeploymentInstanceResponse * CodeDeployClient::getDeploymentInstance(const GetDeploymentInstanceRequest &request)
{
    return qobject_cast<GetDeploymentInstanceResponse *>(send(request));
}

/*!
 * Gets information about an on-premises
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetOnPremisesInstanceResponse * CodeDeployClient::getOnPremisesInstance(const GetOnPremisesInstanceRequest &request)
{
    return qobject_cast<GetOnPremisesInstanceResponse *>(send(request));
}

/*!
 * Lists information about revisions for an
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListApplicationRevisionsResponse * CodeDeployClient::listApplicationRevisions(const ListApplicationRevisionsRequest &request)
{
    return qobject_cast<ListApplicationRevisionsResponse *>(send(request));
}

/*!
 * Lists the applications registered with the applicable IAM user or AWS
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListApplicationsResponse * CodeDeployClient::listApplications(const ListApplicationsRequest &request)
{
    return qobject_cast<ListApplicationsResponse *>(send(request));
}

/*!
 * Lists the deployment configurations with the applicable IAM user or AWS
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDeploymentConfigsResponse * CodeDeployClient::listDeploymentConfigs(const ListDeploymentConfigsRequest &request)
{
    return qobject_cast<ListDeploymentConfigsResponse *>(send(request));
}

/*!
 * Lists the deployment groups for an application registered with the applicable IAM user or AWS
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDeploymentGroupsResponse * CodeDeployClient::listDeploymentGroups(const ListDeploymentGroupsRequest &request)
{
    return qobject_cast<ListDeploymentGroupsResponse *>(send(request));
}

/*!
 * Lists the instance for a deployment associated with the applicable IAM user or AWS
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDeploymentInstancesResponse * CodeDeployClient::listDeploymentInstances(const ListDeploymentInstancesRequest &request)
{
    return qobject_cast<ListDeploymentInstancesResponse *>(send(request));
}

/*!
 * Lists the deployments in a deployment group for an application registered with the applicable IAM user or AWS
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDeploymentsResponse * CodeDeployClient::listDeployments(const ListDeploymentsRequest &request)
{
    return qobject_cast<ListDeploymentsResponse *>(send(request));
}

/*!
 * Lists the names of stored connections to GitHub
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGitHubAccountTokenNamesResponse * CodeDeployClient::listGitHubAccountTokenNames(const ListGitHubAccountTokenNamesRequest &request)
{
    return qobject_cast<ListGitHubAccountTokenNamesResponse *>(send(request));
}

/*!
 * Gets a list of names for one or more on-premises
 *
 * instances>
 *
 * Unless otherwise specified, both registered and deregistered on-premises instance names will be listed. To list only
 * registered or deregistered on-premises instance names, use the registration status
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListOnPremisesInstancesResponse * CodeDeployClient::listOnPremisesInstances(const ListOnPremisesInstancesRequest &request)
{
    return qobject_cast<ListOnPremisesInstancesResponse *>(send(request));
}

/*!
 * Sets the result of a Lambda validation function. The function validates one or both lifecycle events
 * (<code>BeforeAllowTraffic</code> and <code>AfterAllowTraffic</code>) and returns <code>Succeeded</code> or
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutLifecycleEventHookExecutionStatusResponse * CodeDeployClient::putLifecycleEventHookExecutionStatus(const PutLifecycleEventHookExecutionStatusRequest &request)
{
    return qobject_cast<PutLifecycleEventHookExecutionStatusResponse *>(send(request));
}

/*!
 * Registers with AWS CodeDeploy a revision for the specified
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RegisterApplicationRevisionResponse * CodeDeployClient::registerApplicationRevision(const RegisterApplicationRevisionRequest &request)
{
    return qobject_cast<RegisterApplicationRevisionResponse *>(send(request));
}

/*!
 * Registers an on-premises
 *
 * instance> <note>
 *
 * Only one IAM ARN (an IAM session ARN or IAM user ARN) is supported in the request. You cannot use
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RegisterOnPremisesInstanceResponse * CodeDeployClient::registerOnPremisesInstance(const RegisterOnPremisesInstanceRequest &request)
{
    return qobject_cast<RegisterOnPremisesInstanceResponse *>(send(request));
}

/*!
 * Removes one or more tags from one or more on-premises
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveTagsFromOnPremisesInstancesResponse * CodeDeployClient::removeTagsFromOnPremisesInstances(const RemoveTagsFromOnPremisesInstancesRequest &request)
{
    return qobject_cast<RemoveTagsFromOnPremisesInstancesResponse *>(send(request));
}

/*!
 * In a blue/green deployment, overrides any specified wait time and starts terminating instances immediately after the
 * traffic routing is
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SkipWaitTimeForInstanceTerminationResponse * CodeDeployClient::skipWaitTimeForInstanceTermination(const SkipWaitTimeForInstanceTerminationRequest &request)
{
    return qobject_cast<SkipWaitTimeForInstanceTerminationResponse *>(send(request));
}

/*!
 * Attempts to stop an ongoing
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopDeploymentResponse * CodeDeployClient::stopDeployment(const StopDeploymentRequest &request)
{
    return qobject_cast<StopDeploymentResponse *>(send(request));
}

/*!
 * Changes the name of an
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApplicationResponse * CodeDeployClient::updateApplication(const UpdateApplicationRequest &request)
{
    return qobject_cast<UpdateApplicationResponse *>(send(request));
}

/*!
 * Changes information about a deployment
 *
 * @param  request Request to send to AWS CodeDeploy.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDeploymentGroupResponse * CodeDeployClient::updateDeploymentGroup(const UpdateDeploymentGroupRequest &request)
{
    return qobject_cast<UpdateDeploymentGroupResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  CodeDeployClientPrivate
 *
 * @brief  Private implementation for CodeDeployClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CodeDeployClientPrivate object.
 *
 * @param  q  Pointer to this object's public CodeDeployClient instance.
 */
CodeDeployClientPrivate::CodeDeployClientPrivate(CodeDeployClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CodeDeploy
} // namespace QtAws
