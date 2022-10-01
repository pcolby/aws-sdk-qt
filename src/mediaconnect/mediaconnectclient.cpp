// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mediaconnectclient.h"
#include "mediaconnectclient_p.h"

#include "core/awssignaturev4.h"
#include "addflowmediastreamsrequest.h"
#include "addflowmediastreamsresponse.h"
#include "addflowoutputsrequest.h"
#include "addflowoutputsresponse.h"
#include "addflowsourcesrequest.h"
#include "addflowsourcesresponse.h"
#include "addflowvpcinterfacesrequest.h"
#include "addflowvpcinterfacesresponse.h"
#include "createflowrequest.h"
#include "createflowresponse.h"
#include "deleteflowrequest.h"
#include "deleteflowresponse.h"
#include "describeflowrequest.h"
#include "describeflowresponse.h"
#include "describeofferingrequest.h"
#include "describeofferingresponse.h"
#include "describereservationrequest.h"
#include "describereservationresponse.h"
#include "grantflowentitlementsrequest.h"
#include "grantflowentitlementsresponse.h"
#include "listentitlementsrequest.h"
#include "listentitlementsresponse.h"
#include "listflowsrequest.h"
#include "listflowsresponse.h"
#include "listofferingsrequest.h"
#include "listofferingsresponse.h"
#include "listreservationsrequest.h"
#include "listreservationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "purchaseofferingrequest.h"
#include "purchaseofferingresponse.h"
#include "removeflowmediastreamrequest.h"
#include "removeflowmediastreamresponse.h"
#include "removeflowoutputrequest.h"
#include "removeflowoutputresponse.h"
#include "removeflowsourcerequest.h"
#include "removeflowsourceresponse.h"
#include "removeflowvpcinterfacerequest.h"
#include "removeflowvpcinterfaceresponse.h"
#include "revokeflowentitlementrequest.h"
#include "revokeflowentitlementresponse.h"
#include "startflowrequest.h"
#include "startflowresponse.h"
#include "stopflowrequest.h"
#include "stopflowresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateflowrequest.h"
#include "updateflowresponse.h"
#include "updateflowentitlementrequest.h"
#include "updateflowentitlementresponse.h"
#include "updateflowmediastreamrequest.h"
#include "updateflowmediastreamresponse.h"
#include "updateflowoutputrequest.h"
#include "updateflowoutputresponse.h"
#include "updateflowsourcerequest.h"
#include "updateflowsourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MediaConnect
 * \brief Contains classess for accessing AWS MediaConnect.
 *
 * \inmodule QtAwsMediaConnect
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::MediaConnectClient
 * \brief The MediaConnectClient class provides access to the AWS MediaConnect service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaConnect
 *
 */

/*!
 * \brief Constructs a MediaConnectClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MediaConnectClient::MediaConnectClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaConnectClientPrivate(this), parent)
{
    Q_D(MediaConnectClient);
    d->apiVersion = QStringLiteral("2018-11-14");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("mediaconnect");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS MediaConnect");
    d->serviceName = QStringLiteral("mediaconnect");
}

/*!
 * \overload MediaConnectClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MediaConnectClient::MediaConnectClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaConnectClientPrivate(this), parent)
{
    Q_D(MediaConnectClient);
    d->apiVersion = QStringLiteral("2018-11-14");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("mediaconnect");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS MediaConnect");
    d->serviceName = QStringLiteral("mediaconnect");
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * AddFlowMediaStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds media streams to an existing flow. After you add a media stream to a flow, you can associate it with a source
 */
