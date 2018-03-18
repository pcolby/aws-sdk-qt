/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LIGHTSAILCLIENT_H
#define QTAWS_LIGHTSAILCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Lightsail {

class LightsailClientPrivate;

class QTAWS_EXPORT LightsailClient : public AwsAbstractClient {
    Q_OBJECT

public:
    LightsailClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    LightsailClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
} // namespace AWS

#endif
