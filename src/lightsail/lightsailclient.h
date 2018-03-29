/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LIGHTSAILCLIENT_H
#define QTAWS_LIGHTSAILCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Lightsail {

class LightsailClientPrivate;
class AllocateStaticIpRequest;
class AllocateStaticIpResponse;
class AttachDiskRequest;
class AttachDiskResponse;
class AttachInstancesToLoadBalancerRequest;
class AttachInstancesToLoadBalancerResponse;
class AttachLoadBalancerTlsCertificateRequest;
class AttachLoadBalancerTlsCertificateResponse;
class AttachStaticIpRequest;
class AttachStaticIpResponse;
class CloseInstancePublicPortsRequest;
class CloseInstancePublicPortsResponse;
class CreateDiskRequest;
class CreateDiskResponse;
class CreateDiskFromSnapshotRequest;
class CreateDiskFromSnapshotResponse;
class CreateDiskSnapshotRequest;
class CreateDiskSnapshotResponse;
class CreateDomainRequest;
class CreateDomainResponse;
class CreateDomainEntryRequest;
class CreateDomainEntryResponse;
class CreateInstanceSnapshotRequest;
class CreateInstanceSnapshotResponse;
class CreateInstancesRequest;
class CreateInstancesResponse;
class CreateInstancesFromSnapshotRequest;
class CreateInstancesFromSnapshotResponse;
class CreateKeyPairRequest;
class CreateKeyPairResponse;
class CreateLoadBalancerRequest;
class CreateLoadBalancerResponse;
class CreateLoadBalancerTlsCertificateRequest;
class CreateLoadBalancerTlsCertificateResponse;
class DeleteDiskRequest;
class DeleteDiskResponse;
class DeleteDiskSnapshotRequest;
class DeleteDiskSnapshotResponse;
class DeleteDomainRequest;
class DeleteDomainResponse;
class DeleteDomainEntryRequest;
class DeleteDomainEntryResponse;
class DeleteInstanceRequest;
class DeleteInstanceResponse;
class DeleteInstanceSnapshotRequest;
class DeleteInstanceSnapshotResponse;
class DeleteKeyPairRequest;
class DeleteKeyPairResponse;
class DeleteLoadBalancerRequest;
class DeleteLoadBalancerResponse;
class DeleteLoadBalancerTlsCertificateRequest;
class DeleteLoadBalancerTlsCertificateResponse;
class DetachDiskRequest;
class DetachDiskResponse;
class DetachInstancesFromLoadBalancerRequest;
class DetachInstancesFromLoadBalancerResponse;
class DetachStaticIpRequest;
class DetachStaticIpResponse;
class DownloadDefaultKeyPairRequest;
class DownloadDefaultKeyPairResponse;
class GetActiveNamesRequest;
class GetActiveNamesResponse;
class GetBlueprintsRequest;
class GetBlueprintsResponse;
class GetBundlesRequest;
class GetBundlesResponse;
class GetDiskRequest;
class GetDiskResponse;
class GetDiskSnapshotRequest;
class GetDiskSnapshotResponse;
class GetDiskSnapshotsRequest;
class GetDiskSnapshotsResponse;
class GetDisksRequest;
class GetDisksResponse;
class GetDomainRequest;
class GetDomainResponse;
class GetDomainsRequest;
class GetDomainsResponse;
class GetInstanceRequest;
class GetInstanceResponse;
class GetInstanceAccessDetailsRequest;
class GetInstanceAccessDetailsResponse;
class GetInstanceMetricDataRequest;
class GetInstanceMetricDataResponse;
class GetInstancePortStatesRequest;
class GetInstancePortStatesResponse;
class GetInstanceSnapshotRequest;
class GetInstanceSnapshotResponse;
class GetInstanceSnapshotsRequest;
class GetInstanceSnapshotsResponse;
class GetInstanceStateRequest;
class GetInstanceStateResponse;
class GetInstancesRequest;
class GetInstancesResponse;
class GetKeyPairRequest;
class GetKeyPairResponse;
class GetKeyPairsRequest;
class GetKeyPairsResponse;
class GetLoadBalancerRequest;
class GetLoadBalancerResponse;
class GetLoadBalancerMetricDataRequest;
class GetLoadBalancerMetricDataResponse;
class GetLoadBalancerTlsCertificatesRequest;
class GetLoadBalancerTlsCertificatesResponse;
class GetLoadBalancersRequest;
class GetLoadBalancersResponse;
class GetOperationRequest;
class GetOperationResponse;
class GetOperationsRequest;
class GetOperationsResponse;
class GetOperationsForResourceRequest;
class GetOperationsForResourceResponse;
class GetRegionsRequest;
class GetRegionsResponse;
class GetStaticIpRequest;
class GetStaticIpResponse;
class GetStaticIpsRequest;
class GetStaticIpsResponse;
class ImportKeyPairRequest;
class ImportKeyPairResponse;
class IsVpcPeeredRequest;
class IsVpcPeeredResponse;
class OpenInstancePublicPortsRequest;
class OpenInstancePublicPortsResponse;
class PeerVpcRequest;
class PeerVpcResponse;
class PutInstancePublicPortsRequest;
class PutInstancePublicPortsResponse;
class RebootInstanceRequest;
class RebootInstanceResponse;
class ReleaseStaticIpRequest;
class ReleaseStaticIpResponse;
class StartInstanceRequest;
class StartInstanceResponse;
class StopInstanceRequest;
class StopInstanceResponse;
class UnpeerVpcRequest;
class UnpeerVpcResponse;
class UpdateDomainEntryRequest;
class UpdateDomainEntryResponse;
class UpdateLoadBalancerAttributeRequest;
class UpdateLoadBalancerAttributeResponse;

