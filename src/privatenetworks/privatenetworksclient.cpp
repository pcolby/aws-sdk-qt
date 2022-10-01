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

#include "privatenetworksclient.h"
#include "privatenetworksclient_p.h"

#include "core/awssignaturev4.h"
#include "acknowledgeorderreceiptrequest.h"
#include "acknowledgeorderreceiptresponse.h"
#include "activatedeviceidentifierrequest.h"
#include "activatedeviceidentifierresponse.h"
#include "activatenetworksiterequest.h"
#include "activatenetworksiteresponse.h"
#include "configureaccesspointrequest.h"
#include "configureaccesspointresponse.h"
#include "createnetworkrequest.h"
#include "createnetworkresponse.h"
#include "createnetworksiterequest.h"
#include "createnetworksiteresponse.h"
#include "deactivatedeviceidentifierrequest.h"
#include "deactivatedeviceidentifierresponse.h"
#include "deletenetworkrequest.h"
#include "deletenetworkresponse.h"
#include "deletenetworksiterequest.h"
#include "deletenetworksiteresponse.h"
#include "getdeviceidentifierrequest.h"
#include "getdeviceidentifierresponse.h"
#include "getnetworkrequest.h"
#include "getnetworkresponse.h"
#include "getnetworkresourcerequest.h"
#include "getnetworkresourceresponse.h"
#include "getnetworksiterequest.h"
#include "getnetworksiteresponse.h"
#include "getorderrequest.h"
#include "getorderresponse.h"
#include "listdeviceidentifiersrequest.h"
#include "listdeviceidentifiersresponse.h"
#include "listnetworkresourcesrequest.h"
#include "listnetworkresourcesresponse.h"
#include "listnetworksitesrequest.h"
#include "listnetworksitesresponse.h"
#include "listnetworksrequest.h"
#include "listnetworksresponse.h"
#include "listordersrequest.h"
#include "listordersresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "pingrequest.h"
#include "pingresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatenetworksiterequest.h"
#include "updatenetworksiteresponse.h"
#include "updatenetworksiteplanrequest.h"
#include "updatenetworksiteplanresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::PrivateNetworks
 * \brief Contains classess for accessing AWS Private 5G.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::PrivateNetworksClient
 * \brief The PrivateNetworksClient class provides access to the AWS Private 5G service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 */

/*!
 * \brief Constructs a PrivateNetworksClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
PrivateNetworksClient::PrivateNetworksClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PrivateNetworksClientPrivate(this), parent)
{
    Q_D(PrivateNetworksClient);
    d->apiVersion = QStringLiteral("2021-12-03");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Private 5G");
    d->serviceName = QStringLiteral("private-networks");
}

/*!
 * \overload PrivateNetworksClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
PrivateNetworksClient::PrivateNetworksClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PrivateNetworksClientPrivate(this), parent)
{
    Q_D(PrivateNetworksClient);
    d->apiVersion = QStringLiteral("2021-12-03");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Private 5G");
    d->serviceName = QStringLiteral("private-networks");
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * AcknowledgeOrderReceiptResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Acknowledges that the specified network order was
 */
