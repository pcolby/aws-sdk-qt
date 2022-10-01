// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "outpostsclient.h"
#include "outpostsclient_p.h"

#include "core/awssignaturev4.h"
#include "cancelorderrequest.h"
#include "cancelorderresponse.h"
#include "createorderrequest.h"
#include "createorderresponse.h"
#include "createoutpostrequest.h"
#include "createoutpostresponse.h"
#include "createsiterequest.h"
#include "createsiteresponse.h"
#include "deleteoutpostrequest.h"
#include "deleteoutpostresponse.h"
#include "deletesiterequest.h"
#include "deletesiteresponse.h"
#include "getcatalogitemrequest.h"
#include "getcatalogitemresponse.h"
#include "getconnectionrequest.h"
#include "getconnectionresponse.h"
#include "getorderrequest.h"
#include "getorderresponse.h"
#include "getoutpostrequest.h"
#include "getoutpostresponse.h"
#include "getoutpostinstancetypesrequest.h"
#include "getoutpostinstancetypesresponse.h"
#include "getsiterequest.h"
#include "getsiteresponse.h"
#include "getsiteaddressrequest.h"
#include "getsiteaddressresponse.h"
#include "listassetsrequest.h"
#include "listassetsresponse.h"
#include "listcatalogitemsrequest.h"
#include "listcatalogitemsresponse.h"
#include "listordersrequest.h"
#include "listordersresponse.h"
#include "listoutpostsrequest.h"
#include "listoutpostsresponse.h"
#include "listsitesrequest.h"
#include "listsitesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startconnectionrequest.h"
#include "startconnectionresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateoutpostrequest.h"
#include "updateoutpostresponse.h"
#include "updatesiterequest.h"
#include "updatesiteresponse.h"
#include "updatesiteaddressrequest.h"
#include "updatesiteaddressresponse.h"
#include "updatesiterackphysicalpropertiesrequest.h"
#include "updatesiterackphysicalpropertiesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Outposts
 * \brief Contains classess for accessing AWS Outposts.
 *
 * \inmodule QtAwsOutposts
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::OutpostsClient
 * \brief The OutpostsClient class provides access to the AWS Outposts service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 */

/*!
 * \brief Constructs a OutpostsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
OutpostsClient::OutpostsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new OutpostsClientPrivate(this), parent)
{
    Q_D(OutpostsClient);
    d->apiVersion = QStringLiteral("2019-12-03");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("outposts");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Outposts");
    d->serviceName = QStringLiteral("outposts");
}

/*!
 * \overload OutpostsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
OutpostsClient::OutpostsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new OutpostsClientPrivate(this), parent)
{
    Q_D(OutpostsClient);
    d->apiVersion = QStringLiteral("2019-12-03");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("outposts");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Outposts");
    d->serviceName = QStringLiteral("outposts");
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * CancelOrderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels an order for an Outpost.
 */
