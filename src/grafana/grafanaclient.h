// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRAFANACLIENT_H
#define QTAWS_GRAFANACLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsgrafanaglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Grafana {

class GrafanaClientPrivate;
class AssociateLicenseRequest;
class AssociateLicenseResponse;
class CreateWorkspaceRequest;
class CreateWorkspaceResponse;
class CreateWorkspaceApiKeyRequest;
class CreateWorkspaceApiKeyResponse;
class DeleteWorkspaceRequest;
class DeleteWorkspaceResponse;
class DeleteWorkspaceApiKeyRequest;
class DeleteWorkspaceApiKeyResponse;
class DescribeWorkspaceRequest;
class DescribeWorkspaceResponse;
class DescribeWorkspaceAuthenticationRequest;
class DescribeWorkspaceAuthenticationResponse;
class DisassociateLicenseRequest;
class DisassociateLicenseResponse;
class ListPermissionsRequest;
class ListPermissionsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListWorkspacesRequest;
class ListWorkspacesResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdatePermissionsRequest;
class UpdatePermissionsResponse;
class UpdateWorkspaceRequest;
class UpdateWorkspaceResponse;
class UpdateWorkspaceAuthenticationRequest;
class UpdateWorkspaceAuthenticationResponse;

class QTAWSGRAFANA_EXPORT GrafanaClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GrafanaClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit GrafanaClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateLicenseResponse * associateLicense(const AssociateLicenseRequest &request);
    CreateWorkspaceResponse * createWorkspace(const CreateWorkspaceRequest &request);
    CreateWorkspaceApiKeyResponse * createWorkspaceApiKey(const CreateWorkspaceApiKeyRequest &request);
    DeleteWorkspaceResponse * deleteWorkspace(const DeleteWorkspaceRequest &request);
    DeleteWorkspaceApiKeyResponse * deleteWorkspaceApiKey(const DeleteWorkspaceApiKeyRequest &request);
    DescribeWorkspaceResponse * describeWorkspace(const DescribeWorkspaceRequest &request);
    DescribeWorkspaceAuthenticationResponse * describeWorkspaceAuthentication(const DescribeWorkspaceAuthenticationRequest &request);
    DisassociateLicenseResponse * disassociateLicense(const DisassociateLicenseRequest &request);
    ListPermissionsResponse * listPermissions(const ListPermissionsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWorkspacesResponse * listWorkspaces(const ListWorkspacesRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdatePermissionsResponse * updatePermissions(const UpdatePermissionsRequest &request);
    UpdateWorkspaceResponse * updateWorkspace(const UpdateWorkspaceRequest &request);
    UpdateWorkspaceAuthenticationResponse * updateWorkspaceAuthentication(const UpdateWorkspaceAuthenticationRequest &request);

private:
    Q_DECLARE_PRIVATE(GrafanaClient)
    Q_DISABLE_COPY(GrafanaClient)

};

} // namespace Grafana
} // namespace QtAws

#endif
