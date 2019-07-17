/*
    Copyright 2013-2019 Paul Colby

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

#include "mediaconnectclient.h"
#include "mediaconnectclient_p.h"

#include "core/awssignaturev4.h"
#include "addflowoutputsrequest.h"
#include "addflowoutputsresponse.h"
#include "createflowrequest.h"
#include "createflowresponse.h"
#include "deleteflowrequest.h"
#include "deleteflowresponse.h"
#include "describeflowrequest.h"
#include "describeflowresponse.h"
#include "grantflowentitlementsrequest.h"
#include "grantflowentitlementsresponse.h"
#include "listentitlementsrequest.h"
#include "listentitlementsresponse.h"
#include "listflowsrequest.h"
#include "listflowsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "removeflowoutputrequest.h"
#include "removeflowoutputresponse.h"
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
#include "updateflowentitlementrequest.h"
#include "updateflowentitlementresponse.h"
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
 * CreateFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new flow. The request must include one source. The request optionally can include outputs (up to 20) and
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
