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

#ifndef QTAWS_CODEARTIFACTCLIENT_H
#define QTAWS_CODEARTIFACTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CodeArtifact {

class CodeArtifactClientPrivate;
class AssociateExternalConnectionRequest;
class AssociateExternalConnectionResponse;
class CopyPackageVersionsRequest;
class CopyPackageVersionsResponse;
class CreateDomainRequest;
class CreateDomainResponse;
class CreateRepositoryRequest;
class CreateRepositoryResponse;
class DeleteDomainRequest;
class DeleteDomainResponse;
class DeleteDomainPermissionsPolicyRequest;
class DeleteDomainPermissionsPolicyResponse;
class DeletePackageVersionsRequest;
class DeletePackageVersionsResponse;
class DeleteRepositoryRequest;
class DeleteRepositoryResponse;
class DeleteRepositoryPermissionsPolicyRequest;
class DeleteRepositoryPermissionsPolicyResponse;
class DescribeDomainRequest;
class DescribeDomainResponse;
class DescribePackageVersionRequest;
class DescribePackageVersionResponse;
class DescribeRepositoryRequest;
class DescribeRepositoryResponse;
class DisassociateExternalConnectionRequest;
class DisassociateExternalConnectionResponse;
class DisposePackageVersionsRequest;
class DisposePackageVersionsResponse;
class GetAuthorizationTokenRequest;
class GetAuthorizationTokenResponse;
class GetDomainPermissionsPolicyRequest;
class GetDomainPermissionsPolicyResponse;
class GetPackageVersionAssetRequest;
class GetPackageVersionAssetResponse;
class GetPackageVersionReadmeRequest;
class GetPackageVersionReadmeResponse;
class GetRepositoryEndpointRequest;
class GetRepositoryEndpointResponse;
class GetRepositoryPermissionsPolicyRequest;
class GetRepositoryPermissionsPolicyResponse;
class ListDomainsRequest;
class ListDomainsResponse;
class ListPackageVersionAssetsRequest;
class ListPackageVersionAssetsResponse;
class ListPackageVersionDependenciesRequest;
class ListPackageVersionDependenciesResponse;
class ListPackageVersionsRequest;
class ListPackageVersionsResponse;
class ListPackagesRequest;
class ListPackagesResponse;
class ListRepositoriesRequest;
class ListRepositoriesResponse;
class ListRepositoriesInDomainRequest;
class ListRepositoriesInDomainResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutDomainPermissionsPolicyRequest;
class PutDomainPermissionsPolicyResponse;
class PutRepositoryPermissionsPolicyRequest;
class PutRepositoryPermissionsPolicyResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdatePackageVersionsStatusRequest;
class UpdatePackageVersionsStatusResponse;
class UpdateRepositoryRequest;
class UpdateRepositoryResponse;

class QTAWS_EXPORT CodeArtifactClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CodeArtifactClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodeArtifactClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateExternalConnectionResponse * associateExternalConnection(const AssociateExternalConnectionRequest &request);
    CopyPackageVersionsResponse * copyPackageVersions(const CopyPackageVersionsRequest &request);
    CreateDomainResponse * createDomain(const CreateDomainRequest &request);
    CreateRepositoryResponse * createRepository(const CreateRepositoryRequest &request);
    DeleteDomainResponse * deleteDomain(const DeleteDomainRequest &request);
    DeleteDomainPermissionsPolicyResponse * deleteDomainPermissionsPolicy(const DeleteDomainPermissionsPolicyRequest &request);
    DeletePackageVersionsResponse * deletePackageVersions(const DeletePackageVersionsRequest &request);
    DeleteRepositoryResponse * deleteRepository(const DeleteRepositoryRequest &request);
    DeleteRepositoryPermissionsPolicyResponse * deleteRepositoryPermissionsPolicy(const DeleteRepositoryPermissionsPolicyRequest &request);
    DescribeDomainResponse * describeDomain(const DescribeDomainRequest &request);
    DescribePackageVersionResponse * describePackageVersion(const DescribePackageVersionRequest &request);
    DescribeRepositoryResponse * describeRepository(const DescribeRepositoryRequest &request);
    DisassociateExternalConnectionResponse * disassociateExternalConnection(const DisassociateExternalConnectionRequest &request);
    DisposePackageVersionsResponse * disposePackageVersions(const DisposePackageVersionsRequest &request);
    GetAuthorizationTokenResponse * getAuthorizationToken(const GetAuthorizationTokenRequest &request);
    GetDomainPermissionsPolicyResponse * getDomainPermissionsPolicy(const GetDomainPermissionsPolicyRequest &request);
    GetPackageVersionAssetResponse * getPackageVersionAsset(const GetPackageVersionAssetRequest &request);
    GetPackageVersionReadmeResponse * getPackageVersionReadme(const GetPackageVersionReadmeRequest &request);
    GetRepositoryEndpointResponse * getRepositoryEndpoint(const GetRepositoryEndpointRequest &request);
    GetRepositoryPermissionsPolicyResponse * getRepositoryPermissionsPolicy(const GetRepositoryPermissionsPolicyRequest &request);
    ListDomainsResponse * listDomains(const ListDomainsRequest &request);
    ListPackageVersionAssetsResponse * listPackageVersionAssets(const ListPackageVersionAssetsRequest &request);
    ListPackageVersionDependenciesResponse * listPackageVersionDependencies(const ListPackageVersionDependenciesRequest &request);
    ListPackageVersionsResponse * listPackageVersions(const ListPackageVersionsRequest &request);
    ListPackagesResponse * listPackages(const ListPackagesRequest &request);
    ListRepositoriesResponse * listRepositories(const ListRepositoriesRequest &request);
    ListRepositoriesInDomainResponse * listRepositoriesInDomain(const ListRepositoriesInDomainRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutDomainPermissionsPolicyResponse * putDomainPermissionsPolicy(const PutDomainPermissionsPolicyRequest &request);
    PutRepositoryPermissionsPolicyResponse * putRepositoryPermissionsPolicy(const PutRepositoryPermissionsPolicyRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdatePackageVersionsStatusResponse * updatePackageVersionsStatus(const UpdatePackageVersionsStatusRequest &request);
    UpdateRepositoryResponse * updateRepository(const UpdateRepositoryRequest &request);

private:
    Q_DECLARE_PRIVATE(CodeArtifactClient)
    Q_DISABLE_COPY(CodeArtifactClient)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