AcknowledgeOrderReceiptResponse * PrivateNetworksClient::acknowledgeOrderReceipt(const AcknowledgeOrderReceiptRequest &request)
{
    return qobject_cast<AcknowledgeOrderReceiptResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * ActivateDeviceIdentifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Activates the specified device
 */
ActivateDeviceIdentifierResponse * PrivateNetworksClient::activateDeviceIdentifier(const ActivateDeviceIdentifierRequest &request)
{
    return qobject_cast<ActivateDeviceIdentifierResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * ActivateNetworkSiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Activates the specified network
 */
ActivateNetworkSiteResponse * PrivateNetworksClient::activateNetworkSite(const ActivateNetworkSiteRequest &request)
{
    return qobject_cast<ActivateNetworkSiteResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * ConfigureAccessPointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Configures the specified network resource.
 *
 * </p
 *
 * Use this action to specify the geographic position of the hardware. You must provide Certified Professional Installer
 * (CPI) credentials in the request so that we can obtain spectrum grants. For more information, see <a
 * href="https://docs.aws.amazon.com/private-networks/latest/userguide/radio-units.html">Radio units</a> in the <i>Amazon
 * Web Services Private 5G User Guide</i>.
 */
ConfigureAccessPointResponse * PrivateNetworksClient::configureAccessPoint(const ConfigureAccessPointRequest &request)
{
    return qobject_cast<ConfigureAccessPointResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * CreateNetworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateNetworkResponse * PrivateNetworksClient::createNetwork(const CreateNetworkRequest &request)
{
    return qobject_cast<CreateNetworkResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * CreateNetworkSiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a network
 */
CreateNetworkSiteResponse * PrivateNetworksClient::createNetworkSite(const CreateNetworkSiteRequest &request)
{
    return qobject_cast<CreateNetworkSiteResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * DeactivateDeviceIdentifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deactivates the specified device
 */
DeactivateDeviceIdentifierResponse * PrivateNetworksClient::deactivateDeviceIdentifier(const DeactivateDeviceIdentifierRequest &request)
{
    return qobject_cast<DeactivateDeviceIdentifierResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * DeleteNetworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified network. You must delete network sites before you delete the network. For more information, see <a
 * href="https://docs.aws.amazon.com/private-networks/latest/APIReference/API_DeleteNetworkSite.html">DeleteNetworkSite</a>
 * in the <i>API Reference for Amazon Web Services Private
 */
DeleteNetworkResponse * PrivateNetworksClient::deleteNetwork(const DeleteNetworkRequest &request)
{
    return qobject_cast<DeleteNetworkResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * DeleteNetworkSiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified network site. Return the hardware after you delete the network site. You are responsible for
 * minimum charges. For more information, see <a
 * href="https://docs.aws.amazon.com/private-networks/latest/userguide/hardware-maintenance.html">Hardware returns</a> in
 * the <i>Amazon Web Services Private 5G User Guide</i>.
 */
DeleteNetworkSiteResponse * PrivateNetworksClient::deleteNetworkSite(const DeleteNetworkSiteRequest &request)
{
    return qobject_cast<DeleteNetworkSiteResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * GetDeviceIdentifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the specified device
 */
GetDeviceIdentifierResponse * PrivateNetworksClient::getDeviceIdentifier(const GetDeviceIdentifierRequest &request)
{
    return qobject_cast<GetDeviceIdentifierResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * GetNetworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the specified
 */
GetNetworkResponse * PrivateNetworksClient::getNetwork(const GetNetworkRequest &request)
{
    return qobject_cast<GetNetworkResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * GetNetworkResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the specified network
 */
GetNetworkResourceResponse * PrivateNetworksClient::getNetworkResource(const GetNetworkResourceRequest &request)
{
    return qobject_cast<GetNetworkResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * GetNetworkSiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the specified network
 */
GetNetworkSiteResponse * PrivateNetworksClient::getNetworkSite(const GetNetworkSiteRequest &request)
{
    return qobject_cast<GetNetworkSiteResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * GetOrderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the specified
 */
GetOrderResponse * PrivateNetworksClient::getOrder(const GetOrderRequest &request)
{
    return qobject_cast<GetOrderResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * ListDeviceIdentifiersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists device identifiers. Add filters to your request to return a more specific list of results. Use filters to match
 * the Amazon Resource Name (ARN) of an order, the status of device identifiers, or the ARN of the traffic
 *
 * group>
 *
 * If you specify multiple filters, filters are joined with an OR, and the request returns results that match all of the
 * specified
 */
ListDeviceIdentifiersResponse * PrivateNetworksClient::listDeviceIdentifiers(const ListDeviceIdentifiersRequest &request)
{
    return qobject_cast<ListDeviceIdentifiersResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * ListNetworkResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists network resources. Add filters to your request to return a more specific list of results. Use filters to match the
 * Amazon Resource Name (ARN) of an order or the status of network
 *
 * resources>
 *
 * If you specify multiple filters, filters are joined with an OR, and the request returns results that match all of the
 * specified
 */
ListNetworkResourcesResponse * PrivateNetworksClient::listNetworkResources(const ListNetworkResourcesRequest &request)
{
    return qobject_cast<ListNetworkResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * ListNetworkSitesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists network sites. Add filters to your request to return a more specific list of results. Use filters to match the
 * status of the network
 */
ListNetworkSitesResponse * PrivateNetworksClient::listNetworkSites(const ListNetworkSitesRequest &request)
{
    return qobject_cast<ListNetworkSitesResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * ListNetworksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists networks. Add filters to your request to return a more specific list of results. Use filters to match the status
 * of the
 */
ListNetworksResponse * PrivateNetworksClient::listNetworks(const ListNetworksRequest &request)
{
    return qobject_cast<ListNetworksResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * ListOrdersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists orders. Add filters to your request to return a more specific list of results. Use filters to match the Amazon
 * Resource Name (ARN) of the network site or the status of the
 *
 * order>
 *
 * If you specify multiple filters, filters are joined with an OR, and the request returns results that match all of the
 * specified
 */
ListOrdersResponse * PrivateNetworksClient::listOrders(const ListOrdersRequest &request)
{
    return qobject_cast<ListOrdersResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified
 */
ListTagsForResourceResponse * PrivateNetworksClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * PingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Checks the health of the
 */
PingResponse * PrivateNetworksClient::ping(const PingRequest &request)
{
    return qobject_cast<PingResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to the specified resource.
 */
TagResourceResponse * PrivateNetworksClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from the specified
 */
UntagResourceResponse * PrivateNetworksClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * UpdateNetworkSiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified network
 */
UpdateNetworkSiteResponse * PrivateNetworksClient::updateNetworkSite(const UpdateNetworkSiteRequest &request)
{
    return qobject_cast<UpdateNetworkSiteResponse *>(send(request));
}

/*!
 * Sends \a request to the PrivateNetworksClient service, and returns a pointer to an
 * UpdateNetworkSitePlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified network site
 */
UpdateNetworkSitePlanResponse * PrivateNetworksClient::updateNetworkSitePlan(const UpdateNetworkSitePlanRequest &request)
{
    return qobject_cast<UpdateNetworkSitePlanResponse *>(send(request));
}

/*!
 * \class QtAws::PrivateNetworks::PrivateNetworksClientPrivate
 * \brief The PrivateNetworksClientPrivate class provides private implementation for PrivateNetworksClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a PrivateNetworksClientPrivate object with public implementation \a q.
 */
PrivateNetworksClientPrivate::PrivateNetworksClientPrivate(PrivateNetworksClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace PrivateNetworks
} // namespace QtAws
