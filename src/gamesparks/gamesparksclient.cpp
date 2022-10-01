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

#include "gamesparksclient.h"
#include "gamesparksclient_p.h"

#include "core/awssignaturev4.h"
#include "creategamerequest.h"
#include "creategameresponse.h"
#include "createsnapshotrequest.h"
#include "createsnapshotresponse.h"
#include "createstagerequest.h"
#include "createstageresponse.h"
#include "deletegamerequest.h"
#include "deletegameresponse.h"
#include "deletestagerequest.h"
#include "deletestageresponse.h"
#include "disconnectplayerrequest.h"
#include "disconnectplayerresponse.h"
#include "exportsnapshotrequest.h"
#include "exportsnapshotresponse.h"
#include "getextensionrequest.h"
#include "getextensionresponse.h"
#include "getextensionversionrequest.h"
#include "getextensionversionresponse.h"
#include "getgamerequest.h"
#include "getgameresponse.h"
#include "getgameconfigurationrequest.h"
#include "getgameconfigurationresponse.h"
#include "getgeneratedcodejobrequest.h"
#include "getgeneratedcodejobresponse.h"
#include "getplayerconnectionstatusrequest.h"
#include "getplayerconnectionstatusresponse.h"
#include "getsnapshotrequest.h"
#include "getsnapshotresponse.h"
#include "getstagerequest.h"
#include "getstageresponse.h"
#include "getstagedeploymentrequest.h"
#include "getstagedeploymentresponse.h"
#include "importgameconfigurationrequest.h"
#include "importgameconfigurationresponse.h"
#include "listextensionversionsrequest.h"
#include "listextensionversionsresponse.h"
#include "listextensionsrequest.h"
#include "listextensionsresponse.h"
#include "listgamesrequest.h"
#include "listgamesresponse.h"
#include "listgeneratedcodejobsrequest.h"
#include "listgeneratedcodejobsresponse.h"
#include "listsnapshotsrequest.h"
#include "listsnapshotsresponse.h"
#include "liststagedeploymentsrequest.h"
#include "liststagedeploymentsresponse.h"
#include "liststagesrequest.h"
#include "liststagesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startgeneratedcodejobrequest.h"
#include "startgeneratedcodejobresponse.h"
#include "startstagedeploymentrequest.h"
#include "startstagedeploymentresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updategamerequest.h"
#include "updategameresponse.h"
#include "updategameconfigurationrequest.h"
#include "updategameconfigurationresponse.h"
#include "updatesnapshotrequest.h"
#include "updatesnapshotresponse.h"
#include "updatestagerequest.h"
#include "updatestageresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::GameSparks
 * \brief Contains classess for accessing GameSparks.
 *
 * \inmodule QtAwsGameSparks
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GameSparksClient
 * \brief The GameSparksClient class provides access to the GameSparks service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGameSparks
 *
 */

/*!
 * \brief Constructs a GameSparksClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
GameSparksClient::GameSparksClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GameSparksClientPrivate(this), parent)
{
    Q_D(GameSparksClient);
    d->apiVersion = QStringLiteral("2021-08-17");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("GameSparks");
    d->serviceName = QStringLiteral("gamesparks");
}

/*!
 * \overload GameSparksClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
GameSparksClient::GameSparksClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GameSparksClientPrivate(this), parent)
{
    Q_D(GameSparksClient);
    d->apiVersion = QStringLiteral("2021-08-17");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("GameSparks");
    d->serviceName = QStringLiteral("gamesparks");
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * CreateGameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new game with an empty configuration. After creating your game, you can update the configuration using
 * <code>UpdateGameConfiguration</code> or <code>ImportGameConfiguration</code>.
 */
