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

#ifndef QTAWS_GAMELIFTREQUEST_H
#define QTAWS_GAMELIFTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsgameliftglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace GameLift {

class GameLiftRequestPrivate;

class QTAWSGAMELIFT_EXPORT GameLiftRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by GameLift.
    enum Action {
        AcceptMatchAction,
        ClaimGameServerAction,
        CreateAliasAction,
        CreateBuildAction,
        CreateFleetAction,
        CreateFleetLocationsAction,
        CreateGameServerGroupAction,
        CreateGameSessionAction,
        CreateGameSessionQueueAction,
        CreateMatchmakingConfigurationAction,
        CreateMatchmakingRuleSetAction,
        CreatePlayerSessionAction,
        CreatePlayerSessionsAction,
        CreateScriptAction,
        CreateVpcPeeringAuthorizationAction,
        CreateVpcPeeringConnectionAction,
        DeleteAliasAction,
        DeleteBuildAction,
        DeleteFleetAction,
        DeleteFleetLocationsAction,
        DeleteGameServerGroupAction,
        DeleteGameSessionQueueAction,
        DeleteMatchmakingConfigurationAction,
        DeleteMatchmakingRuleSetAction,
        DeleteScalingPolicyAction,
        DeleteScriptAction,
        DeleteVpcPeeringAuthorizationAction,
        DeleteVpcPeeringConnectionAction,
        DeregisterGameServerAction,
        DescribeAliasAction,
        DescribeBuildAction,
        DescribeEC2InstanceLimitsAction,
        DescribeFleetAttributesAction,
        DescribeFleetCapacityAction,
        DescribeFleetEventsAction,
        DescribeFleetLocationAttributesAction,
        DescribeFleetLocationCapacityAction,
        DescribeFleetLocationUtilizationAction,
        DescribeFleetPortSettingsAction,
        DescribeFleetUtilizationAction,
        DescribeGameServerAction,
        DescribeGameServerGroupAction,
        DescribeGameServerInstancesAction,
        DescribeGameSessionDetailsAction,
        DescribeGameSessionPlacementAction,
        DescribeGameSessionQueuesAction,
        DescribeGameSessionsAction,
        DescribeInstancesAction,
        DescribeMatchmakingAction,
        DescribeMatchmakingConfigurationsAction,
        DescribeMatchmakingRuleSetsAction,
        DescribePlayerSessionsAction,
        DescribeRuntimeConfigurationAction,
        DescribeScalingPoliciesAction,
        DescribeScriptAction,
        DescribeVpcPeeringAuthorizationsAction,
        DescribeVpcPeeringConnectionsAction,
        GetGameSessionLogUrlAction,
        GetInstanceAccessAction,
        ListAliasesAction,
        ListBuildsAction,
        ListFleetsAction,
        ListGameServerGroupsAction,
        ListGameServersAction,
        ListScriptsAction,
        ListTagsForResourceAction,
        PutScalingPolicyAction,
        RegisterGameServerAction,
        RequestUploadCredentialsAction,
        ResolveAliasAction,
        ResumeGameServerGroupAction,
        SearchGameSessionsAction,
        StartFleetActionsAction,
        StartGameSessionPlacementAction,
        StartMatchBackfillAction,
        StartMatchmakingAction,
        StopFleetActionsAction,
        StopGameSessionPlacementAction,
        StopMatchmakingAction,
        SuspendGameServerGroupAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAliasAction,
        UpdateBuildAction,
        UpdateFleetAttributesAction,
        UpdateFleetCapacityAction,
        UpdateFleetPortSettingsAction,
        UpdateGameServerAction,
        UpdateGameServerGroupAction,
        UpdateGameSessionAction,
        UpdateGameSessionQueueAction,
        UpdateMatchmakingConfigurationAction,
        UpdateRuntimeConfigurationAction,
        UpdateScriptAction,
        ValidateMatchmakingRuleSetAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    GameLiftRequest(const Action action);
    GameLiftRequest(const GameLiftRequest &other);
    GameLiftRequest &operator=(const GameLiftRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const GameLiftRequest &other) const;


protected:
    /// @cond internal
    GameLiftRequestPrivate * const d_ptr; ///< Internal d-pointer.
    explicit GameLiftRequest(GameLiftRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GameLiftRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
