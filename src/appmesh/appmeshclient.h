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

#ifndef QTAWS_APPMESHCLIENT_H
#define QTAWS_APPMESHCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace AppMesh {

class AppMeshClientPrivate;
class CreateMeshRequest;
class CreateMeshResponse;
class CreateRouteRequest;
class CreateRouteResponse;
class CreateVirtualNodeRequest;
class CreateVirtualNodeResponse;
class CreateVirtualRouterRequest;
class CreateVirtualRouterResponse;
class DeleteMeshRequest;
class DeleteMeshResponse;
class DeleteRouteRequest;
class DeleteRouteResponse;
class DeleteVirtualNodeRequest;
class DeleteVirtualNodeResponse;
class DeleteVirtualRouterRequest;
class DeleteVirtualRouterResponse;
class DescribeMeshRequest;
class DescribeMeshResponse;
class DescribeRouteRequest;
class DescribeRouteResponse;
class DescribeVirtualNodeRequest;
class DescribeVirtualNodeResponse;
class DescribeVirtualRouterRequest;
class DescribeVirtualRouterResponse;
class ListMeshesRequest;
class ListMeshesResponse;
class ListRoutesRequest;
class ListRoutesResponse;
class ListVirtualNodesRequest;
class ListVirtualNodesResponse;
class ListVirtualRoutersRequest;
class ListVirtualRoutersResponse;
class UpdateRouteRequest;
class UpdateRouteResponse;
class UpdateVirtualNodeRequest;
class UpdateVirtualNodeResponse;
class UpdateVirtualRouterRequest;
class UpdateVirtualRouterResponse;

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
    CreateMeshResponse * createMesh(const CreateMeshRequest &request);
    CreateRouteResponse * createRoute(const CreateRouteRequest &request);
    CreateVirtualNodeResponse * createVirtualNode(const CreateVirtualNodeRequest &request);
    CreateVirtualRouterResponse * createVirtualRouter(const CreateVirtualRouterRequest &request);
    DeleteMeshResponse * deleteMesh(const DeleteMeshRequest &request);
    DeleteRouteResponse * deleteRoute(const DeleteRouteRequest &request);
    DeleteVirtualNodeResponse * deleteVirtualNode(const DeleteVirtualNodeRequest &request);
    DeleteVirtualRouterResponse * deleteVirtualRouter(const DeleteVirtualRouterRequest &request);
    DescribeMeshResponse * describeMesh(const DescribeMeshRequest &request);
    DescribeRouteResponse * describeRoute(const DescribeRouteRequest &request);
    DescribeVirtualNodeResponse * describeVirtualNode(const DescribeVirtualNodeRequest &request);
    DescribeVirtualRouterResponse * describeVirtualRouter(const DescribeVirtualRouterRequest &request);
    ListMeshesResponse * listMeshes(const ListMeshesRequest &request);
    ListRoutesResponse * listRoutes(const ListRoutesRequest &request);
    ListVirtualNodesResponse * listVirtualNodes(const ListVirtualNodesRequest &request);
    ListVirtualRoutersResponse * listVirtualRouters(const ListVirtualRoutersRequest &request);
    UpdateRouteResponse * updateRoute(const UpdateRouteRequest &request);
    UpdateVirtualNodeResponse * updateVirtualNode(const UpdateVirtualNodeRequest &request);
    UpdateVirtualRouterResponse * updateVirtualRouter(const UpdateVirtualRouterRequest &request);

private:
    Q_DECLARE_PRIVATE(AppMeshClient)
    Q_DISABLE_COPY(AppMeshClient)

};

} // namespace AppMesh
} // namespace QtAws

#endif