class QTAWS_EXPORT LightsailClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LightsailClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    LightsailClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AllocateStaticIpResponse * allocateStaticIp(const AllocateStaticIpRequest &request);
    AttachDiskResponse * attachDisk(const AttachDiskRequest &request);
    AttachInstancesToLoadBalancerResponse * attachInstancesToLoadBalancer(const AttachInstancesToLoadBalancerRequest &request);
    AttachLoadBalancerTlsCertificateResponse * attachLoadBalancerTlsCertificate(const AttachLoadBalancerTlsCertificateRequest &request);
    AttachStaticIpResponse * attachStaticIp(const AttachStaticIpRequest &request);
    CloseInstancePublicPortsResponse * closeInstancePublicPorts(const CloseInstancePublicPortsRequest &request);
    CreateDiskResponse * createDisk(const CreateDiskRequest &request);
    CreateDiskFromSnapshotResponse * createDiskFromSnapshot(const CreateDiskFromSnapshotRequest &request);
    CreateDiskSnapshotResponse * createDiskSnapshot(const CreateDiskSnapshotRequest &request);
    CreateDomainResponse * createDomain(const CreateDomainRequest &request);
    CreateDomainEntryResponse * createDomainEntry(const CreateDomainEntryRequest &request);
    CreateInstanceSnapshotResponse * createInstanceSnapshot(const CreateInstanceSnapshotRequest &request);
    CreateInstancesResponse * createInstances(const CreateInstancesRequest &request);
    CreateInstancesFromSnapshotResponse * createInstancesFromSnapshot(const CreateInstancesFromSnapshotRequest &request);
    CreateKeyPairResponse * createKeyPair(const CreateKeyPairRequest &request);
    CreateLoadBalancerResponse * createLoadBalancer(const CreateLoadBalancerRequest &request);
    CreateLoadBalancerTlsCertificateResponse * createLoadBalancerTlsCertificate(const CreateLoadBalancerTlsCertificateRequest &request);
    DeleteDiskResponse * deleteDisk(const DeleteDiskRequest &request);
    DeleteDiskSnapshotResponse * deleteDiskSnapshot(const DeleteDiskSnapshotRequest &request);
    DeleteDomainResponse * deleteDomain(const DeleteDomainRequest &request);
    DeleteDomainEntryResponse * deleteDomainEntry(const DeleteDomainEntryRequest &request);
    DeleteInstanceResponse * deleteInstance(const DeleteInstanceRequest &request);
    DeleteInstanceSnapshotResponse * deleteInstanceSnapshot(const DeleteInstanceSnapshotRequest &request);
    DeleteKeyPairResponse * deleteKeyPair(const DeleteKeyPairRequest &request);
    DeleteLoadBalancerResponse * deleteLoadBalancer(const DeleteLoadBalancerRequest &request);
    DeleteLoadBalancerTlsCertificateResponse * deleteLoadBalancerTlsCertificate(const DeleteLoadBalancerTlsCertificateRequest &request);
    DetachDiskResponse * detachDisk(const DetachDiskRequest &request);
    DetachInstancesFromLoadBalancerResponse * detachInstancesFromLoadBalancer(const DetachInstancesFromLoadBalancerRequest &request);
    DetachStaticIpResponse * detachStaticIp(const DetachStaticIpRequest &request);
    DownloadDefaultKeyPairResponse * downloadDefaultKeyPair(const DownloadDefaultKeyPairRequest &request);
    GetActiveNamesResponse * getActiveNames(const GetActiveNamesRequest &request);
    GetBlueprintsResponse * getBlueprints(const GetBlueprintsRequest &request);
    GetBundlesResponse * getBundles(const GetBundlesRequest &request);
    GetDiskResponse * getDisk(const GetDiskRequest &request);
    GetDiskSnapshotResponse * getDiskSnapshot(const GetDiskSnapshotRequest &request);
    GetDiskSnapshotsResponse * getDiskSnapshots(const GetDiskSnapshotsRequest &request);
    GetDisksResponse * getDisks(const GetDisksRequest &request);
    GetDomainResponse * getDomain(const GetDomainRequest &request);
    GetDomainsResponse * getDomains(const GetDomainsRequest &request);
    GetInstanceResponse * getInstance(const GetInstanceRequest &request);
    GetInstanceAccessDetailsResponse * getInstanceAccessDetails(const GetInstanceAccessDetailsRequest &request);
    GetInstanceMetricDataResponse * getInstanceMetricData(const GetInstanceMetricDataRequest &request);
    GetInstancePortStatesResponse * getInstancePortStates(const GetInstancePortStatesRequest &request);
    GetInstanceSnapshotResponse * getInstanceSnapshot(const GetInstanceSnapshotRequest &request);
    GetInstanceSnapshotsResponse * getInstanceSnapshots(const GetInstanceSnapshotsRequest &request);
    GetInstanceStateResponse * getInstanceState(const GetInstanceStateRequest &request);
    GetInstancesResponse * getInstances(const GetInstancesRequest &request);
    GetKeyPairResponse * getKeyPair(const GetKeyPairRequest &request);
    GetKeyPairsResponse * getKeyPairs(const GetKeyPairsRequest &request);
    GetLoadBalancerResponse * getLoadBalancer(const GetLoadBalancerRequest &request);
    GetLoadBalancerMetricDataResponse * getLoadBalancerMetricData(const GetLoadBalancerMetricDataRequest &request);
    GetLoadBalancerTlsCertificatesResponse * getLoadBalancerTlsCertificates(const GetLoadBalancerTlsCertificatesRequest &request);
    GetLoadBalancersResponse * getLoadBalancers(const GetLoadBalancersRequest &request);
    GetOperationResponse * getOperation(const GetOperationRequest &request);
    GetOperationsResponse * getOperations(const GetOperationsRequest &request);
    GetOperationsForResourceResponse * getOperationsForResource(const GetOperationsForResourceRequest &request);
    GetRegionsResponse * getRegions(const GetRegionsRequest &request);
    GetStaticIpResponse * getStaticIp(const GetStaticIpRequest &request);
    GetStaticIpsResponse * getStaticIps(const GetStaticIpsRequest &request);
    ImportKeyPairResponse * importKeyPair(const ImportKeyPairRequest &request);
    IsVpcPeeredResponse * isVpcPeered(const IsVpcPeeredRequest &request);
    OpenInstancePublicPortsResponse * openInstancePublicPorts(const OpenInstancePublicPortsRequest &request);
    PeerVpcResponse * peerVpc(const PeerVpcRequest &request);
    PutInstancePublicPortsResponse * putInstancePublicPorts(const PutInstancePublicPortsRequest &request);
    RebootInstanceResponse * rebootInstance(const RebootInstanceRequest &request);
    ReleaseStaticIpResponse * releaseStaticIp(const ReleaseStaticIpRequest &request);
    StartInstanceResponse * startInstance(const StartInstanceRequest &request);
    StopInstanceResponse * stopInstance(const StopInstanceRequest &request);
    UnpeerVpcResponse * unpeerVpc(const UnpeerVpcRequest &request);
    UpdateDomainEntryResponse * updateDomainEntry(const UpdateDomainEntryRequest &request);
    UpdateLoadBalancerAttributeResponse * updateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest &request);

private:
    Q_DECLARE_PRIVATE(LightsailClient)
    Q_DISABLE_COPY(LightsailClient)

};

} // namespace Lightsail
} // namespace QtAws

#endif
