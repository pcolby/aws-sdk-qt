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

#ifndef QTAWS_GLOBALACCELERATORCLIENT_H
#define QTAWS_GLOBALACCELERATORCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace GlobalAccelerator {

class GlobalAcceleratorClientPrivate;
class CreateAcceleratorRequest;
class CreateAcceleratorResponse;
class CreateEndpointGroupRequest;
class CreateEndpointGroupResponse;
class CreateListenerRequest;
class CreateListenerResponse;
class DeleteAcceleratorRequest;
class DeleteAcceleratorResponse;
class DeleteEndpointGroupRequest;
class DeleteEndpointGroupResponse;
class DeleteListenerRequest;
class DeleteListenerResponse;
class DescribeAcceleratorRequest;
class DescribeAcceleratorResponse;
class DescribeAcceleratorAttributesRequest;
class DescribeAcceleratorAttributesResponse;
class DescribeEndpointGroupRequest;
class DescribeEndpointGroupResponse;
class DescribeListenerRequest;
class DescribeListenerResponse;
class ListAcceleratorsRequest;
class ListAcceleratorsResponse;
class ListEndpointGroupsRequest;
class ListEndpointGroupsResponse;
class ListListenersRequest;
class ListListenersResponse;
class UpdateAcceleratorRequest;
class UpdateAcceleratorResponse;
class UpdateAcceleratorAttributesRequest;
class UpdateAcceleratorAttributesResponse;
class UpdateEndpointGroupRequest;
class UpdateEndpointGroupResponse;
class UpdateListenerRequest;
class UpdateListenerResponse;

class QTAWS_EXPORT GlobalAcceleratorClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GlobalAcceleratorClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    GlobalAcceleratorClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAcceleratorResponse * createAccelerator(const CreateAcceleratorRequest &request);
    CreateEndpointGroupResponse * createEndpointGroup(const CreateEndpointGroupRequest &request);
    CreateListenerResponse * createListener(const CreateListenerRequest &request);
    DeleteAcceleratorResponse * deleteAccelerator(const DeleteAcceleratorRequest &request);
    DeleteEndpointGroupResponse * deleteEndpointGroup(const DeleteEndpointGroupRequest &request);
    DeleteListenerResponse * deleteListener(const DeleteListenerRequest &request);
    DescribeAcceleratorResponse * describeAccelerator(const DescribeAcceleratorRequest &request);
    DescribeAcceleratorAttributesResponse * describeAcceleratorAttributes(const DescribeAcceleratorAttributesRequest &request);
    DescribeEndpointGroupResponse * describeEndpointGroup(const DescribeEndpointGroupRequest &request);
    DescribeListenerResponse * describeListener(const DescribeListenerRequest &request);
    ListAcceleratorsResponse * listAccelerators(const ListAcceleratorsRequest &request);
    ListEndpointGroupsResponse * listEndpointGroups(const ListEndpointGroupsRequest &request);
    ListListenersResponse * listListeners(const ListListenersRequest &request);
    UpdateAcceleratorResponse * updateAccelerator(const UpdateAcceleratorRequest &request);
    UpdateAcceleratorAttributesResponse * updateAcceleratorAttributes(const UpdateAcceleratorAttributesRequest &request);
    UpdateEndpointGroupResponse * updateEndpointGroup(const UpdateEndpointGroupRequest &request);
    UpdateListenerResponse * updateListener(const UpdateListenerRequest &request);

private:
    Q_DECLARE_PRIVATE(GlobalAcceleratorClient)
    Q_DISABLE_COPY(GlobalAcceleratorClient)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
