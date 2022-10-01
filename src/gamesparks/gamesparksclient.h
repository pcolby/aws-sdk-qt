// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GAMESPARKSCLIENT_H
#define QTAWS_GAMESPARKSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsgamesparksglobal.h"

class QNetworkReply;

namespace QtAws {
namespace GameSparks {

class GameSparksClientPrivate;
class CreateGameRequest;
class CreateGameResponse;
class CreateSnapshotRequest;
class CreateSnapshotResponse;
class CreateStageRequest;
class CreateStageResponse;
class DeleteGameRequest;
class DeleteGameResponse;
class DeleteStageRequest;
class DeleteStageResponse;
class DisconnectPlayerRequest;
class DisconnectPlayerResponse;
class ExportSnapshotRequest;
class ExportSnapshotResponse;
class GetExtensionRequest;
class GetExtensionResponse;
class GetExtensionVersionRequest;
class GetExtensionVersionResponse;
class GetGameRequest;
class GetGameResponse;
class GetGameConfigurationRequest;
class GetGameConfigurationResponse;
class GetGeneratedCodeJobRequest;
class GetGeneratedCodeJobResponse;
class GetPlayerConnectionStatusRequest;
class GetPlayerConnectionStatusResponse;
class GetSnapshotRequest;
class GetSnapshotResponse;
class GetStageRequest;
class GetStageResponse;
class GetStageDeploymentRequest;
class GetStageDeploymentResponse;
class ImportGameConfigurationRequest;
class ImportGameConfigurationResponse;
class ListExtensionVersionsRequest;
class ListExtensionVersionsResponse;
class ListExtensionsRequest;
class ListExtensionsResponse;
class ListGamesRequest;
class ListGamesResponse;
class ListGeneratedCodeJobsRequest;
class ListGeneratedCodeJobsResponse;
class ListSnapshotsRequest;
class ListSnapshotsResponse;
class ListStageDeploymentsRequest;
class ListStageDeploymentsResponse;
class ListStagesRequest;
class ListStagesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartGeneratedCodeJobRequest;
class StartGeneratedCodeJobResponse;
class StartStageDeploymentRequest;
class StartStageDeploymentResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateGameRequest;
class UpdateGameResponse;
class UpdateGameConfigurationRequest;
class UpdateGameConfigurationResponse;
class UpdateSnapshotRequest;
class UpdateSnapshotResponse;
class UpdateStageRequest;
class UpdateStageResponse;

class QTAWSGAMESPARKS_EXPORT GameSparksClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GameSparksClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit GameSparksClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateGameResponse * createGame(const CreateGameRequest &request);
    CreateSnapshotResponse * createSnapshot(const CreateSnapshotRequest &request);
    CreateStageResponse * createStage(const CreateStageRequest &request);
    DeleteGameResponse * deleteGame(const DeleteGameRequest &request);
    DeleteStageResponse * deleteStage(const DeleteStageRequest &request);
    DisconnectPlayerResponse * disconnectPlayer(const DisconnectPlayerRequest &request);
    ExportSnapshotResponse * exportSnapshot(const ExportSnapshotRequest &request);
    GetExtensionResponse * getExtension(const GetExtensionRequest &request);
    GetExtensionVersionResponse * getExtensionVersion(const GetExtensionVersionRequest &request);
    GetGameResponse * getGame(const GetGameRequest &request);
    GetGameConfigurationResponse * getGameConfiguration(const GetGameConfigurationRequest &request);
    GetGeneratedCodeJobResponse * getGeneratedCodeJob(const GetGeneratedCodeJobRequest &request);
    GetPlayerConnectionStatusResponse * getPlayerConnectionStatus(const GetPlayerConnectionStatusRequest &request);
    GetSnapshotResponse * getSnapshot(const GetSnapshotRequest &request);
    GetStageResponse * getStage(const GetStageRequest &request);
    GetStageDeploymentResponse * getStageDeployment(const GetStageDeploymentRequest &request);
    ImportGameConfigurationResponse * importGameConfiguration(const ImportGameConfigurationRequest &request);
    ListExtensionVersionsResponse * listExtensionVersions(const ListExtensionVersionsRequest &request);
    ListExtensionsResponse * listExtensions(const ListExtensionsRequest &request);
    ListGamesResponse * listGames(const ListGamesRequest &request);
    ListGeneratedCodeJobsResponse * listGeneratedCodeJobs(const ListGeneratedCodeJobsRequest &request);
    ListSnapshotsResponse * listSnapshots(const ListSnapshotsRequest &request);
    ListStageDeploymentsResponse * listStageDeployments(const ListStageDeploymentsRequest &request);
    ListStagesResponse * listStages(const ListStagesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartGeneratedCodeJobResponse * startGeneratedCodeJob(const StartGeneratedCodeJobRequest &request);
    StartStageDeploymentResponse * startStageDeployment(const StartStageDeploymentRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateGameResponse * updateGame(const UpdateGameRequest &request);
    UpdateGameConfigurationResponse * updateGameConfiguration(const UpdateGameConfigurationRequest &request);
    UpdateSnapshotResponse * updateSnapshot(const UpdateSnapshotRequest &request);
    UpdateStageResponse * updateStage(const UpdateStageRequest &request);

private:
    Q_DECLARE_PRIVATE(GameSparksClient)
    Q_DISABLE_COPY(GameSparksClient)

};

} // namespace GameSparks
} // namespace QtAws

#endif
