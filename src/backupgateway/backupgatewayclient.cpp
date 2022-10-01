// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "backupgatewayclient.h"
#include "backupgatewayclient_p.h"

#include "core/awssignaturev4.h"
#include "associategatewaytoserverrequest.h"
#include "associategatewaytoserverresponse.h"
#include "creategatewayrequest.h"
#include "creategatewayresponse.h"
#include "deletegatewayrequest.h"
#include "deletegatewayresponse.h"
#include "deletehypervisorrequest.h"
#include "deletehypervisorresponse.h"
#include "disassociategatewayfromserverrequest.h"
#include "disassociategatewayfromserverresponse.h"
#include "getgatewayrequest.h"
#include "getgatewayresponse.h"
#include "getvirtualmachinerequest.h"
#include "getvirtualmachineresponse.h"
#include "importhypervisorconfigurationrequest.h"
#include "importhypervisorconfigurationresponse.h"
#include "listgatewaysrequest.h"
#include "listgatewaysresponse.h"
#include "listhypervisorsrequest.h"
#include "listhypervisorsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listvirtualmachinesrequest.h"
#include "listvirtualmachinesresponse.h"
#include "putmaintenancestarttimerequest.h"
#include "putmaintenancestarttimeresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "testhypervisorconfigurationrequest.h"
#include "testhypervisorconfigurationresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updategatewayinformationrequest.h"
#include "updategatewayinformationresponse.h"
#include "updategatewaysoftwarenowrequest.h"
#include "updategatewaysoftwarenowresponse.h"
#include "updatehypervisorrequest.h"
#include "updatehypervisorresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::BackupGateway
 * \brief Contains classess for accessing AWS Backup Gateway.
 *
 * \inmodule QtAwsBackupGateway
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::BackupGatewayClient
 * \brief The BackupGatewayClient class provides access to the AWS Backup Gateway service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsBackupGateway
 *
 *  <fullname>Backup gateway</fullname>
 * 
 *  Backup gateway connects Backup to your hypervisor, so you can create, store, and restore backups of your virtual
 *  machines (VMs) anywhere, whether on-premises or in the VMware Cloud (VMC) on Amazon Web
 * 
 *  Services>
 * 
 *  Add on-premises resources by connecting to a hypervisor through a gateway. Backup will automatically discover the
 *  resources in your
 * 
 *  hypervisor>
 * 
 *  Use Backup to assign virtual or on-premises resources to a backup plan, or run on-demand backups. Once you have backed
 *  up your resources, you can view them and restore them like any resource supported by
 * 
 *  Backup>
 * 
 *  To download the Amazon Web Services software to get started, navigate to the Backup console, choose <b>Gateways</b>,
 *  then choose <b>Create
 */

/*!
 * \brief Constructs a BackupGatewayClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
BackupGatewayClient::BackupGatewayClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new BackupGatewayClientPrivate(this), parent)
{
    Q_D(BackupGatewayClient);
    d->apiVersion = QStringLiteral("2021-01-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("backup-gateway");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Backup Gateway");
    d->serviceName = QStringLiteral("backup-gateway");
}

/*!
 * \overload BackupGatewayClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
BackupGatewayClient::BackupGatewayClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new BackupGatewayClientPrivate(this), parent)
{
    Q_D(BackupGatewayClient);
    d->apiVersion = QStringLiteral("2021-01-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("backup-gateway");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Backup Gateway");
    d->serviceName = QStringLiteral("backup-gateway");
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * AssociateGatewayToServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a backup gateway with your server. After you complete the association process, you can back up and restore
 * your VMs through the
 */
