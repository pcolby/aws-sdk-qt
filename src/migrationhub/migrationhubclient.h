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

#ifndef QTAWS_MIGRATIONHUBCLIENT_H
#define QTAWS_MIGRATIONHUBCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmigrationhubglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MigrationHub {

class MigrationHubClientPrivate;
class AssociateCreatedArtifactRequest;
class AssociateCreatedArtifactResponse;
class AssociateDiscoveredResourceRequest;
class AssociateDiscoveredResourceResponse;
class CreateProgressUpdateStreamRequest;
class CreateProgressUpdateStreamResponse;
class DeleteProgressUpdateStreamRequest;
class DeleteProgressUpdateStreamResponse;
class DescribeApplicationStateRequest;
class DescribeApplicationStateResponse;
class DescribeMigrationTaskRequest;
class DescribeMigrationTaskResponse;
class DisassociateCreatedArtifactRequest;
class DisassociateCreatedArtifactResponse;
class DisassociateDiscoveredResourceRequest;
class DisassociateDiscoveredResourceResponse;
class ImportMigrationTaskRequest;
class ImportMigrationTaskResponse;
class ListApplicationStatesRequest;
class ListApplicationStatesResponse;
class ListCreatedArtifactsRequest;
class ListCreatedArtifactsResponse;
class ListDiscoveredResourcesRequest;
class ListDiscoveredResourcesResponse;
class ListMigrationTasksRequest;
class ListMigrationTasksResponse;
class ListProgressUpdateStreamsRequest;
class ListProgressUpdateStreamsResponse;
class NotifyApplicationStateRequest;
class NotifyApplicationStateResponse;
class NotifyMigrationTaskStateRequest;
class NotifyMigrationTaskStateResponse;
class PutResourceAttributesRequest;
class PutResourceAttributesResponse;

class QTAWSMIGRATIONHUB_EXPORT MigrationHubClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MigrationHubClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MigrationHubClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateCreatedArtifactResponse * associateCreatedArtifact(const AssociateCreatedArtifactRequest &request);
    AssociateDiscoveredResourceResponse * associateDiscoveredResource(const AssociateDiscoveredResourceRequest &request);
    CreateProgressUpdateStreamResponse * createProgressUpdateStream(const CreateProgressUpdateStreamRequest &request);
    DeleteProgressUpdateStreamResponse * deleteProgressUpdateStream(const DeleteProgressUpdateStreamRequest &request);
    DescribeApplicationStateResponse * describeApplicationState(const DescribeApplicationStateRequest &request);
    DescribeMigrationTaskResponse * describeMigrationTask(const DescribeMigrationTaskRequest &request);
    DisassociateCreatedArtifactResponse * disassociateCreatedArtifact(const DisassociateCreatedArtifactRequest &request);
    DisassociateDiscoveredResourceResponse * disassociateDiscoveredResource(const DisassociateDiscoveredResourceRequest &request);
    ImportMigrationTaskResponse * importMigrationTask(const ImportMigrationTaskRequest &request);
    ListApplicationStatesResponse * listApplicationStates(const ListApplicationStatesRequest &request);
    ListCreatedArtifactsResponse * listCreatedArtifacts(const ListCreatedArtifactsRequest &request);
    ListDiscoveredResourcesResponse * listDiscoveredResources(const ListDiscoveredResourcesRequest &request);
    ListMigrationTasksResponse * listMigrationTasks(const ListMigrationTasksRequest &request);
    ListProgressUpdateStreamsResponse * listProgressUpdateStreams(const ListProgressUpdateStreamsRequest &request);
    NotifyApplicationStateResponse * notifyApplicationState(const NotifyApplicationStateRequest &request);
    NotifyMigrationTaskStateResponse * notifyMigrationTaskState(const NotifyMigrationTaskStateRequest &request);
    PutResourceAttributesResponse * putResourceAttributes(const PutResourceAttributesRequest &request);

protected:
    /// @cond internal
    MigrationHubClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit MigrationHubClient(MigrationHubClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(MigrationHubClient)
    Q_DISABLE_COPY(MigrationHubClient)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
