// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
