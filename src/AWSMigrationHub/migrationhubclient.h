/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_MIGRATIONHUBCLIENT_H
#define QTAWS_MIGRATIONHUBCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace MigrationHub {

class MigrationHubClientPrivate;
class AssociateCreatedArtifactResponse;
class AssociateDiscoveredResourceResponse;
class CreateProgressUpdateStreamResponse;
class DeleteProgressUpdateStreamResponse;
class DescribeApplicationStateResponse;
class DescribeMigrationTaskResponse;
class DisassociateCreatedArtifactResponse;
class DisassociateDiscoveredResourceResponse;
class ImportMigrationTaskResponse;
class ListCreatedArtifactsResponse;
class ListDiscoveredResourcesResponse;
class ListMigrationTasksResponse;
class ListProgressUpdateStreamsResponse;
class NotifyApplicationStateResponse;
class NotifyMigrationTaskStateResponse;
class PutResourceAttributesResponse;

class QTAWS_EXPORT MigrationHubClient : public AwsAbstractClient {
    Q_OBJECT

public:
    MigrationHubClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MigrationHubClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
    ListCreatedArtifactsResponse * listCreatedArtifacts(const ListCreatedArtifactsRequest &request);
    ListDiscoveredResourcesResponse * listDiscoveredResources(const ListDiscoveredResourcesRequest &request);
    ListMigrationTasksResponse * listMigrationTasks(const ListMigrationTasksRequest &request);
    ListProgressUpdateStreamsResponse * listProgressUpdateStreams(const ListProgressUpdateStreamsRequest &request);
    NotifyApplicationStateResponse * notifyApplicationState(const NotifyApplicationStateRequest &request);
    NotifyMigrationTaskStateResponse * notifyMigrationTaskState(const NotifyMigrationTaskStateRequest &request);
    PutResourceAttributesResponse * putResourceAttributes(const PutResourceAttributesRequest &request);

private:
    Q_DECLARE_PRIVATE(MigrationHubClient)
    Q_DISABLE_COPY(MigrationHubClient)

};

} // namespace MigrationHub
} // namespace AWS

#endif
