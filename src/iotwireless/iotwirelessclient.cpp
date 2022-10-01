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

#include "iotwirelessclient.h"
#include "iotwirelessclient_p.h"

#include "core/awssignaturev4.h"
#include "associateawsaccountwithpartneraccountrequest.h"
#include "associateawsaccountwithpartneraccountresponse.h"
#include "associatemulticastgroupwithfuotataskrequest.h"
#include "associatemulticastgroupwithfuotataskresponse.h"
#include "associatewirelessdevicewithfuotataskrequest.h"
#include "associatewirelessdevicewithfuotataskresponse.h"
#include "associatewirelessdevicewithmulticastgrouprequest.h"
#include "associatewirelessdevicewithmulticastgroupresponse.h"
#include "associatewirelessdevicewiththingrequest.h"
#include "associatewirelessdevicewiththingresponse.h"
#include "associatewirelessgatewaywithcertificaterequest.h"
#include "associatewirelessgatewaywithcertificateresponse.h"
#include "associatewirelessgatewaywiththingrequest.h"
#include "associatewirelessgatewaywiththingresponse.h"
#include "cancelmulticastgroupsessionrequest.h"
#include "cancelmulticastgroupsessionresponse.h"
#include "createdestinationrequest.h"
#include "createdestinationresponse.h"
#include "createdeviceprofilerequest.h"
#include "createdeviceprofileresponse.h"
#include "createfuotataskrequest.h"
#include "createfuotataskresponse.h"
#include "createmulticastgrouprequest.h"
#include "createmulticastgroupresponse.h"
#include "createnetworkanalyzerconfigurationrequest.h"
#include "createnetworkanalyzerconfigurationresponse.h"
#include "createserviceprofilerequest.h"
#include "createserviceprofileresponse.h"
#include "createwirelessdevicerequest.h"
#include "createwirelessdeviceresponse.h"
#include "createwirelessgatewayrequest.h"
#include "createwirelessgatewayresponse.h"
#include "createwirelessgatewaytaskrequest.h"
#include "createwirelessgatewaytaskresponse.h"
#include "createwirelessgatewaytaskdefinitionrequest.h"
#include "createwirelessgatewaytaskdefinitionresponse.h"
#include "deletedestinationrequest.h"
#include "deletedestinationresponse.h"
#include "deletedeviceprofilerequest.h"
#include "deletedeviceprofileresponse.h"
#include "deletefuotataskrequest.h"
#include "deletefuotataskresponse.h"
#include "deletemulticastgrouprequest.h"
#include "deletemulticastgroupresponse.h"
#include "deletenetworkanalyzerconfigurationrequest.h"
#include "deletenetworkanalyzerconfigurationresponse.h"
#include "deletequeuedmessagesrequest.h"
#include "deletequeuedmessagesresponse.h"
#include "deleteserviceprofilerequest.h"
#include "deleteserviceprofileresponse.h"
#include "deletewirelessdevicerequest.h"
#include "deletewirelessdeviceresponse.h"
#include "deletewirelessgatewayrequest.h"
#include "deletewirelessgatewayresponse.h"
#include "deletewirelessgatewaytaskrequest.h"
#include "deletewirelessgatewaytaskresponse.h"
#include "deletewirelessgatewaytaskdefinitionrequest.h"
#include "deletewirelessgatewaytaskdefinitionresponse.h"
#include "disassociateawsaccountfrompartneraccountrequest.h"
#include "disassociateawsaccountfrompartneraccountresponse.h"
#include "disassociatemulticastgroupfromfuotataskrequest.h"
#include "disassociatemulticastgroupfromfuotataskresponse.h"
#include "disassociatewirelessdevicefromfuotataskrequest.h"
#include "disassociatewirelessdevicefromfuotataskresponse.h"
#include "disassociatewirelessdevicefrommulticastgrouprequest.h"
#include "disassociatewirelessdevicefrommulticastgroupresponse.h"
#include "disassociatewirelessdevicefromthingrequest.h"
#include "disassociatewirelessdevicefromthingresponse.h"
#include "disassociatewirelessgatewayfromcertificaterequest.h"
#include "disassociatewirelessgatewayfromcertificateresponse.h"
#include "disassociatewirelessgatewayfromthingrequest.h"
#include "disassociatewirelessgatewayfromthingresponse.h"
#include "getdestinationrequest.h"
#include "getdestinationresponse.h"
#include "getdeviceprofilerequest.h"
#include "getdeviceprofileresponse.h"
#include "geteventconfigurationbyresourcetypesrequest.h"
#include "geteventconfigurationbyresourcetypesresponse.h"
#include "getfuotataskrequest.h"
#include "getfuotataskresponse.h"
#include "getloglevelsbyresourcetypesrequest.h"
#include "getloglevelsbyresourcetypesresponse.h"
#include "getmulticastgrouprequest.h"
#include "getmulticastgroupresponse.h"
#include "getmulticastgroupsessionrequest.h"
#include "getmulticastgroupsessionresponse.h"
#include "getnetworkanalyzerconfigurationrequest.h"
#include "getnetworkanalyzerconfigurationresponse.h"
#include "getpartneraccountrequest.h"
#include "getpartneraccountresponse.h"
#include "getpositionrequest.h"
#include "getpositionresponse.h"
#include "getpositionconfigurationrequest.h"
#include "getpositionconfigurationresponse.h"
#include "getresourceeventconfigurationrequest.h"
#include "getresourceeventconfigurationresponse.h"
#include "getresourceloglevelrequest.h"
#include "getresourceloglevelresponse.h"
#include "getserviceendpointrequest.h"
#include "getserviceendpointresponse.h"
#include "getserviceprofilerequest.h"
#include "getserviceprofileresponse.h"
#include "getwirelessdevicerequest.h"
#include "getwirelessdeviceresponse.h"
#include "getwirelessdevicestatisticsrequest.h"
#include "getwirelessdevicestatisticsresponse.h"
#include "getwirelessgatewayrequest.h"
#include "getwirelessgatewayresponse.h"
#include "getwirelessgatewaycertificaterequest.h"
#include "getwirelessgatewaycertificateresponse.h"
#include "getwirelessgatewayfirmwareinformationrequest.h"
#include "getwirelessgatewayfirmwareinformationresponse.h"
#include "getwirelessgatewaystatisticsrequest.h"
#include "getwirelessgatewaystatisticsresponse.h"
#include "getwirelessgatewaytaskrequest.h"
#include "getwirelessgatewaytaskresponse.h"
#include "getwirelessgatewaytaskdefinitionrequest.h"
#include "getwirelessgatewaytaskdefinitionresponse.h"
#include "listdestinationsrequest.h"
#include "listdestinationsresponse.h"
#include "listdeviceprofilesrequest.h"
#include "listdeviceprofilesresponse.h"
#include "listeventconfigurationsrequest.h"
#include "listeventconfigurationsresponse.h"
#include "listfuotatasksrequest.h"
#include "listfuotatasksresponse.h"
#include "listmulticastgroupsrequest.h"
#include "listmulticastgroupsresponse.h"
#include "listmulticastgroupsbyfuotataskrequest.h"
#include "listmulticastgroupsbyfuotataskresponse.h"
#include "listnetworkanalyzerconfigurationsrequest.h"
#include "listnetworkanalyzerconfigurationsresponse.h"
#include "listpartneraccountsrequest.h"
#include "listpartneraccountsresponse.h"
#include "listpositionconfigurationsrequest.h"
#include "listpositionconfigurationsresponse.h"
#include "listqueuedmessagesrequest.h"
#include "listqueuedmessagesresponse.h"
#include "listserviceprofilesrequest.h"
#include "listserviceprofilesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listwirelessdevicesrequest.h"
#include "listwirelessdevicesresponse.h"
#include "listwirelessgatewaytaskdefinitionsrequest.h"
#include "listwirelessgatewaytaskdefinitionsresponse.h"
#include "listwirelessgatewaysrequest.h"
#include "listwirelessgatewaysresponse.h"
#include "putpositionconfigurationrequest.h"
#include "putpositionconfigurationresponse.h"
#include "putresourceloglevelrequest.h"
#include "putresourceloglevelresponse.h"
#include "resetallresourceloglevelsrequest.h"
#include "resetallresourceloglevelsresponse.h"
#include "resetresourceloglevelrequest.h"
#include "resetresourceloglevelresponse.h"
#include "senddatatomulticastgrouprequest.h"
#include "senddatatomulticastgroupresponse.h"
#include "senddatatowirelessdevicerequest.h"
#include "senddatatowirelessdeviceresponse.h"
#include "startbulkassociatewirelessdevicewithmulticastgrouprequest.h"
#include "startbulkassociatewirelessdevicewithmulticastgroupresponse.h"
#include "startbulkdisassociatewirelessdevicefrommulticastgrouprequest.h"
#include "startbulkdisassociatewirelessdevicefrommulticastgroupresponse.h"
#include "startfuotataskrequest.h"
#include "startfuotataskresponse.h"
#include "startmulticastgroupsessionrequest.h"
#include "startmulticastgroupsessionresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "testwirelessdevicerequest.h"
#include "testwirelessdeviceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedestinationrequest.h"
#include "updatedestinationresponse.h"
#include "updateeventconfigurationbyresourcetypesrequest.h"
#include "updateeventconfigurationbyresourcetypesresponse.h"
#include "updatefuotataskrequest.h"
#include "updatefuotataskresponse.h"
#include "updateloglevelsbyresourcetypesrequest.h"
#include "updateloglevelsbyresourcetypesresponse.h"
#include "updatemulticastgrouprequest.h"
#include "updatemulticastgroupresponse.h"
#include "updatenetworkanalyzerconfigurationrequest.h"
#include "updatenetworkanalyzerconfigurationresponse.h"
#include "updatepartneraccountrequest.h"
#include "updatepartneraccountresponse.h"
#include "updatepositionrequest.h"
#include "updatepositionresponse.h"
#include "updateresourceeventconfigurationrequest.h"
#include "updateresourceeventconfigurationresponse.h"
#include "updatewirelessdevicerequest.h"
#include "updatewirelessdeviceresponse.h"
#include "updatewirelessgatewayrequest.h"
#include "updatewirelessgatewayresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoTWireless
 * \brief Contains classess for accessing AWS IoT Wireless.
 *
 * \inmodule QtAwsIoTWireless
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::IoTWirelessClient
 * \brief The IoTWirelessClient class provides access to the AWS IoT Wireless service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless provides bi-directional communication between internet-connected wireless devices and the AWS Cloud. To
 *  onboard both LoRaWAN and Sidewalk devices to AWS IoT, use the IoT Wireless API. These wireless devices use the Low Power
 *  Wide Area Networking (LPWAN) communication protocol to communicate with AWS
 * 
 *  IoT>
 * 
 *  Using the API, you can perform create, read, update, and delete operations for your wireless devices, gateways,
 *  destinations, and profiles. After onboarding your devices, you can use the API operations to set log levels and monitor
 *  your devices with
 * 
 *  CloudWatch>
 * 
 *  You can also use the API operations to create multicast groups and schedule a multicast session for sending a downlink
 *  message to devices in the group. By using Firmware Updates Over-The-Air (FUOTA) API operations, you can create a FUOTA
 *  task and schedule a session to update the firmware of individual devices or an entire group of devices in a multicast
 */

