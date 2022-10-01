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
