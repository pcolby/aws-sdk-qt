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

#include "route53recoveryreadinessrequest.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::Route53RecoveryReadinessRequest
 * \brief The Route53RecoveryReadinessRequest class provides an interface for Route53RecoveryReadiness requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * \enum Route53RecoveryReadinessRequest::Action
 *
 * This enum describes the actions that can be performed as Route53RecoveryReadiness
 * requests.
 *
 * \value CreateCellAction Route53RecoveryReadiness CreateCell action.
 * \value CreateCrossAccountAuthorizationAction Route53RecoveryReadiness CreateCrossAccountAuthorization action.
 * \value CreateReadinessCheckAction Route53RecoveryReadiness CreateReadinessCheck action.
 * \value CreateRecoveryGroupAction Route53RecoveryReadiness CreateRecoveryGroup action.
 * \value CreateResourceSetAction Route53RecoveryReadiness CreateResourceSet action.
 * \value DeleteCellAction Route53RecoveryReadiness DeleteCell action.
 * \value DeleteCrossAccountAuthorizationAction Route53RecoveryReadiness DeleteCrossAccountAuthorization action.
 * \value DeleteReadinessCheckAction Route53RecoveryReadiness DeleteReadinessCheck action.
 * \value DeleteRecoveryGroupAction Route53RecoveryReadiness DeleteRecoveryGroup action.
 * \value DeleteResourceSetAction Route53RecoveryReadiness DeleteResourceSet action.
 * \value GetArchitectureRecommendationsAction Route53RecoveryReadiness GetArchitectureRecommendations action.
 * \value GetCellAction Route53RecoveryReadiness GetCell action.
 * \value GetCellReadinessSummaryAction Route53RecoveryReadiness GetCellReadinessSummary action.
 * \value GetReadinessCheckAction Route53RecoveryReadiness GetReadinessCheck action.
 * \value GetReadinessCheckResourceStatusAction Route53RecoveryReadiness GetReadinessCheckResourceStatus action.
 * \value GetReadinessCheckStatusAction Route53RecoveryReadiness GetReadinessCheckStatus action.
 * \value GetRecoveryGroupAction Route53RecoveryReadiness GetRecoveryGroup action.
 * \value GetRecoveryGroupReadinessSummaryAction Route53RecoveryReadiness GetRecoveryGroupReadinessSummary action.
 * \value GetResourceSetAction Route53RecoveryReadiness GetResourceSet action.
 * \value ListCellsAction Route53RecoveryReadiness ListCells action.
 * \value ListCrossAccountAuthorizationsAction Route53RecoveryReadiness ListCrossAccountAuthorizations action.
 * \value ListReadinessChecksAction Route53RecoveryReadiness ListReadinessChecks action.
 * \value ListRecoveryGroupsAction Route53RecoveryReadiness ListRecoveryGroups action.
 * \value ListResourceSetsAction Route53RecoveryReadiness ListResourceSets action.
 * \value ListRulesAction Route53RecoveryReadiness ListRules action.
 * \value ListTagsForResourcesAction Route53RecoveryReadiness ListTagsForResources action.
 * \value TagResourceAction Route53RecoveryReadiness TagResource action.
 * \value UntagResourceAction Route53RecoveryReadiness UntagResource action.
 * \value UpdateCellAction Route53RecoveryReadiness UpdateCell action.
 * \value UpdateReadinessCheckAction Route53RecoveryReadiness UpdateReadinessCheck action.
 * \value UpdateRecoveryGroupAction Route53RecoveryReadiness UpdateRecoveryGroup action.
 * \value UpdateResourceSetAction Route53RecoveryReadiness UpdateResourceSet action.
 */

/*!
 * Constructs a Route53RecoveryReadinessRequest object for Route53RecoveryReadiness \a action.
 */
