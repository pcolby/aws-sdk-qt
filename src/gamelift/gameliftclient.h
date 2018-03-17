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

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace GameLift {

class GameLiftClientPrivate;

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
    CreateAliasResponse * createAlias(const CreateAliasRequest &request);
    CreateBuildResponse * createBuild(const CreateBuildRequest &request);
    CreateFleetResponse * createFleet(const CreateFleetRequest &request);
    CreateGameSessionResponse * createGameSession(const CreateGameSessionRequest &request);
    CreatePlayerSessionResponse * createPlayerSession(const CreatePlayerSessionRequest &request);
    CreatePlayerSessionsResponse * createPlayerSessions(const CreatePlayerSessionsRequest &request);
    DeleteAliasResponse * deleteAlias(const DeleteAliasRequest &request);
    DeleteBuildResponse * deleteBuild(const DeleteBuildRequest &request);
    DeleteFleetResponse * deleteFleet(const DeleteFleetRequest &request);
    DeleteScalingPolicyResponse * deleteScalingPolicy(const DeleteScalingPolicyRequest &request);
    DescribeAliasResponse * describeAlias(const DescribeAliasRequest &request);
    DescribeBuildResponse * describeBuild(const DescribeBuildRequest &request);
    DescribeEC2InstanceLimitsResponse * describeEC2InstanceLimits(const DescribeEC2InstanceLimitsRequest &request);
    DescribeFleetAttributesResponse * describeFleetAttributes(const DescribeFleetAttributesRequest &request);
    DescribeFleetCapacityResponse * describeFleetCapacity(const DescribeFleetCapacityRequest &request);
    DescribeFleetEventsResponse * describeFleetEvents(const DescribeFleetEventsRequest &request);
    DescribeFleetPortSettingsResponse * describeFleetPortSettings(const DescribeFleetPortSettingsRequest &request);
    DescribeFleetUtilizationResponse * describeFleetUtilization(const DescribeFleetUtilizationRequest &request);
    DescribeGameSessionDetailsResponse * describeGameSessionDetails(const DescribeGameSessionDetailsRequest &request);
    DescribeGameSessionsResponse * describeGameSessions(const DescribeGameSessionsRequest &request);
    DescribePlayerSessionsResponse * describePlayerSessions(const DescribePlayerSessionsRequest &request);
    DescribeRuntimeConfigurationResponse * describeRuntimeConfiguration(const DescribeRuntimeConfigurationRequest &request);
    DescribeScalingPoliciesResponse * describeScalingPolicies(const DescribeScalingPoliciesRequest &request);
    GetGameSessionLogUrlResponse * getGameSessionLogUrl(const GetGameSessionLogUrlRequest &request);
    ListAliasesResponse * listAliases(const ListAliasesRequest &request);
    ListBuildsResponse * listBuilds(const ListBuildsRequest &request);
    ListFleetsResponse * listFleets(const ListFleetsRequest &request);
    PutScalingPolicyResponse * putScalingPolicy(const PutScalingPolicyRequest &request);
    RequestUploadCredentialsResponse * requestUploadCredentials(const RequestUploadCredentialsRequest &request);
    ResolveAliasResponse * resolveAlias(const ResolveAliasRequest &request);
    SearchGameSessionsResponse * searchGameSessions(const SearchGameSessionsRequest &request);
    UpdateAliasResponse * updateAlias(const UpdateAliasRequest &request);
    UpdateBuildResponse * updateBuild(const UpdateBuildRequest &request);
    UpdateFleetAttributesResponse * updateFleetAttributes(const UpdateFleetAttributesRequest &request);
    UpdateFleetCapacityResponse * updateFleetCapacity(const UpdateFleetCapacityRequest &request);
    UpdateFleetPortSettingsResponse * updateFleetPortSettings(const UpdateFleetPortSettingsRequest &request);
    UpdateGameSessionResponse * updateGameSession(const UpdateGameSessionRequest &request);
    UpdateRuntimeConfigurationResponse * updateRuntimeConfiguration(const UpdateRuntimeConfigurationRequest &request);

private:
    Q_DECLARE_PRIVATE(GameLiftClient)
    Q_DISABLE_COPY(GameLiftClient)

};

} // namespace GameLift
} // namespace AWS

#endif
