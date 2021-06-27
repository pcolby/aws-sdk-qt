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

#include "amplifyrequest.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::AmplifyRequest
 * \brief The AmplifyRequest class provides an interface for Amplify requests.
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * \enum AmplifyRequest::Action
 *
 * This enum describes the actions that can be performed as Amplify
 * requests.
 *
 * \value CreateAppAction Amplify CreateApp action.
 * \value CreateBackendEnvironmentAction Amplify CreateBackendEnvironment action.
 * \value CreateBranchAction Amplify CreateBranch action.
 * \value CreateDeploymentAction Amplify CreateDeployment action.
 * \value CreateDomainAssociationAction Amplify CreateDomainAssociation action.
 * \value CreateWebhookAction Amplify CreateWebhook action.
 * \value DeleteAppAction Amplify DeleteApp action.
 * \value DeleteBackendEnvironmentAction Amplify DeleteBackendEnvironment action.
 * \value DeleteBranchAction Amplify DeleteBranch action.
 * \value DeleteDomainAssociationAction Amplify DeleteDomainAssociation action.
 * \value DeleteJobAction Amplify DeleteJob action.
 * \value DeleteWebhookAction Amplify DeleteWebhook action.
 * \value GenerateAccessLogsAction Amplify GenerateAccessLogs action.
 * \value GetAppAction Amplify GetApp action.
 * \value GetArtifactUrlAction Amplify GetArtifactUrl action.
 * \value GetBackendEnvironmentAction Amplify GetBackendEnvironment action.
 * \value GetBranchAction Amplify GetBranch action.
 * \value GetDomainAssociationAction Amplify GetDomainAssociation action.
 * \value GetJobAction Amplify GetJob action.
 * \value GetWebhookAction Amplify GetWebhook action.
 * \value ListAppsAction Amplify ListApps action.
 * \value ListArtifactsAction Amplify ListArtifacts action.
 * \value ListBackendEnvironmentsAction Amplify ListBackendEnvironments action.
 * \value ListBranchesAction Amplify ListBranches action.
 * \value ListDomainAssociationsAction Amplify ListDomainAssociations action.
 * \value ListJobsAction Amplify ListJobs action.
 * \value ListTagsForResourceAction Amplify ListTagsForResource action.
 * \value ListWebhooksAction Amplify ListWebhooks action.
 * \value StartDeploymentAction Amplify StartDeployment action.
 * \value StartJobAction Amplify StartJob action.
 * \value StopJobAction Amplify StopJob action.
 * \value TagResourceAction Amplify TagResource action.
 * \value UntagResourceAction Amplify UntagResource action.
 * \value UpdateAppAction Amplify UpdateApp action.
 * \value UpdateBranchAction Amplify UpdateBranch action.
 * \value UpdateDomainAssociationAction Amplify UpdateDomainAssociation action.
 * \value UpdateWebhookAction Amplify UpdateWebhook action.
 */

/*!
 * Constructs a AmplifyRequest object for Amplify \a action.
 */
AmplifyRequest::AmplifyRequest(const Action action)
    : d_ptr(new AmplifyRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AmplifyRequest::AmplifyRequest(const AmplifyRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new AmplifyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AmplifyRequest object to be equal to \a other.
 */
AmplifyRequest& AmplifyRequest::operator=(const AmplifyRequest &other)
{
    Q_D(AmplifyRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AmplifyRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AmplifyRequestPrivate.
 */
AmplifyRequest::AmplifyRequest(AmplifyRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the Amplify action to be performed by this request.
 */
AmplifyRequest::Action AmplifyRequest::action() const
{
    Q_D(const AmplifyRequest);
    return d->action;
}

/*!
 * Returns the name of the Amplify action to be performed by this request.
 */
QString AmplifyRequest::actionString() const
{
    return AmplifyRequestPrivate::toString(action());
}

/*!
 * Returns the Amplify API version implemented by this request.
 */
QString AmplifyRequest::apiVersion() const
{
    Q_D(const AmplifyRequest);
    return d->apiVersion;
}

/*!
 * Sets the Amplify action to be performed by this request to \a action.
 */
void AmplifyRequest::setAction(const Action action)
{
    Q_D(AmplifyRequest);
    d->action = action;
}

/*!
 * Sets the Amplify API version to include in this request to \a version.
 */
void AmplifyRequest::setApiVersion(const QString &version)
{
    Q_D(AmplifyRequest);
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
bool AmplifyRequest::operator==(const AmplifyRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Amplify queue name.
 *
 * @par From Amplify FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Amplify queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AmplifyRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AmplifyRequest::clearParameter(const QString &name)
{
    Q_D(AmplifyRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AmplifyRequest::clearParameters()
{
    Q_D(AmplifyRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AmplifyRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AmplifyRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AmplifyRequest::parameters() const
{
    Q_D(const AmplifyRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AmplifyRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AmplifyRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AmplifyRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AmplifyRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Amplify request using the given
 * \a endpoint.
 *
 * This Amplify implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AmplifyRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AmplifyRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Amplify::AmplifyRequestPrivate
 * \brief The AmplifyRequestPrivate class provides private implementation for AmplifyRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a AmplifyRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
AmplifyRequestPrivate::AmplifyRequestPrivate(const AmplifyRequest::Action action, AmplifyRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AmplifyRequest class's copy constructor.
 */
AmplifyRequestPrivate::AmplifyRequestPrivate(const AmplifyRequestPrivate &other,
                                     AmplifyRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AmplifyRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Amplify service's Action
 * query parameters.
 */
QString AmplifyRequestPrivate::toString(const AmplifyRequest::Action &action)
{
    #define ActionToString(action) \
        case AmplifyRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Amplify
} // namespace QtAws
