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

#include "elasticbeanstalkclient.h"
#include "elasticbeanstalkclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  ElasticBeanstalkClient
 *
 * @brief  Client for AWS Elastic Beanstalk
 *
 * <fullname>AWS Elastic Beanstalk</fullname>
 *
 * AWS Elastic Beanstalk makes it easy for you to create, deploy, and manage scalable, fault-tolerant applications running
 * on the Amazon Web Services
 *
 * cloud>
 *
 * For more information about this product, go to the <a href="http://aws.amazon.com/elasticbeanstalk/">AWS Elastic
 * Beanstalk</a> details page. The location of the latest AWS Elastic Beanstalk WSDL is <a
 * href="http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl">http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl</a>.
 * To install the Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line
 * tools that enable you to access the API, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * Services</a>>
 *
 * <b>Endpoints</b>
 *
 * </p
 *
 * For a list of region-specific endpoints that AWS Elastic Beanstalk supports, go to <a
 * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticbeanstalk_region">Regions and Endpoints</a> in the
 * <i>Amazon Web Services
 */

/**
 * @brief  Constructs a new ElasticBeanstalkClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ElasticBeanstalkClient::ElasticBeanstalkClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElasticBeanstalkClientPrivate(this), parent)
{
    Q_D(ElasticBeanstalkClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new ElasticBeanstalkClient object.
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
ElasticBeanstalkClient::ElasticBeanstalkClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElasticBeanstalkClientPrivate(this), parent)
{
    Q_D(ElasticBeanstalkClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Cancels in-progress environment configuration update or application version
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AbortEnvironmentUpdateResponse * ElasticBeanstalkClient::abortEnvironmentUpdate(const AbortEnvironmentUpdateRequest &request)
{

}

/**
 * Applies a scheduled managed action immediately. A managed action can be applied only if its status is
 * <code>Scheduled</code>. Get the status and action ID of a managed action with
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ApplyEnvironmentManagedActionResponse * ElasticBeanstalkClient::applyEnvironmentManagedAction(const ApplyEnvironmentManagedActionRequest &request)
{

}

/**
 * Checks if the specified CNAME is
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CheckDNSAvailabilityResponse * ElasticBeanstalkClient::checkDNSAvailability(const CheckDNSAvailabilityRequest &request)
{

}

/**
 * Create or update a group of environments that each run a separate component of a single application. Takes a list of
 * version labels that specify application source bundles for each of the environments to create or update. The name of
 * each environment and other required information must be included in the source bundles in an environment manifest named
 * <code>env.yaml</code>. See <a
 * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-mgmt-compose.html">Compose Environments</a> for
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ComposeEnvironmentsResponse * ElasticBeanstalkClient::composeEnvironments(const ComposeEnvironmentsRequest &request)
{

}

/**
 * Creates an application that has one configuration template named <code>default</code> and no application versions.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateApplicationResponse * ElasticBeanstalkClient::createApplication(const CreateApplicationRequest &request)
{

}

/**
 * Creates an application version for the specified application. You can create an application version from a source bundle
 * in Amazon S3, a commit in AWS CodeCommit, or the output of an AWS CodeBuild build as
 *
 * follows>
 *
 * Specify a commit in an AWS CodeCommit repository with
 *
 * <code>SourceBuildInformation</code>>
 *
 * Specify a build in an AWS CodeBuild with <code>SourceBuildInformation</code> and
 *
 * <code>BuildConfiguration</code>>
 *
 * Specify a source bundle in S3 with <code>SourceBundle</code>
 *
 * </p
 *
 * Omit both <code>SourceBuildInformation</code> and <code>SourceBundle</code> to use the default sample
 *
 * application> <note>
 *
 * Once you create an application version with a specified Amazon S3 bucket and key location, you cannot change that Amazon
 * S3 location. If you change the Amazon S3 location, you receive an exception when you attempt to launch an environment
 * from the application
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateApplicationVersionResponse * ElasticBeanstalkClient::createApplicationVersion(const CreateApplicationVersionRequest &request)
{

}

/**
 * Creates a configuration template. Templates are associated with a specific application and are used to deploy different
 * versions of the application with the same configuration
 *
 * settings>
 *
 * Related
 *
 * Topic> <ul> <li>
 *
 * <a>DescribeConfigurationOptions</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeConfigurationSettings</a>
 *
 * </p </li> <li>
 *
 * <a>ListAvailableSolutionStacks</a>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateConfigurationTemplateResponse * ElasticBeanstalkClient::createConfigurationTemplate(const CreateConfigurationTemplateRequest &request)
{

}

/**
 * Launches an environment for the specified application using the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateEnvironmentResponse * ElasticBeanstalkClient::createEnvironment(const CreateEnvironmentRequest &request)
{

}

/**
 * Create a new version of your custom
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePlatformVersionResponse * ElasticBeanstalkClient::createPlatformVersion(const CreatePlatformVersionRequest &request)
{

}

/**
 * Creates a bucket in Amazon S3 to store application versions, logs, and other files used by Elastic Beanstalk
 * environments. The Elastic Beanstalk console and EB CLI call this API the first time you create an environment in a
 * region. If the storage location already exists, <code>CreateStorageLocation</code> still returns the bucket name but
 * does not create a new
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateStorageLocationResponse * ElasticBeanstalkClient::createStorageLocation()
{

}

/**
 * Deletes the specified application along with all associated versions and configurations. The application versions will
 * not be deleted from your Amazon S3
 *
 * bucket> <note>
 *
 * You cannot delete an application that has a running
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApplicationResponse * ElasticBeanstalkClient::deleteApplication(const DeleteApplicationRequest &request)
{

}

/**
 * Deletes the specified version from the specified
 *
 * application> <note>
 *
 * You cannot delete an application version that is associated with a running
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApplicationVersionResponse * ElasticBeanstalkClient::deleteApplicationVersion(const DeleteApplicationVersionRequest &request)
{

}

/**
 * Deletes the specified configuration
 *
 * template> <note>
 *
 * When you launch an environment using a configuration template, the environment gets a copy of the template. You can
 * delete or modify the environment's copy of the template without affecting the running
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteConfigurationTemplateResponse * ElasticBeanstalkClient::deleteConfigurationTemplate(const DeleteConfigurationTemplateRequest &request)
{

}

/**
 * Deletes the draft configuration associated with the running
 *
 * environment>
 *
 * Updating a running environment with any configuration changes creates a draft configuration set. You can get the draft
 * configuration using <a>DescribeConfigurationSettings</a> while the update is in progress or if the update fails. The
 * <code>DeploymentStatus</code> for the draft configuration indicates whether the deployment is in process or has failed.
 * The draft configuration remains in existence until it is deleted with this
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEnvironmentConfigurationResponse * ElasticBeanstalkClient::deleteEnvironmentConfiguration(const DeleteEnvironmentConfigurationRequest &request)
{

}

/**
 * Deletes the specified version of a custom
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePlatformVersionResponse * ElasticBeanstalkClient::deletePlatformVersion(const DeletePlatformVersionRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAccountAttributesResponse * ElasticBeanstalkClient::describeAccountAttributes()
{

}

/**
 * Retrieve a list of application
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeApplicationVersionsResponse * ElasticBeanstalkClient::describeApplicationVersions(const DescribeApplicationVersionsRequest &request)
{

}

/**
 * Returns the descriptions of existing
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeApplicationsResponse * ElasticBeanstalkClient::describeApplications(const DescribeApplicationsRequest &request)
{

}

/**
 * Describes the configuration options that are used in a particular configuration template or environment, or that a
 * specified solution stack defines. The description includes the values the options, their default values, and an
 * indication of the required action on a running environment if an option value is
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConfigurationOptionsResponse * ElasticBeanstalkClient::describeConfigurationOptions(const DescribeConfigurationOptionsRequest &request)
{

}

/**
 * Returns a description of the settings for the specified configuration set, that is, either a configuration template or
 * the configuration set associated with a running
 *
 * environment>
 *
 * When describing the settings for the configuration set associated with a running environment, it is possible to receive
 * two sets of setting descriptions. One is the deployed configuration set, and the other is a draft configuration of an
 * environment that is either in the process of deployment or that failed to
 *
 * deploy>
 *
 * Related
 *
 * Topic> <ul> <li>
 *
 * <a>DeleteEnvironmentConfiguration</a>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConfigurationSettingsResponse * ElasticBeanstalkClient::describeConfigurationSettings(const DescribeConfigurationSettingsRequest &request)
{

}

/**
 * Returns information about the overall health of the specified environment. The <b>DescribeEnvironmentHealth</b>
 * operation is only available with AWS Elastic Beanstalk Enhanced
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEnvironmentHealthResponse * ElasticBeanstalkClient::describeEnvironmentHealth(const DescribeEnvironmentHealthRequest &request)
{

}

/**
 * Lists an environment's completed and failed managed
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEnvironmentManagedActionHistoryResponse * ElasticBeanstalkClient::describeEnvironmentManagedActionHistory(const DescribeEnvironmentManagedActionHistoryRequest &request)
{

}

/**
 * Lists an environment's upcoming and in-progress managed
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEnvironmentManagedActionsResponse * ElasticBeanstalkClient::describeEnvironmentManagedActions(const DescribeEnvironmentManagedActionsRequest &request)
{

}

/**
 * Returns AWS resources for this
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEnvironmentResourcesResponse * ElasticBeanstalkClient::describeEnvironmentResources(const DescribeEnvironmentResourcesRequest &request)
{

}

/**
 * Returns descriptions for existing
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEnvironmentsResponse * ElasticBeanstalkClient::describeEnvironments(const DescribeEnvironmentsRequest &request)
{

}

/**
 * Returns list of event descriptions matching criteria up to the last 6
 *
 * weeks> <note>
 *
 * This action returns the most recent 1,000 events from the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventsResponse * ElasticBeanstalkClient::describeEvents(const DescribeEventsRequest &request)
{

}

/**
 * Retrives detailed information about the health of instances in your AWS Elastic Beanstalk. This operation requires <a
 * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced.html">enhanced health
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeInstancesHealthResponse * ElasticBeanstalkClient::describeInstancesHealth(const DescribeInstancesHealthRequest &request)
{

}

/**
 * Describes the version of the
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribePlatformVersionResponse * ElasticBeanstalkClient::describePlatformVersion(const DescribePlatformVersionRequest &request)
{

}

/**
 * Returns a list of the available solution stack names, with the public version first and then in reverse chronological
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAvailableSolutionStacksResponse * ElasticBeanstalkClient::listAvailableSolutionStacks()
{

}

/**
 * Lists the available
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPlatformVersionsResponse * ElasticBeanstalkClient::listPlatformVersions(const ListPlatformVersionsRequest &request)
{

}

/**
 * Returns the tags applied to an AWS Elastic Beanstalk resource. The response contains a list of tag key-value
 *
 * pairs>
 *
 * Currently, Elastic Beanstalk only supports tagging of Elastic Beanstalk environments. For details about environment
 * tagging, see <a href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/using-features.tagging.html">Tagging
 * Resources in Your Elastic Beanstalk
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsForResourceResponse * ElasticBeanstalkClient::listTagsForResource(const ListTagsForResourceRequest &request)
{

}

/**
 * Deletes and recreates all of the AWS resources (for example: the Auto Scaling group, load balancer, etc.) for a
 * specified environment and forces a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RebuildEnvironmentResponse * ElasticBeanstalkClient::rebuildEnvironment(const RebuildEnvironmentRequest &request)
{

}

/**
 * Initiates a request to compile the specified type of information of the deployed
 *
 * environment>
 *
 * Setting the <code>InfoType</code> to <code>tail</code> compiles the last lines from the application server log files of
 * every Amazon EC2 instance in your environment.
 *
 * </p
 *
 * Setting the <code>InfoType</code> to <code>bundle</code> compresses the application server log files for every Amazon
 * EC2 instance into a <code>.zip</code> file. Legacy and .NET containers do not support bundle logs.
 *
 * </p
 *
 * Use <a>RetrieveEnvironmentInfo</a> to obtain the set of logs.
 *
 * </p
 *
 * Related
 *
 * Topic> <ul> <li>
 *
 * <a>RetrieveEnvironmentInfo</a>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RequestEnvironmentInfoResponse * ElasticBeanstalkClient::requestEnvironmentInfo(const RequestEnvironmentInfoRequest &request)
{

}

/**
 * Causes the environment to restart the application container server running on each Amazon EC2
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RestartAppServerResponse * ElasticBeanstalkClient::restartAppServer(const RestartAppServerRequest &request)
{

}

/**
 * Retrieves the compiled information from a <a>RequestEnvironmentInfo</a>
 *
 * request>
 *
 * Related
 *
 * Topic> <ul> <li>
 *
 * <a>RequestEnvironmentInfo</a>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RetrieveEnvironmentInfoResponse * ElasticBeanstalkClient::retrieveEnvironmentInfo(const RetrieveEnvironmentInfoRequest &request)
{

}

/**
 * Swaps the CNAMEs of two
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SwapEnvironmentCNAMEsResponse * ElasticBeanstalkClient::swapEnvironmentCNAMEs(const SwapEnvironmentCNAMEsRequest &request)
{

}

/**
 * Terminates the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TerminateEnvironmentResponse * ElasticBeanstalkClient::terminateEnvironment(const TerminateEnvironmentRequest &request)
{

}

/**
 * Updates the specified application to have the specified
 *
 * properties> <note>
 *
 * If a property (for example, <code>description</code>) is not provided, the value remains unchanged. To clear these
 * properties, specify an empty
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApplicationResponse * ElasticBeanstalkClient::updateApplication(const UpdateApplicationRequest &request)
{

}

/**
 * Modifies lifecycle settings for an
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApplicationResourceLifecycleResponse * ElasticBeanstalkClient::updateApplicationResourceLifecycle(const UpdateApplicationResourceLifecycleRequest &request)
{

}

/**
 * Updates the specified application version to have the specified
 *
 * properties> <note>
 *
 * If a property (for example, <code>description</code>) is not provided, the value remains unchanged. To clear properties,
 * specify an empty
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApplicationVersionResponse * ElasticBeanstalkClient::updateApplicationVersion(const UpdateApplicationVersionRequest &request)
{

}

/**
 * Updates the specified configuration template to have the specified properties or configuration option
 *
 * values> <note>
 *
 * If a property (for example, <code>ApplicationName</code>) is not provided, its value remains unchanged. To clear such
 * properties, specify an empty
 *
 * string> </note>
 *
 * Related
 *
 * Topic> <ul> <li>
 *
 * <a>DescribeConfigurationOptions</a>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateConfigurationTemplateResponse * ElasticBeanstalkClient::updateConfigurationTemplate(const UpdateConfigurationTemplateRequest &request)
{

}

/**
 * Updates the environment description, deploys a new application version, updates the configuration settings to an
 * entirely new configuration template, or updates select configuration option values in the running
 *
 * environment>
 *
 * Attempting to update both the release and configuration is not allowed and AWS Elastic Beanstalk returns an
 * <code>InvalidParameterCombination</code> error.
 *
 * </p
 *
 * When updating the configuration settings to a new template or individual settings, a draft configuration is created and
 * <a>DescribeConfigurationSettings</a> for this environment returns two setting descriptions with different
 * <code>DeploymentStatus</code> values.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateEnvironmentResponse * ElasticBeanstalkClient::updateEnvironment(const UpdateEnvironmentRequest &request)
{

}

/**
 * Update the list of tags applied to an AWS Elastic Beanstalk resource. Two lists can be passed: <code>TagsToAdd</code>
 * for tags to add or update, and
 *
 * <code>TagsToRemove</code>>
 *
 * Currently, Elastic Beanstalk only supports tagging of Elastic Beanstalk environments. For details about environment
 * tagging, see <a href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/using-features.tagging.html">Tagging
 * Resources in Your Elastic Beanstalk
 *
 * Environment</a>>
 *
 * If you create a custom IAM user policy to control permission to this operation, specify one of the following two virtual
 * actions (or both) instead of the API operation
 *
 * name> <dl> <dt>elasticbeanstalk:AddTags</dt> <dd>
 *
 * Controls permission to call <code>UpdateTagsForResource</code> and pass a list of tags to add in the
 * <code>TagsToAdd</code>
 *
 * parameter> </dd> <dt>elasticbeanstalk:RemoveTags</dt> <dd>
 *
 * Controls permission to call <code>UpdateTagsForResource</code> and pass a list of tag keys to remove in the
 * <code>TagsToRemove</code>
 *
 * parameter> </dd> </dl>
 *
 * For details about creating a custom user policy, see <a
 * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/AWSHowTo.iam.managed-policies.html#AWSHowTo.iam.policies">Creating
 * a Custom User
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateTagsForResourceResponse * ElasticBeanstalkClient::updateTagsForResource(const UpdateTagsForResourceRequest &request)
{

}

/**
 * Takes a set of configuration settings and either a configuration template or environment, and determines whether those
 * values are
 *
 * valid>
 *
 * This action returns a list of messages indicating any errors or warnings associated with the selection of option
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ValidateConfigurationSettingsResponse * ElasticBeanstalkClient::validateConfigurationSettings(const ValidateConfigurationSettingsRequest &request)
{

}

/**
 * @internal
 *
 * @class  ElasticBeanstalkClientPrivate
 *
 * @brief  Private implementation for ElasticBeanstalkClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElasticBeanstalkClientPrivate object.
 *
 * @param  q  Pointer to this object's public ElasticBeanstalkClient instance.
 */
ElasticBeanstalkClientPrivate::ElasticBeanstalkClientPrivate(ElasticBeanstalkClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ElasticBeanstalk
} // namespace AWS
