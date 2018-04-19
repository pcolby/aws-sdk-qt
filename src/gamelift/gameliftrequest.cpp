/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "gameliftrequest.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/*!
 * \class QtAws::GameLift::GameLiftRequest
 * \brief The GameLiftRequest class provides an interface for GameLift requests.
 *
 * \inmodule QtAwsGameLift
 */

/*!
 * \enum GameLiftRequest::Action
 *
 * This enum describes the actions that can be performed as GameLift
 * requests.
 *
 * \value AcceptMatchAction GameLift AcceptMatch action.
 * \value CreateAliasAction GameLift CreateAlias action.
 * \value CreateBuildAction GameLift CreateBuild action.
 * \value CreateFleetAction GameLift CreateFleet action.
 * \value CreateGameSessionAction GameLift CreateGameSession action.
 * \value CreateGameSessionQueueAction GameLift CreateGameSessionQueue action.
 * \value CreateMatchmakingConfigurationAction GameLift CreateMatchmakingConfiguration action.
 * \value CreateMatchmakingRuleSetAction GameLift CreateMatchmakingRuleSet action.
 * \value CreatePlayerSessionAction GameLift CreatePlayerSession action.
 * \value CreatePlayerSessionsAction GameLift CreatePlayerSessions action.
 * \value CreateVpcPeeringAuthorizationAction GameLift CreateVpcPeeringAuthorization action.
 * \value CreateVpcPeeringConnectionAction GameLift CreateVpcPeeringConnection action.
 * \value DeleteAliasAction GameLift DeleteAlias action.
 * \value DeleteBuildAction GameLift DeleteBuild action.
 * \value DeleteFleetAction GameLift DeleteFleet action.
 * \value DeleteGameSessionQueueAction GameLift DeleteGameSessionQueue action.
 * \value DeleteMatchmakingConfigurationAction GameLift DeleteMatchmakingConfiguration action.
 * \value DeleteScalingPolicyAction GameLift DeleteScalingPolicy action.
 * \value DeleteVpcPeeringAuthorizationAction GameLift DeleteVpcPeeringAuthorization action.
 * \value DeleteVpcPeeringConnectionAction GameLift DeleteVpcPeeringConnection action.
 * \value DescribeAliasAction GameLift DescribeAlias action.
 * \value DescribeBuildAction GameLift DescribeBuild action.
 * \value DescribeEC2InstanceLimitsAction GameLift DescribeEC2InstanceLimits action.
 * \value DescribeFleetAttributesAction GameLift DescribeFleetAttributes action.
 * \value DescribeFleetCapacityAction GameLift DescribeFleetCapacity action.
 * \value DescribeFleetEventsAction GameLift DescribeFleetEvents action.
 * \value DescribeFleetPortSettingsAction GameLift DescribeFleetPortSettings action.
 * \value DescribeFleetUtilizationAction GameLift DescribeFleetUtilization action.
 * \value DescribeGameSessionDetailsAction GameLift DescribeGameSessionDetails action.
 * \value DescribeGameSessionPlacementAction GameLift DescribeGameSessionPlacement action.
 * \value DescribeGameSessionQueuesAction GameLift DescribeGameSessionQueues action.
 * \value DescribeGameSessionsAction GameLift DescribeGameSessions action.
 * \value DescribeInstancesAction GameLift DescribeInstances action.
 * \value DescribeMatchmakingAction GameLift DescribeMatchmaking action.
 * \value DescribeMatchmakingConfigurationsAction GameLift DescribeMatchmakingConfigurations action.
 * \value DescribeMatchmakingRuleSetsAction GameLift DescribeMatchmakingRuleSets action.
 * \value DescribePlayerSessionsAction GameLift DescribePlayerSessions action.
 * \value DescribeRuntimeConfigurationAction GameLift DescribeRuntimeConfiguration action.
 * \value DescribeScalingPoliciesAction GameLift DescribeScalingPolicies action.
 * \value DescribeVpcPeeringAuthorizationsAction GameLift DescribeVpcPeeringAuthorizations action.
 * \value DescribeVpcPeeringConnectionsAction GameLift DescribeVpcPeeringConnections action.
 * \value GetGameSessionLogUrlAction GameLift GetGameSessionLogUrl action.
 * \value GetInstanceAccessAction GameLift GetInstanceAccess action.
 * \value ListAliasesAction GameLift ListAliases action.
 * \value ListBuildsAction GameLift ListBuilds action.
 * \value ListFleetsAction GameLift ListFleets action.
 * \value PutScalingPolicyAction GameLift PutScalingPolicy action.
 * \value RequestUploadCredentialsAction GameLift RequestUploadCredentials action.
 * \value ResolveAliasAction GameLift ResolveAlias action.
 * \value SearchGameSessionsAction GameLift SearchGameSessions action.
 * \value StartGameSessionPlacementAction GameLift StartGameSessionPlacement action.
 * \value StartMatchBackfillAction GameLift StartMatchBackfill action.
 * \value StartMatchmakingAction GameLift StartMatchmaking action.
 * \value StopGameSessionPlacementAction GameLift StopGameSessionPlacement action.
 * \value StopMatchmakingAction GameLift StopMatchmaking action.
 * \value UpdateAliasAction GameLift UpdateAlias action.
 * \value UpdateBuildAction GameLift UpdateBuild action.
 * \value UpdateFleetAttributesAction GameLift UpdateFleetAttributes action.
 * \value UpdateFleetCapacityAction GameLift UpdateFleetCapacity action.
 * \value UpdateFleetPortSettingsAction GameLift UpdateFleetPortSettings action.
 * \value UpdateGameSessionAction GameLift UpdateGameSession action.
 * \value UpdateGameSessionQueueAction GameLift UpdateGameSessionQueue action.
 * \value UpdateMatchmakingConfigurationAction GameLift UpdateMatchmakingConfiguration action.
 * \value UpdateRuntimeConfigurationAction GameLift UpdateRuntimeConfiguration action.
 * \value ValidateMatchmakingRuleSetAction GameLift ValidateMatchmakingRuleSet action.
 */

