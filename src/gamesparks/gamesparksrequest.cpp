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

#include "gamesparksrequest.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GameSparksRequest
 * \brief The GameSparksRequest class provides an interface for GameSparks requests.
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * \enum GameSparksRequest::Action
 *
 * This enum describes the actions that can be performed as GameSparks
 * requests.
 *
 * \value CreateGameAction GameSparks CreateGame action.
 * \value CreateSnapshotAction GameSparks CreateSnapshot action.
 * \value CreateStageAction GameSparks CreateStage action.
 * \value DeleteGameAction GameSparks DeleteGame action.
 * \value DeleteStageAction GameSparks DeleteStage action.
 * \value DisconnectPlayerAction GameSparks DisconnectPlayer action.
 * \value ExportSnapshotAction GameSparks ExportSnapshot action.
 * \value GetExtensionAction GameSparks GetExtension action.
 * \value GetExtensionVersionAction GameSparks GetExtensionVersion action.
 * \value GetGameAction GameSparks GetGame action.
 * \value GetGameConfigurationAction GameSparks GetGameConfiguration action.
 * \value GetGeneratedCodeJobAction GameSparks GetGeneratedCodeJob action.
 * \value GetPlayerConnectionStatusAction GameSparks GetPlayerConnectionStatus action.
 * \value GetSnapshotAction GameSparks GetSnapshot action.
 * \value GetStageAction GameSparks GetStage action.
 * \value GetStageDeploymentAction GameSparks GetStageDeployment action.
 * \value ImportGameConfigurationAction GameSparks ImportGameConfiguration action.
 * \value ListExtensionVersionsAction GameSparks ListExtensionVersions action.
 * \value ListExtensionsAction GameSparks ListExtensions action.
 * \value ListGamesAction GameSparks ListGames action.
 * \value ListGeneratedCodeJobsAction GameSparks ListGeneratedCodeJobs action.
 * \value ListSnapshotsAction GameSparks ListSnapshots action.
 * \value ListStageDeploymentsAction GameSparks ListStageDeployments action.
 * \value ListStagesAction GameSparks ListStages action.
 * \value ListTagsForResourceAction GameSparks ListTagsForResource action.
 * \value StartGeneratedCodeJobAction GameSparks StartGeneratedCodeJob action.
 * \value StartStageDeploymentAction GameSparks StartStageDeployment action.
 * \value TagResourceAction GameSparks TagResource action.
 * \value UntagResourceAction GameSparks UntagResource action.
 * \value UpdateGameAction GameSparks UpdateGame action.
 * \value UpdateGameConfigurationAction GameSparks UpdateGameConfiguration action.
 * \value UpdateSnapshotAction GameSparks UpdateSnapshot action.
 * \value UpdateStageAction GameSparks UpdateStage action.
 */

/*!
 * Constructs a GameSparksRequest object for GameSparks \a action.
 */
GameSparksRequest::GameSparksRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new GameSparksRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
GameSparksRequest::GameSparksRequest(const GameSparksRequest &other)
    : QtAws::Core::AwsAbstractRequest(new GameSparksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the GameSparksRequest object to be equal to \a other.
 */
GameSparksRequest& GameSparksRequest::operator=(const GameSparksRequest &other)
{
    Q_D(GameSparksRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa GameSparksRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GameSparksRequestPrivate.
 */
GameSparksRequest::GameSparksRequest(GameSparksRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the GameSparks action to be performed by this request.
 */
GameSparksRequest::Action GameSparksRequest::action() const
{
    Q_D(const GameSparksRequest);
    return d->action;
}

/*!
 * Returns the name of the GameSparks action to be performed by this request.
 */
QString GameSparksRequest::actionString() const
{
    return GameSparksRequestPrivate::toString(action());
}

/*!
 * Returns the GameSparks API version implemented by this request.
 */
QString GameSparksRequest::apiVersion() const
{
    Q_D(const GameSparksRequest);
    return d->apiVersion;
}

/*!
 * Sets the GameSparks action to be performed by this request to \a action.
 */
void GameSparksRequest::setAction(const Action action)
{
    Q_D(GameSparksRequest);
    d->action = action;
}

/*!
 * Sets the GameSparks API version to include in this request to \a version.
 */
void GameSparksRequest::setApiVersion(const QString &version)
{
    Q_D(GameSparksRequest);
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
bool GameSparksRequest::operator==(const GameSparksRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid GameSparks queue name.
 *
 * @par From GameSparks FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid GameSparks queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool GameSparksRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int GameSparksRequest::clearParameter(const QString &name)
{
    Q_D(GameSparksRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void GameSparksRequest::clearParameters()
{
    Q_D(GameSparksRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant GameSparksRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const GameSparksRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &GameSparksRequest::parameters() const
{
    Q_D(const GameSparksRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void GameSparksRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(GameSparksRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void GameSparksRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(GameSparksRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the GameSparks request using the given
 * \a endpoint.
 *
 * This GameSparks implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest GameSparksRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const GameSparksRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::GameSparks::GameSparksRequestPrivate
 * \brief The GameSparksRequestPrivate class provides private implementation for GameSparksRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GameSparksRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
GameSparksRequestPrivate::GameSparksRequestPrivate(const GameSparksRequest::Action action, GameSparksRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-08-17"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the GameSparksRequest class's copy constructor.
 */
GameSparksRequestPrivate::GameSparksRequestPrivate(const GameSparksRequestPrivate &other,
                                     GameSparksRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts GameSparksRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the GameSparks service's Action
 * query parameters.
 */
QString GameSparksRequestPrivate::toString(const GameSparksRequest::Action &action)
{
    #define ActionToString(action) \
        case GameSparksRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateGame);
        ActionToString(CreateSnapshot);
        ActionToString(CreateStage);
        ActionToString(DeleteGame);
        ActionToString(DeleteStage);
        ActionToString(DisconnectPlayer);
        ActionToString(ExportSnapshot);
        ActionToString(GetExtension);
        ActionToString(GetExtensionVersion);
        ActionToString(GetGame);
        ActionToString(GetGameConfiguration);
        ActionToString(GetGeneratedCodeJob);
        ActionToString(GetPlayerConnectionStatus);
        ActionToString(GetSnapshot);
        ActionToString(GetStage);
        ActionToString(GetStageDeployment);
        ActionToString(ImportGameConfiguration);
        ActionToString(ListExtensionVersions);
        ActionToString(ListExtensions);
        ActionToString(ListGames);
        ActionToString(ListGeneratedCodeJobs);
        ActionToString(ListSnapshots);
        ActionToString(ListStageDeployments);
        ActionToString(ListStages);
        ActionToString(ListTagsForResource);
        ActionToString(StartGeneratedCodeJob);
        ActionToString(StartStageDeployment);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateGame);
        ActionToString(UpdateGameConfiguration);
        ActionToString(UpdateSnapshot);
        ActionToString(UpdateStage);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace GameSparks
} // namespace QtAws
