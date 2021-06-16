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

#ifndef QTAWS_LIGHTSAILCLIENT_H
#define QTAWS_LIGHTSAILCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Lightsail {

class LightsailClientPrivate;
class AllocateStaticIpRequest;
class AllocateStaticIpResponse;
class AttachCertificateToDistributionRequest;
class AttachCertificateToDistributionResponse;
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
class CopySnapshotRequest;
class CopySnapshotResponse;
class CreateCertificateRequest;
class CreateCertificateResponse;
class CreateCloudFormationStackRequest;
class CreateCloudFormationStackResponse;
class CreateContactMethodRequest;
class CreateContactMethodResponse;
class CreateContainerServiceRequest;
class CreateContainerServiceResponse;
class CreateContainerServiceDeploymentRequest;
class CreateContainerServiceDeploymentResponse;
class CreateContainerServiceRegistryLoginRequest;
class CreateContainerServiceRegistryLoginResponse;
class CreateDiskRequest;
class CreateDiskResponse;
class CreateDiskFromSnapshotRequest;
class CreateDiskFromSnapshotResponse;
class CreateDiskSnapshotRequest;
class CreateDiskSnapshotResponse;
class CreateDistributionRequest;
class CreateDistributionResponse;
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
class CreateRelationalDatabaseRequest;
class CreateRelationalDatabaseResponse;
class CreateRelationalDatabaseFromSnapshotRequest;
class CreateRelationalDatabaseFromSnapshotResponse;
class CreateRelationalDatabaseSnapshotRequest;
class CreateRelationalDatabaseSnapshotResponse;
class DeleteAlarmRequest;
class DeleteAlarmResponse;
class DeleteAutoSnapshotRequest;
class DeleteAutoSnapshotResponse;
class DeleteCertificateRequest;
class DeleteCertificateResponse;
class DeleteContactMethodRequest;
class DeleteContactMethodResponse;
class DeleteContainerImageRequest;
class DeleteContainerImageResponse;
class DeleteContainerServiceRequest;
class DeleteContainerServiceResponse;
class DeleteDiskRequest;
class DeleteDiskResponse;
class DeleteDiskSnapshotRequest;
class DeleteDiskSnapshotResponse;
class DeleteDistributionRequest;
class DeleteDistributionResponse;
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
class DeleteKnownHostKeysRequest;
class DeleteKnownHostKeysResponse;
class DeleteLoadBalancerRequest;
class DeleteLoadBalancerResponse;
class DeleteLoadBalancerTlsCertificateRequest;
class DeleteLoadBalancerTlsCertificateResponse;
class DeleteRelationalDatabaseRequest;
class DeleteRelationalDatabaseResponse;
class DeleteRelationalDatabaseSnapshotRequest;
class DeleteRelationalDatabaseSnapshotResponse;
class DetachCertificateFromDistributionRequest;
class DetachCertificateFromDistributionResponse;
class DetachDiskRequest;
class DetachDiskResponse;
class DetachInstancesFromLoadBalancerRequest;
class DetachInstancesFromLoadBalancerResponse;
class DetachStaticIpRequest;
class DetachStaticIpResponse;
class DisableAddOnRequest;
class DisableAddOnResponse;
class DownloadDefaultKeyPairRequest;
class DownloadDefaultKeyPairResponse;
class EnableAddOnRequest;
class EnableAddOnResponse;
class ExportSnapshotRequest;
class ExportSnapshotResponse;
class GetActiveNamesRequest;
class GetActiveNamesResponse;
class GetAlarmsRequest;
class GetAlarmsResponse;
class GetAutoSnapshotsRequest;
class GetAutoSnapshotsResponse;
class GetBlueprintsRequest;
class GetBlueprintsResponse;
class GetBundlesRequest;
class GetBundlesResponse;
class GetCertificatesRequest;
class GetCertificatesResponse;
class GetCloudFormationStackRecordsRequest;
class GetCloudFormationStackRecordsResponse;
class GetContactMethodsRequest;
class GetContactMethodsResponse;
class GetContainerAPIMetadataRequest;
class GetContainerAPIMetadataResponse;
class GetContainerImagesRequest;
class GetContainerImagesResponse;
class GetContainerLogRequest;
class GetContainerLogResponse;
class GetContainerServiceDeploymentsRequest;
class GetContainerServiceDeploymentsResponse;
class GetContainerServiceMetricDataRequest;
class GetContainerServiceMetricDataResponse;
class GetContainerServicePowersRequest;
class GetContainerServicePowersResponse;
class GetContainerServicesRequest;
class GetContainerServicesResponse;
class GetDiskRequest;
class GetDiskResponse;
class GetDiskSnapshotRequest;
class GetDiskSnapshotResponse;
class GetDiskSnapshotsRequest;
class GetDiskSnapshotsResponse;
class GetDisksRequest;
class GetDisksResponse;
class GetDistributionBundlesRequest;
class GetDistributionBundlesResponse;
class GetDistributionLatestCacheResetRequest;
class GetDistributionLatestCacheResetResponse;
class GetDistributionMetricDataRequest;
class GetDistributionMetricDataResponse;
class GetDistributionsRequest;
class GetDistributionsResponse;
class GetDomainRequest;
class GetDomainResponse;
class GetDomainsRequest;
class GetDomainsResponse;
class GetExportSnapshotRecordsRequest;
class GetExportSnapshotRecordsResponse;
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
class GetRelationalDatabaseRequest;
class GetRelationalDatabaseResponse;
class GetRelationalDatabaseBlueprintsRequest;
class GetRelationalDatabaseBlueprintsResponse;
class GetRelationalDatabaseBundlesRequest;
class GetRelationalDatabaseBundlesResponse;
class GetRelationalDatabaseEventsRequest;
class GetRelationalDatabaseEventsResponse;
class GetRelationalDatabaseLogEventsRequest;
class GetRelationalDatabaseLogEventsResponse;
class GetRelationalDatabaseLogStreamsRequest;
class GetRelationalDatabaseLogStreamsResponse;
class GetRelationalDatabaseMasterUserPasswordRequest;
class GetRelationalDatabaseMasterUserPasswordResponse;
class GetRelationalDatabaseMetricDataRequest;
class GetRelationalDatabaseMetricDataResponse;
class GetRelationalDatabaseParametersRequest;
class GetRelationalDatabaseParametersResponse;
class GetRelationalDatabaseSnapshotRequest;
class GetRelationalDatabaseSnapshotResponse;
class GetRelationalDatabaseSnapshotsRequest;
class GetRelationalDatabaseSnapshotsResponse;
class GetRelationalDatabasesRequest;
class GetRelationalDatabasesResponse;
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
class PutAlarmRequest;
class PutAlarmResponse;
class PutInstancePublicPortsRequest;
class PutInstancePublicPortsResponse;
class RebootInstanceRequest;
class RebootInstanceResponse;
class RebootRelationalDatabaseRequest;
class RebootRelationalDatabaseResponse;
class RegisterContainerImageRequest;
class RegisterContainerImageResponse;
class ReleaseStaticIpRequest;
class ReleaseStaticIpResponse;
class ResetDistributionCacheRequest;
class ResetDistributionCacheResponse;
class SendContactMethodVerificationRequest;
class SendContactMethodVerificationResponse;
class SetIpAddressTypeRequest;
class SetIpAddressTypeResponse;
class StartInstanceRequest;
class StartInstanceResponse;
class StartRelationalDatabaseRequest;
class StartRelationalDatabaseResponse;
class StopInstanceRequest;
class StopInstanceResponse;
class StopRelationalDatabaseRequest;
class StopRelationalDatabaseResponse;
class TagResourceRequest;
class TagResourceResponse;
class TestAlarmRequest;
class TestAlarmResponse;
class UnpeerVpcRequest;
class UnpeerVpcResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateContainerServiceRequest;
class UpdateContainerServiceResponse;
class UpdateDistributionRequest;
class UpdateDistributionResponse;
class UpdateDistributionBundleRequest;
class UpdateDistributionBundleResponse;
class UpdateDomainEntryRequest;
class UpdateDomainEntryResponse;
class UpdateLoadBalancerAttributeRequest;
class UpdateLoadBalancerAttributeResponse;
class UpdateRelationalDatabaseRequest;
class UpdateRelationalDatabaseResponse;
class UpdateRelationalDatabaseParametersRequest;
class UpdateRelationalDatabaseParametersResponse;

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
    AttachCertificateToDistributionResponse * attachCertificateToDistribution(const AttachCertificateToDistributionRequest &request);
    AttachDiskResponse * attachDisk(const AttachDiskRequest &request);
    AttachInstancesToLoadBalancerResponse * attachInstancesToLoadBalancer(const AttachInstancesToLoadBalancerRequest &request);
    AttachLoadBalancerTlsCertificateResponse * attachLoadBalancerTlsCertificate(const AttachLoadBalancerTlsCertificateRequest &request);
    AttachStaticIpResponse * attachStaticIp(const AttachStaticIpRequest &request);
    CloseInstancePublicPortsResponse * closeInstancePublicPorts(const CloseInstancePublicPortsRequest &request);
    CopySnapshotResponse * copySnapshot(const CopySnapshotRequest &request);
    CreateCertificateResponse * createCertificate(const CreateCertificateRequest &request);
    CreateCloudFormationStackResponse * createCloudFormationStack(const CreateCloudFormationStackRequest &request);
    CreateContactMethodResponse * createContactMethod(const CreateContactMethodRequest &request);
    CreateContainerServiceResponse * createContainerService(const CreateContainerServiceRequest &request);
    CreateContainerServiceDeploymentResponse * createContainerServiceDeployment(const CreateContainerServiceDeploymentRequest &request);
    CreateContainerServiceRegistryLoginResponse * createContainerServiceRegistryLogin(const CreateContainerServiceRegistryLoginRequest &request);
    CreateDiskResponse * createDisk(const CreateDiskRequest &request);
    CreateDiskFromSnapshotResponse * createDiskFromSnapshot(const CreateDiskFromSnapshotRequest &request);
    CreateDiskSnapshotResponse * createDiskSnapshot(const CreateDiskSnapshotRequest &request);
    CreateDistributionResponse * createDistribution(const CreateDistributionRequest &request);
    CreateDomainResponse * createDomain(const CreateDomainRequest &request);
    CreateDomainEntryResponse * createDomainEntry(const CreateDomainEntryRequest &request);
    CreateInstanceSnapshotResponse * createInstanceSnapshot(const CreateInstanceSnapshotRequest &request);
    CreateInstancesResponse * createInstances(const CreateInstancesRequest &request);
    CreateInstancesFromSnapshotResponse * createInstancesFromSnapshot(const CreateInstancesFromSnapshotRequest &request);
    CreateKeyPairResponse * createKeyPair(const CreateKeyPairRequest &request);
    CreateLoadBalancerResponse * createLoadBalancer(const CreateLoadBalancerRequest &request);
    CreateLoadBalancerTlsCertificateResponse * createLoadBalancerTlsCertificate(const CreateLoadBalancerTlsCertificateRequest &request);
    CreateRelationalDatabaseResponse * createRelationalDatabase(const CreateRelationalDatabaseRequest &request);
    CreateRelationalDatabaseFromSnapshotResponse * createRelationalDatabaseFromSnapshot(const CreateRelationalDatabaseFromSnapshotRequest &request);
    CreateRelationalDatabaseSnapshotResponse * createRelationalDatabaseSnapshot(const CreateRelationalDatabaseSnapshotRequest &request);
    DeleteAlarmResponse * deleteAlarm(const DeleteAlarmRequest &request);
    DeleteAutoSnapshotResponse * deleteAutoSnapshot(const DeleteAutoSnapshotRequest &request);
    DeleteCertificateResponse * deleteCertificate(const DeleteCertificateRequest &request);
    DeleteContactMethodResponse * deleteContactMethod(const DeleteContactMethodRequest &request);
    DeleteContainerImageResponse * deleteContainerImage(const DeleteContainerImageRequest &request);
    DeleteContainerServiceResponse * deleteContainerService(const DeleteContainerServiceRequest &request);
    DeleteDiskResponse * deleteDisk(const DeleteDiskRequest &request);
    DeleteDiskSnapshotResponse * deleteDiskSnapshot(const DeleteDiskSnapshotRequest &request);
    DeleteDistributionResponse * deleteDistribution(const DeleteDistributionRequest &request);
    DeleteDomainResponse * deleteDomain(const DeleteDomainRequest &request);
    DeleteDomainEntryResponse * deleteDomainEntry(const DeleteDomainEntryRequest &request);
    DeleteInstanceResponse * deleteInstance(const DeleteInstanceRequest &request);
    DeleteInstanceSnapshotResponse * deleteInstanceSnapshot(const DeleteInstanceSnapshotRequest &request);
    DeleteKeyPairResponse * deleteKeyPair(const DeleteKeyPairRequest &request);
    DeleteKnownHostKeysResponse * deleteKnownHostKeys(const DeleteKnownHostKeysRequest &request);
    DeleteLoadBalancerResponse * deleteLoadBalancer(const DeleteLoadBalancerRequest &request);
    DeleteLoadBalancerTlsCertificateResponse * deleteLoadBalancerTlsCertificate(const DeleteLoadBalancerTlsCertificateRequest &request);
    DeleteRelationalDatabaseResponse * deleteRelationalDatabase(const DeleteRelationalDatabaseRequest &request);
    DeleteRelationalDatabaseSnapshotResponse * deleteRelationalDatabaseSnapshot(const DeleteRelationalDatabaseSnapshotRequest &request);
    DetachCertificateFromDistributionResponse * detachCertificateFromDistribution(const DetachCertificateFromDistributionRequest &request);
    DetachDiskResponse * detachDisk(const DetachDiskRequest &request);
    DetachInstancesFromLoadBalancerResponse * detachInstancesFromLoadBalancer(const DetachInstancesFromLoadBalancerRequest &request);
    DetachStaticIpResponse * detachStaticIp(const DetachStaticIpRequest &request);
    DisableAddOnResponse * disableAddOn(const DisableAddOnRequest &request);
    DownloadDefaultKeyPairResponse * downloadDefaultKeyPair(const DownloadDefaultKeyPairRequest &request);
    EnableAddOnResponse * enableAddOn(const EnableAddOnRequest &request);
    ExportSnapshotResponse * exportSnapshot(const ExportSnapshotRequest &request);
    GetActiveNamesResponse * getActiveNames(const GetActiveNamesRequest &request);
    GetAlarmsResponse * getAlarms(const GetAlarmsRequest &request);
    GetAutoSnapshotsResponse * getAutoSnapshots(const GetAutoSnapshotsRequest &request);
    GetBlueprintsResponse * getBlueprints(const GetBlueprintsRequest &request);
    GetBundlesResponse * getBundles(const GetBundlesRequest &request);
    GetCertificatesResponse * getCertificates(const GetCertificatesRequest &request);
    GetCloudFormationStackRecordsResponse * getCloudFormationStackRecords(const GetCloudFormationStackRecordsRequest &request);
    GetContactMethodsResponse * getContactMethods(const GetContactMethodsRequest &request);
    GetContainerAPIMetadataResponse * getContainerAPIMetadata(const GetContainerAPIMetadataRequest &request);
    GetContainerImagesResponse * getContainerImages(const GetContainerImagesRequest &request);
    GetContainerLogResponse * getContainerLog(const GetContainerLogRequest &request);
    GetContainerServiceDeploymentsResponse * getContainerServiceDeployments(const GetContainerServiceDeploymentsRequest &request);
    GetContainerServiceMetricDataResponse * getContainerServiceMetricData(const GetContainerServiceMetricDataRequest &request);
    GetContainerServicePowersResponse * getContainerServicePowers(const GetContainerServicePowersRequest &request);
    GetContainerServicesResponse * getContainerServices(const GetContainerServicesRequest &request);
    GetDiskResponse * getDisk(const GetDiskRequest &request);
    GetDiskSnapshotResponse * getDiskSnapshot(const GetDiskSnapshotRequest &request);
    GetDiskSnapshotsResponse * getDiskSnapshots(const GetDiskSnapshotsRequest &request);
    GetDisksResponse * getDisks(const GetDisksRequest &request);
    GetDistributionBundlesResponse * getDistributionBundles(const GetDistributionBundlesRequest &request);
    GetDistributionLatestCacheResetResponse * getDistributionLatestCacheReset(const GetDistributionLatestCacheResetRequest &request);
    GetDistributionMetricDataResponse * getDistributionMetricData(const GetDistributionMetricDataRequest &request);
    GetDistributionsResponse * getDistributions(const GetDistributionsRequest &request);
    GetDomainResponse * getDomain(const GetDomainRequest &request);
    GetDomainsResponse * getDomains(const GetDomainsRequest &request);
    GetExportSnapshotRecordsResponse * getExportSnapshotRecords(const GetExportSnapshotRecordsRequest &request);
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
    GetRelationalDatabaseResponse * getRelationalDatabase(const GetRelationalDatabaseRequest &request);
    GetRelationalDatabaseBlueprintsResponse * getRelationalDatabaseBlueprints(const GetRelationalDatabaseBlueprintsRequest &request);
    GetRelationalDatabaseBundlesResponse * getRelationalDatabaseBundles(const GetRelationalDatabaseBundlesRequest &request);
    GetRelationalDatabaseEventsResponse * getRelationalDatabaseEvents(const GetRelationalDatabaseEventsRequest &request);
    GetRelationalDatabaseLogEventsResponse * getRelationalDatabaseLogEvents(const GetRelationalDatabaseLogEventsRequest &request);
    GetRelationalDatabaseLogStreamsResponse * getRelationalDatabaseLogStreams(const GetRelationalDatabaseLogStreamsRequest &request);
    GetRelationalDatabaseMasterUserPasswordResponse * getRelationalDatabaseMasterUserPassword(const GetRelationalDatabaseMasterUserPasswordRequest &request);
    GetRelationalDatabaseMetricDataResponse * getRelationalDatabaseMetricData(const GetRelationalDatabaseMetricDataRequest &request);
    GetRelationalDatabaseParametersResponse * getRelationalDatabaseParameters(const GetRelationalDatabaseParametersRequest &request);
    GetRelationalDatabaseSnapshotResponse * getRelationalDatabaseSnapshot(const GetRelationalDatabaseSnapshotRequest &request);
    GetRelationalDatabaseSnapshotsResponse * getRelationalDatabaseSnapshots(const GetRelationalDatabaseSnapshotsRequest &request);
    GetRelationalDatabasesResponse * getRelationalDatabases(const GetRelationalDatabasesRequest &request);
    GetStaticIpResponse * getStaticIp(const GetStaticIpRequest &request);
    GetStaticIpsResponse * getStaticIps(const GetStaticIpsRequest &request);
    ImportKeyPairResponse * importKeyPair(const ImportKeyPairRequest &request);
    IsVpcPeeredResponse * isVpcPeered(const IsVpcPeeredRequest &request);
    OpenInstancePublicPortsResponse * openInstancePublicPorts(const OpenInstancePublicPortsRequest &request);
    PeerVpcResponse * peerVpc(const PeerVpcRequest &request);
    PutAlarmResponse * putAlarm(const PutAlarmRequest &request);
    PutInstancePublicPortsResponse * putInstancePublicPorts(const PutInstancePublicPortsRequest &request);
    RebootInstanceResponse * rebootInstance(const RebootInstanceRequest &request);
    RebootRelationalDatabaseResponse * rebootRelationalDatabase(const RebootRelationalDatabaseRequest &request);
    RegisterContainerImageResponse * registerContainerImage(const RegisterContainerImageRequest &request);
    ReleaseStaticIpResponse * releaseStaticIp(const ReleaseStaticIpRequest &request);
    ResetDistributionCacheResponse * resetDistributionCache(const ResetDistributionCacheRequest &request);
    SendContactMethodVerificationResponse * sendContactMethodVerification(const SendContactMethodVerificationRequest &request);
    SetIpAddressTypeResponse * setIpAddressType(const SetIpAddressTypeRequest &request);
    StartInstanceResponse * startInstance(const StartInstanceRequest &request);
    StartRelationalDatabaseResponse * startRelationalDatabase(const StartRelationalDatabaseRequest &request);
    StopInstanceResponse * stopInstance(const StopInstanceRequest &request);
    StopRelationalDatabaseResponse * stopRelationalDatabase(const StopRelationalDatabaseRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TestAlarmResponse * testAlarm(const TestAlarmRequest &request);
    UnpeerVpcResponse * unpeerVpc(const UnpeerVpcRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateContainerServiceResponse * updateContainerService(const UpdateContainerServiceRequest &request);
    UpdateDistributionResponse * updateDistribution(const UpdateDistributionRequest &request);
    UpdateDistributionBundleResponse * updateDistributionBundle(const UpdateDistributionBundleRequest &request);
    UpdateDomainEntryResponse * updateDomainEntry(const UpdateDomainEntryRequest &request);
    UpdateLoadBalancerAttributeResponse * updateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest &request);
    UpdateRelationalDatabaseResponse * updateRelationalDatabase(const UpdateRelationalDatabaseRequest &request);
    UpdateRelationalDatabaseParametersResponse * updateRelationalDatabaseParameters(const UpdateRelationalDatabaseParametersRequest &request);

private:
    Q_DECLARE_PRIVATE(LightsailClient)
    Q_DISABLE_COPY(LightsailClient)

};

} // namespace Lightsail
} // namespace QtAws

#endif