/*!
 * Constructs a[n] GameLiftRequest object for GameLift \a action.
 */
GameLiftRequest::GameLiftRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new GameLiftRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
GameLiftRequest::GameLiftRequest(const GameLiftRequest &other)
    : QtAws::Core::AwsAbstractRequest(new GameLiftRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the GameLiftRequest object to be equal to \a other.
 */
GameLiftRequest& GameLiftRequest::operator=(const GameLiftRequest &other)
{
    Q_D(GameLiftRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa GameLiftRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GameLiftRequestPrivate.
 */
GameLiftRequest::GameLiftRequest(GameLiftRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the GameLift action to be performed by this request.
 */
GameLiftRequest::Action GameLiftRequest::action() const
{
    Q_D(const GameLiftRequest);
    return d->action;
}

/*!
 * Returns the name of the GameLift action to be performed by this request.
 */
QString GameLiftRequest::actionString() const
{
    return GameLiftRequestPrivate::toString(action());
}

/*!
 * Returns the GameLift API version implemented by this request.
 */
QString GameLiftRequest::apiVersion() const
{
    Q_D(const GameLiftRequest);
    return d->apiVersion;
}

/*!
 * Sets the GameLift action to be performed by this request to \a action.
 */
void GameLiftRequest::setAction(const Action action)
{
    Q_D(GameLiftRequest);
    d->action = action;
}

/*!
 * Sets the GameLift API version to include in this request to \a version.
 */
void GameLiftRequest::setApiVersion(const QString &version)
{
    Q_D(GameLiftRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool GameLiftRequest::operator==(const GameLiftRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid GameLift queue name.
 *
 * @par From GameLift FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid GameLift queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool GameLiftRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int GameLiftRequest::clearParameter(const QString &name)
{
    Q_D(GameLiftRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void GameLiftRequest::clearParameters()
{
    Q_D(GameLiftRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant GameLiftRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const GameLiftRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &GameLiftRequest::parameters() const
{
    Q_D(const GameLiftRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void GameLiftRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(GameLiftRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void GameLiftRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(GameLiftRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the GameLift request using the given
 * \a endpoint.
 *
 * This GameLift implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest GameLiftRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const GameLiftRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::GameLift::GameLiftRequestPrivate
 * \brief The GameLiftRequestPrivate class provides private implementation for GameLiftRequest.
 * \internal
 *
 * \inmodule QtAwsGameLift
 */

/*!
 * Constructs a GameLiftRequestPrivate object for GameLift \a action with,
 * public implementation \a q.
 */
GameLiftRequestPrivate::GameLiftRequestPrivate(const GameLiftRequest::Action action, GameLiftRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the GameLiftRequest class's copy constructor.
 */
GameLiftRequestPrivate::GameLiftRequestPrivate(const GameLiftRequestPrivate &other,
                                     GameLiftRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts GameLiftRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the GameLift service's Action
 * query parameters.
 */
QString GameLiftRequestPrivate::toString(const GameLiftRequest::Action &action)
{
    #define ActionToString(action) \
        case GameLiftRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace GameLift
} // namespace QtAws