CreateGameResponse * GameSparksClient::createGame(const CreateGameRequest &request)
{
    return qobject_cast<CreateGameResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * CreateSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a snapshot of the game
 */
CreateSnapshotResponse * GameSparksClient::createSnapshot(const CreateSnapshotRequest &request)
{
    return qobject_cast<CreateSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * CreateStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new stage for stage-by-stage game development and
 */
CreateStageResponse * GameSparksClient::createStage(const CreateStageRequest &request)
{
    return qobject_cast<CreateStageResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * DeleteGameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteGameResponse * GameSparksClient::deleteGame(const DeleteGameRequest &request)
{
    return qobject_cast<DeleteGameResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * DeleteStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a stage from a game, along with the associated game
 */
DeleteStageResponse * GameSparksClient::deleteStage(const DeleteStageRequest &request)
{
    return qobject_cast<DeleteStageResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * DisconnectPlayerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disconnects a player from the game
 *
 * runtime>
 *
 * If a player has multiple connections, this operation attempts to close all of them.
 */
DisconnectPlayerResponse * GameSparksClient::disconnectPlayer(const DisconnectPlayerRequest &request)
{
    return qobject_cast<DisconnectPlayerResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * ExportSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports a game configuration
 */
ExportSnapshotResponse * GameSparksClient::exportSnapshot(const ExportSnapshotRequest &request)
{
    return qobject_cast<ExportSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * GetExtensionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details about a specified
 */
GetExtensionResponse * GameSparksClient::getExtension(const GetExtensionRequest &request)
{
    return qobject_cast<GetExtensionResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * GetExtensionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details about a specified extension
 */
GetExtensionVersionResponse * GameSparksClient::getExtensionVersion(const GetExtensionVersionRequest &request)
{
    return qobject_cast<GetExtensionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * GetGameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details about a
 */
GetGameResponse * GameSparksClient::getGame(const GetGameRequest &request)
{
    return qobject_cast<GetGameResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * GetGameConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the configuration of the
 */
GetGameConfigurationResponse * GameSparksClient::getGameConfiguration(const GetGameConfigurationRequest &request)
{
    return qobject_cast<GetGameConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * GetGeneratedCodeJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details about a job that is generating code for a
 */
GetGeneratedCodeJobResponse * GameSparksClient::getGeneratedCodeJob(const GetGeneratedCodeJobRequest &request)
{
    return qobject_cast<GetGeneratedCodeJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * GetPlayerConnectionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the status of a player's connection to the game
 *
 * runtime>
 *
 * It's possible for a single player to have multiple connections to the game runtime. If a player is not connected, this
 * operation returns an empty list.
 */
GetPlayerConnectionStatusResponse * GameSparksClient::getPlayerConnectionStatus(const GetPlayerConnectionStatusRequest &request)
{
    return qobject_cast<GetPlayerConnectionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * GetSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a copy of the game configuration in a
 */
GetSnapshotResponse * GameSparksClient::getSnapshot(const GetSnapshotRequest &request)
{
    return qobject_cast<GetSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * GetStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a
 */
GetStageResponse * GameSparksClient::getStage(const GetStageRequest &request)
{
    return qobject_cast<GetStageResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * GetStageDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a stage
 */
GetStageDeploymentResponse * GameSparksClient::getStageDeployment(const GetStageDeploymentRequest &request)
{
    return qobject_cast<GetStageDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * ImportGameConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports a game
 *
 * configuration>
 *
 * This operation replaces the current configuration of the game with the provided input. This is not a reversible
 * operation. If you want to preserve the previous configuration, use <code>CreateSnapshot</code> to make a new snapshot
 * before importing.
 */
ImportGameConfigurationResponse * GameSparksClient::importGameConfiguration(const ImportGameConfigurationRequest &request)
{
    return qobject_cast<ImportGameConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * ListExtensionVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a paginated list of available versions for the
 *
 * extension>
 *
 * Each time an API change is made to an extension, the version is incremented. The list retrieved by this operation shows
 * the versions that are currently available.
 */
ListExtensionVersionsResponse * GameSparksClient::listExtensionVersions(const ListExtensionVersionsRequest &request)
{
    return qobject_cast<ListExtensionVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * ListExtensionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a paginated list of available
 *
 * extensions>
 *
 * Extensions provide features that games can use from scripts.
 */
ListExtensionsResponse * GameSparksClient::listExtensions(const ListExtensionsRequest &request)
{
    return qobject_cast<ListExtensionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * ListGamesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a paginated list of
 */
ListGamesResponse * GameSparksClient::listGames(const ListGamesRequest &request)
{
    return qobject_cast<ListGamesResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * ListGeneratedCodeJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a paginated list of code generation jobs for a
 */
ListGeneratedCodeJobsResponse * GameSparksClient::listGeneratedCodeJobs(const ListGeneratedCodeJobsRequest &request)
{
    return qobject_cast<ListGeneratedCodeJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * ListSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a paginated list of snapshot summaries from the
 */
ListSnapshotsResponse * GameSparksClient::listSnapshots(const ListSnapshotsRequest &request)
{
    return qobject_cast<ListSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * ListStageDeploymentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a paginated list of stage deployment summaries from the
 */
ListStageDeploymentsResponse * GameSparksClient::listStageDeployments(const ListStageDeploymentsRequest &request)
{
    return qobject_cast<ListStageDeploymentsResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * ListStagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a paginated list of stage summaries from the
 */
ListStagesResponse * GameSparksClient::listStages(const ListStagesRequest &request)
{
    return qobject_cast<ListStagesResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags associated with a GameSparks
 */
ListTagsForResourceResponse * GameSparksClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * StartGeneratedCodeJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an asynchronous process that generates client code for system-defined and custom messages. The resulting code is
 * collected as a .zip file and uploaded to a pre-signed Amazon S3 URL.
 */
StartGeneratedCodeJobResponse * GameSparksClient::startGeneratedCodeJob(const StartGeneratedCodeJobRequest &request)
{
    return qobject_cast<StartGeneratedCodeJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * StartStageDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deploys a snapshot to the stage and creates a new game
 *
 * runtime>
 *
 * After you call this operation, you can check the deployment status by using <code>GetStageDeployment</code>.
 *
 * </p
 *
 * If there are any players connected to the previous game runtime, then both runtimes persist. Existing connections to the
 * previous runtime are maintained. When players disconnect and reconnect, they connect to the new runtime. After there are
 * no connections to the previous game runtime, it is deleted.
 */
StartStageDeploymentResponse * GameSparksClient::startStageDeployment(const StartStageDeploymentRequest &request)
{
    return qobject_cast<StartStageDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to a GameSparks
 */
TagResourceResponse * GameSparksClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a GameSparks
 */
UntagResourceResponse * GameSparksClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * UpdateGameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates details of the
 */
UpdateGameResponse * GameSparksClient::updateGame(const UpdateGameRequest &request)
{
    return qobject_cast<UpdateGameResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * UpdateGameConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates one or more sections of the game
 */
UpdateGameConfigurationResponse * GameSparksClient::updateGameConfiguration(const UpdateGameConfigurationRequest &request)
{
    return qobject_cast<UpdateGameConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * UpdateSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the metadata of a GameSparks
 */
UpdateSnapshotResponse * GameSparksClient::updateSnapshot(const UpdateSnapshotRequest &request)
{
    return qobject_cast<UpdateSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the GameSparksClient service, and returns a pointer to an
 * UpdateStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the metadata of a
 */
UpdateStageResponse * GameSparksClient::updateStage(const UpdateStageRequest &request)
{
    return qobject_cast<UpdateStageResponse *>(send(request));
}

/*!
 * \class QtAws::GameSparks::GameSparksClientPrivate
 * \brief The GameSparksClientPrivate class provides private implementation for GameSparksClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GameSparksClientPrivate object with public implementation \a q.
 */
GameSparksClientPrivate::GameSparksClientPrivate(GameSparksClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace GameSparks
} // namespace QtAws
