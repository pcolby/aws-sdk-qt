/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_GAMELIFTCLIENT_H
#define QTAWS_GAMELIFTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace GameLift {

class GameLiftClientPrivate;
class AcceptMatchRequest;
class AcceptMatchResponse;
class CreateAliasRequest;
class CreateAliasResponse;
class CreateBuildRequest;
class CreateBuildResponse;
class CreateFleetRequest;
class CreateFleetResponse;
class CreateGameSessionRequest;
class CreateGameSessionResponse;
class CreateGameSessionQueueRequest;
class CreateGameSessionQueueResponse;
class CreateMatchmakingConfigurationRequest;
class CreateMatchmakingConfigurationResponse;
class CreateMatchmakingRuleSetRequest;
class CreateMatchmakingRuleSetResponse;
class CreatePlayerSessionRequest;
class CreatePlayerSessionResponse;
class CreatePlayerSessionsRequest;
class CreatePlayerSessionsResponse;
class CreateScriptRequest;
class CreateScriptResponse;
class CreateVpcPeeringAuthorizationRequest;
class CreateVpcPeeringAuthorizationResponse;
class CreateVpcPeeringConnectionRequest;
class CreateVpcPeeringConnectionResponse;
class DeleteAliasRequest;
class DeleteAliasResponse;
class DeleteBuildRequest;
class DeleteBuildResponse;
class DeleteFleetRequest;
class DeleteFleetResponse;
class DeleteGameSessionQueueRequest;
class DeleteGameSessionQueueResponse;
class DeleteMatchmakingConfigurationRequest;
class DeleteMatchmakingConfigurationResponse;
class DeleteMatchmakingRuleSetRequest;
class DeleteMatchmakingRuleSetResponse;
class DeleteScalingPolicyRequest;
class DeleteScalingPolicyResponse;
class DeleteScriptRequest;
class DeleteScriptResponse;
class DeleteVpcPeeringAuthorizationRequest;
class DeleteVpcPeeringAuthorizationResponse;
class DeleteVpcPeeringConnectionRequest;
class DeleteVpcPeeringConnectionResponse;
class DescribeAliasRequest;
class DescribeAliasResponse;
class DescribeBuildRequest;
class DescribeBuildResponse;
class DescribeEC2InstanceLimitsRequest;
class DescribeEC2InstanceLimitsResponse;
class DescribeFleetAttributesRequest;
class DescribeFleetAttributesResponse;
class DescribeFleetCapacityRequest;
class DescribeFleetCapacityResponse;
class DescribeFleetEventsRequest;
class DescribeFleetEventsResponse;
class DescribeFleetPortSettingsRequest;
class DescribeFleetPortSettingsResponse;
class DescribeFleetUtilizationRequest;
class DescribeFleetUtilizationResponse;
class DescribeGameSessionDetailsRequest;
class DescribeGameSessionDetailsResponse;
class DescribeGameSessionPlacementRequest;
class DescribeGameSessionPlacementResponse;
class DescribeGameSessionQueuesRequest;
class DescribeGameSessionQueuesResponse;
class DescribeGameSessionsRequest;
class DescribeGameSessionsResponse;
class DescribeInstancesRequest;
class DescribeInstancesResponse;
class DescribeMatchmakingRequest;
class DescribeMatchmakingResponse;
class DescribeMatchmakingConfigurationsRequest;
class DescribeMatchmakingConfigurationsResponse;
class DescribeMatchmakingRuleSetsRequest;
class DescribeMatchmakingRuleSetsResponse;
class DescribePlayerSessionsRequest;
class DescribePlayerSessionsResponse;
class DescribeRuntimeConfigurationRequest;
class DescribeRuntimeConfigurationResponse;
class DescribeScalingPoliciesRequest;
class DescribeScalingPoliciesResponse;
class DescribeScriptRequest;
class DescribeScriptResponse;
class DescribeVpcPeeringAuthorizationsRequest;
class DescribeVpcPeeringAuthorizationsResponse;
class DescribeVpcPeeringConnectionsRequest;
class DescribeVpcPeeringConnectionsResponse;
class GetGameSessionLogUrlRequest;
class GetGameSessionLogUrlResponse;
class GetInstanceAccessRequest;
class GetInstanceAccessResponse;
class ListAliasesRequest;
class ListAliasesResponse;
class ListBuildsRequest;
class ListBuildsResponse;
class ListFleetsRequest;
class ListFleetsResponse;
class ListScriptsRequest;
class ListScriptsResponse;
class PutScalingPolicyRequest;
class PutScalingPolicyResponse;
class RequestUploadCredentialsRequest;
class RequestUploadCredentialsResponse;
class ResolveAliasRequest;
class ResolveAliasResponse;
class SearchGameSessionsRequest;
class SearchGameSessionsResponse;
class StartFleetActionsRequest;
class StartFleetActionsResponse;
class StartGameSessionPlacementRequest;
class StartGameSessionPlacementResponse;
class StartMatchBackfillRequest;
class StartMatchBackfillResponse;
class StartMatchmakingRequest;
class StartMatchmakingResponse;
class StopFleetActionsRequest;
class StopFleetActionsResponse;
class StopGameSessionPlacementRequest;
class StopGameSessionPlacementResponse;
class StopMatchmakingRequest;
class StopMatchmakingResponse;
class UpdateAliasRequest;
class UpdateAliasResponse;
class UpdateBuildRequest;
class UpdateBuildResponse;
class UpdateFleetAttributesRequest;
class UpdateFleetAttributesResponse;
class UpdateFleetCapacityRequest;
class UpdateFleetCapacityResponse;
class UpdateFleetPortSettingsRequest;
class UpdateFleetPortSettingsResponse;
class UpdateGameSessionRequest;
class UpdateGameSessionResponse;
class UpdateGameSessionQueueRequest;
class UpdateGameSessionQueueResponse;
class UpdateMatchmakingConfigurationRequest;
class UpdateMatchmakingConfigurationResponse;
class UpdateRuntimeConfigurationRequest;
class UpdateRuntimeConfigurationResponse;
class UpdateScriptRequest;
class UpdateScriptResponse;
class ValidateMatchmakingRuleSetRequest;
class ValidateMatchmakingRuleSetResponse;

