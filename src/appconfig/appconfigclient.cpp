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

#include "appconfigclient.h"
#include "appconfigclient_p.h"

#include "core/awssignaturev4.h"
#include "createapplicationrequest.h"
#include "createapplicationresponse.h"
#include "createconfigurationprofilerequest.h"
#include "createconfigurationprofileresponse.h"
#include "createdeploymentstrategyrequest.h"
#include "createdeploymentstrategyresponse.h"
#include "createenvironmentrequest.h"
#include "createenvironmentresponse.h"
#include "createhostedconfigurationversionrequest.h"
#include "createhostedconfigurationversionresponse.h"
#include "deleteapplicationrequest.h"
#include "deleteapplicationresponse.h"
#include "deleteconfigurationprofilerequest.h"
#include "deleteconfigurationprofileresponse.h"
#include "deletedeploymentstrategyrequest.h"
#include "deletedeploymentstrategyresponse.h"
#include "deleteenvironmentrequest.h"
#include "deleteenvironmentresponse.h"
#include "deletehostedconfigurationversionrequest.h"
#include "deletehostedconfigurationversionresponse.h"
#include "getapplicationrequest.h"
#include "getapplicationresponse.h"
#include "getconfigurationrequest.h"
#include "getconfigurationresponse.h"
#include "getconfigurationprofilerequest.h"
#include "getconfigurationprofileresponse.h"
#include "getdeploymentrequest.h"
#include "getdeploymentresponse.h"
#include "getdeploymentstrategyrequest.h"
#include "getdeploymentstrategyresponse.h"
#include "getenvironmentrequest.h"
#include "getenvironmentresponse.h"
#include "gethostedconfigurationversionrequest.h"
#include "gethostedconfigurationversionresponse.h"
#include "listapplicationsrequest.h"
#include "listapplicationsresponse.h"
#include "listconfigurationprofilesrequest.h"
#include "listconfigurationprofilesresponse.h"
#include "listdeploymentstrategiesrequest.h"
#include "listdeploymentstrategiesresponse.h"
#include "listdeploymentsrequest.h"
#include "listdeploymentsresponse.h"
#include "listenvironmentsrequest.h"
#include "listenvironmentsresponse.h"
#include "listhostedconfigurationversionsrequest.h"
#include "listhostedconfigurationversionsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startdeploymentrequest.h"
#include "startdeploymentresponse.h"
#include "stopdeploymentrequest.h"
#include "stopdeploymentresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateapplicationrequest.h"
#include "updateapplicationresponse.h"
#include "updateconfigurationprofilerequest.h"
#include "updateconfigurationprofileresponse.h"
#include "updatedeploymentstrategyrequest.h"
#include "updatedeploymentstrategyresponse.h"
#include "updateenvironmentrequest.h"
#include "updateenvironmentresponse.h"
#include "validateconfigurationrequest.h"
#include "validateconfigurationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AppConfig
 * \brief Contains classess for accessing Amazon AppConfig.
 *
 * \inmodule QtAwsAppConfig
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AppConfig {

/*!
 * \class QtAws::AppConfig::AppConfigClient
 * \brief The AppConfigClient class provides access to the Amazon AppConfig service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppConfig
 *
 *  <fullname>AWS AppConfig</fullname>
 * 
 *  Use AWS AppConfig, a capability of AWS Systems Manager, to create, manage, and quickly deploy application
 *  configurations. AppConfig supports controlled deployments to applications of any size and includes built-in validation
 *  checks and monitoring. You can use AppConfig with applications hosted on Amazon EC2 instances, AWS Lambda, containers,
 *  mobile applications, or IoT
 * 
 *  devices>
 * 
 *  To prevent errors when deploying application configurations, especially for production systems where a simple typo could
 *  cause an unexpected outage, AppConfig includes validators. A validator provides a syntactic or semantic check to ensure
 *  that the configuration you want to deploy works as intended. To validate your application configuration data, you
 *  provide a schema or a Lambda function that runs against the configuration. The configuration deployment or update can
 *  only proceed when the configuration data is
 * 
 *  valid>
 * 
 *  During a configuration deployment, AppConfig monitors the application to ensure that the deployment is successful. If
 *  the system encounters an error, AppConfig rolls back the change to minimize impact for your application users. You can
 *  configure a deployment strategy for each application or environment that includes deployment criteria, including
 *  velocity, bake time, and alarms to monitor. Similar to error monitoring, if a deployment triggers an alarm, AppConfig
 *  automatically rolls back to the previous version.
 * 
 *  </p
 * 
 *  AppConfig supports multiple use cases. Here are some
 * 
 *  examples> <ul> <li>
 * 
 *  <b>Application tuning</b>: Use AppConfig to carefully introduce changes to your application that can only be tested with
 *  production
 * 
 *  traffic> </li> <li>
 * 
 *  <b>Feature toggle</b>: Use AppConfig to turn on new features that require a timely deployment, such as a product launch
 *  or announcement.
 * 
 *  </p </li> <li>
 * 
 *  <b>Allow list</b>: Use AppConfig to allow premium subscribers to access paid content.
 * 
 *  </p </li> <li>
 * 
 *  <b>Operational issues</b>: Use AppConfig to reduce stress on your application when a dependency or other external factor
 *  impacts the
 * 
 *  system> </li> </ul>
 * 
 *  This reference is intended to be used with the <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/appconfig.html">AWS AppConfig User
 */

/*!
 * \brief Constructs a AppConfigClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AppConfigClient::AppConfigClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-10-09"),
    QStringLiteral("appconfig"),
    QStringLiteral("Amazon AppConfig"),
    QStringLiteral("appconfig"),
    parent), d_ptr(new AppConfigClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload AppConfigClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AppConfigClient::AppConfigClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-10-09"),
    QStringLiteral("appconfig"),
    QStringLiteral("Amazon AppConfig"),
    QStringLiteral("appconfig"),
    parent), d_ptr(new AppConfigClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * CreateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * An application in AppConfig is a logical unit of code that provides capabilities for your customers. For example, an
 * application can be a microservice that runs on Amazon EC2 instances, a mobile application installed by your users, a
 * serverless application using Amazon API Gateway and AWS Lambda, or any system you run on behalf of
 */
CreateApplicationResponse * AppConfigClient::createApplication(const CreateApplicationRequest &request)
{
    return qobject_cast<CreateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * CreateConfigurationProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Information that enables AppConfig to access the configuration source. Valid configuration sources include Systems
 * Manager (SSM) documents, SSM Parameter Store parameters, and Amazon S3 objects. A configuration profile includes the
 * following
 *
 * information> <ul> <li>
 *
 * The Uri location of the configuration
 *
 * data> </li> <li>
 *
 * The AWS Identity and Access Management (IAM) role that provides access to the configuration
 *
 * data> </li> <li>
 *
 * A validator for the configuration data. Available validators include either a JSON Schema or an AWS Lambda
 *
 * function> </li> </ul>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/appconfig-creating-configuration-and-profile.html">Create
 * a Configuration and a Configuration Profile</a> in the <i>AWS AppConfig User
 */
CreateConfigurationProfileResponse * AppConfigClient::createConfigurationProfile(const CreateConfigurationProfileRequest &request)
{
    return qobject_cast<CreateConfigurationProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * CreateDeploymentStrategyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A deployment strategy defines important criteria for rolling out your configuration to the designated targets. A
 * deployment strategy includes: the overall duration required, a percentage of targets to receive the deployment during
 * each interval, an algorithm that defines how percentage grows, and bake
 */
CreateDeploymentStrategyResponse * AppConfigClient::createDeploymentStrategy(const CreateDeploymentStrategyRequest &request)
{
    return qobject_cast<CreateDeploymentStrategyResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * CreateEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For each application, you define one or more environments. An environment is a logical deployment group of AppConfig
 * targets, such as applications in a <code>Beta</code> or <code>Production</code> environment. You can also define
 * environments for application subcomponents such as the <code>Web</code>, <code>Mobile</code> and <code>Back-end</code>
 * components for your application. You can configure Amazon CloudWatch alarms for each environment. The system monitors
 * alarms during a configuration deployment. If an alarm is triggered, the system rolls back the
 */
CreateEnvironmentResponse * AppConfigClient::createEnvironment(const CreateEnvironmentRequest &request)
{
    return qobject_cast<CreateEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * CreateHostedConfigurationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new configuration in the AppConfig configuration
 */
CreateHostedConfigurationVersionResponse * AppConfigClient::createHostedConfigurationVersion(const CreateHostedConfigurationVersionRequest &request)
{
    return qobject_cast<CreateHostedConfigurationVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * DeleteApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an application. Deleting an application does not delete a configuration from a
 */
DeleteApplicationResponse * AppConfigClient::deleteApplication(const DeleteApplicationRequest &request)
{
    return qobject_cast<DeleteApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * DeleteConfigurationProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a configuration profile. Deleting a configuration profile does not delete a configuration from a
 */
DeleteConfigurationProfileResponse * AppConfigClient::deleteConfigurationProfile(const DeleteConfigurationProfileRequest &request)
{
    return qobject_cast<DeleteConfigurationProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * DeleteDeploymentStrategyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a deployment strategy. Deleting a deployment strategy does not delete a configuration from a
 */
DeleteDeploymentStrategyResponse * AppConfigClient::deleteDeploymentStrategy(const DeleteDeploymentStrategyRequest &request)
{
    return qobject_cast<DeleteDeploymentStrategyResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * DeleteEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an environment. Deleting an environment does not delete a configuration from a
 */
DeleteEnvironmentResponse * AppConfigClient::deleteEnvironment(const DeleteEnvironmentRequest &request)
{
    return qobject_cast<DeleteEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * DeleteHostedConfigurationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a version of a configuration from the AppConfig configuration
 */
DeleteHostedConfigurationVersionResponse * AppConfigClient::deleteHostedConfigurationVersion(const DeleteHostedConfigurationVersionRequest &request)
{
    return qobject_cast<DeleteHostedConfigurationVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * GetApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve information about an
 */
GetApplicationResponse * AppConfigClient::getApplication(const GetApplicationRequest &request)
{
    return qobject_cast<GetApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * GetConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Receive information about a
 *
 * configuration> <b>
 *
 * AWS AppConfig uses the value of the <code>ClientConfigurationVersion</code> parameter to identify the configuration
 * version on your clients. If you don’t send <code>ClientConfigurationVersion</code> with each call to
 * <code>GetConfiguration</code>, your clients receive the current configuration. You are charged each time your clients
 * receive a
 *
 * configuration>
 *
 * To avoid excess charges, we recommend that you include the <code>ClientConfigurationVersion</code> value with every call
 * to <code>GetConfiguration</code>. This value must be saved on your client. Subsequent calls to
 * <code>GetConfiguration</code> must pass this value by using the <code>ClientConfigurationVersion</code> parameter.
 */
GetConfigurationResponse * AppConfigClient::getConfiguration(const GetConfigurationRequest &request)
{
    return qobject_cast<GetConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * GetConfigurationProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve information about a configuration
 */
GetConfigurationProfileResponse * AppConfigClient::getConfigurationProfile(const GetConfigurationProfileRequest &request)
{
    return qobject_cast<GetConfigurationProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * GetDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve information about a configuration
 */
GetDeploymentResponse * AppConfigClient::getDeployment(const GetDeploymentRequest &request)
{
    return qobject_cast<GetDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * GetDeploymentStrategyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve information about a deployment strategy. A deployment strategy defines important criteria for rolling out your
 * configuration to the designated targets. A deployment strategy includes: the overall duration required, a percentage of
 * targets to receive the deployment during each interval, an algorithm that defines how percentage grows, and bake
 */
GetDeploymentStrategyResponse * AppConfigClient::getDeploymentStrategy(const GetDeploymentStrategyRequest &request)
{
    return qobject_cast<GetDeploymentStrategyResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * GetEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve information about an environment. An environment is a logical deployment group of AppConfig applications, such
 * as applications in a <code>Production</code> environment or in an <code>EU_Region</code> environment. Each configuration
 * deployment targets an environment. You can enable one or more Amazon CloudWatch alarms for an environment. If an alarm
 * is triggered during a deployment, AppConfig roles back the
 */
GetEnvironmentResponse * AppConfigClient::getEnvironment(const GetEnvironmentRequest &request)
{
    return qobject_cast<GetEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * GetHostedConfigurationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get information about a specific configuration
 */
GetHostedConfigurationVersionResponse * AppConfigClient::getHostedConfigurationVersion(const GetHostedConfigurationVersionRequest &request)
{
    return qobject_cast<GetHostedConfigurationVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * ListApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all applications in your AWS
 */
ListApplicationsResponse * AppConfigClient::listApplications(const ListApplicationsRequest &request)
{
    return qobject_cast<ListApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * ListConfigurationProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the configuration profiles for an
 */
ListConfigurationProfilesResponse * AppConfigClient::listConfigurationProfiles(const ListConfigurationProfilesRequest &request)
{
    return qobject_cast<ListConfigurationProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * ListDeploymentStrategiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List deployment
 */
ListDeploymentStrategiesResponse * AppConfigClient::listDeploymentStrategies(const ListDeploymentStrategiesRequest &request)
{
    return qobject_cast<ListDeploymentStrategiesResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * ListDeploymentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the deployments for an
 */
ListDeploymentsResponse * AppConfigClient::listDeployments(const ListDeploymentsRequest &request)
{
    return qobject_cast<ListDeploymentsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * ListEnvironmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the environments for an
 */
ListEnvironmentsResponse * AppConfigClient::listEnvironments(const ListEnvironmentsRequest &request)
{
    return qobject_cast<ListEnvironmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * ListHostedConfigurationVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * View a list of configurations stored in the AppConfig configuration store by
 */
ListHostedConfigurationVersionsResponse * AppConfigClient::listHostedConfigurationVersions(const ListHostedConfigurationVersionsRequest &request)
{
    return qobject_cast<ListHostedConfigurationVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the list of key-value tags assigned to the
 */
ListTagsForResourceResponse * AppConfigClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * StartDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a
 */
StartDeploymentResponse * AppConfigClient::startDeployment(const StartDeploymentRequest &request)
{
    return qobject_cast<StartDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * StopDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a deployment. This API action works only on deployments that have a status of <code>DEPLOYING</code>. This action
 * moves the deployment to a status of
 */
StopDeploymentResponse * AppConfigClient::stopDeployment(const StopDeploymentRequest &request)
{
    return qobject_cast<StopDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Metadata to assign to an AppConfig resource. Tags help organize and categorize your AppConfig resources. Each tag
 * consists of a key and an optional value, both of which you define. You can specify a maximum of 50 tags for a
 */
TagResourceResponse * AppConfigClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a tag key and value from an AppConfig
 */
UntagResourceResponse * AppConfigClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * UpdateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an
 */
UpdateApplicationResponse * AppConfigClient::updateApplication(const UpdateApplicationRequest &request)
{
    return qobject_cast<UpdateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * UpdateConfigurationProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a configuration
 */
UpdateConfigurationProfileResponse * AppConfigClient::updateConfigurationProfile(const UpdateConfigurationProfileRequest &request)
{
    return qobject_cast<UpdateConfigurationProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * UpdateDeploymentStrategyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a deployment
 */
UpdateDeploymentStrategyResponse * AppConfigClient::updateDeploymentStrategy(const UpdateDeploymentStrategyRequest &request)
{
    return qobject_cast<UpdateDeploymentStrategyResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * UpdateEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an
 */
UpdateEnvironmentResponse * AppConfigClient::updateEnvironment(const UpdateEnvironmentRequest &request)
{
    return qobject_cast<UpdateEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * ValidateConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uses the validators in a configuration profile to validate a
 */
ValidateConfigurationResponse * AppConfigClient::validateConfiguration(const ValidateConfigurationRequest &request)
{
    return qobject_cast<ValidateConfigurationResponse *>(send(request));
}

/*!
 * \class QtAws::AppConfig::AppConfigClientPrivate
 * \brief The AppConfigClientPrivate class provides private implementation for AppConfigClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppConfig
 */

/*!
 * Constructs a AppConfigClientPrivate object with public implementation \a q.
 */
AppConfigClientPrivate::AppConfigClientPrivate(AppConfigClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace AppConfig
} // namespace QtAws
