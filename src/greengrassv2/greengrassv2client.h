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

#ifndef QTAWS_GREENGRASSV2CLIENT_H
#define QTAWS_GREENGRASSV2CLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace GreengrassV2 {

class GreengrassV2ClientPrivate;
class BatchAssociateClientDeviceWithCoreDeviceRequest;
class BatchAssociateClientDeviceWithCoreDeviceResponse;
class BatchDisassociateClientDeviceFromCoreDeviceRequest;
class BatchDisassociateClientDeviceFromCoreDeviceResponse;
class CancelDeploymentRequest;
class CancelDeploymentResponse;
class CreateComponentVersionRequest;
class CreateComponentVersionResponse;
class CreateDeploymentRequest;
class CreateDeploymentResponse;
class DeleteComponentRequest;
class DeleteComponentResponse;
class DeleteCoreDeviceRequest;
class DeleteCoreDeviceResponse;
class DescribeComponentRequest;
class DescribeComponentResponse;
class GetComponentRequest;
class GetComponentResponse;
class GetComponentVersionArtifactRequest;
class GetComponentVersionArtifactResponse;
class GetCoreDeviceRequest;
class GetCoreDeviceResponse;
class GetDeploymentRequest;
class GetDeploymentResponse;
class ListClientDevicesAssociatedWithCoreDeviceRequest;
class ListClientDevicesAssociatedWithCoreDeviceResponse;
class ListComponentVersionsRequest;
class ListComponentVersionsResponse;
class ListComponentsRequest;
class ListComponentsResponse;
class ListCoreDevicesRequest;
class ListCoreDevicesResponse;
class ListDeploymentsRequest;
class ListDeploymentsResponse;
class ListEffectiveDeploymentsRequest;
class ListEffectiveDeploymentsResponse;
class ListInstalledComponentsRequest;
class ListInstalledComponentsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ResolveComponentCandidatesRequest;
class ResolveComponentCandidatesResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWS_EXPORT GreengrassV2Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GreengrassV2Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    GreengrassV2Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchAssociateClientDeviceWithCoreDeviceResponse * batchAssociateClientDeviceWithCoreDevice(const BatchAssociateClientDeviceWithCoreDeviceRequest &request);
    BatchDisassociateClientDeviceFromCoreDeviceResponse * batchDisassociateClientDeviceFromCoreDevice(const BatchDisassociateClientDeviceFromCoreDeviceRequest &request);
    CancelDeploymentResponse * cancelDeployment(const CancelDeploymentRequest &request);
    CreateComponentVersionResponse * createComponentVersion(const CreateComponentVersionRequest &request);
    CreateDeploymentResponse * createDeployment(const CreateDeploymentRequest &request);
    DeleteComponentResponse * deleteComponent(const DeleteComponentRequest &request);
    DeleteCoreDeviceResponse * deleteCoreDevice(const DeleteCoreDeviceRequest &request);
    DescribeComponentResponse * describeComponent(const DescribeComponentRequest &request);
    GetComponentResponse * getComponent(const GetComponentRequest &request);
    GetComponentVersionArtifactResponse * getComponentVersionArtifact(const GetComponentVersionArtifactRequest &request);
    GetCoreDeviceResponse * getCoreDevice(const GetCoreDeviceRequest &request);
    GetDeploymentResponse * getDeployment(const GetDeploymentRequest &request);
    ListClientDevicesAssociatedWithCoreDeviceResponse * listClientDevicesAssociatedWithCoreDevice(const ListClientDevicesAssociatedWithCoreDeviceRequest &request);
    ListComponentVersionsResponse * listComponentVersions(const ListComponentVersionsRequest &request);
    ListComponentsResponse * listComponents(const ListComponentsRequest &request);
    ListCoreDevicesResponse * listCoreDevices(const ListCoreDevicesRequest &request);
    ListDeploymentsResponse * listDeployments(const ListDeploymentsRequest &request);
    ListEffectiveDeploymentsResponse * listEffectiveDeployments(const ListEffectiveDeploymentsRequest &request);
    ListInstalledComponentsResponse * listInstalledComponents(const ListInstalledComponentsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ResolveComponentCandidatesResponse * resolveComponentCandidates(const ResolveComponentCandidatesRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(GreengrassV2Client)
    Q_DISABLE_COPY(GreengrassV2Client)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
