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

#ifndef QTAWS_APPMESHCLIENT_H
#define QTAWS_APPMESHCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace AppMesh {

class AppMeshClientPrivate;
class CreateGatewayRouteRequest;
class CreateGatewayRouteResponse;
class CreateMeshRequest;
class CreateMeshResponse;
class CreateRouteRequest;
class CreateRouteResponse;
class CreateVirtualGatewayRequest;
class CreateVirtualGatewayResponse;
class CreateVirtualNodeRequest;
class CreateVirtualNodeResponse;
class CreateVirtualRouterRequest;
class CreateVirtualRouterResponse;
class CreateVirtualServiceRequest;
class CreateVirtualServiceResponse;
class DeleteGatewayRouteRequest;
class DeleteGatewayRouteResponse;
class DeleteMeshRequest;
class DeleteMeshResponse;
class DeleteRouteRequest;
class DeleteRouteResponse;
class DeleteVirtualGatewayRequest;
class DeleteVirtualGatewayResponse;
class DeleteVirtualNodeRequest;
class DeleteVirtualNodeResponse;
class DeleteVirtualRouterRequest;
class DeleteVirtualRouterResponse;
class DeleteVirtualServiceRequest;
class DeleteVirtualServiceResponse;
class DescribeGatewayRouteRequest;
class DescribeGatewayRouteResponse;
class DescribeMeshRequest;
class DescribeMeshResponse;
class DescribeRouteRequest;
class DescribeRouteResponse;
class DescribeVirtualGatewayRequest;
class DescribeVirtualGatewayResponse;
class DescribeVirtualNodeRequest;
class DescribeVirtualNodeResponse;
class DescribeVirtualRouterRequest;
class DescribeVirtualRouterResponse;
class DescribeVirtualServiceRequest;
class DescribeVirtualServiceResponse;
class ListGatewayRoutesRequest;
class ListGatewayRoutesResponse;
class ListMeshesRequest;
class ListMeshesResponse;
class ListRoutesRequest;
class ListRoutesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListVirtualGatewaysRequest;
class ListVirtualGatewaysResponse;
class ListVirtualNodesRequest;
class ListVirtualNodesResponse;
class ListVirtualRoutersRequest;
class ListVirtualRoutersResponse;
class ListVirtualServicesRequest;
class ListVirtualServicesResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateGatewayRouteRequest;
class UpdateGatewayRouteResponse;
class UpdateMeshRequest;
class UpdateMeshResponse;
class UpdateRouteRequest;
class UpdateRouteResponse;
class UpdateVirtualGatewayRequest;
class UpdateVirtualGatewayResponse;
class UpdateVirtualNodeRequest;
class UpdateVirtualNodeResponse;
class UpdateVirtualRouterRequest;
class UpdateVirtualRouterResponse;
class UpdateVirtualServiceRequest;
class UpdateVirtualServiceResponse;

class QTAWS_EXPORT AppMeshClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AppMeshClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AppMeshClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateGatewayRouteResponse * createGatewayRoute(const CreateGatewayRouteRequest &request);
    CreateMeshResponse * createMesh(const CreateMeshRequest &request);
    CreateRouteResponse * createRoute(const CreateRouteRequest &request);
    CreateVirtualGatewayResponse * createVirtualGateway(const CreateVirtualGatewayRequest &request);
    CreateVirtualNodeResponse * createVirtualNode(const CreateVirtualNodeRequest &request);
    CreateVirtualRouterResponse * createVirtualRouter(const CreateVirtualRouterRequest &request);
    CreateVirtualServiceResponse * createVirtualService(const CreateVirtualServiceRequest &request);
    DeleteGatewayRouteResponse * deleteGatewayRoute(const DeleteGatewayRouteRequest &request);
    DeleteMeshResponse * deleteMesh(const DeleteMeshRequest &request);
    DeleteRouteResponse * deleteRoute(const DeleteRouteRequest &request);
    DeleteVirtualGatewayResponse * deleteVirtualGateway(const DeleteVirtualGatewayRequest &request);
    DeleteVirtualNodeResponse * deleteVirtualNode(const DeleteVirtualNodeRequest &request);
    DeleteVirtualRouterResponse * deleteVirtualRouter(const DeleteVirtualRouterRequest &request);
    DeleteVirtualServiceResponse * deleteVirtualService(const DeleteVirtualServiceRequest &request);
    DescribeGatewayRouteResponse * describeGatewayRoute(const DescribeGatewayRouteRequest &request);
    DescribeMeshResponse * describeMesh(const DescribeMeshRequest &request);
    DescribeRouteResponse * describeRoute(const DescribeRouteRequest &request);
    DescribeVirtualGatewayResponse * describeVirtualGateway(const DescribeVirtualGatewayRequest &request);
    DescribeVirtualNodeResponse * describeVirtualNode(const DescribeVirtualNodeRequest &request);
    DescribeVirtualRouterResponse * describeVirtualRouter(const DescribeVirtualRouterRequest &request);
    DescribeVirtualServiceResponse * describeVirtualService(const DescribeVirtualServiceRequest &request);
    ListGatewayRoutesResponse * listGatewayRoutes(const ListGatewayRoutesRequest &request);
    ListMeshesResponse * listMeshes(const ListMeshesRequest &request);
    ListRoutesResponse * listRoutes(const ListRoutesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListVirtualGatewaysResponse * listVirtualGateways(const ListVirtualGatewaysRequest &request);
    ListVirtualNodesResponse * listVirtualNodes(const ListVirtualNodesRequest &request);
    ListVirtualRoutersResponse * listVirtualRouters(const ListVirtualRoutersRequest &request);
    ListVirtualServicesResponse * listVirtualServices(const ListVirtualServicesRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateGatewayRouteResponse * updateGatewayRoute(const UpdateGatewayRouteRequest &request);
    UpdateMeshResponse * updateMesh(const UpdateMeshRequest &request);
    UpdateRouteResponse * updateRoute(const UpdateRouteRequest &request);
    UpdateVirtualGatewayResponse * updateVirtualGateway(const UpdateVirtualGatewayRequest &request);
    UpdateVirtualNodeResponse * updateVirtualNode(const UpdateVirtualNodeRequest &request);
    UpdateVirtualRouterResponse * updateVirtualRouter(const UpdateVirtualRouterRequest &request);
    UpdateVirtualServiceResponse * updateVirtualService(const UpdateVirtualServiceRequest &request);

protected:
    /// @cond internal
    AppMeshClientPrivate * const d_ptr; ///< Internal d-pointer.
    AppMeshClient(AppMeshClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(AppMeshClient)
    Q_DISABLE_COPY(AppMeshClient)

};

} // namespace AppMesh
} // namespace QtAws

#endif