/*!
 * \brief Constructs a IoTWirelessClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoTWirelessClient::IoTWirelessClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTWirelessClientPrivate(this), parent)
{
    Q_D(IoTWirelessClient);
    d->apiVersion = QStringLiteral("2020-11-22");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("api.iotwireless");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS IoT Wireless");
    d->serviceName = QStringLiteral("iotwireless");
}

/*!
 * \overload IoTWirelessClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoTWirelessClient::IoTWirelessClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTWirelessClientPrivate(this), parent)
{
    Q_D(IoTWirelessClient);
    d->apiVersion = QStringLiteral("2020-11-22");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("api.iotwireless");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS IoT Wireless");
    d->serviceName = QStringLiteral("iotwireless");
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * AssociateAwsAccountWithPartnerAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a partner account with your AWS
 */
AssociateAwsAccountWithPartnerAccountResponse * IoTWirelessClient::associateAwsAccountWithPartnerAccount(const AssociateAwsAccountWithPartnerAccountRequest &request)
{
    return qobject_cast<AssociateAwsAccountWithPartnerAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * AssociateMulticastGroupWithFuotaTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associate a multicast group with a FUOTA
 */
AssociateMulticastGroupWithFuotaTaskResponse * IoTWirelessClient::associateMulticastGroupWithFuotaTask(const AssociateMulticastGroupWithFuotaTaskRequest &request)
{
    return qobject_cast<AssociateMulticastGroupWithFuotaTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * AssociateWirelessDeviceWithFuotaTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associate a wireless device with a FUOTA
 */
AssociateWirelessDeviceWithFuotaTaskResponse * IoTWirelessClient::associateWirelessDeviceWithFuotaTask(const AssociateWirelessDeviceWithFuotaTaskRequest &request)
{
    return qobject_cast<AssociateWirelessDeviceWithFuotaTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * AssociateWirelessDeviceWithMulticastGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a wireless device with a multicast
 */
AssociateWirelessDeviceWithMulticastGroupResponse * IoTWirelessClient::associateWirelessDeviceWithMulticastGroup(const AssociateWirelessDeviceWithMulticastGroupRequest &request)
{
    return qobject_cast<AssociateWirelessDeviceWithMulticastGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * AssociateWirelessDeviceWithThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a wireless device with a
 */
AssociateWirelessDeviceWithThingResponse * IoTWirelessClient::associateWirelessDeviceWithThing(const AssociateWirelessDeviceWithThingRequest &request)
{
    return qobject_cast<AssociateWirelessDeviceWithThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * AssociateWirelessGatewayWithCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a wireless gateway with a
 */
AssociateWirelessGatewayWithCertificateResponse * IoTWirelessClient::associateWirelessGatewayWithCertificate(const AssociateWirelessGatewayWithCertificateRequest &request)
{
    return qobject_cast<AssociateWirelessGatewayWithCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * AssociateWirelessGatewayWithThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a wireless gateway with a
 */
AssociateWirelessGatewayWithThingResponse * IoTWirelessClient::associateWirelessGatewayWithThing(const AssociateWirelessGatewayWithThingRequest &request)
{
    return qobject_cast<AssociateWirelessGatewayWithThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * CancelMulticastGroupSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels an existing multicast group
 */
CancelMulticastGroupSessionResponse * IoTWirelessClient::cancelMulticastGroupSession(const CancelMulticastGroupSessionRequest &request)
{
    return qobject_cast<CancelMulticastGroupSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * CreateDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new destination that maps a device message to an AWS IoT
 */
CreateDestinationResponse * IoTWirelessClient::createDestination(const CreateDestinationRequest &request)
{
    return qobject_cast<CreateDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * CreateDeviceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new device
 */
CreateDeviceProfileResponse * IoTWirelessClient::createDeviceProfile(const CreateDeviceProfileRequest &request)
{
    return qobject_cast<CreateDeviceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * CreateFuotaTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a FUOTA
 */
CreateFuotaTaskResponse * IoTWirelessClient::createFuotaTask(const CreateFuotaTaskRequest &request)
{
    return qobject_cast<CreateFuotaTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * CreateMulticastGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a multicast
 */
CreateMulticastGroupResponse * IoTWirelessClient::createMulticastGroup(const CreateMulticastGroupRequest &request)
{
    return qobject_cast<CreateMulticastGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * CreateNetworkAnalyzerConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new network analyzer
 */
CreateNetworkAnalyzerConfigurationResponse * IoTWirelessClient::createNetworkAnalyzerConfiguration(const CreateNetworkAnalyzerConfigurationRequest &request)
{
    return qobject_cast<CreateNetworkAnalyzerConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * CreateServiceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new service
 */
CreateServiceProfileResponse * IoTWirelessClient::createServiceProfile(const CreateServiceProfileRequest &request)
{
    return qobject_cast<CreateServiceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * CreateWirelessDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provisions a wireless
 */
CreateWirelessDeviceResponse * IoTWirelessClient::createWirelessDevice(const CreateWirelessDeviceRequest &request)
{
    return qobject_cast<CreateWirelessDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * CreateWirelessGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provisions a wireless
 */
CreateWirelessGatewayResponse * IoTWirelessClient::createWirelessGateway(const CreateWirelessGatewayRequest &request)
{
    return qobject_cast<CreateWirelessGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * CreateWirelessGatewayTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a task for a wireless
 */
CreateWirelessGatewayTaskResponse * IoTWirelessClient::createWirelessGatewayTask(const CreateWirelessGatewayTaskRequest &request)
{
    return qobject_cast<CreateWirelessGatewayTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * CreateWirelessGatewayTaskDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a gateway task
 */
CreateWirelessGatewayTaskDefinitionResponse * IoTWirelessClient::createWirelessGatewayTaskDefinition(const CreateWirelessGatewayTaskDefinitionRequest &request)
{
    return qobject_cast<CreateWirelessGatewayTaskDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DeleteDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteDestinationResponse * IoTWirelessClient::deleteDestination(const DeleteDestinationRequest &request)
{
    return qobject_cast<DeleteDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DeleteDeviceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a device
 */
DeleteDeviceProfileResponse * IoTWirelessClient::deleteDeviceProfile(const DeleteDeviceProfileRequest &request)
{
    return qobject_cast<DeleteDeviceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DeleteFuotaTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a FUOTA
 */
DeleteFuotaTaskResponse * IoTWirelessClient::deleteFuotaTask(const DeleteFuotaTaskRequest &request)
{
    return qobject_cast<DeleteFuotaTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DeleteMulticastGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a multicast group if it is not in use by a fuota
 */
DeleteMulticastGroupResponse * IoTWirelessClient::deleteMulticastGroup(const DeleteMulticastGroupRequest &request)
{
    return qobject_cast<DeleteMulticastGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DeleteNetworkAnalyzerConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a network analyzer
 */
DeleteNetworkAnalyzerConfigurationResponse * IoTWirelessClient::deleteNetworkAnalyzerConfiguration(const DeleteNetworkAnalyzerConfigurationRequest &request)
{
    return qobject_cast<DeleteNetworkAnalyzerConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DeleteQueuedMessagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove queued messages from the downlink
 */
DeleteQueuedMessagesResponse * IoTWirelessClient::deleteQueuedMessages(const DeleteQueuedMessagesRequest &request)
{
    return qobject_cast<DeleteQueuedMessagesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DeleteServiceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a service
 */
DeleteServiceProfileResponse * IoTWirelessClient::deleteServiceProfile(const DeleteServiceProfileRequest &request)
{
    return qobject_cast<DeleteServiceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DeleteWirelessDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a wireless
 */
DeleteWirelessDeviceResponse * IoTWirelessClient::deleteWirelessDevice(const DeleteWirelessDeviceRequest &request)
{
    return qobject_cast<DeleteWirelessDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DeleteWirelessGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a wireless
 */
DeleteWirelessGatewayResponse * IoTWirelessClient::deleteWirelessGateway(const DeleteWirelessGatewayRequest &request)
{
    return qobject_cast<DeleteWirelessGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DeleteWirelessGatewayTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a wireless gateway
 */
DeleteWirelessGatewayTaskResponse * IoTWirelessClient::deleteWirelessGatewayTask(const DeleteWirelessGatewayTaskRequest &request)
{
    return qobject_cast<DeleteWirelessGatewayTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DeleteWirelessGatewayTaskDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a wireless gateway task definition. Deleting this task definition does not affect tasks that are currently in
 */
DeleteWirelessGatewayTaskDefinitionResponse * IoTWirelessClient::deleteWirelessGatewayTaskDefinition(const DeleteWirelessGatewayTaskDefinitionRequest &request)
{
    return qobject_cast<DeleteWirelessGatewayTaskDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DisassociateAwsAccountFromPartnerAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates your AWS account from a partner account. If <code>PartnerAccountId</code> and <code>PartnerType</code> are
 * <code>null</code>, disassociates your AWS account from all partner
 */
DisassociateAwsAccountFromPartnerAccountResponse * IoTWirelessClient::disassociateAwsAccountFromPartnerAccount(const DisassociateAwsAccountFromPartnerAccountRequest &request)
{
    return qobject_cast<DisassociateAwsAccountFromPartnerAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DisassociateMulticastGroupFromFuotaTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a multicast group from a fuota
 */
DisassociateMulticastGroupFromFuotaTaskResponse * IoTWirelessClient::disassociateMulticastGroupFromFuotaTask(const DisassociateMulticastGroupFromFuotaTaskRequest &request)
{
    return qobject_cast<DisassociateMulticastGroupFromFuotaTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DisassociateWirelessDeviceFromFuotaTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a wireless device from a FUOTA
 */
DisassociateWirelessDeviceFromFuotaTaskResponse * IoTWirelessClient::disassociateWirelessDeviceFromFuotaTask(const DisassociateWirelessDeviceFromFuotaTaskRequest &request)
{
    return qobject_cast<DisassociateWirelessDeviceFromFuotaTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DisassociateWirelessDeviceFromMulticastGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a wireless device from a multicast
 */
DisassociateWirelessDeviceFromMulticastGroupResponse * IoTWirelessClient::disassociateWirelessDeviceFromMulticastGroup(const DisassociateWirelessDeviceFromMulticastGroupRequest &request)
{
    return qobject_cast<DisassociateWirelessDeviceFromMulticastGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DisassociateWirelessDeviceFromThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a wireless device from its currently associated
 */
DisassociateWirelessDeviceFromThingResponse * IoTWirelessClient::disassociateWirelessDeviceFromThing(const DisassociateWirelessDeviceFromThingRequest &request)
{
    return qobject_cast<DisassociateWirelessDeviceFromThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DisassociateWirelessGatewayFromCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a wireless gateway from its currently associated
 */
DisassociateWirelessGatewayFromCertificateResponse * IoTWirelessClient::disassociateWirelessGatewayFromCertificate(const DisassociateWirelessGatewayFromCertificateRequest &request)
{
    return qobject_cast<DisassociateWirelessGatewayFromCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * DisassociateWirelessGatewayFromThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a wireless gateway from its currently associated
 */
DisassociateWirelessGatewayFromThingResponse * IoTWirelessClient::disassociateWirelessGatewayFromThing(const DisassociateWirelessGatewayFromThingRequest &request)
{
    return qobject_cast<DisassociateWirelessGatewayFromThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a
 */
GetDestinationResponse * IoTWirelessClient::getDestination(const GetDestinationRequest &request)
{
    return qobject_cast<GetDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetDeviceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a device
 */
GetDeviceProfileResponse * IoTWirelessClient::getDeviceProfile(const GetDeviceProfileRequest &request)
{
    return qobject_cast<GetDeviceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetEventConfigurationByResourceTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the event configuration based on resource
 */
GetEventConfigurationByResourceTypesResponse * IoTWirelessClient::getEventConfigurationByResourceTypes(const GetEventConfigurationByResourceTypesRequest &request)
{
    return qobject_cast<GetEventConfigurationByResourceTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetFuotaTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a FUOTA
 */
GetFuotaTaskResponse * IoTWirelessClient::getFuotaTask(const GetFuotaTaskRequest &request)
{
    return qobject_cast<GetFuotaTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetLogLevelsByResourceTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns current default log levels or log levels by resource types. Based on resource types, log levels can be for
 * wireless device log options or wireless gateway log
 */
GetLogLevelsByResourceTypesResponse * IoTWirelessClient::getLogLevelsByResourceTypes(const GetLogLevelsByResourceTypesRequest &request)
{
    return qobject_cast<GetLogLevelsByResourceTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetMulticastGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a multicast
 */
GetMulticastGroupResponse * IoTWirelessClient::getMulticastGroup(const GetMulticastGroupRequest &request)
{
    return qobject_cast<GetMulticastGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetMulticastGroupSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a multicast group
 */
GetMulticastGroupSessionResponse * IoTWirelessClient::getMulticastGroupSession(const GetMulticastGroupSessionRequest &request)
{
    return qobject_cast<GetMulticastGroupSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetNetworkAnalyzerConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get network analyzer
 */
GetNetworkAnalyzerConfigurationResponse * IoTWirelessClient::getNetworkAnalyzerConfiguration(const GetNetworkAnalyzerConfigurationRequest &request)
{
    return qobject_cast<GetNetworkAnalyzerConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetPartnerAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a partner account. If <code>PartnerAccountId</code> and <code>PartnerType</code> are
 * <code>null</code>, returns all partner
 */
GetPartnerAccountResponse * IoTWirelessClient::getPartnerAccount(const GetPartnerAccountRequest &request)
{
    return qobject_cast<GetPartnerAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetPositionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the position information for a given
 */
GetPositionResponse * IoTWirelessClient::getPosition(const GetPositionRequest &request)
{
    return qobject_cast<GetPositionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetPositionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get position configuration for a given
 */
GetPositionConfigurationResponse * IoTWirelessClient::getPositionConfiguration(const GetPositionConfigurationRequest &request)
{
    return qobject_cast<GetPositionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetResourceEventConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the event configuration for a particular resource
 */
GetResourceEventConfigurationResponse * IoTWirelessClient::getResourceEventConfiguration(const GetResourceEventConfigurationRequest &request)
{
    return qobject_cast<GetResourceEventConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetResourceLogLevelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Fetches the log-level override, if any, for a given resource-ID and resource-type. It can be used for a wireless device
 * or a wireless
 */
GetResourceLogLevelResponse * IoTWirelessClient::getResourceLogLevel(const GetResourceLogLevelRequest &request)
{
    return qobject_cast<GetResourceLogLevelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetServiceEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the account-specific endpoint for Configuration and Update Server (CUPS) protocol or LoRaWAN Network Server (LNS)
 */
GetServiceEndpointResponse * IoTWirelessClient::getServiceEndpoint(const GetServiceEndpointRequest &request)
{
    return qobject_cast<GetServiceEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetServiceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a service
 */
GetServiceProfileResponse * IoTWirelessClient::getServiceProfile(const GetServiceProfileRequest &request)
{
    return qobject_cast<GetServiceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetWirelessDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a wireless
 */
GetWirelessDeviceResponse * IoTWirelessClient::getWirelessDevice(const GetWirelessDeviceRequest &request)
{
    return qobject_cast<GetWirelessDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetWirelessDeviceStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets operating information about a wireless
 */
GetWirelessDeviceStatisticsResponse * IoTWirelessClient::getWirelessDeviceStatistics(const GetWirelessDeviceStatisticsRequest &request)
{
    return qobject_cast<GetWirelessDeviceStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetWirelessGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a wireless
 */
GetWirelessGatewayResponse * IoTWirelessClient::getWirelessGateway(const GetWirelessGatewayRequest &request)
{
    return qobject_cast<GetWirelessGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetWirelessGatewayCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the ID of the certificate that is currently associated with a wireless
 */
GetWirelessGatewayCertificateResponse * IoTWirelessClient::getWirelessGatewayCertificate(const GetWirelessGatewayCertificateRequest &request)
{
    return qobject_cast<GetWirelessGatewayCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetWirelessGatewayFirmwareInformationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the firmware version and other information about a wireless
 */
GetWirelessGatewayFirmwareInformationResponse * IoTWirelessClient::getWirelessGatewayFirmwareInformation(const GetWirelessGatewayFirmwareInformationRequest &request)
{
    return qobject_cast<GetWirelessGatewayFirmwareInformationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetWirelessGatewayStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets operating information about a wireless
 */
GetWirelessGatewayStatisticsResponse * IoTWirelessClient::getWirelessGatewayStatistics(const GetWirelessGatewayStatisticsRequest &request)
{
    return qobject_cast<GetWirelessGatewayStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetWirelessGatewayTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a wireless gateway
 */
GetWirelessGatewayTaskResponse * IoTWirelessClient::getWirelessGatewayTask(const GetWirelessGatewayTaskRequest &request)
{
    return qobject_cast<GetWirelessGatewayTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * GetWirelessGatewayTaskDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a wireless gateway task
 */
GetWirelessGatewayTaskDefinitionResponse * IoTWirelessClient::getWirelessGatewayTaskDefinition(const GetWirelessGatewayTaskDefinitionRequest &request)
{
    return qobject_cast<GetWirelessGatewayTaskDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ListDestinationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the destinations registered to your AWS
 */
ListDestinationsResponse * IoTWirelessClient::listDestinations(const ListDestinationsRequest &request)
{
    return qobject_cast<ListDestinationsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ListDeviceProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the device profiles registered to your AWS
 */
ListDeviceProfilesResponse * IoTWirelessClient::listDeviceProfiles(const ListDeviceProfilesRequest &request)
{
    return qobject_cast<ListDeviceProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ListEventConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List event configurations where at least one event topic has been
 */
ListEventConfigurationsResponse * IoTWirelessClient::listEventConfigurations(const ListEventConfigurationsRequest &request)
{
    return qobject_cast<ListEventConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ListFuotaTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the FUOTA tasks registered to your AWS
 */
ListFuotaTasksResponse * IoTWirelessClient::listFuotaTasks(const ListFuotaTasksRequest &request)
{
    return qobject_cast<ListFuotaTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ListMulticastGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the multicast groups registered to your AWS
 */
ListMulticastGroupsResponse * IoTWirelessClient::listMulticastGroups(const ListMulticastGroupsRequest &request)
{
    return qobject_cast<ListMulticastGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ListMulticastGroupsByFuotaTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all multicast groups associated with a fuota
 */
ListMulticastGroupsByFuotaTaskResponse * IoTWirelessClient::listMulticastGroupsByFuotaTask(const ListMulticastGroupsByFuotaTaskRequest &request)
{
    return qobject_cast<ListMulticastGroupsByFuotaTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ListNetworkAnalyzerConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the network analyzer
 */
ListNetworkAnalyzerConfigurationsResponse * IoTWirelessClient::listNetworkAnalyzerConfigurations(const ListNetworkAnalyzerConfigurationsRequest &request)
{
    return qobject_cast<ListNetworkAnalyzerConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ListPartnerAccountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the partner accounts associated with your AWS
 */
ListPartnerAccountsResponse * IoTWirelessClient::listPartnerAccounts(const ListPartnerAccountsRequest &request)
{
    return qobject_cast<ListPartnerAccountsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ListPositionConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List position configurations for a given resource, such as positioning
 */
ListPositionConfigurationsResponse * IoTWirelessClient::listPositionConfigurations(const ListPositionConfigurationsRequest &request)
{
    return qobject_cast<ListPositionConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ListQueuedMessagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List queued messages in the downlink
 */
ListQueuedMessagesResponse * IoTWirelessClient::listQueuedMessages(const ListQueuedMessagesRequest &request)
{
    return qobject_cast<ListQueuedMessagesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ListServiceProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the service profiles registered to your AWS
 */
ListServiceProfilesResponse * IoTWirelessClient::listServiceProfiles(const ListServiceProfilesRequest &request)
{
    return qobject_cast<ListServiceProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags (metadata) you have assigned to the
 */
ListTagsForResourceResponse * IoTWirelessClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ListWirelessDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the wireless devices registered to your AWS
 */
ListWirelessDevicesResponse * IoTWirelessClient::listWirelessDevices(const ListWirelessDevicesRequest &request)
{
    return qobject_cast<ListWirelessDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ListWirelessGatewayTaskDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the wireless gateway tasks definitions registered to your AWS
 */
ListWirelessGatewayTaskDefinitionsResponse * IoTWirelessClient::listWirelessGatewayTaskDefinitions(const ListWirelessGatewayTaskDefinitionsRequest &request)
{
    return qobject_cast<ListWirelessGatewayTaskDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ListWirelessGatewaysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the wireless gateways registered to your AWS
 */
ListWirelessGatewaysResponse * IoTWirelessClient::listWirelessGateways(const ListWirelessGatewaysRequest &request)
{
    return qobject_cast<ListWirelessGatewaysResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * PutPositionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Put position configuration for a given
 */
PutPositionConfigurationResponse * IoTWirelessClient::putPositionConfiguration(const PutPositionConfigurationRequest &request)
{
    return qobject_cast<PutPositionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * PutResourceLogLevelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the log-level override for a resource-ID and resource-type. This option can be specified for a wireless gateway or
 * a wireless device. A limit of 200 log level override can be set per
 */
PutResourceLogLevelResponse * IoTWirelessClient::putResourceLogLevel(const PutResourceLogLevelRequest &request)
{
    return qobject_cast<PutResourceLogLevelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ResetAllResourceLogLevelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the log-level overrides for all resources; both wireless devices and wireless
 */
ResetAllResourceLogLevelsResponse * IoTWirelessClient::resetAllResourceLogLevels(const ResetAllResourceLogLevelsRequest &request)
{
    return qobject_cast<ResetAllResourceLogLevelsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * ResetResourceLogLevelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the log-level override, if any, for a specific resource-ID and resource-type. It can be used for a wireless
 * device or a wireless
 */
ResetResourceLogLevelResponse * IoTWirelessClient::resetResourceLogLevel(const ResetResourceLogLevelRequest &request)
{
    return qobject_cast<ResetResourceLogLevelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * SendDataToMulticastGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends the specified data to a multicast
 */
SendDataToMulticastGroupResponse * IoTWirelessClient::sendDataToMulticastGroup(const SendDataToMulticastGroupRequest &request)
{
    return qobject_cast<SendDataToMulticastGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * SendDataToWirelessDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a decrypted application data frame to a
 */
SendDataToWirelessDeviceResponse * IoTWirelessClient::sendDataToWirelessDevice(const SendDataToWirelessDeviceRequest &request)
{
    return qobject_cast<SendDataToWirelessDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * StartBulkAssociateWirelessDeviceWithMulticastGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a bulk association of all qualifying wireless devices with a multicast
 */
StartBulkAssociateWirelessDeviceWithMulticastGroupResponse * IoTWirelessClient::startBulkAssociateWirelessDeviceWithMulticastGroup(const StartBulkAssociateWirelessDeviceWithMulticastGroupRequest &request)
{
    return qobject_cast<StartBulkAssociateWirelessDeviceWithMulticastGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a bulk disassociatin of all qualifying wireless devices from a multicast
 */
StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse * IoTWirelessClient::startBulkDisassociateWirelessDeviceFromMulticastGroup(const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest &request)
{
    return qobject_cast<StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * StartFuotaTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a FUOTA
 */
StartFuotaTaskResponse * IoTWirelessClient::startFuotaTask(const StartFuotaTaskRequest &request)
{
    return qobject_cast<StartFuotaTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * StartMulticastGroupSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a multicast group
 */
StartMulticastGroupSessionResponse * IoTWirelessClient::startMulticastGroupSession(const StartMulticastGroupSessionRequest &request)
{
    return qobject_cast<StartMulticastGroupSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a tag to a
 */
TagResourceResponse * IoTWirelessClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * TestWirelessDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Simulates a provisioned device by sending an uplink data payload of
 */
TestWirelessDeviceResponse * IoTWirelessClient::testWirelessDevice(const TestWirelessDeviceRequest &request)
{
    return qobject_cast<TestWirelessDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from a
 */
UntagResourceResponse * IoTWirelessClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * UpdateDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates properties of a
 */
UpdateDestinationResponse * IoTWirelessClient::updateDestination(const UpdateDestinationRequest &request)
{
    return qobject_cast<UpdateDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * UpdateEventConfigurationByResourceTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update the event configuration based on resource
 */
UpdateEventConfigurationByResourceTypesResponse * IoTWirelessClient::updateEventConfigurationByResourceTypes(const UpdateEventConfigurationByResourceTypesRequest &request)
{
    return qobject_cast<UpdateEventConfigurationByResourceTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * UpdateFuotaTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates properties of a FUOTA
 */
UpdateFuotaTaskResponse * IoTWirelessClient::updateFuotaTask(const UpdateFuotaTaskRequest &request)
{
    return qobject_cast<UpdateFuotaTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * UpdateLogLevelsByResourceTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Set default log level, or log levels by resource types. This can be for wireless device log options or wireless gateways
 * log options and is used to control the log messages that'll be displayed in
 */
UpdateLogLevelsByResourceTypesResponse * IoTWirelessClient::updateLogLevelsByResourceTypes(const UpdateLogLevelsByResourceTypesRequest &request)
{
    return qobject_cast<UpdateLogLevelsByResourceTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * UpdateMulticastGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates properties of a multicast group
 */
UpdateMulticastGroupResponse * IoTWirelessClient::updateMulticastGroup(const UpdateMulticastGroupRequest &request)
{
    return qobject_cast<UpdateMulticastGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * UpdateNetworkAnalyzerConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update network analyzer
 */
UpdateNetworkAnalyzerConfigurationResponse * IoTWirelessClient::updateNetworkAnalyzerConfiguration(const UpdateNetworkAnalyzerConfigurationRequest &request)
{
    return qobject_cast<UpdateNetworkAnalyzerConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * UpdatePartnerAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates properties of a partner
 */
UpdatePartnerAccountResponse * IoTWirelessClient::updatePartnerAccount(const UpdatePartnerAccountRequest &request)
{
    return qobject_cast<UpdatePartnerAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * UpdatePositionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update the position information of a
 */
UpdatePositionResponse * IoTWirelessClient::updatePosition(const UpdatePositionRequest &request)
{
    return qobject_cast<UpdatePositionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * UpdateResourceEventConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update the event configuration for a particular resource
 */
UpdateResourceEventConfigurationResponse * IoTWirelessClient::updateResourceEventConfiguration(const UpdateResourceEventConfigurationRequest &request)
{
    return qobject_cast<UpdateResourceEventConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * UpdateWirelessDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates properties of a wireless
 */
UpdateWirelessDeviceResponse * IoTWirelessClient::updateWirelessDevice(const UpdateWirelessDeviceRequest &request)
{
    return qobject_cast<UpdateWirelessDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTWirelessClient service, and returns a pointer to an
 * UpdateWirelessGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates properties of a wireless
 */
UpdateWirelessGatewayResponse * IoTWirelessClient::updateWirelessGateway(const UpdateWirelessGatewayRequest &request)
{
    return qobject_cast<UpdateWirelessGatewayResponse *>(send(request));
}

/*!
 * \class QtAws::IoTWireless::IoTWirelessClientPrivate
 * \brief The IoTWirelessClientPrivate class provides private implementation for IoTWirelessClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a IoTWirelessClientPrivate object with public implementation \a q.
 */
IoTWirelessClientPrivate::IoTWirelessClientPrivate(IoTWirelessClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IoTWireless
} // namespace QtAws
