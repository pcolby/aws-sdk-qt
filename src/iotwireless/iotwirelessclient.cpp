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
#include "associatewirelessdevicewiththingrequest.h"
#include "associatewirelessdevicewiththingresponse.h"
#include "associatewirelessgatewaywithcertificaterequest.h"
#include "associatewirelessgatewaywithcertificateresponse.h"
#include "associatewirelessgatewaywiththingrequest.h"
#include "associatewirelessgatewaywiththingresponse.h"
#include "createdestinationrequest.h"
#include "createdestinationresponse.h"
#include "createdeviceprofilerequest.h"
#include "createdeviceprofileresponse.h"
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
#include "getloglevelsbyresourcetypesrequest.h"
#include "getloglevelsbyresourcetypesresponse.h"
#include "getpartneraccountrequest.h"
#include "getpartneraccountresponse.h"
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
#include "listpartneraccountsrequest.h"
#include "listpartneraccountsresponse.h"
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
#include "putresourceloglevelrequest.h"
#include "putresourceloglevelresponse.h"
#include "resetallresourceloglevelsrequest.h"
#include "resetallresourceloglevelsresponse.h"
#include "resetresourceloglevelrequest.h"
#include "resetresourceloglevelresponse.h"
#include "senddatatowirelessdevicerequest.h"
#include "senddatatowirelessdeviceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "testwirelessdevicerequest.h"
#include "testwirelessdeviceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedestinationrequest.h"
#include "updatedestinationresponse.h"
#include "updateloglevelsbyresourcetypesrequest.h"
#include "updateloglevelsbyresourcetypesresponse.h"
#include "updatepartneraccountrequest.h"
#include "updatepartneraccountresponse.h"
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
 *  AWS IoT Wireless API
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
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-11-22"),
    QStringLiteral("api.iotwireless"),
    QStringLiteral("AWS IoT Wireless"),
    QStringLiteral("iotwireless"),
    parent), d_ptr(new IoTWirelessClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-11-22"),
    QStringLiteral("api.iotwireless"),
    QStringLiteral("AWS IoT Wireless"),
    QStringLiteral("iotwireless"),
    parent), d_ptr(new IoTWirelessClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
 * GetLogLevelsByResourceTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns current default log-levels, or log levels by resource types, could be for wireless device log options or
 * wireless gateway log
 */
GetLogLevelsByResourceTypesResponse * IoTWirelessClient::getLogLevelsByResourceTypes(const GetLogLevelsByResourceTypesRequest &request)
{
    return qobject_cast<GetLogLevelsByResourceTypesResponse *>(send(request));
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
 * GetResourceLogLevelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Fetches the log-level override if any for a given resource-ID and resource-type, coulde be a wireless device or a
 * wireless
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
 * PutResourceLogLevelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the log-level override for a resource-ID and resource-type, could be a wireless gateway or a wireless
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
 * Remove log-level overrides if any for all resources (both wireless devices and wireless
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
 * Remove log-level override if any for a specific resource-ID and resource-type, could be a wireless device or a wireless
 */
ResetResourceLogLevelResponse * IoTWirelessClient::resetResourceLogLevel(const ResetResourceLogLevelRequest &request)
{
    return qobject_cast<ResetResourceLogLevelResponse *>(send(request));
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
 * UpdateLogLevelsByResourceTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Set default log level, or log levels by resource types, could be for wireless device log options or wireless gateways
 * log options. This is to control the log messages that will be displayed in
 */
UpdateLogLevelsByResourceTypesResponse * IoTWirelessClient::updateLogLevelsByResourceTypes(const UpdateLogLevelsByResourceTypesRequest &request)
{
    return qobject_cast<UpdateLogLevelsByResourceTypesResponse *>(send(request));
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
IoTWirelessClientPrivate::IoTWirelessClientPrivate(IoTWirelessClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace IoTWireless
} // namespace QtAws
