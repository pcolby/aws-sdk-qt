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

#ifndef QTAWS_PROMETHEUSSERVICECLIENT_H
#define QTAWS_PROMETHEUSSERVICECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsprometheusserviceglobal.h"

class QNetworkReply;

namespace QtAws {
namespace PrometheusService {

class PrometheusServiceClientPrivate;
class CreateWorkspaceRequest;
class CreateWorkspaceResponse;
class DeleteWorkspaceRequest;
class DeleteWorkspaceResponse;
class DescribeWorkspaceRequest;
class DescribeWorkspaceResponse;
class ListWorkspacesRequest;
class ListWorkspacesResponse;
class UpdateWorkspaceAliasRequest;
class UpdateWorkspaceAliasResponse;

class QTAWSPROMETHEUSSERVICE_EXPORT PrometheusServiceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PrometheusServiceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    PrometheusServiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateWorkspaceResponse * createWorkspace(const CreateWorkspaceRequest &request);
    DeleteWorkspaceResponse * deleteWorkspace(const DeleteWorkspaceRequest &request);
    DescribeWorkspaceResponse * describeWorkspace(const DescribeWorkspaceRequest &request);
    ListWorkspacesResponse * listWorkspaces(const ListWorkspacesRequest &request);
    UpdateWorkspaceAliasResponse * updateWorkspaceAlias(const UpdateWorkspaceAliasRequest &request);

protected:
    /// @cond internal
    PrometheusServiceClientPrivate * const d_ptr; ///< Internal d-pointer.
    PrometheusServiceClient(PrometheusServiceClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(PrometheusServiceClient)
    Q_DISABLE_COPY(PrometheusServiceClient)

};

} // namespace PrometheusService
} // namespace QtAws

#endif
