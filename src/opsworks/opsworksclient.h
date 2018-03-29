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

#ifndef QTAWS_OPSWORKSCLIENT_H
#define QTAWS_OPSWORKSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace OpsWorks {

class OpsWorksClientPrivate;
class AssignInstanceRequest;
class AssignInstanceResponse;
class AssignVolumeRequest;
class AssignVolumeResponse;
class AssociateElasticIpRequest;
class AssociateElasticIpResponse;
class AttachElasticLoadBalancerRequest;
class AttachElasticLoadBalancerResponse;
class CloneStackRequest;
class CloneStackResponse;
class CreateAppRequest;
class CreateAppResponse;
class CreateDeploymentRequest;
class CreateDeploymentResponse;
class CreateInstanceRequest;
class CreateInstanceResponse;
class CreateLayerRequest;
class CreateLayerResponse;
class CreateStackRequest;
class CreateStackResponse;
class CreateUserProfileRequest;
class CreateUserProfileResponse;
class DeleteAppRequest;
class DeleteAppResponse;
class DeleteInstanceRequest;
class DeleteInstanceResponse;
class DeleteLayerRequest;
class DeleteLayerResponse;
class DeleteStackRequest;
class DeleteStackResponse;
class DeleteUserProfileRequest;
class DeleteUserProfileResponse;
class DeregisterEcsClusterRequest;
class DeregisterEcsClusterResponse;
class DeregisterElasticIpRequest;
class DeregisterElasticIpResponse;
class DeregisterInstanceRequest;
class DeregisterInstanceResponse;
class DeregisterRdsDbInstanceRequest;
class DeregisterRdsDbInstanceResponse;
class DeregisterVolumeRequest;
class DeregisterVolumeResponse;
class DescribeAgentVersionsRequest;
class DescribeAgentVersionsResponse;
class DescribeAppsRequest;
class DescribeAppsResponse;
class DescribeCommandsRequest;
class DescribeCommandsResponse;
class DescribeDeploymentsRequest;
class DescribeDeploymentsResponse;
class DescribeEcsClustersRequest;
class DescribeEcsClustersResponse;
class DescribeElasticIpsRequest;
class DescribeElasticIpsResponse;
class DescribeElasticLoadBalancersRequest;
class DescribeElasticLoadBalancersResponse;
class DescribeInstancesRequest;
class DescribeInstancesResponse;
class DescribeLayersRequest;
class DescribeLayersResponse;
class DescribeLoadBasedAutoScalingRequest;
class DescribeLoadBasedAutoScalingResponse;
class DescribeMyUserProfileResponse;
class DescribeOperatingSystemsResponse;
class DescribePermissionsRequest;
class DescribePermissionsResponse;
class DescribeRaidArraysRequest;
class DescribeRaidArraysResponse;
class DescribeRdsDbInstancesRequest;
class DescribeRdsDbInstancesResponse;
class DescribeServiceErrorsRequest;
class DescribeServiceErrorsResponse;
class DescribeStackProvisioningParametersRequest;
class DescribeStackProvisioningParametersResponse;
class DescribeStackSummaryRequest;
class DescribeStackSummaryResponse;
class DescribeStacksRequest;
class DescribeStacksResponse;
class DescribeTimeBasedAutoScalingRequest;
class DescribeTimeBasedAutoScalingResponse;
class DescribeUserProfilesRequest;
class DescribeUserProfilesResponse;
class DescribeVolumesRequest;
class DescribeVolumesResponse;
class DetachElasticLoadBalancerRequest;
class DetachElasticLoadBalancerResponse;
class DisassociateElasticIpRequest;
class DisassociateElasticIpResponse;
class GetHostnameSuggestionRequest;
class GetHostnameSuggestionResponse;
class GrantAccessRequest;
class GrantAccessResponse;
class ListTagsRequest;
class ListTagsResponse;
class RebootInstanceRequest;
class RebootInstanceResponse;
class RegisterEcsClusterRequest;
class RegisterEcsClusterResponse;
class RegisterElasticIpRequest;
class RegisterElasticIpResponse;
class RegisterInstanceRequest;
class RegisterInstanceResponse;
class RegisterRdsDbInstanceRequest;
class RegisterRdsDbInstanceResponse;
class RegisterVolumeRequest;
class RegisterVolumeResponse;
class SetLoadBasedAutoScalingRequest;
class SetLoadBasedAutoScalingResponse;
class SetPermissionRequest;
class SetPermissionResponse;
class SetTimeBasedAutoScalingRequest;
class SetTimeBasedAutoScalingResponse;
class StartInstanceRequest;
class StartInstanceResponse;
class StartStackRequest;
class StartStackResponse;
class StopInstanceRequest;
class StopInstanceResponse;
class StopStackRequest;
class StopStackResponse;
class TagResourceRequest;
class TagResourceResponse;
class UnassignInstanceRequest;
class UnassignInstanceResponse;
class UnassignVolumeRequest;
class UnassignVolumeResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAppRequest;
class UpdateAppResponse;
class UpdateElasticIpRequest;
class UpdateElasticIpResponse;
class UpdateInstanceRequest;
class UpdateInstanceResponse;
class UpdateLayerRequest;
class UpdateLayerResponse;
class UpdateMyUserProfileRequest;
class UpdateMyUserProfileResponse;
class UpdateRdsDbInstanceRequest;
class UpdateRdsDbInstanceResponse;
class UpdateStackRequest;
class UpdateStackResponse;
class UpdateUserProfileRequest;
class UpdateUserProfileResponse;
class UpdateVolumeRequest;
class UpdateVolumeResponse;

