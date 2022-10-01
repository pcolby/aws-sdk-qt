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
