// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OUTPOSTSCLIENT_H
#define QTAWS_OUTPOSTSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsoutpostsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Outposts {

class OutpostsClientPrivate;
class CancelOrderRequest;
class CancelOrderResponse;
class CreateOrderRequest;
class CreateOrderResponse;
class CreateOutpostRequest;
class CreateOutpostResponse;
class CreateSiteRequest;
class CreateSiteResponse;
class DeleteOutpostRequest;
class DeleteOutpostResponse;
class DeleteSiteRequest;
class DeleteSiteResponse;
class GetCatalogItemRequest;
class GetCatalogItemResponse;
class GetConnectionRequest;
class GetConnectionResponse;
class GetOrderRequest;
class GetOrderResponse;
class GetOutpostRequest;
class GetOutpostResponse;
class GetOutpostInstanceTypesRequest;
class GetOutpostInstanceTypesResponse;
class GetSiteRequest;
class GetSiteResponse;
class GetSiteAddressRequest;
class GetSiteAddressResponse;
class ListAssetsRequest;
class ListAssetsResponse;
class ListCatalogItemsRequest;
class ListCatalogItemsResponse;
class ListOrdersRequest;
class ListOrdersResponse;
class ListOutpostsRequest;
class ListOutpostsResponse;
class ListSitesRequest;
class ListSitesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartConnectionRequest;
class StartConnectionResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateOutpostRequest;
class UpdateOutpostResponse;
class UpdateSiteRequest;
class UpdateSiteResponse;
class UpdateSiteAddressRequest;
class UpdateSiteAddressResponse;
class UpdateSiteRackPhysicalPropertiesRequest;
class UpdateSiteRackPhysicalPropertiesResponse;

class QTAWSOUTPOSTS_EXPORT OutpostsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    OutpostsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit OutpostsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelOrderResponse * cancelOrder(const CancelOrderRequest &request);
    CreateOrderResponse * createOrder(const CreateOrderRequest &request);
    CreateOutpostResponse * createOutpost(const CreateOutpostRequest &request);
    CreateSiteResponse * createSite(const CreateSiteRequest &request);
    DeleteOutpostResponse * deleteOutpost(const DeleteOutpostRequest &request);
    DeleteSiteResponse * deleteSite(const DeleteSiteRequest &request);
    GetCatalogItemResponse * getCatalogItem(const GetCatalogItemRequest &request);
    GetConnectionResponse * getConnection(const GetConnectionRequest &request);
    GetOrderResponse * getOrder(const GetOrderRequest &request);
    GetOutpostResponse * getOutpost(const GetOutpostRequest &request);
    GetOutpostInstanceTypesResponse * getOutpostInstanceTypes(const GetOutpostInstanceTypesRequest &request);
    GetSiteResponse * getSite(const GetSiteRequest &request);
    GetSiteAddressResponse * getSiteAddress(const GetSiteAddressRequest &request);
    ListAssetsResponse * listAssets(const ListAssetsRequest &request);
    ListCatalogItemsResponse * listCatalogItems(const ListCatalogItemsRequest &request);
    ListOrdersResponse * listOrders(const ListOrdersRequest &request);
    ListOutpostsResponse * listOutposts(const ListOutpostsRequest &request);
    ListSitesResponse * listSites(const ListSitesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartConnectionResponse * startConnection(const StartConnectionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateOutpostResponse * updateOutpost(const UpdateOutpostRequest &request);
    UpdateSiteResponse * updateSite(const UpdateSiteRequest &request);
    UpdateSiteAddressResponse * updateSiteAddress(const UpdateSiteAddressRequest &request);
    UpdateSiteRackPhysicalPropertiesResponse * updateSiteRackPhysicalProperties(const UpdateSiteRackPhysicalPropertiesRequest &request);

private:
    Q_DECLARE_PRIVATE(OutpostsClient)
    Q_DISABLE_COPY(OutpostsClient)

};

} // namespace Outposts
} // namespace QtAws

#endif
