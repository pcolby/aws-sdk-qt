/*
    Copyright 2013-2016 Paul Colby

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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    GameLiftCreateAliasResponse * createAlias(const GameLiftCreateAliasRequest &request);
    GameLiftCreateBuildResponse * createBuild(const GameLiftCreateBuildRequest &request);
    GameLiftCreateFleetResponse * createFleet(const GameLiftCreateFleetRequest &request);
    GameLiftCreateGameSessionResponse * createGameSession(const GameLiftCreateGameSessionRequest &request);
    GameLiftCreatePlayerSessionResponse * createPlayerSession(const GameLiftCreatePlayerSessionRequest &request);
    GameLiftCreatePlayerSessionsResponse * createPlayerSessions(const GameLiftCreatePlayerSessionsRequest &request);
    GameLiftDeleteAliasResponse * deleteAlias(const GameLiftDeleteAliasRequest &request);
    GameLiftDeleteBuildResponse * deleteBuild(const GameLiftDeleteBuildRequest &request);
    GameLiftDeleteFleetResponse * deleteFleet(const GameLiftDeleteFleetRequest &request);
    GameLiftDeleteScalingPolicyResponse * deleteScalingPolicy(const GameLiftDeleteScalingPolicyRequest &request);
    GameLiftDescribeAliasResponse * describeAlias(const GameLiftDescribeAliasRequest &request);
    GameLiftDescribeBuildResponse * describeBuild(const GameLiftDescribeBuildRequest &request);
    GameLiftDescribeEC2InstanceLimitsResponse * describeEC2InstanceLimits(const GameLiftDescribeEC2InstanceLimitsRequest &request);
    GameLiftDescribeFleetAttributesResponse * describeFleetAttributes(const GameLiftDescribeFleetAttributesRequest &request);
    GameLiftDescribeFleetCapacityResponse * describeFleetCapacity(const GameLiftDescribeFleetCapacityRequest &request);
    GameLiftDescribeFleetEventsResponse * describeFleetEvents(const GameLiftDescribeFleetEventsRequest &request);
    GameLiftDescribeFleetPortSettingsResponse * describeFleetPortSettings(const GameLiftDescribeFleetPortSettingsRequest &request);
    GameLiftDescribeFleetUtilizationResponse * describeFleetUtilization(const GameLiftDescribeFleetUtilizationRequest &request);
    GameLiftDescribeGameSessionDetailsResponse * describeGameSessionDetails(const GameLiftDescribeGameSessionDetailsRequest &request);
    GameLiftDescribeGameSessionsResponse * describeGameSessions(const GameLiftDescribeGameSessionsRequest &request);
    GameLiftDescribePlayerSessionsResponse * describePlayerSessions(const GameLiftDescribePlayerSessionsRequest &request);
    GameLiftDescribeRuntimeConfigurationResponse * describeRuntimeConfiguration(const GameLiftDescribeRuntimeConfigurationRequest &request);
    GameLiftDescribeScalingPoliciesResponse * describeScalingPolicies(const GameLiftDescribeScalingPoliciesRequest &request);
    GameLiftGetGameSessionLogUrlResponse * getGameSessionLogUrl(const GameLiftGetGameSessionLogUrlRequest &request);
    GameLiftListAliasesResponse * listAliases(const GameLiftListAliasesRequest &request);
    GameLiftListBuildsResponse * listBuilds(const GameLiftListBuildsRequest &request);
    GameLiftListFleetsResponse * listFleets(const GameLiftListFleetsRequest &request);
    GameLiftPutScalingPolicyResponse * putScalingPolicy(const GameLiftPutScalingPolicyRequest &request);
    GameLiftRequestUploadCredentialsResponse * requestUploadCredentials(const GameLiftRequestUploadCredentialsRequest &request);
    GameLiftResolveAliasResponse * resolveAlias(const GameLiftResolveAliasRequest &request);
    GameLiftSearchGameSessionsResponse * searchGameSessions(const GameLiftSearchGameSessionsRequest &request);
    GameLiftUpdateAliasResponse * updateAlias(const GameLiftUpdateAliasRequest &request);
    GameLiftUpdateBuildResponse * updateBuild(const GameLiftUpdateBuildRequest &request);
    GameLiftUpdateFleetAttributesResponse * updateFleetAttributes(const GameLiftUpdateFleetAttributesRequest &request);
    GameLiftUpdateFleetCapacityResponse * updateFleetCapacity(const GameLiftUpdateFleetCapacityRequest &request);
    GameLiftUpdateFleetPortSettingsResponse * updateFleetPortSettings(const GameLiftUpdateFleetPortSettingsRequest &request);
    GameLiftUpdateGameSessionResponse * updateGameSession(const GameLiftUpdateGameSessionRequest &request);
    GameLiftUpdateRuntimeConfigurationResponse * updateRuntimeConfiguration(const GameLiftUpdateRuntimeConfigurationRequest &request);

private:
    Q_DECLARE_PRIVATE(GameLiftClient)
    Q_DISABLE_COPY(GameLiftClient)

};

QTAWS_END_NAMESPACE

#endif