class QTAWS_EXPORT OpsWorksClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    OpsWorksClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    OpsWorksClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssignInstanceResponse * assignInstance(const AssignInstanceRequest &request);
    AssignVolumeResponse * assignVolume(const AssignVolumeRequest &request);
    AssociateElasticIpResponse * associateElasticIp(const AssociateElasticIpRequest &request);
    AttachElasticLoadBalancerResponse * attachElasticLoadBalancer(const AttachElasticLoadBalancerRequest &request);
    CloneStackResponse * cloneStack(const CloneStackRequest &request);
    CreateAppResponse * createApp(const CreateAppRequest &request);
    CreateDeploymentResponse * createDeployment(const CreateDeploymentRequest &request);
    CreateInstanceResponse * createInstance(const CreateInstanceRequest &request);
    CreateLayerResponse * createLayer(const CreateLayerRequest &request);
    CreateStackResponse * createStack(const CreateStackRequest &request);
    CreateUserProfileResponse * createUserProfile(const CreateUserProfileRequest &request);
    DeleteAppResponse * deleteApp(const DeleteAppRequest &request);
    DeleteInstanceResponse * deleteInstance(const DeleteInstanceRequest &request);
    DeleteLayerResponse * deleteLayer(const DeleteLayerRequest &request);
    DeleteStackResponse * deleteStack(const DeleteStackRequest &request);
    DeleteUserProfileResponse * deleteUserProfile(const DeleteUserProfileRequest &request);
    DeregisterEcsClusterResponse * deregisterEcsCluster(const DeregisterEcsClusterRequest &request);
    DeregisterElasticIpResponse * deregisterElasticIp(const DeregisterElasticIpRequest &request);
    DeregisterInstanceResponse * deregisterInstance(const DeregisterInstanceRequest &request);
    DeregisterRdsDbInstanceResponse * deregisterRdsDbInstance(const DeregisterRdsDbInstanceRequest &request);
    DeregisterVolumeResponse * deregisterVolume(const DeregisterVolumeRequest &request);
    DescribeAgentVersionsResponse * describeAgentVersions(const DescribeAgentVersionsRequest &request);
    DescribeAppsResponse * describeApps(const DescribeAppsRequest &request);
    DescribeCommandsResponse * describeCommands(const DescribeCommandsRequest &request);
    DescribeDeploymentsResponse * describeDeployments(const DescribeDeploymentsRequest &request);
    DescribeEcsClustersResponse * describeEcsClusters(const DescribeEcsClustersRequest &request);
    DescribeElasticIpsResponse * describeElasticIps(const DescribeElasticIpsRequest &request);
    DescribeElasticLoadBalancersResponse * describeElasticLoadBalancers(const DescribeElasticLoadBalancersRequest &request);
    DescribeInstancesResponse * describeInstances(const DescribeInstancesRequest &request);
    DescribeLayersResponse * describeLayers(const DescribeLayersRequest &request);
    DescribeLoadBasedAutoScalingResponse * describeLoadBasedAutoScaling(const DescribeLoadBasedAutoScalingRequest &request);
    DescribeMyUserProfileResponse * describeMyUserProfile();
    DescribeOperatingSystemsResponse * describeOperatingSystems();
    DescribePermissionsResponse * describePermissions(const DescribePermissionsRequest &request);
    DescribeRaidArraysResponse * describeRaidArrays(const DescribeRaidArraysRequest &request);
    DescribeRdsDbInstancesResponse * describeRdsDbInstances(const DescribeRdsDbInstancesRequest &request);
    DescribeServiceErrorsResponse * describeServiceErrors(const DescribeServiceErrorsRequest &request);
    DescribeStackProvisioningParametersResponse * describeStackProvisioningParameters(const DescribeStackProvisioningParametersRequest &request);
    DescribeStackSummaryResponse * describeStackSummary(const DescribeStackSummaryRequest &request);
    DescribeStacksResponse * describeStacks(const DescribeStacksRequest &request);
    DescribeTimeBasedAutoScalingResponse * describeTimeBasedAutoScaling(const DescribeTimeBasedAutoScalingRequest &request);
    DescribeUserProfilesResponse * describeUserProfiles(const DescribeUserProfilesRequest &request);
    DescribeVolumesResponse * describeVolumes(const DescribeVolumesRequest &request);
    DetachElasticLoadBalancerResponse * detachElasticLoadBalancer(const DetachElasticLoadBalancerRequest &request);
    DisassociateElasticIpResponse * disassociateElasticIp(const DisassociateElasticIpRequest &request);
    GetHostnameSuggestionResponse * getHostnameSuggestion(const GetHostnameSuggestionRequest &request);
    GrantAccessResponse * grantAccess(const GrantAccessRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    RebootInstanceResponse * rebootInstance(const RebootInstanceRequest &request);
    RegisterEcsClusterResponse * registerEcsCluster(const RegisterEcsClusterRequest &request);
    RegisterElasticIpResponse * registerElasticIp(const RegisterElasticIpRequest &request);
    RegisterInstanceResponse * registerInstance(const RegisterInstanceRequest &request);
    RegisterRdsDbInstanceResponse * registerRdsDbInstance(const RegisterRdsDbInstanceRequest &request);
    RegisterVolumeResponse * registerVolume(const RegisterVolumeRequest &request);
    SetLoadBasedAutoScalingResponse * setLoadBasedAutoScaling(const SetLoadBasedAutoScalingRequest &request);
    SetPermissionResponse * setPermission(const SetPermissionRequest &request);
    SetTimeBasedAutoScalingResponse * setTimeBasedAutoScaling(const SetTimeBasedAutoScalingRequest &request);
    StartInstanceResponse * startInstance(const StartInstanceRequest &request);
    StartStackResponse * startStack(const StartStackRequest &request);
    StopInstanceResponse * stopInstance(const StopInstanceRequest &request);
    StopStackResponse * stopStack(const StopStackRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UnassignInstanceResponse * unassignInstance(const UnassignInstanceRequest &request);
    UnassignVolumeResponse * unassignVolume(const UnassignVolumeRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAppResponse * updateApp(const UpdateAppRequest &request);
    UpdateElasticIpResponse * updateElasticIp(const UpdateElasticIpRequest &request);
    UpdateInstanceResponse * updateInstance(const UpdateInstanceRequest &request);
    UpdateLayerResponse * updateLayer(const UpdateLayerRequest &request);
    UpdateMyUserProfileResponse * updateMyUserProfile(const UpdateMyUserProfileRequest &request);
    UpdateRdsDbInstanceResponse * updateRdsDbInstance(const UpdateRdsDbInstanceRequest &request);
    UpdateStackResponse * updateStack(const UpdateStackRequest &request);
    UpdateUserProfileResponse * updateUserProfile(const UpdateUserProfileRequest &request);
    UpdateVolumeResponse * updateVolume(const UpdateVolumeRequest &request);

private:
    Q_DECLARE_PRIVATE(OpsWorksClient)
    Q_DISABLE_COPY(OpsWorksClient)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
