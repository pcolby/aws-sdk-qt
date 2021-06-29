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

#ifndef QTAWS_EKSCLIENT_H
#define QTAWS_EKSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawseksglobal.h"

class QNetworkReply;

namespace QtAws {
namespace EKS {

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

    EksClient(
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
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAddonResponse * updateAddon(const UpdateAddonRequest &request);
    UpdateClusterConfigResponse * updateClusterConfig(const UpdateClusterConfigRequest &request);
    UpdateClusterVersionResponse * updateClusterVersion(const UpdateClusterVersionRequest &request);
    UpdateNodegroupConfigResponse * updateNodegroupConfig(const UpdateNodegroupConfigRequest &request);
    UpdateNodegroupVersionResponse * updateNodegroupVersion(const UpdateNodegroupVersionRequest &request);

protected:
    /// @cond internal
    EksClientPrivate * const d_ptr; ///< Internal d-pointer.
    EksClient(EksClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(EksClient)
    Q_DISABLE_COPY(EksClient)

};

} // namespace EKS
} // namespace QtAws

#endif
