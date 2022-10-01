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

#ifndef QTAWS_PRIVATENETWORKSCLIENT_H
#define QTAWS_PRIVATENETWORKSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsprivatenetworksglobal.h"

class QNetworkReply;

namespace QtAws {
namespace PrivateNetworks {

class PrivateNetworksClientPrivate;
class AcknowledgeOrderReceiptRequest;
class AcknowledgeOrderReceiptResponse;
class ActivateDeviceIdentifierRequest;
class ActivateDeviceIdentifierResponse;
class ActivateNetworkSiteRequest;
class ActivateNetworkSiteResponse;
class ConfigureAccessPointRequest;
class ConfigureAccessPointResponse;
class CreateNetworkRequest;
class CreateNetworkResponse;
class CreateNetworkSiteRequest;
class CreateNetworkSiteResponse;
class DeactivateDeviceIdentifierRequest;
class DeactivateDeviceIdentifierResponse;
class DeleteNetworkRequest;
class DeleteNetworkResponse;
class DeleteNetworkSiteRequest;
class DeleteNetworkSiteResponse;
class GetDeviceIdentifierRequest;
class GetDeviceIdentifierResponse;
class GetNetworkRequest;
class GetNetworkResponse;
class GetNetworkResourceRequest;
class GetNetworkResourceResponse;
class GetNetworkSiteRequest;
class GetNetworkSiteResponse;
class GetOrderRequest;
class GetOrderResponse;
class ListDeviceIdentifiersRequest;
class ListDeviceIdentifiersResponse;
class ListNetworkResourcesRequest;
class ListNetworkResourcesResponse;
class ListNetworkSitesRequest;
class ListNetworkSitesResponse;
class ListNetworksRequest;
class ListNetworksResponse;
class ListOrdersRequest;
class ListOrdersResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PingRequest;
class PingResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateNetworkSiteRequest;
class UpdateNetworkSiteResponse;
class UpdateNetworkSitePlanRequest;
class UpdateNetworkSitePlanResponse;

class QTAWSPRIVATENETWORKS_EXPORT PrivateNetworksClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PrivateNetworksClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit PrivateNetworksClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcknowledgeOrderReceiptResponse * acknowledgeOrderReceipt(const AcknowledgeOrderReceiptRequest &request);
    ActivateDeviceIdentifierResponse * activateDeviceIdentifier(const ActivateDeviceIdentifierRequest &request);
    ActivateNetworkSiteResponse * activateNetworkSite(const ActivateNetworkSiteRequest &request);
    ConfigureAccessPointResponse * configureAccessPoint(const ConfigureAccessPointRequest &request);
    CreateNetworkResponse * createNetwork(const CreateNetworkRequest &request);
    CreateNetworkSiteResponse * createNetworkSite(const CreateNetworkSiteRequest &request);
    DeactivateDeviceIdentifierResponse * deactivateDeviceIdentifier(const DeactivateDeviceIdentifierRequest &request);
    DeleteNetworkResponse * deleteNetwork(const DeleteNetworkRequest &request);
    DeleteNetworkSiteResponse * deleteNetworkSite(const DeleteNetworkSiteRequest &request);
    GetDeviceIdentifierResponse * getDeviceIdentifier(const GetDeviceIdentifierRequest &request);
    GetNetworkResponse * getNetwork(const GetNetworkRequest &request);
    GetNetworkResourceResponse * getNetworkResource(const GetNetworkResourceRequest &request);
    GetNetworkSiteResponse * getNetworkSite(const GetNetworkSiteRequest &request);
    GetOrderResponse * getOrder(const GetOrderRequest &request);
    ListDeviceIdentifiersResponse * listDeviceIdentifiers(const ListDeviceIdentifiersRequest &request);
    ListNetworkResourcesResponse * listNetworkResources(const ListNetworkResourcesRequest &request);
    ListNetworkSitesResponse * listNetworkSites(const ListNetworkSitesRequest &request);
    ListNetworksResponse * listNetworks(const ListNetworksRequest &request);
    ListOrdersResponse * listOrders(const ListOrdersRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PingResponse * ping(const PingRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateNetworkSiteResponse * updateNetworkSite(const UpdateNetworkSiteRequest &request);
    UpdateNetworkSitePlanResponse * updateNetworkSitePlan(const UpdateNetworkSitePlanRequest &request);

private:
    Q_DECLARE_PRIVATE(PrivateNetworksClient)
    Q_DISABLE_COPY(PrivateNetworksClient)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
