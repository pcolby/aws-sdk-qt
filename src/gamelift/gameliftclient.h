// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GAMELIFTCLIENT_H
#define QTAWS_GAMELIFTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsgameliftglobal.h"

class QNetworkReply;

namespace QtAws {
namespace GameLift {

class GameLiftClientPrivate;
class AcceptMatchRequest;
class AcceptMatchResponse;
class ClaimGameServerRequest;
class ClaimGameServerResponse;
class CreateAliasRequest;
class CreateAliasResponse;
class CreateBuildRequest;
class CreateBuildResponse;
class CreateFleetRequest;
class CreateFleetResponse;
class CreateFleetLocationsRequest;
class CreateFleetLocationsResponse;
class CreateGameServerGroupRequest;
class CreateGameServerGroupResponse;
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
class DeleteFleetLocationsRequest;
class DeleteFleetLocationsResponse;
class DeleteGameServerGroupRequest;
class DeleteGameServerGroupResponse;
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
class DeregisterGameServerRequest;
class DeregisterGameServerResponse;
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
class DescribeFleetLocationAttributesRequest;
class DescribeFleetLocationAttributesResponse;
class DescribeFleetLocationCapacityRequest;
class DescribeFleetLocationCapacityResponse;
class DescribeFleetLocationUtilizationRequest;
class DescribeFleetLocationUtilizationResponse;
class DescribeFleetPortSettingsRequest;
class DescribeFleetPortSettingsResponse;
class DescribeFleetUtilizationRequest;
class DescribeFleetUtilizationResponse;
class DescribeGameServerRequest;
class DescribeGameServerResponse;
class DescribeGameServerGroupRequest;
class DescribeGameServerGroupResponse;
class DescribeGameServerInstancesRequest;
class DescribeGameServerInstancesResponse;
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
class ListGameServerGroupsRequest;
class ListGameServerGroupsResponse;
class ListGameServersRequest;
class ListGameServersResponse;
class ListScriptsRequest;
class ListScriptsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutScalingPolicyRequest;
class PutScalingPolicyResponse;
class RegisterGameServerRequest;
class RegisterGameServerResponse;
class RequestUploadCredentialsRequest;
class RequestUploadCredentialsResponse;
class ResolveAliasRequest;
class ResolveAliasResponse;
class ResumeGameServerGroupRequest;
class ResumeGameServerGroupResponse;
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
class SuspendGameServerGroupRequest;
class SuspendGameServerGroupResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
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
class UpdateGameServerRequest;
class UpdateGameServerResponse;
class UpdateGameServerGroupRequest;
class UpdateGameServerGroupResponse;
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

class QTAWSGAMELIFT_EXPORT GameLiftClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GameLiftClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit GameLiftClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptMatchResponse * acceptMatch(const AcceptMatchRequest &request);
    ClaimGameServerResponse * claimGameServer(const ClaimGameServerRequest &request);
    CreateAliasResponse * createAlias(const CreateAliasRequest &request);
    CreateBuildResponse * createBuild(const CreateBuildRequest &request);
    CreateFleetResponse * createFleet(const CreateFleetRequest &request);
    CreateFleetLocationsResponse * createFleetLocations(const CreateFleetLocationsRequest &request);
    CreateGameServerGroupResponse * createGameServerGroup(const CreateGameServerGroupRequest &request);
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
    DeleteFleetLocationsResponse * deleteFleetLocations(const DeleteFleetLocationsRequest &request);
    DeleteGameServerGroupResponse * deleteGameServerGroup(const DeleteGameServerGroupRequest &request);
    DeleteGameSessionQueueResponse * deleteGameSessionQueue(const DeleteGameSessionQueueRequest &request);
    DeleteMatchmakingConfigurationResponse * deleteMatchmakingConfiguration(const DeleteMatchmakingConfigurationRequest &request);
    DeleteMatchmakingRuleSetResponse * deleteMatchmakingRuleSet(const DeleteMatchmakingRuleSetRequest &request);
    DeleteScalingPolicyResponse * deleteScalingPolicy(const DeleteScalingPolicyRequest &request);
    DeleteScriptResponse * deleteScript(const DeleteScriptRequest &request);
    DeleteVpcPeeringAuthorizationResponse * deleteVpcPeeringAuthorization(const DeleteVpcPeeringAuthorizationRequest &request);
    DeleteVpcPeeringConnectionResponse * deleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest &request);
    DeregisterGameServerResponse * deregisterGameServer(const DeregisterGameServerRequest &request);
    DescribeAliasResponse * describeAlias(const DescribeAliasRequest &request);
    DescribeBuildResponse * describeBuild(const DescribeBuildRequest &request);
    DescribeEC2InstanceLimitsResponse * describeEC2InstanceLimits(const DescribeEC2InstanceLimitsRequest &request);
    DescribeFleetAttributesResponse * describeFleetAttributes(const DescribeFleetAttributesRequest &request);
    DescribeFleetCapacityResponse * describeFleetCapacity(const DescribeFleetCapacityRequest &request);
    DescribeFleetEventsResponse * describeFleetEvents(const DescribeFleetEventsRequest &request);
    DescribeFleetLocationAttributesResponse * describeFleetLocationAttributes(const DescribeFleetLocationAttributesRequest &request);
    DescribeFleetLocationCapacityResponse * describeFleetLocationCapacity(const DescribeFleetLocationCapacityRequest &request);
    DescribeFleetLocationUtilizationResponse * describeFleetLocationUtilization(const DescribeFleetLocationUtilizationRequest &request);
    DescribeFleetPortSettingsResponse * describeFleetPortSettings(const DescribeFleetPortSettingsRequest &request);
    DescribeFleetUtilizationResponse * describeFleetUtilization(const DescribeFleetUtilizationRequest &request);
    DescribeGameServerResponse * describeGameServer(const DescribeGameServerRequest &request);
    DescribeGameServerGroupResponse * describeGameServerGroup(const DescribeGameServerGroupRequest &request);
    DescribeGameServerInstancesResponse * describeGameServerInstances(const DescribeGameServerInstancesRequest &request);
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
    ListGameServerGroupsResponse * listGameServerGroups(const ListGameServerGroupsRequest &request);
    ListGameServersResponse * listGameServers(const ListGameServersRequest &request);
    ListScriptsResponse * listScripts(const ListScriptsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutScalingPolicyResponse * putScalingPolicy(const PutScalingPolicyRequest &request);
    RegisterGameServerResponse * registerGameServer(const RegisterGameServerRequest &request);
    RequestUploadCredentialsResponse * requestUploadCredentials(const RequestUploadCredentialsRequest &request);
    ResolveAliasResponse * resolveAlias(const ResolveAliasRequest &request);
    ResumeGameServerGroupResponse * resumeGameServerGroup(const ResumeGameServerGroupRequest &request);
    SearchGameSessionsResponse * searchGameSessions(const SearchGameSessionsRequest &request);
    StartFleetActionsResponse * startFleetActions(const StartFleetActionsRequest &request);
    StartGameSessionPlacementResponse * startGameSessionPlacement(const StartGameSessionPlacementRequest &request);
    StartMatchBackfillResponse * startMatchBackfill(const StartMatchBackfillRequest &request);
    StartMatchmakingResponse * startMatchmaking(const StartMatchmakingRequest &request);
    StopFleetActionsResponse * stopFleetActions(const StopFleetActionsRequest &request);
    StopGameSessionPlacementResponse * stopGameSessionPlacement(const StopGameSessionPlacementRequest &request);
    StopMatchmakingResponse * stopMatchmaking(const StopMatchmakingRequest &request);
    SuspendGameServerGroupResponse * suspendGameServerGroup(const SuspendGameServerGroupRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAliasResponse * updateAlias(const UpdateAliasRequest &request);
    UpdateBuildResponse * updateBuild(const UpdateBuildRequest &request);
    UpdateFleetAttributesResponse * updateFleetAttributes(const UpdateFleetAttributesRequest &request);
    UpdateFleetCapacityResponse * updateFleetCapacity(const UpdateFleetCapacityRequest &request);
    UpdateFleetPortSettingsResponse * updateFleetPortSettings(const UpdateFleetPortSettingsRequest &request);
    UpdateGameServerResponse * updateGameServer(const UpdateGameServerRequest &request);
    UpdateGameServerGroupResponse * updateGameServerGroup(const UpdateGameServerGroupRequest &request);
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
