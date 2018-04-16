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

#include "greengrassclient.h"
#include "greengrassclient_p.h"

#include "core/awssignaturev4.h"
#include "associateroletogrouprequest.h"
#include "associateroletogroupresponse.h"
#include "associateserviceroletoaccountrequest.h"
#include "associateserviceroletoaccountresponse.h"
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
#include "getconnectivityinforequest.h"
#include "getconnectivityinforesponse.h"
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
#include "updateconnectivityinforequest.h"
#include "updateconnectivityinforesponse.h"
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
 * \brief The QtAws::Greengrass contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GreengrassClient
 *
 * \brief The GreengrassClient class provides access to the AWS Greengrass service.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
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
 * \a  AwsEndpoint::getEndpoint()
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
 * Associates a role with a group. Your AWS Greengrass core will use the role to access AWS cloud services. The role's
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateRoleToGroupResponse * GreengrassClient::associateRoleToGroup(const AssociateRoleToGroupRequest &request)
{
    return qobject_cast<AssociateRoleToGroupResponse *>(send(request));
}

/*!
 * Associates a role with your account. AWS Greengrass will use the role to access your Lambda functions and AWS IoT
 * resources. This is necessary for deployments to succeed. The role must have at least minimum permissions in the policy
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateServiceRoleToAccountResponse * GreengrassClient::associateServiceRoleToAccount(const AssociateServiceRoleToAccountRequest &request)
{
    return qobject_cast<AssociateServiceRoleToAccountResponse *>(send(request));
}

/*!
 * Creates a core definition. You may provide the initial version of the core definition now or use
 * ''CreateCoreDefinitionVersion'' at a later time. AWS Greengrass groups must each contain exactly one AWS Greengrass
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCoreDefinitionResponse * GreengrassClient::createCoreDefinition(const CreateCoreDefinitionRequest &request)
{
    return qobject_cast<CreateCoreDefinitionResponse *>(send(request));
}

/*!
 * Creates a version of a core definition that has already been defined. AWS Greengrass groups must each contain exactly
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCoreDefinitionVersionResponse * GreengrassClient::createCoreDefinitionVersion(const CreateCoreDefinitionVersionRequest &request)
{
    return qobject_cast<CreateCoreDefinitionVersionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDeploymentResponse * GreengrassClient::createDeployment(const CreateDeploymentRequest &request)
{
    return qobject_cast<CreateDeploymentResponse *>(send(request));
}

/*!
 * Creates a device definition. You may provide the initial version of the device definition now or use
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDeviceDefinitionResponse * GreengrassClient::createDeviceDefinition(const CreateDeviceDefinitionRequest &request)
{
    return qobject_cast<CreateDeviceDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDeviceDefinitionVersionResponse * GreengrassClient::createDeviceDefinitionVersion(const CreateDeviceDefinitionVersionRequest &request)
{
    return qobject_cast<CreateDeviceDefinitionVersionResponse *>(send(request));
}

/*!
 * Creates a Lambda function definition which contains a list of Lambda functions and their configurations to be used in a
 * group. You can create an initial version of the definition by providing a list of Lambda functions and their
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateFunctionDefinitionResponse * GreengrassClient::createFunctionDefinition(const CreateFunctionDefinitionRequest &request)
{
    return qobject_cast<CreateFunctionDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateFunctionDefinitionVersionResponse * GreengrassClient::createFunctionDefinitionVersion(const CreateFunctionDefinitionVersionRequest &request)
{
    return qobject_cast<CreateFunctionDefinitionVersionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateGroupResponse * GreengrassClient::createGroup(const CreateGroupRequest &request)
{
    return qobject_cast<CreateGroupResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateGroupCertificateAuthorityResponse * GreengrassClient::createGroupCertificateAuthority(const CreateGroupCertificateAuthorityRequest &request)
{
    return qobject_cast<CreateGroupCertificateAuthorityResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateGroupVersionResponse * GreengrassClient::createGroupVersion(const CreateGroupVersionRequest &request)
{
    return qobject_cast<CreateGroupVersionResponse *>(send(request));
}

/*!
 * Creates a logger definition. You may provide the initial version of the logger definition now or use
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateLoggerDefinitionResponse * GreengrassClient::createLoggerDefinition(const CreateLoggerDefinitionRequest &request)
{
    return qobject_cast<CreateLoggerDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateLoggerDefinitionVersionResponse * GreengrassClient::createLoggerDefinitionVersion(const CreateLoggerDefinitionVersionRequest &request)
{
    return qobject_cast<CreateLoggerDefinitionVersionResponse *>(send(request));
}

/*!
 * Creates a resource definition which contains a list of resources to be used in a group. You can create an initial
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateResourceDefinitionResponse * GreengrassClient::createResourceDefinition(const CreateResourceDefinitionRequest &request)
{
    return qobject_cast<CreateResourceDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateResourceDefinitionVersionResponse * GreengrassClient::createResourceDefinitionVersion(const CreateResourceDefinitionVersionRequest &request)
{
    return qobject_cast<CreateResourceDefinitionVersionResponse *>(send(request));
}

/*!
 * Creates a software update for a core or group of cores (specified as an IoT thing group.) Use this to update the OTA
 * Agent as well as the Greengrass core software. It makes use of the IoT Jobs feature which provides additional commands
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSoftwareUpdateJobResponse * GreengrassClient::createSoftwareUpdateJob(const CreateSoftwareUpdateJobRequest &request)
{
    return qobject_cast<CreateSoftwareUpdateJobResponse *>(send(request));
}

/*!
 * Creates a subscription definition. You may provide the initial version of the subscription definition now or use
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSubscriptionDefinitionResponse * GreengrassClient::createSubscriptionDefinition(const CreateSubscriptionDefinitionRequest &request)
{
    return qobject_cast<CreateSubscriptionDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSubscriptionDefinitionVersionResponse * GreengrassClient::createSubscriptionDefinitionVersion(const CreateSubscriptionDefinitionVersionRequest &request)
{
    return qobject_cast<CreateSubscriptionDefinitionVersionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCoreDefinitionResponse * GreengrassClient::deleteCoreDefinition(const DeleteCoreDefinitionRequest &request)
{
    return qobject_cast<DeleteCoreDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDeviceDefinitionResponse * GreengrassClient::deleteDeviceDefinition(const DeleteDeviceDefinitionRequest &request)
{
    return qobject_cast<DeleteDeviceDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteFunctionDefinitionResponse * GreengrassClient::deleteFunctionDefinition(const DeleteFunctionDefinitionRequest &request)
{
    return qobject_cast<DeleteFunctionDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteGroupResponse * GreengrassClient::deleteGroup(const DeleteGroupRequest &request)
{
    return qobject_cast<DeleteGroupResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteLoggerDefinitionResponse * GreengrassClient::deleteLoggerDefinition(const DeleteLoggerDefinitionRequest &request)
{
    return qobject_cast<DeleteLoggerDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteResourceDefinitionResponse * GreengrassClient::deleteResourceDefinition(const DeleteResourceDefinitionRequest &request)
{
    return qobject_cast<DeleteResourceDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSubscriptionDefinitionResponse * GreengrassClient::deleteSubscriptionDefinition(const DeleteSubscriptionDefinitionRequest &request)
{
    return qobject_cast<DeleteSubscriptionDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateRoleFromGroupResponse * GreengrassClient::disassociateRoleFromGroup(const DisassociateRoleFromGroupRequest &request)
{
    return qobject_cast<DisassociateRoleFromGroupResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateServiceRoleFromAccountResponse * GreengrassClient::disassociateServiceRoleFromAccount(const DisassociateServiceRoleFromAccountRequest &request)
{
    return qobject_cast<DisassociateServiceRoleFromAccountResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAssociatedRoleResponse * GreengrassClient::getAssociatedRole(const GetAssociatedRoleRequest &request)
{
    return qobject_cast<GetAssociatedRoleResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetConnectivityInfoResponse * GreengrassClient::getConnectivityInfo(const GetConnectivityInfoRequest &request)
{
    return qobject_cast<GetConnectivityInfoResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCoreDefinitionResponse * GreengrassClient::getCoreDefinition(const GetCoreDefinitionRequest &request)
{
    return qobject_cast<GetCoreDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCoreDefinitionVersionResponse * GreengrassClient::getCoreDefinitionVersion(const GetCoreDefinitionVersionRequest &request)
{
    return qobject_cast<GetCoreDefinitionVersionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDeploymentStatusResponse * GreengrassClient::getDeploymentStatus(const GetDeploymentStatusRequest &request)
{
    return qobject_cast<GetDeploymentStatusResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDeviceDefinitionResponse * GreengrassClient::getDeviceDefinition(const GetDeviceDefinitionRequest &request)
{
    return qobject_cast<GetDeviceDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDeviceDefinitionVersionResponse * GreengrassClient::getDeviceDefinitionVersion(const GetDeviceDefinitionVersionRequest &request)
{
    return qobject_cast<GetDeviceDefinitionVersionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFunctionDefinitionResponse * GreengrassClient::getFunctionDefinition(const GetFunctionDefinitionRequest &request)
{
    return qobject_cast<GetFunctionDefinitionResponse *>(send(request));
}

/*!
 * Retrieves information about a Lambda function definition version, including which Lambda functions are included in the
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFunctionDefinitionVersionResponse * GreengrassClient::getFunctionDefinitionVersion(const GetFunctionDefinitionVersionRequest &request)
{
    return qobject_cast<GetFunctionDefinitionVersionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGroupResponse * GreengrassClient::getGroup(const GetGroupRequest &request)
{
    return qobject_cast<GetGroupResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGroupCertificateAuthorityResponse * GreengrassClient::getGroupCertificateAuthority(const GetGroupCertificateAuthorityRequest &request)
{
    return qobject_cast<GetGroupCertificateAuthorityResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGroupCertificateConfigurationResponse * GreengrassClient::getGroupCertificateConfiguration(const GetGroupCertificateConfigurationRequest &request)
{
    return qobject_cast<GetGroupCertificateConfigurationResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGroupVersionResponse * GreengrassClient::getGroupVersion(const GetGroupVersionRequest &request)
{
    return qobject_cast<GetGroupVersionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetLoggerDefinitionResponse * GreengrassClient::getLoggerDefinition(const GetLoggerDefinitionRequest &request)
{
    return qobject_cast<GetLoggerDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetLoggerDefinitionVersionResponse * GreengrassClient::getLoggerDefinitionVersion(const GetLoggerDefinitionVersionRequest &request)
{
    return qobject_cast<GetLoggerDefinitionVersionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetResourceDefinitionResponse * GreengrassClient::getResourceDefinition(const GetResourceDefinitionRequest &request)
{
    return qobject_cast<GetResourceDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetResourceDefinitionVersionResponse * GreengrassClient::getResourceDefinitionVersion(const GetResourceDefinitionVersionRequest &request)
{
    return qobject_cast<GetResourceDefinitionVersionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetServiceRoleForAccountResponse * GreengrassClient::getServiceRoleForAccount(const GetServiceRoleForAccountRequest &request)
{
    return qobject_cast<GetServiceRoleForAccountResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSubscriptionDefinitionResponse * GreengrassClient::getSubscriptionDefinition(const GetSubscriptionDefinitionRequest &request)
{
    return qobject_cast<GetSubscriptionDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSubscriptionDefinitionVersionResponse * GreengrassClient::getSubscriptionDefinitionVersion(const GetSubscriptionDefinitionVersionRequest &request)
{
    return qobject_cast<GetSubscriptionDefinitionVersionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListCoreDefinitionVersionsResponse * GreengrassClient::listCoreDefinitionVersions(const ListCoreDefinitionVersionsRequest &request)
{
    return qobject_cast<ListCoreDefinitionVersionsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListCoreDefinitionsResponse * GreengrassClient::listCoreDefinitions(const ListCoreDefinitionsRequest &request)
{
    return qobject_cast<ListCoreDefinitionsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDeploymentsResponse * GreengrassClient::listDeployments(const ListDeploymentsRequest &request)
{
    return qobject_cast<ListDeploymentsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDeviceDefinitionVersionsResponse * GreengrassClient::listDeviceDefinitionVersions(const ListDeviceDefinitionVersionsRequest &request)
{
    return qobject_cast<ListDeviceDefinitionVersionsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDeviceDefinitionsResponse * GreengrassClient::listDeviceDefinitions(const ListDeviceDefinitionsRequest &request)
{
    return qobject_cast<ListDeviceDefinitionsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListFunctionDefinitionVersionsResponse * GreengrassClient::listFunctionDefinitionVersions(const ListFunctionDefinitionVersionsRequest &request)
{
    return qobject_cast<ListFunctionDefinitionVersionsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListFunctionDefinitionsResponse * GreengrassClient::listFunctionDefinitions(const ListFunctionDefinitionsRequest &request)
{
    return qobject_cast<ListFunctionDefinitionsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGroupCertificateAuthoritiesResponse * GreengrassClient::listGroupCertificateAuthorities(const ListGroupCertificateAuthoritiesRequest &request)
{
    return qobject_cast<ListGroupCertificateAuthoritiesResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGroupVersionsResponse * GreengrassClient::listGroupVersions(const ListGroupVersionsRequest &request)
{
    return qobject_cast<ListGroupVersionsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGroupsResponse * GreengrassClient::listGroups(const ListGroupsRequest &request)
{
    return qobject_cast<ListGroupsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListLoggerDefinitionVersionsResponse * GreengrassClient::listLoggerDefinitionVersions(const ListLoggerDefinitionVersionsRequest &request)
{
    return qobject_cast<ListLoggerDefinitionVersionsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListLoggerDefinitionsResponse * GreengrassClient::listLoggerDefinitions(const ListLoggerDefinitionsRequest &request)
{
    return qobject_cast<ListLoggerDefinitionsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListResourceDefinitionVersionsResponse * GreengrassClient::listResourceDefinitionVersions(const ListResourceDefinitionVersionsRequest &request)
{
    return qobject_cast<ListResourceDefinitionVersionsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListResourceDefinitionsResponse * GreengrassClient::listResourceDefinitions(const ListResourceDefinitionsRequest &request)
{
    return qobject_cast<ListResourceDefinitionsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSubscriptionDefinitionVersionsResponse * GreengrassClient::listSubscriptionDefinitionVersions(const ListSubscriptionDefinitionVersionsRequest &request)
{
    return qobject_cast<ListSubscriptionDefinitionVersionsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSubscriptionDefinitionsResponse * GreengrassClient::listSubscriptionDefinitions(const ListSubscriptionDefinitionsRequest &request)
{
    return qobject_cast<ListSubscriptionDefinitionsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResetDeploymentsResponse * GreengrassClient::resetDeployments(const ResetDeploymentsRequest &request)
{
    return qobject_cast<ResetDeploymentsResponse *>(send(request));
}

/*!
 * Updates the connectivity information for the core. Any devices that belong to the group which has this core will receive
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateConnectivityInfoResponse * GreengrassClient::updateConnectivityInfo(const UpdateConnectivityInfoRequest &request)
{
    return qobject_cast<UpdateConnectivityInfoResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateCoreDefinitionResponse * GreengrassClient::updateCoreDefinition(const UpdateCoreDefinitionRequest &request)
{
    return qobject_cast<UpdateCoreDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDeviceDefinitionResponse * GreengrassClient::updateDeviceDefinition(const UpdateDeviceDefinitionRequest &request)
{
    return qobject_cast<UpdateDeviceDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateFunctionDefinitionResponse * GreengrassClient::updateFunctionDefinition(const UpdateFunctionDefinitionRequest &request)
{
    return qobject_cast<UpdateFunctionDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateGroupResponse * GreengrassClient::updateGroup(const UpdateGroupRequest &request)
{
    return qobject_cast<UpdateGroupResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateGroupCertificateConfigurationResponse * GreengrassClient::updateGroupCertificateConfiguration(const UpdateGroupCertificateConfigurationRequest &request)
{
    return qobject_cast<UpdateGroupCertificateConfigurationResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateLoggerDefinitionResponse * GreengrassClient::updateLoggerDefinition(const UpdateLoggerDefinitionRequest &request)
{
    return qobject_cast<UpdateLoggerDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateResourceDefinitionResponse * GreengrassClient::updateResourceDefinition(const UpdateResourceDefinitionRequest &request)
{
    return qobject_cast<UpdateResourceDefinitionResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateSubscriptionDefinitionResponse * GreengrassClient::updateSubscriptionDefinition(const UpdateSubscriptionDefinitionRequest &request)
{
    return qobject_cast<UpdateSubscriptionDefinitionResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  GreengrassClientPrivate
 *
 * @brief  Private implementation for GreengrassClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GreengrassClientPrivate object.
 *
 * @param  q  Pointer to this object's public GreengrassClient instance.
 */
GreengrassClientPrivate::GreengrassClientPrivate(GreengrassClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Greengrass
} // namespace QtAws