AssociateGatewayToServerResponse * BackupGatewayClient::associateGatewayToServer(const AssociateGatewayToServerRequest &request)
{
    return qobject_cast<AssociateGatewayToServerResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * CreateGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a backup gateway. After you create a gateway, you can associate it with a server using the
 * <code>AssociateGatewayToServer</code>
 */
CreateGatewayResponse * BackupGatewayClient::createGateway(const CreateGatewayRequest &request)
{
    return qobject_cast<CreateGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * DeleteGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a backup
 */
DeleteGatewayResponse * BackupGatewayClient::deleteGateway(const DeleteGatewayRequest &request)
{
    return qobject_cast<DeleteGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * DeleteHypervisorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteHypervisorResponse * BackupGatewayClient::deleteHypervisor(const DeleteHypervisorRequest &request)
{
    return qobject_cast<DeleteHypervisorResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * DisassociateGatewayFromServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a backup gateway from the specified server. After the disassociation process finishes, the gateway can no
 * longer access the virtual machines on the
 */
DisassociateGatewayFromServerResponse * BackupGatewayClient::disassociateGatewayFromServer(const DisassociateGatewayFromServerRequest &request)
{
    return qobject_cast<DisassociateGatewayFromServerResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * GetGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * By providing the ARN (Amazon Resource Name), this API returns the
 */
GetGatewayResponse * BackupGatewayClient::getGateway(const GetGatewayRequest &request)
{
    return qobject_cast<GetGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * GetVirtualMachineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * By providing the ARN (Amazon Resource Name), this API returns the virtual
 */
GetVirtualMachineResponse * BackupGatewayClient::getVirtualMachine(const GetVirtualMachineRequest &request)
{
    return qobject_cast<GetVirtualMachineResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * ImportHypervisorConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Connect to a hypervisor by importing its
 */
ImportHypervisorConfigurationResponse * BackupGatewayClient::importHypervisorConfiguration(const ImportHypervisorConfigurationRequest &request)
{
    return qobject_cast<ImportHypervisorConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * ListGatewaysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists backup gateways owned by an Amazon Web Services account in an Amazon Web Services Region. The returned list is
 * ordered by gateway Amazon Resource Name
 */
ListGatewaysResponse * BackupGatewayClient::listGateways(const ListGatewaysRequest &request)
{
    return qobject_cast<ListGatewaysResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * ListHypervisorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your
 */
ListHypervisorsResponse * BackupGatewayClient::listHypervisors(const ListHypervisorsRequest &request)
{
    return qobject_cast<ListHypervisorsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags applied to the resource identified by its Amazon Resource Name
 */
ListTagsForResourceResponse * BackupGatewayClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * ListVirtualMachinesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your virtual
 */
ListVirtualMachinesResponse * BackupGatewayClient::listVirtualMachines(const ListVirtualMachinesRequest &request)
{
    return qobject_cast<ListVirtualMachinesResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * PutMaintenanceStartTimeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Set the maintenance start time for a
 */
PutMaintenanceStartTimeResponse * BackupGatewayClient::putMaintenanceStartTime(const PutMaintenanceStartTimeRequest &request)
{
    return qobject_cast<PutMaintenanceStartTimeResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tag the
 */
TagResourceResponse * BackupGatewayClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * TestHypervisorConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tests your hypervisor configuration to validate that backup gateway can connect with the hypervisor and its
 */
TestHypervisorConfigurationResponse * BackupGatewayClient::testHypervisorConfiguration(const TestHypervisorConfigurationRequest &request)
{
    return qobject_cast<TestHypervisorConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from the
 */
UntagResourceResponse * BackupGatewayClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * UpdateGatewayInformationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a gateway's name. Specify which gateway to update using the Amazon Resource Name (ARN) of the gateway in your
 */
UpdateGatewayInformationResponse * BackupGatewayClient::updateGatewayInformation(const UpdateGatewayInformationRequest &request)
{
    return qobject_cast<UpdateGatewayInformationResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * UpdateGatewaySoftwareNowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the gateway virtual machine (VM) software. The request immediately triggers the software
 *
 * update> <note>
 *
 * When you make this request, you get a <code>200 OK</code> success response immediately. However, it might take some time
 * for the update to
 */
UpdateGatewaySoftwareNowResponse * BackupGatewayClient::updateGatewaySoftwareNow(const UpdateGatewaySoftwareNowRequest &request)
{
    return qobject_cast<UpdateGatewaySoftwareNowResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupGatewayClient service, and returns a pointer to an
 * UpdateHypervisorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a hypervisor metadata, including its host, username, and password. Specify which hypervisor to update using the
 * Amazon Resource Name (ARN) of the hypervisor in your
 */
UpdateHypervisorResponse * BackupGatewayClient::updateHypervisor(const UpdateHypervisorRequest &request)
{
    return qobject_cast<UpdateHypervisorResponse *>(send(request));
}

/*!
 * \class QtAws::BackupGateway::BackupGatewayClientPrivate
 * \brief The BackupGatewayClientPrivate class provides private implementation for BackupGatewayClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a BackupGatewayClientPrivate object with public implementation \a q.
 */
BackupGatewayClientPrivate::BackupGatewayClientPrivate(BackupGatewayClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace BackupGateway
} // namespace QtAws