AddFlowMediaStreamsResponse * MediaConnectClient::addFlowMediaStreams(const AddFlowMediaStreamsRequest &request)
{
    return qobject_cast<AddFlowMediaStreamsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * AddFlowOutputsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
AddFlowOutputsResponse * MediaConnectClient::addFlowOutputs(const AddFlowOutputsRequest &request)
{
    return qobject_cast<AddFlowOutputsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * AddFlowSourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
AddFlowSourcesResponse * MediaConnectClient::addFlowSources(const AddFlowSourcesRequest &request)
{
    return qobject_cast<AddFlowSourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * AddFlowVpcInterfacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
AddFlowVpcInterfacesResponse * MediaConnectClient::addFlowVpcInterfaces(const AddFlowVpcInterfacesRequest &request)
{
    return qobject_cast<AddFlowVpcInterfacesResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * CreateFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new flow. The request must include one source. The request optionally can include outputs (up to 50) and
 */
CreateFlowResponse * MediaConnectClient::createFlow(const CreateFlowRequest &request)
{
    return qobject_cast<CreateFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * DeleteFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteFlowResponse * MediaConnectClient::deleteFlow(const DeleteFlowRequest &request)
{
    return qobject_cast<DeleteFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * DescribeFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the details of a flow. The response includes the flow ARN, name, and Availability Zone, as well as details
 */
DescribeFlowResponse * MediaConnectClient::describeFlow(const DescribeFlowRequest &request)
{
    return qobject_cast<DescribeFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * DescribeOfferingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the details of an offering. The response includes the offering description, duration, outbound bandwidth,
 */
DescribeOfferingResponse * MediaConnectClient::describeOffering(const DescribeOfferingRequest &request)
{
    return qobject_cast<DescribeOfferingResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * DescribeReservationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the details of a reservation. The response includes the reservation name, state, start date and time, and the
 */
DescribeReservationResponse * MediaConnectClient::describeReservation(const DescribeReservationRequest &request)
{
    return qobject_cast<DescribeReservationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * GrantFlowEntitlementsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GrantFlowEntitlementsResponse * MediaConnectClient::grantFlowEntitlements(const GrantFlowEntitlementsRequest &request)
{
    return qobject_cast<GrantFlowEntitlementsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * ListEntitlementsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListEntitlementsResponse * MediaConnectClient::listEntitlements(const ListEntitlementsRequest &request)
{
    return qobject_cast<ListEntitlementsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * ListFlowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListFlowsResponse * MediaConnectClient::listFlows(const ListFlowsRequest &request)
{
    return qobject_cast<ListFlowsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * ListOfferingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays a list of all offerings that are available to this account in the current AWS Region. If you have an active
 * reservation (which means you've purchased an offering that has already started and hasn't expired yet), your account
 */
ListOfferingsResponse * MediaConnectClient::listOfferings(const ListOfferingsRequest &request)
{
    return qobject_cast<ListOfferingsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * ListReservationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays a list of all reservations that have been purchased by this account in the current AWS Region. This list
 */
ListReservationsResponse * MediaConnectClient::listReservations(const ListReservationsRequest &request)
{
    return qobject_cast<ListReservationsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListTagsForResourceResponse * MediaConnectClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * PurchaseOfferingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Submits a request to purchase an offering. If you already have an active reservation, you can't purchase another
 */
PurchaseOfferingResponse * MediaConnectClient::purchaseOffering(const PurchaseOfferingRequest &request)
{
    return qobject_cast<PurchaseOfferingResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * RemoveFlowMediaStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a media stream from a flow. This action is only available if the media stream is not associated with a source or
 */
RemoveFlowMediaStreamResponse * MediaConnectClient::removeFlowMediaStream(const RemoveFlowMediaStreamRequest &request)
{
    return qobject_cast<RemoveFlowMediaStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * RemoveFlowOutputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes an output from an existing flow. This request can be made only on an output that does not have an entitlement
 * associated with it. If the output has an entitlement, you must revoke the entitlement instead. When an entitlement is
 */
RemoveFlowOutputResponse * MediaConnectClient::removeFlowOutput(const RemoveFlowOutputRequest &request)
{
    return qobject_cast<RemoveFlowOutputResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * RemoveFlowSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
RemoveFlowSourceResponse * MediaConnectClient::removeFlowSource(const RemoveFlowSourceRequest &request)
{
    return qobject_cast<RemoveFlowSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * RemoveFlowVpcInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a VPC Interface from an existing flow. This request can be made only on a VPC interface that does not have a
 * Source or Output associated with it. If the VPC interface is referenced by a Source or Output, you must first delete or
 */
RemoveFlowVpcInterfaceResponse * MediaConnectClient::removeFlowVpcInterface(const RemoveFlowVpcInterfaceRequest &request)
{
    return qobject_cast<RemoveFlowVpcInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * RevokeFlowEntitlementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes an entitlement from a flow. Once an entitlement is revoked, the content becomes unavailable to the subscriber
 */
RevokeFlowEntitlementResponse * MediaConnectClient::revokeFlowEntitlement(const RevokeFlowEntitlementRequest &request)
{
    return qobject_cast<RevokeFlowEntitlementResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * StartFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
StartFlowResponse * MediaConnectClient::startFlow(const StartFlowRequest &request)
{
    return qobject_cast<StartFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * StopFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
StopFlowResponse * MediaConnectClient::stopFlow(const StopFlowRequest &request)
{
    return qobject_cast<StopFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified tags to a resource with the specified resourceArn. If existing tags on a resource are not
 * specified in the request parameters, they are not changed. When a resource is deleted, the tags associated with that
 */
TagResourceResponse * MediaConnectClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UntagResourceResponse * MediaConnectClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * UpdateFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateFlowResponse * MediaConnectClient::updateFlow(const UpdateFlowRequest &request)
{
    return qobject_cast<UpdateFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * UpdateFlowEntitlementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You can change an entitlement's description, subscribers, and encryption. If you change the subscribers, the service
 */
UpdateFlowEntitlementResponse * MediaConnectClient::updateFlowEntitlement(const UpdateFlowEntitlementRequest &request)
{
    return qobject_cast<UpdateFlowEntitlementResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * UpdateFlowMediaStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateFlowMediaStreamResponse * MediaConnectClient::updateFlowMediaStream(const UpdateFlowMediaStreamRequest &request)
{
    return qobject_cast<UpdateFlowMediaStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * UpdateFlowOutputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateFlowOutputResponse * MediaConnectClient::updateFlowOutput(const UpdateFlowOutputRequest &request)
{
    return qobject_cast<UpdateFlowOutputResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConnectClient service, and returns a pointer to an
 * UpdateFlowSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateFlowSourceResponse * MediaConnectClient::updateFlowSource(const UpdateFlowSourceRequest &request)
{
    return qobject_cast<UpdateFlowSourceResponse *>(send(request));
}

/*!
 * \class QtAws::MediaConnect::MediaConnectClientPrivate
 * \brief The MediaConnectClientPrivate class provides private implementation for MediaConnectClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a MediaConnectClientPrivate object with public implementation \a q.
 */
MediaConnectClientPrivate::MediaConnectClientPrivate(MediaConnectClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MediaConnect
} // namespace QtAws
