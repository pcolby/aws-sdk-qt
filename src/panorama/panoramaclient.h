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

#ifndef QTAWS_PANORAMACLIENT_H
#define QTAWS_PANORAMACLIENT_H

#include "core/awsabstractclient.h"

#include "qtawspanoramaglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Panorama {

class PanoramaClientPrivate;
class CreateApplicationInstanceRequest;
class CreateApplicationInstanceResponse;
class CreateJobForDevicesRequest;
class CreateJobForDevicesResponse;
class CreateNodeFromTemplateJobRequest;
class CreateNodeFromTemplateJobResponse;
class CreatePackageRequest;
class CreatePackageResponse;
class CreatePackageImportJobRequest;
class CreatePackageImportJobResponse;
class DeleteDeviceRequest;
class DeleteDeviceResponse;
class DeletePackageRequest;
class DeletePackageResponse;
class DeregisterPackageVersionRequest;
class DeregisterPackageVersionResponse;
class DescribeApplicationInstanceRequest;
class DescribeApplicationInstanceResponse;
class DescribeApplicationInstanceDetailsRequest;
class DescribeApplicationInstanceDetailsResponse;
class DescribeDeviceRequest;
class DescribeDeviceResponse;
class DescribeDeviceJobRequest;
class DescribeDeviceJobResponse;
class DescribeNodeRequest;
class DescribeNodeResponse;
class DescribeNodeFromTemplateJobRequest;
class DescribeNodeFromTemplateJobResponse;
class DescribePackageRequest;
class DescribePackageResponse;
class DescribePackageImportJobRequest;
class DescribePackageImportJobResponse;
class DescribePackageVersionRequest;
class DescribePackageVersionResponse;
class ListApplicationInstanceDependenciesRequest;
class ListApplicationInstanceDependenciesResponse;
class ListApplicationInstanceNodeInstancesRequest;
class ListApplicationInstanceNodeInstancesResponse;
class ListApplicationInstancesRequest;
class ListApplicationInstancesResponse;
class ListDevicesRequest;
class ListDevicesResponse;
class ListDevicesJobsRequest;
class ListDevicesJobsResponse;
class ListNodeFromTemplateJobsRequest;
class ListNodeFromTemplateJobsResponse;
class ListNodesRequest;
class ListNodesResponse;
class ListPackageImportJobsRequest;
class ListPackageImportJobsResponse;
class ListPackagesRequest;
class ListPackagesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ProvisionDeviceRequest;
class ProvisionDeviceResponse;
class RegisterPackageVersionRequest;
class RegisterPackageVersionResponse;
class RemoveApplicationInstanceRequest;
class RemoveApplicationInstanceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDeviceMetadataRequest;
class UpdateDeviceMetadataResponse;

class QTAWSPANORAMA_EXPORT PanoramaClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PanoramaClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit PanoramaClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateApplicationInstanceResponse * createApplicationInstance(const CreateApplicationInstanceRequest &request);
    CreateJobForDevicesResponse * createJobForDevices(const CreateJobForDevicesRequest &request);
    CreateNodeFromTemplateJobResponse * createNodeFromTemplateJob(const CreateNodeFromTemplateJobRequest &request);
    CreatePackageResponse * createPackage(const CreatePackageRequest &request);
    CreatePackageImportJobResponse * createPackageImportJob(const CreatePackageImportJobRequest &request);
    DeleteDeviceResponse * deleteDevice(const DeleteDeviceRequest &request);
    DeletePackageResponse * deletePackage(const DeletePackageRequest &request);
    DeregisterPackageVersionResponse * deregisterPackageVersion(const DeregisterPackageVersionRequest &request);
    DescribeApplicationInstanceResponse * describeApplicationInstance(const DescribeApplicationInstanceRequest &request);
    DescribeApplicationInstanceDetailsResponse * describeApplicationInstanceDetails(const DescribeApplicationInstanceDetailsRequest &request);
    DescribeDeviceResponse * describeDevice(const DescribeDeviceRequest &request);
    DescribeDeviceJobResponse * describeDeviceJob(const DescribeDeviceJobRequest &request);
    DescribeNodeResponse * describeNode(const DescribeNodeRequest &request);
    DescribeNodeFromTemplateJobResponse * describeNodeFromTemplateJob(const DescribeNodeFromTemplateJobRequest &request);
    DescribePackageResponse * describePackage(const DescribePackageRequest &request);
    DescribePackageImportJobResponse * describePackageImportJob(const DescribePackageImportJobRequest &request);
    DescribePackageVersionResponse * describePackageVersion(const DescribePackageVersionRequest &request);
    ListApplicationInstanceDependenciesResponse * listApplicationInstanceDependencies(const ListApplicationInstanceDependenciesRequest &request);
    ListApplicationInstanceNodeInstancesResponse * listApplicationInstanceNodeInstances(const ListApplicationInstanceNodeInstancesRequest &request);
    ListApplicationInstancesResponse * listApplicationInstances(const ListApplicationInstancesRequest &request);
    ListDevicesResponse * listDevices(const ListDevicesRequest &request);
    ListDevicesJobsResponse * listDevicesJobs(const ListDevicesJobsRequest &request);
    ListNodeFromTemplateJobsResponse * listNodeFromTemplateJobs(const ListNodeFromTemplateJobsRequest &request);
    ListNodesResponse * listNodes(const ListNodesRequest &request);
    ListPackageImportJobsResponse * listPackageImportJobs(const ListPackageImportJobsRequest &request);
    ListPackagesResponse * listPackages(const ListPackagesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ProvisionDeviceResponse * provisionDevice(const ProvisionDeviceRequest &request);
    RegisterPackageVersionResponse * registerPackageVersion(const RegisterPackageVersionRequest &request);
    RemoveApplicationInstanceResponse * removeApplicationInstance(const RemoveApplicationInstanceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDeviceMetadataResponse * updateDeviceMetadata(const UpdateDeviceMetadataRequest &request);

private:
    Q_DECLARE_PRIVATE(PanoramaClient)
    Q_DISABLE_COPY(PanoramaClient)

};

} // namespace Panorama
} // namespace QtAws

#endif
