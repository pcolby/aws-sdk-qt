// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EKSCLIENT_H
#define QTAWS_EKSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawseksglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Eks {

class EksClientPrivate;
class AssociateEncryptionConfigRequest;
class AssociateEncryptionConfigResponse;
class AssociateIdentityProviderConfigRequest;
class AssociateIdentityProviderConfigResponse;
class CreateAddonRequest;
class CreateAddonResponse;
class CreateClusterRequest;
class CreateClusterResponse;
class CreateFargateProfileRequest;
class CreateFargateProfileResponse;
class CreateNodegroupRequest;
class CreateNodegroupResponse;
class DeleteAddonRequest;
class DeleteAddonResponse;
class DeleteClusterRequest;
class DeleteClusterResponse;
class DeleteFargateProfileRequest;
class DeleteFargateProfileResponse;
class DeleteNodegroupRequest;
class DeleteNodegroupResponse;
class DeregisterClusterRequest;
class DeregisterClusterResponse;
class DescribeAddonRequest;
class DescribeAddonResponse;
class DescribeAddonVersionsRequest;
class DescribeAddonVersionsResponse;
class DescribeClusterRequest;
class DescribeClusterResponse;
class DescribeFargateProfileRequest;
class DescribeFargateProfileResponse;
class DescribeIdentityProviderConfigRequest;
class DescribeIdentityProviderConfigResponse;
class DescribeNodegroupRequest;
class DescribeNodegroupResponse;
class DescribeUpdateRequest;
class DescribeUpdateResponse;
class DisassociateIdentityProviderConfigRequest;
class DisassociateIdentityProviderConfigResponse;
class ListAddonsRequest;
class ListAddonsResponse;
class ListClustersRequest;
class ListClustersResponse;
class ListFargateProfilesRequest;
class ListFargateProfilesResponse;
class ListIdentityProviderConfigsRequest;
class ListIdentityProviderConfigsResponse;
class ListNodegroupsRequest;
class ListNodegroupsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListUpdatesRequest;
class ListUpdatesResponse;
class RegisterClusterRequest;
class RegisterClusterResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAddonRequest;
class UpdateAddonResponse;
class UpdateClusterConfigRequest;
class UpdateClusterConfigResponse;
class UpdateClusterVersionRequest;
class UpdateClusterVersionResponse;
class UpdateNodegroupConfigRequest;
class UpdateNodegroupConfigResponse;
class UpdateNodegroupVersionRequest;
class UpdateNodegroupVersionResponse;

class QTAWSEKS_EXPORT EksClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    EksClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit EksClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateEncryptionConfigResponse * associateEncryptionConfig(const AssociateEncryptionConfigRequest &request);
    AssociateIdentityProviderConfigResponse * associateIdentityProviderConfig(const AssociateIdentityProviderConfigRequest &request);
    CreateAddonResponse * createAddon(const CreateAddonRequest &request);
    CreateClusterResponse * createCluster(const CreateClusterRequest &request);
    CreateFargateProfileResponse * createFargateProfile(const CreateFargateProfileRequest &request);
    CreateNodegroupResponse * createNodegroup(const CreateNodegroupRequest &request);
    DeleteAddonResponse * deleteAddon(const DeleteAddonRequest &request);
    DeleteClusterResponse * deleteCluster(const DeleteClusterRequest &request);
    DeleteFargateProfileResponse * deleteFargateProfile(const DeleteFargateProfileRequest &request);
    DeleteNodegroupResponse * deleteNodegroup(const DeleteNodegroupRequest &request);
    DeregisterClusterResponse * deregisterCluster(const DeregisterClusterRequest &request);
    DescribeAddonResponse * describeAddon(const DescribeAddonRequest &request);
    DescribeAddonVersionsResponse * describeAddonVersions(const DescribeAddonVersionsRequest &request);
    DescribeClusterResponse * describeCluster(const DescribeClusterRequest &request);
    DescribeFargateProfileResponse * describeFargateProfile(const DescribeFargateProfileRequest &request);
    DescribeIdentityProviderConfigResponse * describeIdentityProviderConfig(const DescribeIdentityProviderConfigRequest &request);
    DescribeNodegroupResponse * describeNodegroup(const DescribeNodegroupRequest &request);
    DescribeUpdateResponse * describeUpdate(const DescribeUpdateRequest &request);
    DisassociateIdentityProviderConfigResponse * disassociateIdentityProviderConfig(const DisassociateIdentityProviderConfigRequest &request);
    ListAddonsResponse * listAddons(const ListAddonsRequest &request);
    ListClustersResponse * listClusters(const ListClustersRequest &request);
    ListFargateProfilesResponse * listFargateProfiles(const ListFargateProfilesRequest &request);
    ListIdentityProviderConfigsResponse * listIdentityProviderConfigs(const ListIdentityProviderConfigsRequest &request);
    ListNodegroupsResponse * listNodegroups(const ListNodegroupsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListUpdatesResponse * listUpdates(const ListUpdatesRequest &request);
    RegisterClusterResponse * registerCluster(const RegisterClusterRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAddonResponse * updateAddon(const UpdateAddonRequest &request);
    UpdateClusterConfigResponse * updateClusterConfig(const UpdateClusterConfigRequest &request);
    UpdateClusterVersionResponse * updateClusterVersion(const UpdateClusterVersionRequest &request);
    UpdateNodegroupConfigResponse * updateNodegroupConfig(const UpdateNodegroupConfigRequest &request);
    UpdateNodegroupVersionResponse * updateNodegroupVersion(const UpdateNodegroupVersionRequest &request);

private:
    Q_DECLARE_PRIVATE(EksClient)
    Q_DISABLE_COPY(EksClient)

};

} // namespace Eks
} // namespace QtAws

#endif