CancelOrderResponse * OutpostsClient::cancelOrder(const CancelOrderRequest &request)
{
    return qobject_cast<CancelOrderResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * CreateOrderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an order for an
 */
CreateOrderResponse * OutpostsClient::createOrder(const CreateOrderRequest &request)
{
    return qobject_cast<CreateOrderResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * CreateOutpostResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an
 *
 * Outpost>
 *
 * You can specify <code>AvailabilityZone</code> or
 */
CreateOutpostResponse * OutpostsClient::createOutpost(const CreateOutpostRequest &request)
{
    return qobject_cast<CreateOutpostResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * CreateSiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a site for an Outpost.
 */
CreateSiteResponse * OutpostsClient::createSite(const CreateSiteRequest &request)
{
    return qobject_cast<CreateSiteResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * DeleteOutpostResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the
 */
DeleteOutpostResponse * OutpostsClient::deleteOutpost(const DeleteOutpostRequest &request)
{
    return qobject_cast<DeleteOutpostResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * DeleteSiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the
 */
DeleteSiteResponse * OutpostsClient::deleteSite(const DeleteSiteRequest &request)
{
    return qobject_cast<DeleteSiteResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * GetCatalogItemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a catalog
 */
GetCatalogItemResponse * OutpostsClient::getCatalogItem(const GetCatalogItemRequest &request)
{
    return qobject_cast<GetCatalogItemResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * GetConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * Amazon Web Services uses this action to install Outpost
 *
 * servers> </note>
 *
 * Gets information about a specified connection.
 *
 * </p
 *
 * Use CloudTrail to monitor this action or Amazon Web Services managed policy for Amazon Web Services Outposts to secure
 * it. For more information, see <a
 * href="https://docs.aws.amazon.com/outposts/latest/userguide/security-iam-awsmanpol.html"> Amazon Web Services managed
 * policies for Amazon Web Services Outposts</a> and <a
 * href="https://docs.aws.amazon.com/outposts/latest/userguide/logging-using-cloudtrail.html"> Logging Amazon Web Services
 * Outposts API calls with Amazon Web Services CloudTrail</a> in the <i>Amazon Web Services Outposts User Guide</i>.
 */
GetConnectionResponse * OutpostsClient::getConnection(const GetConnectionRequest &request)
{
    return qobject_cast<GetConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * GetOrderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an
 */
GetOrderResponse * OutpostsClient::getOrder(const GetOrderRequest &request)
{
    return qobject_cast<GetOrderResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * GetOutpostResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified
 */
GetOutpostResponse * OutpostsClient::getOutpost(const GetOutpostRequest &request)
{
    return qobject_cast<GetOutpostResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * GetOutpostInstanceTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the instance types for the specified
 */
GetOutpostInstanceTypesResponse * OutpostsClient::getOutpostInstanceTypes(const GetOutpostInstanceTypesRequest &request)
{
    return qobject_cast<GetOutpostInstanceTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * GetSiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified Outpost site.
 */
GetSiteResponse * OutpostsClient::getSite(const GetSiteRequest &request)
{
    return qobject_cast<GetSiteResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * GetSiteAddressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the site address.
 */
GetSiteAddressResponse * OutpostsClient::getSiteAddress(const GetSiteAddressRequest &request)
{
    return qobject_cast<GetSiteAddressResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * ListAssetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the hardware assets in an Outpost. If you are using Dedicated Hosts on Amazon Web Services Outposts, you can
 * filter your request by host ID to return a list of hardware assets that allocate resources for Dedicated Hosts.
 */
ListAssetsResponse * OutpostsClient::listAssets(const ListAssetsRequest &request)
{
    return qobject_cast<ListAssetsResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * ListCatalogItemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the items in the catalog. Add filters to your request to return a more specific list of results. Use filters to
 * match an item class, storage option, or EC2 family.
 *
 * </p
 *
 * If you specify multiple filters, the filters are joined with an <code>AND</code>, and the request returns only results
 * that match all of the specified
 */
ListCatalogItemsResponse * OutpostsClient::listCatalogItems(const ListCatalogItemsRequest &request)
{
    return qobject_cast<ListCatalogItemsResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * ListOrdersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Outpost orders for your Amazon Web Services account. You can filter your request by Outpost to return a more
 * specific list of results.
 */
ListOrdersResponse * OutpostsClient::listOrders(const ListOrdersRequest &request)
{
    return qobject_cast<ListOrdersResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * ListOutpostsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Outposts for your Amazon Web Services account. Add filters to your request to return a more specific list of
 * results. Use filters to match an Outpost lifecycle status, Availability Zone (<code>us-east-1a</code>), and AZ ID
 * (<code>use1-az1</code>).
 *
 * </p
 *
 * If you specify multiple filters, the filters are joined with an <code>AND</code>, and the request returns only results
 * that match all of the specified
 */
ListOutpostsResponse * OutpostsClient::listOutposts(const ListOutpostsRequest &request)
{
    return qobject_cast<ListOutpostsResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * ListSitesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Outpost sites for your Amazon Web Services account. Add operating address filters to your request to return a
 * more specific list of results. Use filters to match site city, country code, or state/region of the operating address.
 *
 * </p
 *
 * If you specify multiple filters, the filters are joined with an <code>AND</code>, and the request returns only results
 * that match all of the specified
 */
ListSitesResponse * OutpostsClient::listSites(const ListSitesRequest &request)
{
    return qobject_cast<ListSitesResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified
 */
ListTagsForResourceResponse * OutpostsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * StartConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * Amazon Web Services uses this action to install Outpost
 *
 * servers> </note>
 *
 * Starts the connection required for Outpost server installation.
 *
 * </p
 *
 * Use CloudTrail to monitor this action or Amazon Web Services managed policy for Amazon Web Services Outposts to secure
 * it. For more information, see <a
 * href="https://docs.aws.amazon.com/outposts/latest/userguide/security-iam-awsmanpol.html"> Amazon Web Services managed
 * policies for Amazon Web Services Outposts</a> and <a
 * href="https://docs.aws.amazon.com/outposts/latest/userguide/logging-using-cloudtrail.html"> Logging Amazon Web Services
 * Outposts API calls with Amazon Web Services CloudTrail</a> in the <i>Amazon Web Services Outposts User Guide</i>.
 */
StartConnectionResponse * OutpostsClient::startConnection(const StartConnectionRequest &request)
{
    return qobject_cast<StartConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to the specified
 */
TagResourceResponse * OutpostsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from the specified
 */
UntagResourceResponse * OutpostsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * UpdateOutpostResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an Outpost.
 */
UpdateOutpostResponse * OutpostsClient::updateOutpost(const UpdateOutpostRequest &request)
{
    return qobject_cast<UpdateOutpostResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * UpdateSiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the site.
 */
UpdateSiteResponse * OutpostsClient::updateSite(const UpdateSiteRequest &request)
{
    return qobject_cast<UpdateSiteResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * UpdateSiteAddressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the site address.
 *
 * </p
 *
 * To update a site address with an order <code>IN_PROGRESS</code>, you must wait for the order to complete or cancel the
 * order.
 *
 * </p
 *
 * You can update the operating address before you place an order at the site, or after all Outposts that belong to the
 * site have been deactivated.
 */
UpdateSiteAddressResponse * OutpostsClient::updateSiteAddress(const UpdateSiteAddressRequest &request)
{
    return qobject_cast<UpdateSiteAddressResponse *>(send(request));
}

/*!
 * Sends \a request to the OutpostsClient service, and returns a pointer to an
 * UpdateSiteRackPhysicalPropertiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update the physical and logistical details for a rack at a site. For more information about hardware requirements for
 * racks, see <a href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#checklist">Network
 * readiness checklist</a> in the Amazon Web Services Outposts User Guide.
 *
 * </p
 *
 * To update a rack at a site with an order of <code>IN_PROGRESS</code>, you must wait for the order to complete or cancel
 * the
 */
UpdateSiteRackPhysicalPropertiesResponse * OutpostsClient::updateSiteRackPhysicalProperties(const UpdateSiteRackPhysicalPropertiesRequest &request)
{
    return qobject_cast<UpdateSiteRackPhysicalPropertiesResponse *>(send(request));
}

/*!
 * \class QtAws::Outposts::OutpostsClientPrivate
 * \brief The OutpostsClientPrivate class provides private implementation for OutpostsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a OutpostsClientPrivate object with public implementation \a q.
 */
OutpostsClientPrivate::OutpostsClientPrivate(OutpostsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Outposts
} // namespace QtAws
