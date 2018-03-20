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

#ifndef QTAWS_GAMELIFTCLIENT_H
#define QTAWS_GAMELIFTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace GameLift {

class GameLiftClientPrivate;
class AcceptMatchResponse;
class CreateAliasResponse;
class CreateBuildResponse;
class CreateFleetResponse;
class CreateGameSessionResponse;
class CreateGameSessionQueueResponse;
class CreateMatchmakingConfigurationResponse;
class CreateMatchmakingRuleSetResponse;
class CreatePlayerSessionResponse;
class CreatePlayerSessionsResponse;
class CreateVpcPeeringAuthorizationResponse;
class CreateVpcPeeringConnectionResponse;
class DeleteAliasResponse;
class DeleteBuildResponse;
class DeleteFleetResponse;
class DeleteGameSessionQueueResponse;
class DeleteMatchmakingConfigurationResponse;
class DeleteScalingPolicyResponse;
class DeleteVpcPeeringAuthorizationResponse;
class DeleteVpcPeeringConnectionResponse;
class DescribeAliasResponse;
class DescribeBuildResponse;
class DescribeEC2InstanceLimitsResponse;
class DescribeFleetAttributesResponse;
class DescribeFleetCapacityResponse;
class DescribeFleetEventsResponse;
class DescribeFleetPortSettingsResponse;
class DescribeFleetUtilizationResponse;
class DescribeGameSessionDetailsResponse;
class DescribeGameSessionPlacementResponse;
class DescribeGameSessionQueuesResponse;
class DescribeGameSessionsResponse;
class DescribeInstancesResponse;
class DescribeMatchmakingResponse;
class DescribeMatchmakingConfigurationsResponse;
class DescribeMatchmakingRuleSetsResponse;
class DescribePlayerSessionsResponse;
class DescribeRuntimeConfigurationResponse;
class DescribeScalingPoliciesResponse;
class DescribeVpcPeeringAuthorizationsResponse;
class DescribeVpcPeeringConnectionsResponse;
class GetGameSessionLogUrlResponse;
class GetInstanceAccessResponse;
class ListAliasesResponse;
class ListBuildsResponse;
class ListFleetsResponse;
class PutScalingPolicyResponse;
class RequestUploadCredentialsResponse;
class ResolveAliasResponse;
class SearchGameSessionsResponse;
class StartGameSessionPlacementResponse;
class StartMatchBackfillResponse;
class StartMatchmakingResponse;
class StopGameSessionPlacementResponse;
class StopMatchmakingResponse;
class UpdateAliasResponse;
class UpdateBuildResponse;
class UpdateFleetAttributesResponse;
class UpdateFleetCapacityResponse;
class UpdateFleetPortSettingsResponse;
class UpdateGameSessionResponse;
class UpdateGameSessionQueueResponse;
class UpdateMatchmakingConfigurationResponse;
class UpdateRuntimeConfigurationResponse;
class ValidateMatchmakingRuleSetResponse;

class QTAWS_EXPORT GameLiftClient : public AwsAbstractClient {
    Q_OBJECT

public:
    GameLiftClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    GameLiftClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
    CreateVpcPeeringAuthorizationResponse * createVpcPeeringAuthorization(const CreateVpcPeeringAuthorizationRequest &request);
    CreateVpcPeeringConnectionResponse * createVpcPeeringConnection(const CreateVpcPeeringConnectionRequest &request);
    DeleteAliasResponse * deleteAlias(const DeleteAliasRequest &request);
    DeleteBuildResponse * deleteBuild(const DeleteBuildRequest &request);
    DeleteFleetResponse * deleteFleet(const DeleteFleetRequest &request);
    DeleteGameSessionQueueResponse * deleteGameSessionQueue(const DeleteGameSessionQueueRequest &request);
    DeleteMatchmakingConfigurationResponse * deleteMatchmakingConfiguration(const DeleteMatchmakingConfigurationRequest &request);
    DeleteScalingPolicyResponse * deleteScalingPolicy(const DeleteScalingPolicyRequest &request);
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
    DescribeVpcPeeringAuthorizationsResponse * describeVpcPeeringAuthorizations(const DescribeVpcPeeringAuthorizationsRequest &request);
    DescribeVpcPeeringConnectionsResponse * describeVpcPeeringConnections(const DescribeVpcPeeringConnectionsRequest &request);
    GetGameSessionLogUrlResponse * getGameSessionLogUrl(const GetGameSessionLogUrlRequest &request);
    GetInstanceAccessResponse * getInstanceAccess(const GetInstanceAccessRequest &request);
    ListAliasesResponse * listAliases(const ListAliasesRequest &request);
    ListBuildsResponse * listBuilds(const ListBuildsRequest &request);
    ListFleetsResponse * listFleets(const ListFleetsRequest &request);
    PutScalingPolicyResponse * putScalingPolicy(const PutScalingPolicyRequest &request);
    RequestUploadCredentialsResponse * requestUploadCredentials(const RequestUploadCredentialsRequest &request);
    ResolveAliasResponse * resolveAlias(const ResolveAliasRequest &request);
    SearchGameSessionsResponse * searchGameSessions(const SearchGameSessionsRequest &request);
    StartGameSessionPlacementResponse * startGameSessionPlacement(const StartGameSessionPlacementRequest &request);
    StartMatchBackfillResponse * startMatchBackfill(const StartMatchBackfillRequest &request);
    StartMatchmakingResponse * startMatchmaking(const StartMatchmakingRequest &request);
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
    ValidateMatchmakingRuleSetResponse * validateMatchmakingRuleSet(const ValidateMatchmakingRuleSetRequest &request);

private:
    Q_DECLARE_PRIVATE(GameLiftClient)
    Q_DISABLE_COPY(GameLiftClient)

};

} // namespace GameLift
} // namespace AWS

#endif