class QTAWS_EXPORT GameLiftClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GameLiftClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    GameLiftClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptMatchResponse * acceptMatch(const AcceptMatchRequest &request);
    CreateAliasResponse * createAlias(const CreateAliasRequest &request);
    CreateBuildResponse * createBuild(const CreateBuildRequest &request);
    CreateFleetResponse * createFleet(const CreateFleetRequest &request);
    CreateGameSessionResponse * createGameSession(const CreateGameSessionRequest &request);
    CreateGameSessionQueueResponse * createGameSessionQueue(const CreateGameSessionQueueRequest &request);
    CreateMatchmakingConfigurationResponse * createMatchmakingConfiguration(const CreateMatchmakingConfigurationRequest &request);
    CreateMatchmakingRuleSetResponse * createMatchmakingRuleSet(const CreateMatchmakingRuleSetRequest &request);
    CreatePlayerSessionResponse * createPlayerSession(const CreatePlayerSessionRequest &request);
    CreatePlayerSessionsResponse * createPlayerSessions(const CreatePlayerSessionsRequest &request);
    CreateScriptResponse * createScript(const CreateScriptRequest &request);
    CreateVpcPeeringAuthorizationResponse * createVpcPeeringAuthorization(const CreateVpcPeeringAuthorizationRequest &request);
    CreateVpcPeeringConnectionResponse * createVpcPeeringConnection(const CreateVpcPeeringConnectionRequest &request);
    DeleteAliasResponse * deleteAlias(const DeleteAliasRequest &request);
    DeleteBuildResponse * deleteBuild(const DeleteBuildRequest &request);
    DeleteFleetResponse * deleteFleet(const DeleteFleetRequest &request);
    DeleteGameSessionQueueResponse * deleteGameSessionQueue(const DeleteGameSessionQueueRequest &request);
    DeleteMatchmakingConfigurationResponse * deleteMatchmakingConfiguration(const DeleteMatchmakingConfigurationRequest &request);
    DeleteMatchmakingRuleSetResponse * deleteMatchmakingRuleSet(const DeleteMatchmakingRuleSetRequest &request);
    DeleteScalingPolicyResponse * deleteScalingPolicy(const DeleteScalingPolicyRequest &request);
    DeleteScriptResponse * deleteScript(const DeleteScriptRequest &request);
    DeleteVpcPeeringAuthorizationResponse * deleteVpcPeeringAuthorization(const DeleteVpcPeeringAuthorizationRequest &request);
    DeleteVpcPeeringConnectionResponse * deleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest &request);
    DescribeAliasResponse * describeAlias(const DescribeAliasRequest &request);
    DescribeBuildResponse * describeBuild(const DescribeBuildRequest &request);
    DescribeEC2InstanceLimitsResponse * describeEC2InstanceLimits(const DescribeEC2InstanceLimitsRequest &request);
    DescribeFleetAttributesResponse * describeFleetAttributes(const DescribeFleetAttributesRequest &request);
    DescribeFleetCapacityResponse * describeFleetCapacity(const DescribeFleetCapacityRequest &request);
    DescribeFleetEventsResponse * describeFleetEvents(const DescribeFleetEventsRequest &request);
    DescribeFleetPortSettingsResponse * describeFleetPortSettings(const DescribeFleetPortSettingsRequest &request);
    DescribeFleetUtilizationResponse * describeFleetUtilization(const DescribeFleetUtilizationRequest &request);
    DescribeGameSessionDetailsResponse * describeGameSessionDetails(const DescribeGameSessionDetailsRequest &request);
    DescribeGameSessionPlacementResponse * describeGameSessionPlacement(const DescribeGameSessionPlacementRequest &request);
    DescribeGameSessionQueuesResponse * describeGameSessionQueues(const DescribeGameSessionQueuesRequest &request);
    DescribeGameSessionsResponse * describeGameSessions(const DescribeGameSessionsRequest &request);
    DescribeInstancesResponse * describeInstances(const DescribeInstancesRequest &request);
    DescribeMatchmakingResponse * describeMatchmaking(const DescribeMatchmakingRequest &request);
    DescribeMatchmakingConfigurationsResponse * describeMatchmakingConfigurations(const DescribeMatchmakingConfigurationsRequest &request);
    DescribeMatchmakingRuleSetsResponse * describeMatchmakingRuleSets(const DescribeMatchmakingRuleSetsRequest &request);
    DescribePlayerSessionsResponse * describePlayerSessions(const DescribePlayerSessionsRequest &request);
    DescribeRuntimeConfigurationResponse * describeRuntimeConfiguration(const DescribeRuntimeConfigurationRequest &request);
    DescribeScalingPoliciesResponse * describeScalingPolicies(const DescribeScalingPoliciesRequest &request);
    DescribeScriptResponse * describeScript(const DescribeScriptRequest &request);
    DescribeVpcPeeringAuthorizationsResponse * describeVpcPeeringAuthorizations(const DescribeVpcPeeringAuthorizationsRequest &request);
    DescribeVpcPeeringConnectionsResponse * describeVpcPeeringConnections(const DescribeVpcPeeringConnectionsRequest &request);
    GetGameSessionLogUrlResponse * getGameSessionLogUrl(const GetGameSessionLogUrlRequest &request);
    GetInstanceAccessResponse * getInstanceAccess(const GetInstanceAccessRequest &request);
    ListAliasesResponse * listAliases(const ListAliasesRequest &request);
    ListBuildsResponse * listBuilds(const ListBuildsRequest &request);
    ListFleetsResponse * listFleets(const ListFleetsRequest &request);
    ListScriptsResponse * listScripts(const ListScriptsRequest &request);
    PutScalingPolicyResponse * putScalingPolicy(const PutScalingPolicyRequest &request);
    RequestUploadCredentialsResponse * requestUploadCredentials(const RequestUploadCredentialsRequest &request);
    ResolveAliasResponse * resolveAlias(const ResolveAliasRequest &request);
    SearchGameSessionsResponse * searchGameSessions(const SearchGameSessionsRequest &request);
    StartFleetActionsResponse * startFleetActions(const StartFleetActionsRequest &request);
    StartGameSessionPlacementResponse * startGameSessionPlacement(const StartGameSessionPlacementRequest &request);
    StartMatchBackfillResponse * startMatchBackfill(const StartMatchBackfillRequest &request);
    StartMatchmakingResponse * startMatchmaking(const StartMatchmakingRequest &request);
    StopFleetActionsResponse * stopFleetActions(const StopFleetActionsRequest &request);
    StopGameSessionPlacementResponse * stopGameSessionPlacement(const StopGameSessionPlacementRequest &request);
    StopMatchmakingResponse * stopMatchmaking(const StopMatchmakingRequest &request);
    UpdateAliasResponse * updateAlias(const UpdateAliasRequest &request);
    UpdateBuildResponse * updateBuild(const UpdateBuildRequest &request);
    UpdateFleetAttributesResponse * updateFleetAttributes(const UpdateFleetAttributesRequest &request);
    UpdateFleetCapacityResponse * updateFleetCapacity(const UpdateFleetCapacityRequest &request);
    UpdateFleetPortSettingsResponse * updateFleetPortSettings(const UpdateFleetPortSettingsRequest &request);
    UpdateGameSessionResponse * updateGameSession(const UpdateGameSessionRequest &request);
    UpdateGameSessionQueueResponse * updateGameSessionQueue(const UpdateGameSessionQueueRequest &request);
    UpdateMatchmakingConfigurationResponse * updateMatchmakingConfiguration(const UpdateMatchmakingConfigurationRequest &request);
    UpdateRuntimeConfigurationResponse * updateRuntimeConfiguration(const UpdateRuntimeConfigurationRequest &request);
    UpdateScriptResponse * updateScript(const UpdateScriptRequest &request);
    ValidateMatchmakingRuleSetResponse * validateMatchmakingRuleSet(const ValidateMatchmakingRuleSetRequest &request);

private:
    Q_DECLARE_PRIVATE(GameLiftClient)
    Q_DISABLE_COPY(GameLiftClient)

};

} // namespace GameLift
} // namespace QtAws

#endif
