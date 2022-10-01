// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
#include "createextensionrequest.h"
#include "createextensionresponse.h"
#include "createextensionassociationrequest.h"
#include "createextensionassociationresponse.h"
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
#include "deleteextensionrequest.h"
#include "deleteextensionresponse.h"
#include "deleteextensionassociationrequest.h"
#include "deleteextensionassociationresponse.h"
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
#include "getextensionrequest.h"
#include "getextensionresponse.h"
#include "getextensionassociationrequest.h"
#include "getextensionassociationresponse.h"
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
#include "listextensionassociationsrequest.h"
#include "listextensionassociationsresponse.h"
#include "listextensionsrequest.h"
#include "listextensionsresponse.h"
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
#include "updateextensionrequest.h"
#include "updateextensionresponse.h"
#include "updateextensionassociationrequest.h"
#include "updateextensionassociationresponse.h"
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
 *  Use AppConfig, a capability of Amazon Web Services Systems Manager, to create, manage, and quickly deploy application
 *  configurations. AppConfig supports controlled deployments to applications of any size and includes built-in validation
 *  checks and monitoring. You can use AppConfig with applications hosted on Amazon EC2 instances, Lambda, containers,
 *  mobile applications, or IoT
 * 
 *  devices>
 * 
 *  To prevent errors when deploying application configurations, especially for production systems where a simple typo could
 *  cause an unexpected outage, AppConfig includes validators. A validator provides a syntactic or semantic check to ensure
 *  that the configuration you want to deploy works as intended. To validate your application configuration data, you
 *  provide a schema or an Amazon Web Services Lambda function that runs against the configuration. The configuration
 *  deployment or update can only proceed when the configuration data is
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
 *  <b>Feature flags</b>: Use AppConfig to turn on new features that require a timely deployment, such as a product launch
 *  or announcement.
 * 
 *  </p </li> <li>
 * 
 *  <b>Application tuning</b>: Use AppConfig to carefully introduce changes to your application that can only be tested with
 *  production
 * 
 *  traffic> </li> <li>
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
 *  href="http://docs.aws.amazon.com/appconfig/latest/userguide/what-is-appconfig.html">AppConfig User
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
: QtAws::Core::AwsAbstractClient(new AppConfigClientPrivate(this), parent)
{
    Q_D(AppConfigClient);
    d->apiVersion = QStringLiteral("2019-10-09");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("appconfig");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon AppConfig");
    d->serviceName = QStringLiteral("appconfig");
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
: QtAws::Core::AwsAbstractClient(new AppConfigClientPrivate(this), parent)
{
    Q_D(AppConfigClient);
    d->apiVersion = QStringLiteral("2019-10-09");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("appconfig");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon AppConfig");
    d->serviceName = QStringLiteral("appconfig");
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * CreateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an application. In AppConfig, an application is simply an organizational construct like a folder. This
 * organizational construct has a relationship with some unit of executable code. For example, you could create an
 * application called MyMobileApp to organize and manage configuration data for a mobile application installed by your
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
 * Creates a configuration profile, which is information that enables AppConfig to access the configuration source. Valid
 * configuration sources include the AppConfig hosted configuration store, Amazon Web Services Systems Manager (SSM)
 * documents, SSM Parameter Store parameters, Amazon S3 objects, or any <a
 * href="http://docs.aws.amazon.com/codepipeline/latest/userguide/integrations-action-type.html#integrations-source">integration
 * source action</a> supported by CodePipeline. A configuration profile includes the following
 *
 * information> <ul> <li>
 *
 * The URI location of the configuration
 *
 * data> </li> <li>
 *
 * The Identity and Access Management (IAM) role that provides access to the configuration
 *
 * data> </li> <li>
 *
 * A validator for the configuration data. Available validators include either a JSON Schema or an Amazon Web Services
 * Lambda
 *
 * function> </li> </ul>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/appconfig/latest/userguide/appconfig-creating-configuration-and-profile.html">Create a
 * Configuration and a Configuration Profile</a> in the <i>AppConfig User
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
 * Creates a deployment strategy that defines important criteria for rolling out your configuration to the designated
 * targets. A deployment strategy includes the overall duration required, a percentage of targets to receive the deployment
 * during each interval, an algorithm that defines how percentage grows, and bake
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
 * Creates an environment. For each application, you define one or more environments. An environment is a deployment group
 * of AppConfig targets, such as applications in a <code>Beta</code> or <code>Production</code> environment. You can also
 * define environments for application subcomponents such as the <code>Web</code>, <code>Mobile</code> and
 * <code>Back-end</code> components for your application. You can configure Amazon CloudWatch alarms for each environment.
 * The system monitors alarms during a configuration deployment. If an alarm is triggered, the system rolls back the
 */
CreateEnvironmentResponse * AppConfigClient::createEnvironment(const CreateEnvironmentRequest &request)
{
    return qobject_cast<CreateEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * CreateExtensionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AppConfig extension. An extension augments your ability to inject logic or behavior at different points
 * during the AppConfig workflow of creating or deploying a
 *
 * configuration>
 *
 * You can create your own extensions or use the Amazon Web Services-authored extensions provided by AppConfig. For most
 * use-cases, to create your own extension, you must create an Lambda function to perform any computation and processing
 * defined in the extension. For more information about extensions, see <a
 * href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Working with
 * AppConfig extensions</a> in the <i>AppConfig User
 */
CreateExtensionResponse * AppConfigClient::createExtension(const CreateExtensionRequest &request)
{
    return qobject_cast<CreateExtensionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * CreateExtensionAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * When you create an extension or configure an Amazon Web Services-authored extension, you associate the extension with an
 * AppConfig application, environment, or configuration profile. For example, you can choose to run the <code>AppConfig
 * deployment events to Amazon SNS</code> Amazon Web Services-authored extension and receive notifications on an Amazon SNS
 * topic anytime a configuration deployment is started for a specific application. Defining which extension to associate
 * with an AppConfig resource is called an <i>extension association</i>. An extension association is a specified
 * relationship between an extension and an AppConfig resource, such as an application or a configuration profile. For more
 * information about extensions and associations, see <a
 * href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Working with
 * AppConfig extensions</a> in the <i>AppConfig User
 */
CreateExtensionAssociationResponse * AppConfigClient::createExtensionAssociation(const CreateExtensionAssociationRequest &request)
{
    return qobject_cast<CreateExtensionAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * CreateHostedConfigurationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new configuration in the AppConfig hosted configuration
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
 * Deletes an application. Deleting an application does not delete a configuration from a
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
 * Deletes a configuration profile. Deleting a configuration profile does not delete a configuration from a
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
 * Deletes a deployment strategy. Deleting a deployment strategy does not delete a configuration from a
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
 * Deletes an environment. Deleting an environment does not delete a configuration from a
 */
DeleteEnvironmentResponse * AppConfigClient::deleteEnvironment(const DeleteEnvironmentRequest &request)
{
    return qobject_cast<DeleteEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * DeleteExtensionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an AppConfig extension. You must delete all associations to an extension before you delete the
 */
DeleteExtensionResponse * AppConfigClient::deleteExtension(const DeleteExtensionRequest &request)
{
    return qobject_cast<DeleteExtensionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * DeleteExtensionAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an extension association. This action doesn't delete extensions defined in the
 */
DeleteExtensionAssociationResponse * AppConfigClient::deleteExtensionAssociation(const DeleteExtensionAssociationRequest &request)
{
    return qobject_cast<DeleteExtensionAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * DeleteHostedConfigurationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a version of a configuration from the AppConfig hosted configuration
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
 * Retrieves information about an
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
 * Retrieves the latest deployed
 *
 * configuration> <b>
 *
 * Note the following important
 *
 * information> <ul> <li>
 *
 * This API action has been deprecated. Calls to receive configuration data should use the <a
 * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/API_appconfigdata_StartConfigurationSession.html">StartConfigurationSession</a>
 * and <a
 * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/API_appconfigdata_GetLatestConfiguration.html">GetLatestConfiguration</a>
 * APIs instead.
 *
 * </p </li> <li>
 *
 * <code>GetConfiguration</code> is a priced call. For more information, see <a
 *
 * href="https://aws.amazon.com/systems-manager/pricing/">Pricing</a>> </li> <li>
 *
 * AppConfig uses the value of the <code>ClientConfigurationVersion</code> parameter to identify the configuration version
 * on your clients. If you don’t send <code>ClientConfigurationVersion</code> with each call to
 * <code>GetConfiguration</code>, your clients receive the current configuration. You are charged each time your clients
 * receive a
 *
 * configuration>
 *
 * To avoid excess charges, we recommend you use the <a
 * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/StartConfigurationSession.html">StartConfigurationSession</a>
 * and <a
 * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/GetLatestConfiguration.html">GetLatestConfiguration</a>
 * APIs, which track the client configuration version on your behalf. If you choose to continue using
 * <code>GetConfiguration</code>, we recommend that you include the <code>ClientConfigurationVersion</code> value with
 * every call to <code>GetConfiguration</code>. The value to use for <code>ClientConfigurationVersion</code> comes from the
 * <code>ConfigurationVersion</code> attribute returned by <code>GetConfiguration</code> when there is new or updated data,
 * and should be saved for subsequent calls to
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
 * Retrieves information about a configuration
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
 * Retrieves information about a configuration
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
 * Retrieves information about a deployment strategy. A deployment strategy defines important criteria for rolling out your
 * configuration to the designated targets. A deployment strategy includes the overall duration required, a percentage of
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
 * Retrieves information about an environment. An environment is a deployment group of AppConfig applications, such as
 * applications in a <code>Production</code> environment or in an <code>EU_Region</code> environment. Each configuration
 * deployment targets an environment. You can enable one or more Amazon CloudWatch alarms for an environment. If an alarm
 * is triggered during a deployment, AppConfig roles back the
 */
GetEnvironmentResponse * AppConfigClient::getEnvironment(const GetEnvironmentRequest &request)
{
    return qobject_cast<GetEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * GetExtensionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about an AppConfig
 */
GetExtensionResponse * AppConfigClient::getExtension(const GetExtensionRequest &request)
{
    return qobject_cast<GetExtensionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * GetExtensionAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about an AppConfig extension association. For more information about extensions and associations,
 * see <a href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Working with
 * AppConfig extensions</a> in the <i>AppConfig User
 */
GetExtensionAssociationResponse * AppConfigClient::getExtensionAssociation(const GetExtensionAssociationRequest &request)
{
    return qobject_cast<GetExtensionAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * GetHostedConfigurationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a specific configuration
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
 * Lists all applications in your Amazon Web Services
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
 * Lists deployment
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
 * Lists the deployments for an environment in descending deployment number
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
 * Lists the environments for an
 */
ListEnvironmentsResponse * AppConfigClient::listEnvironments(const ListEnvironmentsRequest &request)
{
    return qobject_cast<ListEnvironmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * ListExtensionAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all AppConfig extension associations in the account. For more information about extensions and associations, see
 * <a href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Working with
 * AppConfig extensions</a> in the <i>AppConfig User
 */
ListExtensionAssociationsResponse * AppConfigClient::listExtensionAssociations(const ListExtensionAssociationsRequest &request)
{
    return qobject_cast<ListExtensionAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * ListExtensionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all custom and Amazon Web Services-authored AppConfig extensions in the account. For more information about
 * extensions, see <a
 * href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Working with
 * AppConfig extensions</a> in the <i>AppConfig User
 */
ListExtensionsResponse * AppConfigClient::listExtensions(const ListExtensionsRequest &request)
{
    return qobject_cast<ListExtensionsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * ListHostedConfigurationVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists configurations stored in the AppConfig hosted configuration store by
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
 * Assigns metadata to an AppConfig resource. Tags help organize and categorize your AppConfig resources. Each tag consists
 * of a key and an optional value, both of which you define. You can specify a maximum of 50 tags for a
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
 * UpdateExtensionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an AppConfig extension. For more information about extensions, see <a
 * href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Working with
 * AppConfig extensions</a> in the <i>AppConfig User
 */
UpdateExtensionResponse * AppConfigClient::updateExtension(const UpdateExtensionRequest &request)
{
    return qobject_cast<UpdateExtensionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigClient service, and returns a pointer to an
 * UpdateExtensionAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an association. For more information about extensions and associations, see <a
 * href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Working with
 * AppConfig extensions</a> in the <i>AppConfig User
 */
UpdateExtensionAssociationResponse * AppConfigClient::updateExtensionAssociation(const UpdateExtensionAssociationRequest &request)
{
    return qobject_cast<UpdateExtensionAssociationResponse *>(send(request));
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
AppConfigClientPrivate::AppConfigClientPrivate(AppConfigClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AppConfig
} // namespace QtAws
