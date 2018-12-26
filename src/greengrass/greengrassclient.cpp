/*
    Copyright 2013-2018 Paul Colby

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

#include "greengrassclient.h"
#include "greengrassclient_p.h"

#include "core/awssignaturev4.h"
#include "associateroletogrouprequest.h"
#include "associateroletogroupresponse.h"
#include "associateserviceroletoaccountrequest.h"
#include "associateserviceroletoaccountresponse.h"
#include "createconnectordefinitionrequest.h"
#include "createconnectordefinitionresponse.h"
#include "createconnectordefinitionversionrequest.h"
#include "createconnectordefinitionversionresponse.h"
#include "createcoredefinitionrequest.h"
#include "createcoredefinitionresponse.h"
#include "createcoredefinitionversionrequest.h"
#include "createcoredefinitionversionresponse.h"
#include "createdeploymentrequest.h"
#include "createdeploymentresponse.h"
#include "createdevicedefinitionrequest.h"
#include "createdevicedefinitionresponse.h"
#include "createdevicedefinitionversionrequest.h"
#include "createdevicedefinitionversionresponse.h"
#include "createfunctiondefinitionrequest.h"
#include "createfunctiondefinitionresponse.h"
#include "createfunctiondefinitionversionrequest.h"
#include "createfunctiondefinitionversionresponse.h"
#include "creategrouprequest.h"
#include "creategroupresponse.h"
#include "creategroupcertificateauthorityrequest.h"
#include "creategroupcertificateauthorityresponse.h"
#include "creategroupversionrequest.h"
#include "creategroupversionresponse.h"
#include "createloggerdefinitionrequest.h"
#include "createloggerdefinitionresponse.h"
#include "createloggerdefinitionversionrequest.h"
#include "createloggerdefinitionversionresponse.h"
#include "createresourcedefinitionrequest.h"
#include "createresourcedefinitionresponse.h"
#include "createresourcedefinitionversionrequest.h"
#include "createresourcedefinitionversionresponse.h"
#include "createsoftwareupdatejobrequest.h"
#include "createsoftwareupdatejobresponse.h"
#include "createsubscriptiondefinitionrequest.h"
#include "createsubscriptiondefinitionresponse.h"
#include "createsubscriptiondefinitionversionrequest.h"
#include "createsubscriptiondefinitionversionresponse.h"
#include "deleteconnectordefinitionrequest.h"
#include "deleteconnectordefinitionresponse.h"
#include "deletecoredefinitionrequest.h"
#include "deletecoredefinitionresponse.h"
#include "deletedevicedefinitionrequest.h"
#include "deletedevicedefinitionresponse.h"
#include "deletefunctiondefinitionrequest.h"
#include "deletefunctiondefinitionresponse.h"
#include "deletegrouprequest.h"
#include "deletegroupresponse.h"
#include "deleteloggerdefinitionrequest.h"
#include "deleteloggerdefinitionresponse.h"
#include "deleteresourcedefinitionrequest.h"
#include "deleteresourcedefinitionresponse.h"
#include "deletesubscriptiondefinitionrequest.h"
#include "deletesubscriptiondefinitionresponse.h"
#include "disassociaterolefromgrouprequest.h"
#include "disassociaterolefromgroupresponse.h"
#include "disassociateservicerolefromaccountrequest.h"
#include "disassociateservicerolefromaccountresponse.h"
#include "getassociatedrolerequest.h"
#include "getassociatedroleresponse.h"
#include "getbulkdeploymentstatusrequest.h"
#include "getbulkdeploymentstatusresponse.h"
#include "getconnectivityinforequest.h"
#include "getconnectivityinforesponse.h"
#include "getconnectordefinitionrequest.h"
#include "getconnectordefinitionresponse.h"
#include "getconnectordefinitionversionrequest.h"
#include "getconnectordefinitionversionresponse.h"
#include "getcoredefinitionrequest.h"
#include "getcoredefinitionresponse.h"
#include "getcoredefinitionversionrequest.h"
#include "getcoredefinitionversionresponse.h"
#include "getdeploymentstatusrequest.h"
#include "getdeploymentstatusresponse.h"
#include "getdevicedefinitionrequest.h"
#include "getdevicedefinitionresponse.h"
#include "getdevicedefinitionversionrequest.h"
#include "getdevicedefinitionversionresponse.h"
#include "getfunctiondefinitionrequest.h"
#include "getfunctiondefinitionresponse.h"
#include "getfunctiondefinitionversionrequest.h"
#include "getfunctiondefinitionversionresponse.h"
#include "getgrouprequest.h"
#include "getgroupresponse.h"
#include "getgroupcertificateauthorityrequest.h"
#include "getgroupcertificateauthorityresponse.h"
#include "getgroupcertificateconfigurationrequest.h"
#include "getgroupcertificateconfigurationresponse.h"
#include "getgroupversionrequest.h"
#include "getgroupversionresponse.h"
#include "getloggerdefinitionrequest.h"
#include "getloggerdefinitionresponse.h"
#include "getloggerdefinitionversionrequest.h"
#include "getloggerdefinitionversionresponse.h"
#include "getresourcedefinitionrequest.h"
#include "getresourcedefinitionresponse.h"
#include "getresourcedefinitionversionrequest.h"
#include "getresourcedefinitionversionresponse.h"
#include "getserviceroleforaccountrequest.h"
#include "getserviceroleforaccountresponse.h"
#include "getsubscriptiondefinitionrequest.h"
#include "getsubscriptiondefinitionresponse.h"
#include "getsubscriptiondefinitionversionrequest.h"
#include "getsubscriptiondefinitionversionresponse.h"
#include "listbulkdeploymentdetailedreportsrequest.h"
#include "listbulkdeploymentdetailedreportsresponse.h"
#include "listbulkdeploymentsrequest.h"
#include "listbulkdeploymentsresponse.h"
#include "listconnectordefinitionversionsrequest.h"
#include "listconnectordefinitionversionsresponse.h"
#include "listconnectordefinitionsrequest.h"
#include "listconnectordefinitionsresponse.h"
#include "listcoredefinitionversionsrequest.h"
#include "listcoredefinitionversionsresponse.h"
#include "listcoredefinitionsrequest.h"
#include "listcoredefinitionsresponse.h"
#include "listdeploymentsrequest.h"
#include "listdeploymentsresponse.h"
#include "listdevicedefinitionversionsrequest.h"
#include "listdevicedefinitionversionsresponse.h"
#include "listdevicedefinitionsrequest.h"
#include "listdevicedefinitionsresponse.h"
#include "listfunctiondefinitionversionsrequest.h"
#include "listfunctiondefinitionversionsresponse.h"
#include "listfunctiondefinitionsrequest.h"
#include "listfunctiondefinitionsresponse.h"
#include "listgroupcertificateauthoritiesrequest.h"
#include "listgroupcertificateauthoritiesresponse.h"
#include "listgroupversionsrequest.h"
#include "listgroupversionsresponse.h"
#include "listgroupsrequest.h"
#include "listgroupsresponse.h"
#include "listloggerdefinitionversionsrequest.h"
#include "listloggerdefinitionversionsresponse.h"
#include "listloggerdefinitionsrequest.h"
#include "listloggerdefinitionsresponse.h"
#include "listresourcedefinitionversionsrequest.h"
#include "listresourcedefinitionversionsresponse.h"
#include "listresourcedefinitionsrequest.h"
#include "listresourcedefinitionsresponse.h"
#include "listsubscriptiondefinitionversionsrequest.h"
#include "listsubscriptiondefinitionversionsresponse.h"
#include "listsubscriptiondefinitionsrequest.h"
#include "listsubscriptiondefinitionsresponse.h"
#include "resetdeploymentsrequest.h"
#include "resetdeploymentsresponse.h"
#include "startbulkdeploymentrequest.h"
#include "startbulkdeploymentresponse.h"
#include "stopbulkdeploymentrequest.h"
#include "stopbulkdeploymentresponse.h"
#include "updateconnectivityinforequest.h"
#include "updateconnectivityinforesponse.h"
#include "updateconnectordefinitionrequest.h"
#include "updateconnectordefinitionresponse.h"
#include "updatecoredefinitionrequest.h"
#include "updatecoredefinitionresponse.h"
#include "updatedevicedefinitionrequest.h"
#include "updatedevicedefinitionresponse.h"
#include "updatefunctiondefinitionrequest.h"
#include "updatefunctiondefinitionresponse.h"
#include "updategrouprequest.h"
#include "updategroupresponse.h"
#include "updategroupcertificateconfigurationrequest.h"
#include "updategroupcertificateconfigurationresponse.h"
#include "updateloggerdefinitionrequest.h"
#include "updateloggerdefinitionresponse.h"
#include "updateresourcedefinitionrequest.h"
#include "updateresourcedefinitionresponse.h"
#include "updatesubscriptiondefinitionrequest.h"
#include "updatesubscriptiondefinitionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Greengrass
 * \brief Contains classess for accessing AWS Greengrass.
 *
 * \inmodule QtAwsGreengrass
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GreengrassClient
 * \brief The GreengrassClient class provides access to the AWS Greengrass service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 */

