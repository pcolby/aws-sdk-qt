/*
    Copyright 2013-2016 Paul Colby

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

#ifndef QTAWS_OPSWORKSCLIENT_H
#define QTAWS_OPSWORKSCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class OpsWorksClientPrivate;

class QTAWS_EXPORT OpsWorksClient : public AwsAbstractClient {
    Q_OBJECT

public:
    OpsWorksClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    OpsWorksClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    OpsWorksAssignInstanceResponse * assignInstance(const OpsWorksAssignInstanceRequest &request);
    OpsWorksAssignVolumeResponse * assignVolume(const OpsWorksAssignVolumeRequest &request);
    OpsWorksAssociateElasticIpResponse * associateElasticIp(const OpsWorksAssociateElasticIpRequest &request);
    OpsWorksAttachElasticLoadBalancerResponse * attachElasticLoadBalancer(const OpsWorksAttachElasticLoadBalancerRequest &request);
    OpsWorksCloneStackResponse * cloneStack(const OpsWorksCloneStackRequest &request);
    OpsWorksCreateAppResponse * createApp(const OpsWorksCreateAppRequest &request);
    OpsWorksCreateDeploymentResponse * createDeployment(const OpsWorksCreateDeploymentRequest &request);
    OpsWorksCreateInstanceResponse * createInstance(const OpsWorksCreateInstanceRequest &request);
    OpsWorksCreateLayerResponse * createLayer(const OpsWorksCreateLayerRequest &request);
    OpsWorksCreateStackResponse * createStack(const OpsWorksCreateStackRequest &request);
    OpsWorksCreateUserProfileResponse * createUserProfile(const OpsWorksCreateUserProfileRequest &request);
    OpsWorksDeleteAppResponse * deleteApp(const OpsWorksDeleteAppRequest &request);
    OpsWorksDeleteInstanceResponse * deleteInstance(const OpsWorksDeleteInstanceRequest &request);
    OpsWorksDeleteLayerResponse * deleteLayer(const OpsWorksDeleteLayerRequest &request);
    OpsWorksDeleteStackResponse * deleteStack(const OpsWorksDeleteStackRequest &request);
    OpsWorksDeleteUserProfileResponse * deleteUserProfile(const OpsWorksDeleteUserProfileRequest &request);
    OpsWorksDeregisterEcsClusterResponse * deregisterEcsCluster(const OpsWorksDeregisterEcsClusterRequest &request);
    OpsWorksDeregisterElasticIpResponse * deregisterElasticIp(const OpsWorksDeregisterElasticIpRequest &request);
    OpsWorksDeregisterInstanceResponse * deregisterInstance(const OpsWorksDeregisterInstanceRequest &request);
    OpsWorksDeregisterRdsDbInstanceResponse * deregisterRdsDbInstance(const OpsWorksDeregisterRdsDbInstanceRequest &request);
    OpsWorksDeregisterVolumeResponse * deregisterVolume(const OpsWorksDeregisterVolumeRequest &request);
    OpsWorksDescribeAgentVersionsResponse * describeAgentVersions(const OpsWorksDescribeAgentVersionsRequest &request);
    OpsWorksDescribeAppsResponse * describeApps(const OpsWorksDescribeAppsRequest &request);
    OpsWorksDescribeCommandsResponse * describeCommands(const OpsWorksDescribeCommandsRequest &request);
    OpsWorksDescribeDeploymentsResponse * describeDeployments(const OpsWorksDescribeDeploymentsRequest &request);
    OpsWorksDescribeEcsClustersResponse * describeEcsClusters(const OpsWorksDescribeEcsClustersRequest &request);
    OpsWorksDescribeElasticIpsResponse * describeElasticIps(const OpsWorksDescribeElasticIpsRequest &request);
    OpsWorksDescribeElasticLoadBalancersResponse * describeElasticLoadBalancers(const OpsWorksDescribeElasticLoadBalancersRequest &request);
    OpsWorksDescribeInstancesResponse * describeInstances(const OpsWorksDescribeInstancesRequest &request);
    OpsWorksDescribeLayersResponse * describeLayers(const OpsWorksDescribeLayersRequest &request);
    OpsWorksDescribeLoadBasedAutoScalingResponse * describeLoadBasedAutoScaling(const OpsWorksDescribeLoadBasedAutoScalingRequest &request);
    OpsWorksDescribeMyUserProfileResponse * describeMyUserProfile();
    OpsWorksDescribePermissionsResponse * describePermissions(const OpsWorksDescribePermissionsRequest &request);
    OpsWorksDescribeRaidArraysResponse * describeRaidArrays(const OpsWorksDescribeRaidArraysRequest &request);
    OpsWorksDescribeRdsDbInstancesResponse * describeRdsDbInstances(const OpsWorksDescribeRdsDbInstancesRequest &request);
    OpsWorksDescribeServiceErrorsResponse * describeServiceErrors(const OpsWorksDescribeServiceErrorsRequest &request);
    OpsWorksDescribeStackProvisioningParametersResponse * describeStackProvisioningParameters(const OpsWorksDescribeStackProvisioningParametersRequest &request);
    OpsWorksDescribeStackSummaryResponse * describeStackSummary(const OpsWorksDescribeStackSummaryRequest &request);
    OpsWorksDescribeStacksResponse * describeStacks(const OpsWorksDescribeStacksRequest &request);
    OpsWorksDescribeTimeBasedAutoScalingResponse * describeTimeBasedAutoScaling(const OpsWorksDescribeTimeBasedAutoScalingRequest &request);
    OpsWorksDescribeUserProfilesResponse * describeUserProfiles(const OpsWorksDescribeUserProfilesRequest &request);
    OpsWorksDescribeVolumesResponse * describeVolumes(const OpsWorksDescribeVolumesRequest &request);
    OpsWorksDetachElasticLoadBalancerResponse * detachElasticLoadBalancer(const OpsWorksDetachElasticLoadBalancerRequest &request);
    OpsWorksDisassociateElasticIpResponse * disassociateElasticIp(const OpsWorksDisassociateElasticIpRequest &request);
    OpsWorksGetHostnameSuggestionResponse * getHostnameSuggestion(const OpsWorksGetHostnameSuggestionRequest &request);
    OpsWorksGrantAccessResponse * grantAccess(const OpsWorksGrantAccessRequest &request);
    OpsWorksRebootInstanceResponse * rebootInstance(const OpsWorksRebootInstanceRequest &request);
    OpsWorksRegisterEcsClusterResponse * registerEcsCluster(const OpsWorksRegisterEcsClusterRequest &request);
    OpsWorksRegisterElasticIpResponse * registerElasticIp(const OpsWorksRegisterElasticIpRequest &request);
    OpsWorksRegisterInstanceResponse * registerInstance(const OpsWorksRegisterInstanceRequest &request);
    OpsWorksRegisterRdsDbInstanceResponse * registerRdsDbInstance(const OpsWorksRegisterRdsDbInstanceRequest &request);
    OpsWorksRegisterVolumeResponse * registerVolume(const OpsWorksRegisterVolumeRequest &request);
    OpsWorksSetLoadBasedAutoScalingResponse * setLoadBasedAutoScaling(const OpsWorksSetLoadBasedAutoScalingRequest &request);
    OpsWorksSetPermissionResponse * setPermission(const OpsWorksSetPermissionRequest &request);
    OpsWorksSetTimeBasedAutoScalingResponse * setTimeBasedAutoScaling(const OpsWorksSetTimeBasedAutoScalingRequest &request);
    OpsWorksStartInstanceResponse * startInstance(const OpsWorksStartInstanceRequest &request);
    OpsWorksStartStackResponse * startStack(const OpsWorksStartStackRequest &request);
    OpsWorksStopInstanceResponse * stopInstance(const OpsWorksStopInstanceRequest &request);
    OpsWorksStopStackResponse * stopStack(const OpsWorksStopStackRequest &request);
    OpsWorksUnassignInstanceResponse * unassignInstance(const OpsWorksUnassignInstanceRequest &request);
    OpsWorksUnassignVolumeResponse * unassignVolume(const OpsWorksUnassignVolumeRequest &request);
    OpsWorksUpdateAppResponse * updateApp(const OpsWorksUpdateAppRequest &request);
    OpsWorksUpdateElasticIpResponse * updateElasticIp(const OpsWorksUpdateElasticIpRequest &request);
    OpsWorksUpdateInstanceResponse * updateInstance(const OpsWorksUpdateInstanceRequest &request);
    OpsWorksUpdateLayerResponse * updateLayer(const OpsWorksUpdateLayerRequest &request);
    OpsWorksUpdateMyUserProfileResponse * updateMyUserProfile(const OpsWorksUpdateMyUserProfileRequest &request);
    OpsWorksUpdateRdsDbInstanceResponse * updateRdsDbInstance(const OpsWorksUpdateRdsDbInstanceRequest &request);
    OpsWorksUpdateStackResponse * updateStack(const OpsWorksUpdateStackRequest &request);
    OpsWorksUpdateUserProfileResponse * updateUserProfile(const OpsWorksUpdateUserProfileRequest &request);
    OpsWorksUpdateVolumeResponse * updateVolume(const OpsWorksUpdateVolumeRequest &request);

private:
    Q_DECLARE_PRIVATE(OpsWorksClient)
    Q_DISABLE_COPY(OpsWorksClient)

};

QTAWS_END_NAMESPACE

#endif
