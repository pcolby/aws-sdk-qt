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

#include "apprunnerrequest.h"
#include "apprunnerrequest_p.h"

namespace QtAws {
namespace AppRunner {

/*!
 * \class QtAws::AppRunner::AppRunnerRequest
 * \brief The AppRunnerRequest class provides an interface for AppRunner requests.
 *
 * \inmodule QtAwsAppRunner
 */

/*!
 * \enum AppRunnerRequest::Action
 *
 * This enum describes the actions that can be performed as AppRunner
 * requests.
 *
 * \value AssociateCustomDomainAction AppRunner AssociateCustomDomain action.
 * \value CreateAutoScalingConfigurationAction AppRunner CreateAutoScalingConfiguration action.
 * \value CreateConnectionAction AppRunner CreateConnection action.
 * \value CreateServiceAction AppRunner CreateService action.
 * \value DeleteAutoScalingConfigurationAction AppRunner DeleteAutoScalingConfiguration action.
 * \value DeleteConnectionAction AppRunner DeleteConnection action.
 * \value DeleteServiceAction AppRunner DeleteService action.
 * \value DescribeAutoScalingConfigurationAction AppRunner DescribeAutoScalingConfiguration action.
 * \value DescribeCustomDomainsAction AppRunner DescribeCustomDomains action.
 * \value DescribeServiceAction AppRunner DescribeService action.
 * \value DisassociateCustomDomainAction AppRunner DisassociateCustomDomain action.
 * \value ListAutoScalingConfigurationsAction AppRunner ListAutoScalingConfigurations action.
 * \value ListConnectionsAction AppRunner ListConnections action.
 * \value ListOperationsAction AppRunner ListOperations action.
 * \value ListServicesAction AppRunner ListServices action.
 * \value ListTagsForResourceAction AppRunner ListTagsForResource action.
 * \value PauseServiceAction AppRunner PauseService action.
 * \value ResumeServiceAction AppRunner ResumeService action.
 * \value StartDeploymentAction AppRunner StartDeployment action.
 * \value TagResourceAction AppRunner TagResource action.
 * \value UntagResourceAction AppRunner UntagResource action.
 * \value UpdateServiceAction AppRunner UpdateService action.
 */

/*!
 * Constructs a AppRunnerRequest object for AppRunner \a action.
 */
AppRunnerRequest::AppRunnerRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AppRunnerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AppRunnerRequest::AppRunnerRequest(const AppRunnerRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AppRunnerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AppRunnerRequest object to be equal to \a other.
 */
AppRunnerRequest& AppRunnerRequest::operator=(const AppRunnerRequest &other)
{
    Q_D(AppRunnerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AppRunnerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppRunnerRequestPrivate.
 */
AppRunnerRequest::AppRunnerRequest(AppRunnerRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AppRunner action to be performed by this request.
 */
AppRunnerRequest::Action AppRunnerRequest::action() const
{
    Q_D(const AppRunnerRequest);
    return d->action;
}

/*!
 * Returns the name of the AppRunner action to be performed by this request.
 */
QString AppRunnerRequest::actionString() const
{
    return AppRunnerRequestPrivate::toString(action());
}

/*!
 * Returns the AppRunner API version implemented by this request.
 */
QString AppRunnerRequest::apiVersion() const
{
    Q_D(const AppRunnerRequest);
    return d->apiVersion;
}

/*!
 * Sets the AppRunner action to be performed by this request to \a action.
 */
void AppRunnerRequest::setAction(const Action action)
{
    Q_D(AppRunnerRequest);
    d->action = action;
}

/*!
 * Sets the AppRunner API version to include in this request to \a version.
 */
void AppRunnerRequest::setApiVersion(const QString &version)
{
    Q_D(AppRunnerRequest);
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
bool AppRunnerRequest::operator==(const AppRunnerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AppRunner queue name.
 *
 * @par From AppRunner FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AppRunner queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AppRunnerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AppRunnerRequest::clearParameter(const QString &name)
{
    Q_D(AppRunnerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AppRunnerRequest::clearParameters()
{
    Q_D(AppRunnerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AppRunnerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AppRunnerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AppRunnerRequest::parameters() const
{
    Q_D(const AppRunnerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AppRunnerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AppRunnerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AppRunnerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AppRunnerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AppRunner request using the given
 * \a endpoint.
 *
 * This AppRunner implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AppRunnerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AppRunnerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AppRunner::AppRunnerRequestPrivate
 * \brief The AppRunnerRequestPrivate class provides private implementation for AppRunnerRequest.
 * \internal
 *
 * \inmodule QtAwsAppRunner
 */

/*!
 * Constructs a AppRunnerRequestPrivate object for AppRunner \a action,
 * with public implementation \a q.
 */
AppRunnerRequestPrivate::AppRunnerRequestPrivate(const AppRunnerRequest::Action action, AppRunnerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AppRunnerRequest class's copy constructor.
 */
AppRunnerRequestPrivate::AppRunnerRequestPrivate(const AppRunnerRequestPrivate &other,
                                     AppRunnerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AppRunnerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AppRunner service's Action
 * query parameters.
 */
QString AppRunnerRequestPrivate::toString(const AppRunnerRequest::Action &action)
{
    #define ActionToString(action) \
        case AppRunnerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AppRunner
} // namespace QtAws