Route53RecoveryReadinessRequest::Route53RecoveryReadinessRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new Route53RecoveryReadinessRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
Route53RecoveryReadinessRequest::Route53RecoveryReadinessRequest(const Route53RecoveryReadinessRequest &other)
    : QtAws::Core::AwsAbstractRequest(new Route53RecoveryReadinessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the Route53RecoveryReadinessRequest object to be equal to \a other.
 */
Route53RecoveryReadinessRequest& Route53RecoveryReadinessRequest::operator=(const Route53RecoveryReadinessRequest &other)
{
    Q_D(Route53RecoveryReadinessRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa Route53RecoveryReadinessRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Route53RecoveryReadinessRequestPrivate.
 */
Route53RecoveryReadinessRequest::Route53RecoveryReadinessRequest(Route53RecoveryReadinessRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Route53RecoveryReadiness action to be performed by this request.
 */
Route53RecoveryReadinessRequest::Action Route53RecoveryReadinessRequest::action() const
{
    Q_D(const Route53RecoveryReadinessRequest);
    return d->action;
}

/*!
 * Returns the name of the Route53RecoveryReadiness action to be performed by this request.
 */
QString Route53RecoveryReadinessRequest::actionString() const
{
    return Route53RecoveryReadinessRequestPrivate::toString(action());
}

/*!
 * Returns the Route53RecoveryReadiness API version implemented by this request.
 */
QString Route53RecoveryReadinessRequest::apiVersion() const
{
    Q_D(const Route53RecoveryReadinessRequest);
    return d->apiVersion;
}

/*!
 * Sets the Route53RecoveryReadiness action to be performed by this request to \a action.
 */
void Route53RecoveryReadinessRequest::setAction(const Action action)
{
    Q_D(Route53RecoveryReadinessRequest);
    d->action = action;
}

/*!
 * Sets the Route53RecoveryReadiness API version to include in this request to \a version.
 */
void Route53RecoveryReadinessRequest::setApiVersion(const QString &version)
{
    Q_D(Route53RecoveryReadinessRequest);
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
bool Route53RecoveryReadinessRequest::operator==(const Route53RecoveryReadinessRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Route53RecoveryReadiness queue name.
 *
 * @par From Route53RecoveryReadiness FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Route53RecoveryReadiness queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool Route53RecoveryReadinessRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int Route53RecoveryReadinessRequest::clearParameter(const QString &name)
{
    Q_D(Route53RecoveryReadinessRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void Route53RecoveryReadinessRequest::clearParameters()
{
    Q_D(Route53RecoveryReadinessRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant Route53RecoveryReadinessRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Route53RecoveryReadinessRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &Route53RecoveryReadinessRequest::parameters() const
{
    Q_D(const Route53RecoveryReadinessRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void Route53RecoveryReadinessRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Route53RecoveryReadinessRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void Route53RecoveryReadinessRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(Route53RecoveryReadinessRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Route53RecoveryReadiness request using the given
 * \a endpoint.
 *
 * This Route53RecoveryReadiness implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest Route53RecoveryReadinessRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const Route53RecoveryReadinessRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::Route53RecoveryReadinessRequestPrivate
 * \brief The Route53RecoveryReadinessRequestPrivate class provides private implementation for Route53RecoveryReadinessRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a Route53RecoveryReadinessRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
Route53RecoveryReadinessRequestPrivate::Route53RecoveryReadinessRequestPrivate(const Route53RecoveryReadinessRequest::Action action, Route53RecoveryReadinessRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-12-02"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Route53RecoveryReadinessRequest class's copy constructor.
 */
Route53RecoveryReadinessRequestPrivate::Route53RecoveryReadinessRequestPrivate(const Route53RecoveryReadinessRequestPrivate &other,
                                     Route53RecoveryReadinessRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts Route53RecoveryReadinessRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Route53RecoveryReadiness service's Action
 * query parameters.
 */
QString Route53RecoveryReadinessRequestPrivate::toString(const Route53RecoveryReadinessRequest::Action &action)
{
    #define ActionToString(action) \
        case Route53RecoveryReadinessRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateCell);
        ActionToString(CreateCrossAccountAuthorization);
        ActionToString(CreateReadinessCheck);
        ActionToString(CreateRecoveryGroup);
        ActionToString(CreateResourceSet);
        ActionToString(DeleteCell);
        ActionToString(DeleteCrossAccountAuthorization);
        ActionToString(DeleteReadinessCheck);
        ActionToString(DeleteRecoveryGroup);
        ActionToString(DeleteResourceSet);
        ActionToString(GetArchitectureRecommendations);
        ActionToString(GetCell);
        ActionToString(GetCellReadinessSummary);
        ActionToString(GetReadinessCheck);
        ActionToString(GetReadinessCheckResourceStatus);
        ActionToString(GetReadinessCheckStatus);
        ActionToString(GetRecoveryGroup);
        ActionToString(GetRecoveryGroupReadinessSummary);
        ActionToString(GetResourceSet);
        ActionToString(ListCells);
        ActionToString(ListCrossAccountAuthorizations);
        ActionToString(ListReadinessChecks);
        ActionToString(ListRecoveryGroups);
        ActionToString(ListResourceSets);
        ActionToString(ListRules);
        ActionToString(ListTagsForResources);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateCell);
        ActionToString(UpdateReadinessCheck);
        ActionToString(UpdateRecoveryGroup);
        ActionToString(UpdateResourceSet);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
