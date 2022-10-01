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

#ifndef QTAWS_SNOWDEVICEMANAGEMENTCLIENT_H
#define QTAWS_SNOWDEVICEMANAGEMENTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssnowdevicemanagementglobal.h"

class QNetworkReply;

namespace QtAws {
namespace SnowDeviceManagement {

class SnowDeviceManagementClientPrivate;
class CancelTaskRequest;
class CancelTaskResponse;
class CreateTaskRequest;
class CreateTaskResponse;
class DescribeDeviceRequest;
class DescribeDeviceResponse;
class DescribeDeviceEc2InstancesRequest;
class DescribeDeviceEc2InstancesResponse;
class DescribeExecutionRequest;
class DescribeExecutionResponse;
class DescribeTaskRequest;
class DescribeTaskResponse;
class ListDeviceResourcesRequest;
class ListDeviceResourcesResponse;
class ListDevicesRequest;
class ListDevicesResponse;
class ListExecutionsRequest;
class ListExecutionsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTasksRequest;
class ListTasksResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSSNOWDEVICEMANAGEMENT_EXPORT SnowDeviceManagementClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SnowDeviceManagementClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SnowDeviceManagementClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelTaskResponse * cancelTask(const CancelTaskRequest &request);
    CreateTaskResponse * createTask(const CreateTaskRequest &request);
    DescribeDeviceResponse * describeDevice(const DescribeDeviceRequest &request);
    DescribeDeviceEc2InstancesResponse * describeDeviceEc2Instances(const DescribeDeviceEc2InstancesRequest &request);
    DescribeExecutionResponse * describeExecution(const DescribeExecutionRequest &request);
    DescribeTaskResponse * describeTask(const DescribeTaskRequest &request);
    ListDeviceResourcesResponse * listDeviceResources(const ListDeviceResourcesRequest &request);
    ListDevicesResponse * listDevices(const ListDevicesRequest &request);
    ListExecutionsResponse * listExecutions(const ListExecutionsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTasksResponse * listTasks(const ListTasksRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(SnowDeviceManagementClient)
    Q_DISABLE_COPY(SnowDeviceManagementClient)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