/*!
 * \brief Constructs a GreengrassClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
GreengrassClient::GreengrassClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GreengrassClientPrivate(this), parent)
{
    Q_D(GreengrassClient);
    d->apiVersion = QStringLiteral("2017-06-07");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("greengrass");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Greengrass");
    d->serviceName = QStringLiteral("greengrass");
}

/*!
 * \overload GreengrassClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
GreengrassClient::GreengrassClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GreengrassClientPrivate(this), parent)
{
    Q_D(GreengrassClient);
    d->apiVersion = QStringLiteral("2017-06-07");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("greengrass");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Greengrass");
    d->serviceName = QStringLiteral("greengrass");
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * AssociateRoleToGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a role with a group. Your Greengrass core will use the role to access AWS cloud services. The role's
 */
AssociateRoleToGroupResponse * GreengrassClient::associateRoleToGroup(const AssociateRoleToGroupRequest &request)
{
    return qobject_cast<AssociateRoleToGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * AssociateServiceRoleToAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a role with your account. AWS IoT Greengrass will use the role to access your Lambda functions and AWS IoT
 * resources. This is necessary for deployments to succeed. The role must have at least minimum permissions in the policy
 */
AssociateServiceRoleToAccountResponse * GreengrassClient::associateServiceRoleToAccount(const AssociateServiceRoleToAccountRequest &request)
{
    return qobject_cast<AssociateServiceRoleToAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateConnectorDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a connector definition. You may provide the initial version of the connector definition now or use
 */
CreateConnectorDefinitionResponse * GreengrassClient::createConnectorDefinition(const CreateConnectorDefinitionRequest &request)
{
    return qobject_cast<CreateConnectorDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateConnectorDefinitionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateConnectorDefinitionVersionResponse * GreengrassClient::createConnectorDefinitionVersion(const CreateConnectorDefinitionVersionRequest &request)
{
    return qobject_cast<CreateConnectorDefinitionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateCoreDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a core definition. You may provide the initial version of the core definition now or use
 */
CreateCoreDefinitionResponse * GreengrassClient::createCoreDefinition(const CreateCoreDefinitionRequest &request)
{
    return qobject_cast<CreateCoreDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateCoreDefinitionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a version of a core definition that has already been defined. Greengrass groups must each contain exactly one
 */
CreateCoreDefinitionVersionResponse * GreengrassClient::createCoreDefinitionVersion(const CreateCoreDefinitionVersionRequest &request)
{
    return qobject_cast<CreateCoreDefinitionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a deployment. ''CreateDeployment'' requests are idempotent with respect to the ''X-Amzn-Client-Token'' token and
 */
CreateDeploymentResponse * GreengrassClient::createDeployment(const CreateDeploymentRequest &request)
{
    return qobject_cast<CreateDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateDeviceDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a device definition. You may provide the initial version of the device definition now or use
 */
CreateDeviceDefinitionResponse * GreengrassClient::createDeviceDefinition(const CreateDeviceDefinitionRequest &request)
{
    return qobject_cast<CreateDeviceDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateDeviceDefinitionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateDeviceDefinitionVersionResponse * GreengrassClient::createDeviceDefinitionVersion(const CreateDeviceDefinitionVersionRequest &request)
{
    return qobject_cast<CreateDeviceDefinitionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateFunctionDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Lambda function definition which contains a list of Lambda functions and their configurations to be used in a
 * group. You can create an initial version of the definition by providing a list of Lambda functions and their
 */
CreateFunctionDefinitionResponse * GreengrassClient::createFunctionDefinition(const CreateFunctionDefinitionRequest &request)
{
    return qobject_cast<CreateFunctionDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateFunctionDefinitionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateFunctionDefinitionVersionResponse * GreengrassClient::createFunctionDefinitionVersion(const CreateFunctionDefinitionVersionRequest &request)
{
    return qobject_cast<CreateFunctionDefinitionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a group. You may provide the initial version of the group or use ''CreateGroupVersion'' at a later time. Tip:
 * You can use the ''gg_group_setup'' package (https://github.com/awslabs/aws-greengrass-group-setup) as a library or
 */
CreateGroupResponse * GreengrassClient::createGroup(const CreateGroupRequest &request)
{
    return qobject_cast<CreateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateGroupCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateGroupCertificateAuthorityResponse * GreengrassClient::createGroupCertificateAuthority(const CreateGroupCertificateAuthorityRequest &request)
{
    return qobject_cast<CreateGroupCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateGroupVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateGroupVersionResponse * GreengrassClient::createGroupVersion(const CreateGroupVersionRequest &request)
{
    return qobject_cast<CreateGroupVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateLoggerDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a logger definition. You may provide the initial version of the logger definition now or use
 */
CreateLoggerDefinitionResponse * GreengrassClient::createLoggerDefinition(const CreateLoggerDefinitionRequest &request)
{
    return qobject_cast<CreateLoggerDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateLoggerDefinitionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateLoggerDefinitionVersionResponse * GreengrassClient::createLoggerDefinitionVersion(const CreateLoggerDefinitionVersionRequest &request)
{
    return qobject_cast<CreateLoggerDefinitionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateResourceDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a resource definition which contains a list of resources to be used in a group. You can create an initial
 */
CreateResourceDefinitionResponse * GreengrassClient::createResourceDefinition(const CreateResourceDefinitionRequest &request)
{
    return qobject_cast<CreateResourceDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateResourceDefinitionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateResourceDefinitionVersionResponse * GreengrassClient::createResourceDefinitionVersion(const CreateResourceDefinitionVersionRequest &request)
{
    return qobject_cast<CreateResourceDefinitionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateSoftwareUpdateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a software update for a core or group of cores (specified as an IoT thing group.) Use this to update the OTA
 * Agent as well as the Greengrass core software. It makes use of the IoT Jobs feature which provides additional commands
 */
CreateSoftwareUpdateJobResponse * GreengrassClient::createSoftwareUpdateJob(const CreateSoftwareUpdateJobRequest &request)
{
    return qobject_cast<CreateSoftwareUpdateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateSubscriptionDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a subscription definition. You may provide the initial version of the subscription definition now or use
 */
CreateSubscriptionDefinitionResponse * GreengrassClient::createSubscriptionDefinition(const CreateSubscriptionDefinitionRequest &request)
{
    return qobject_cast<CreateSubscriptionDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * CreateSubscriptionDefinitionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateSubscriptionDefinitionVersionResponse * GreengrassClient::createSubscriptionDefinitionVersion(const CreateSubscriptionDefinitionVersionRequest &request)
{
    return qobject_cast<CreateSubscriptionDefinitionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * DeleteConnectorDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteConnectorDefinitionResponse * GreengrassClient::deleteConnectorDefinition(const DeleteConnectorDefinitionRequest &request)
{
    return qobject_cast<DeleteConnectorDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * DeleteCoreDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteCoreDefinitionResponse * GreengrassClient::deleteCoreDefinition(const DeleteCoreDefinitionRequest &request)
{
    return qobject_cast<DeleteCoreDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * DeleteDeviceDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteDeviceDefinitionResponse * GreengrassClient::deleteDeviceDefinition(const DeleteDeviceDefinitionRequest &request)
{
    return qobject_cast<DeleteDeviceDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * DeleteFunctionDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteFunctionDefinitionResponse * GreengrassClient::deleteFunctionDefinition(const DeleteFunctionDefinitionRequest &request)
{
    return qobject_cast<DeleteFunctionDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * DeleteGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteGroupResponse * GreengrassClient::deleteGroup(const DeleteGroupRequest &request)
{
    return qobject_cast<DeleteGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * DeleteLoggerDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteLoggerDefinitionResponse * GreengrassClient::deleteLoggerDefinition(const DeleteLoggerDefinitionRequest &request)
{
    return qobject_cast<DeleteLoggerDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * DeleteResourceDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteResourceDefinitionResponse * GreengrassClient::deleteResourceDefinition(const DeleteResourceDefinitionRequest &request)
{
    return qobject_cast<DeleteResourceDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * DeleteSubscriptionDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteSubscriptionDefinitionResponse * GreengrassClient::deleteSubscriptionDefinition(const DeleteSubscriptionDefinitionRequest &request)
{
    return qobject_cast<DeleteSubscriptionDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * DisassociateRoleFromGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DisassociateRoleFromGroupResponse * GreengrassClient::disassociateRoleFromGroup(const DisassociateRoleFromGroupRequest &request)
{
    return qobject_cast<DisassociateRoleFromGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * DisassociateServiceRoleFromAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DisassociateServiceRoleFromAccountResponse * GreengrassClient::disassociateServiceRoleFromAccount(const DisassociateServiceRoleFromAccountRequest &request)
{
    return qobject_cast<DisassociateServiceRoleFromAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetAssociatedRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetAssociatedRoleResponse * GreengrassClient::getAssociatedRole(const GetAssociatedRoleRequest &request)
{
    return qobject_cast<GetAssociatedRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetBulkDeploymentStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetBulkDeploymentStatusResponse * GreengrassClient::getBulkDeploymentStatus(const GetBulkDeploymentStatusRequest &request)
{
    return qobject_cast<GetBulkDeploymentStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetConnectivityInfoResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetConnectivityInfoResponse * GreengrassClient::getConnectivityInfo(const GetConnectivityInfoRequest &request)
{
    return qobject_cast<GetConnectivityInfoResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetConnectorDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetConnectorDefinitionResponse * GreengrassClient::getConnectorDefinition(const GetConnectorDefinitionRequest &request)
{
    return qobject_cast<GetConnectorDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetConnectorDefinitionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a connector definition version, including the connectors that the version contains.
 * Connectors are prebuilt modules that interact with local infrastructure, device protocols, AWS, and other cloud
 */
GetConnectorDefinitionVersionResponse * GreengrassClient::getConnectorDefinitionVersion(const GetConnectorDefinitionVersionRequest &request)
{
    return qobject_cast<GetConnectorDefinitionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetCoreDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetCoreDefinitionResponse * GreengrassClient::getCoreDefinition(const GetCoreDefinitionRequest &request)
{
    return qobject_cast<GetCoreDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetCoreDefinitionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetCoreDefinitionVersionResponse * GreengrassClient::getCoreDefinitionVersion(const GetCoreDefinitionVersionRequest &request)
{
    return qobject_cast<GetCoreDefinitionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetDeploymentStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetDeploymentStatusResponse * GreengrassClient::getDeploymentStatus(const GetDeploymentStatusRequest &request)
{
    return qobject_cast<GetDeploymentStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetDeviceDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetDeviceDefinitionResponse * GreengrassClient::getDeviceDefinition(const GetDeviceDefinitionRequest &request)
{
    return qobject_cast<GetDeviceDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetDeviceDefinitionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetDeviceDefinitionVersionResponse * GreengrassClient::getDeviceDefinitionVersion(const GetDeviceDefinitionVersionRequest &request)
{
    return qobject_cast<GetDeviceDefinitionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetFunctionDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetFunctionDefinitionResponse * GreengrassClient::getFunctionDefinition(const GetFunctionDefinitionRequest &request)
{
    return qobject_cast<GetFunctionDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetFunctionDefinitionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a Lambda function definition version, including which Lambda functions are included in the
 */
GetFunctionDefinitionVersionResponse * GreengrassClient::getFunctionDefinitionVersion(const GetFunctionDefinitionVersionRequest &request)
{
    return qobject_cast<GetFunctionDefinitionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetGroupResponse * GreengrassClient::getGroup(const GetGroupRequest &request)
{
    return qobject_cast<GetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetGroupCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetGroupCertificateAuthorityResponse * GreengrassClient::getGroupCertificateAuthority(const GetGroupCertificateAuthorityRequest &request)
{
    return qobject_cast<GetGroupCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetGroupCertificateConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetGroupCertificateConfigurationResponse * GreengrassClient::getGroupCertificateConfiguration(const GetGroupCertificateConfigurationRequest &request)
{
    return qobject_cast<GetGroupCertificateConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetGroupVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetGroupVersionResponse * GreengrassClient::getGroupVersion(const GetGroupVersionRequest &request)
{
    return qobject_cast<GetGroupVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetLoggerDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetLoggerDefinitionResponse * GreengrassClient::getLoggerDefinition(const GetLoggerDefinitionRequest &request)
{
    return qobject_cast<GetLoggerDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetLoggerDefinitionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetLoggerDefinitionVersionResponse * GreengrassClient::getLoggerDefinitionVersion(const GetLoggerDefinitionVersionRequest &request)
{
    return qobject_cast<GetLoggerDefinitionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetResourceDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetResourceDefinitionResponse * GreengrassClient::getResourceDefinition(const GetResourceDefinitionRequest &request)
{
    return qobject_cast<GetResourceDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetResourceDefinitionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetResourceDefinitionVersionResponse * GreengrassClient::getResourceDefinitionVersion(const GetResourceDefinitionVersionRequest &request)
{
    return qobject_cast<GetResourceDefinitionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetServiceRoleForAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetServiceRoleForAccountResponse * GreengrassClient::getServiceRoleForAccount(const GetServiceRoleForAccountRequest &request)
{
    return qobject_cast<GetServiceRoleForAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetSubscriptionDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetSubscriptionDefinitionResponse * GreengrassClient::getSubscriptionDefinition(const GetSubscriptionDefinitionRequest &request)
{
    return qobject_cast<GetSubscriptionDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * GetSubscriptionDefinitionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetSubscriptionDefinitionVersionResponse * GreengrassClient::getSubscriptionDefinitionVersion(const GetSubscriptionDefinitionVersionRequest &request)
{
    return qobject_cast<GetSubscriptionDefinitionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListBulkDeploymentDetailedReportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a paginated list of the deployments that have been started in a bulk deployment operation, and their current
 */
ListBulkDeploymentDetailedReportsResponse * GreengrassClient::listBulkDeploymentDetailedReports(const ListBulkDeploymentDetailedReportsRequest &request)
{
    return qobject_cast<ListBulkDeploymentDetailedReportsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListBulkDeploymentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListBulkDeploymentsResponse * GreengrassClient::listBulkDeployments(const ListBulkDeploymentsRequest &request)
{
    return qobject_cast<ListBulkDeploymentsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListConnectorDefinitionVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the versions of a connector definition, which are containers for connectors. Connectors run on the Greengrass core
 */
ListConnectorDefinitionVersionsResponse * GreengrassClient::listConnectorDefinitionVersions(const ListConnectorDefinitionVersionsRequest &request)
{
    return qobject_cast<ListConnectorDefinitionVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListConnectorDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListConnectorDefinitionsResponse * GreengrassClient::listConnectorDefinitions(const ListConnectorDefinitionsRequest &request)
{
    return qobject_cast<ListConnectorDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListCoreDefinitionVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListCoreDefinitionVersionsResponse * GreengrassClient::listCoreDefinitionVersions(const ListCoreDefinitionVersionsRequest &request)
{
    return qobject_cast<ListCoreDefinitionVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListCoreDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListCoreDefinitionsResponse * GreengrassClient::listCoreDefinitions(const ListCoreDefinitionsRequest &request)
{
    return qobject_cast<ListCoreDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListDeploymentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListDeploymentsResponse * GreengrassClient::listDeployments(const ListDeploymentsRequest &request)
{
    return qobject_cast<ListDeploymentsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListDeviceDefinitionVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListDeviceDefinitionVersionsResponse * GreengrassClient::listDeviceDefinitionVersions(const ListDeviceDefinitionVersionsRequest &request)
{
    return qobject_cast<ListDeviceDefinitionVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListDeviceDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListDeviceDefinitionsResponse * GreengrassClient::listDeviceDefinitions(const ListDeviceDefinitionsRequest &request)
{
    return qobject_cast<ListDeviceDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListFunctionDefinitionVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListFunctionDefinitionVersionsResponse * GreengrassClient::listFunctionDefinitionVersions(const ListFunctionDefinitionVersionsRequest &request)
{
    return qobject_cast<ListFunctionDefinitionVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListFunctionDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListFunctionDefinitionsResponse * GreengrassClient::listFunctionDefinitions(const ListFunctionDefinitionsRequest &request)
{
    return qobject_cast<ListFunctionDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListGroupCertificateAuthoritiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListGroupCertificateAuthoritiesResponse * GreengrassClient::listGroupCertificateAuthorities(const ListGroupCertificateAuthoritiesRequest &request)
{
    return qobject_cast<ListGroupCertificateAuthoritiesResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListGroupVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListGroupVersionsResponse * GreengrassClient::listGroupVersions(const ListGroupVersionsRequest &request)
{
    return qobject_cast<ListGroupVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListGroupsResponse * GreengrassClient::listGroups(const ListGroupsRequest &request)
{
    return qobject_cast<ListGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListLoggerDefinitionVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListLoggerDefinitionVersionsResponse * GreengrassClient::listLoggerDefinitionVersions(const ListLoggerDefinitionVersionsRequest &request)
{
    return qobject_cast<ListLoggerDefinitionVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListLoggerDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListLoggerDefinitionsResponse * GreengrassClient::listLoggerDefinitions(const ListLoggerDefinitionsRequest &request)
{
    return qobject_cast<ListLoggerDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListResourceDefinitionVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListResourceDefinitionVersionsResponse * GreengrassClient::listResourceDefinitionVersions(const ListResourceDefinitionVersionsRequest &request)
{
    return qobject_cast<ListResourceDefinitionVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListResourceDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListResourceDefinitionsResponse * GreengrassClient::listResourceDefinitions(const ListResourceDefinitionsRequest &request)
{
    return qobject_cast<ListResourceDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListSubscriptionDefinitionVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListSubscriptionDefinitionVersionsResponse * GreengrassClient::listSubscriptionDefinitionVersions(const ListSubscriptionDefinitionVersionsRequest &request)
{
    return qobject_cast<ListSubscriptionDefinitionVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ListSubscriptionDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListSubscriptionDefinitionsResponse * GreengrassClient::listSubscriptionDefinitions(const ListSubscriptionDefinitionsRequest &request)
{
    return qobject_cast<ListSubscriptionDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * ResetDeploymentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ResetDeploymentsResponse * GreengrassClient::resetDeployments(const ResetDeploymentsRequest &request)
{
    return qobject_cast<ResetDeploymentsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * StartBulkDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deploys multiple groups in one operation. This action starts the bulk deployment of a specified set of group versions.
 * Each group version deployment will be triggered with an adaptive rate that has a fixed upper limit. We recommend that
 * you include an ''X-Amzn-Client-Token'' token in every ''StartBulkDeployment'' request. These requests are idempotent
 */
StartBulkDeploymentResponse * GreengrassClient::startBulkDeployment(const StartBulkDeploymentRequest &request)
{
    return qobject_cast<StartBulkDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * StopBulkDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the execution of a bulk deployment. This action returns a status of ''Stopping'' until the deployment is stopped.
 * You cannot start a new bulk deployment while a previous deployment is in the ''Stopping'' state. This action doesn't
 */
StopBulkDeploymentResponse * GreengrassClient::stopBulkDeployment(const StopBulkDeploymentRequest &request)
{
    return qobject_cast<StopBulkDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * UpdateConnectivityInfoResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the connectivity information for the core. Any devices that belong to the group which has this core will receive
 */
UpdateConnectivityInfoResponse * GreengrassClient::updateConnectivityInfo(const UpdateConnectivityInfoRequest &request)
{
    return qobject_cast<UpdateConnectivityInfoResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * UpdateConnectorDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateConnectorDefinitionResponse * GreengrassClient::updateConnectorDefinition(const UpdateConnectorDefinitionRequest &request)
{
    return qobject_cast<UpdateConnectorDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * UpdateCoreDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateCoreDefinitionResponse * GreengrassClient::updateCoreDefinition(const UpdateCoreDefinitionRequest &request)
{
    return qobject_cast<UpdateCoreDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * UpdateDeviceDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateDeviceDefinitionResponse * GreengrassClient::updateDeviceDefinition(const UpdateDeviceDefinitionRequest &request)
{
    return qobject_cast<UpdateDeviceDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * UpdateFunctionDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateFunctionDefinitionResponse * GreengrassClient::updateFunctionDefinition(const UpdateFunctionDefinitionRequest &request)
{
    return qobject_cast<UpdateFunctionDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * UpdateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateGroupResponse * GreengrassClient::updateGroup(const UpdateGroupRequest &request)
{
    return qobject_cast<UpdateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * UpdateGroupCertificateConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateGroupCertificateConfigurationResponse * GreengrassClient::updateGroupCertificateConfiguration(const UpdateGroupCertificateConfigurationRequest &request)
{
    return qobject_cast<UpdateGroupCertificateConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * UpdateLoggerDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateLoggerDefinitionResponse * GreengrassClient::updateLoggerDefinition(const UpdateLoggerDefinitionRequest &request)
{
    return qobject_cast<UpdateLoggerDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * UpdateResourceDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateResourceDefinitionResponse * GreengrassClient::updateResourceDefinition(const UpdateResourceDefinitionRequest &request)
{
    return qobject_cast<UpdateResourceDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassClient service, and returns a pointer to an
 * UpdateSubscriptionDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateSubscriptionDefinitionResponse * GreengrassClient::updateSubscriptionDefinition(const UpdateSubscriptionDefinitionRequest &request)
{
    return qobject_cast<UpdateSubscriptionDefinitionResponse *>(send(request));
}

/*!
 * \class QtAws::Greengrass::GreengrassClientPrivate
 * \brief The GreengrassClientPrivate class provides private implementation for GreengrassClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GreengrassClientPrivate object with public implementation \a q.
 */
GreengrassClientPrivate::GreengrassClientPrivate(GreengrassClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Greengrass
} // namespace QtAws
