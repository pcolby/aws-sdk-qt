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

#include "smsrequest.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::SmsRequest
 * \brief The SmsRequest class provides an interface for SMS requests.
 *
 * \inmodule QtAwsSMS
 */

/*!
 * \enum SmsRequest::Action
 *
 * This enum describes the actions that can be performed as SMS
 * requests.
 *
 * \value CreateAppAction SMS CreateApp action.
 * \value CreateReplicationJobAction SMS CreateReplicationJob action.
 * \value DeleteAppAction SMS DeleteApp action.
 * \value DeleteAppLaunchConfigurationAction SMS DeleteAppLaunchConfiguration action.
 * \value DeleteAppReplicationConfigurationAction SMS DeleteAppReplicationConfiguration action.
 * \value DeleteAppValidationConfigurationAction SMS DeleteAppValidationConfiguration action.
 * \value DeleteReplicationJobAction SMS DeleteReplicationJob action.
 * \value DeleteServerCatalogAction SMS DeleteServerCatalog action.
 * \value DisassociateConnectorAction SMS DisassociateConnector action.
 * \value GenerateChangeSetAction SMS GenerateChangeSet action.
 * \value GenerateTemplateAction SMS GenerateTemplate action.
 * \value GetAppAction SMS GetApp action.
 * \value GetAppLaunchConfigurationAction SMS GetAppLaunchConfiguration action.
 * \value GetAppReplicationConfigurationAction SMS GetAppReplicationConfiguration action.
 * \value GetAppValidationConfigurationAction SMS GetAppValidationConfiguration action.
 * \value GetAppValidationOutputAction SMS GetAppValidationOutput action.
 * \value GetConnectorsAction SMS GetConnectors action.
 * \value GetReplicationJobsAction SMS GetReplicationJobs action.
 * \value GetReplicationRunsAction SMS GetReplicationRuns action.
 * \value GetServersAction SMS GetServers action.
 * \value ImportAppCatalogAction SMS ImportAppCatalog action.
 * \value ImportServerCatalogAction SMS ImportServerCatalog action.
 * \value LaunchAppAction SMS LaunchApp action.
 * \value ListAppsAction SMS ListApps action.
 * \value NotifyAppValidationOutputAction SMS NotifyAppValidationOutput action.
 * \value PutAppLaunchConfigurationAction SMS PutAppLaunchConfiguration action.
 * \value PutAppReplicationConfigurationAction SMS PutAppReplicationConfiguration action.
 * \value PutAppValidationConfigurationAction SMS PutAppValidationConfiguration action.
 * \value StartAppReplicationAction SMS StartAppReplication action.
 * \value StartOnDemandAppReplicationAction SMS StartOnDemandAppReplication action.
 * \value StartOnDemandReplicationRunAction SMS StartOnDemandReplicationRun action.
 * \value StopAppReplicationAction SMS StopAppReplication action.
 * \value TerminateAppAction SMS TerminateApp action.
 * \value UpdateAppAction SMS UpdateApp action.
 * \value UpdateReplicationJobAction SMS UpdateReplicationJob action.
 */

/*!
 * Constructs a SmsRequest object for SMS \a action.
 */
SmsRequest::SmsRequest(const Action action)
    : d_ptr(new SmsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SmsRequest::SmsRequest(const SmsRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new SmsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SmsRequest object to be equal to \a other.
 */
SmsRequest& SmsRequest::operator=(const SmsRequest &other)
{
    Q_D(SmsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SmsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SmsRequestPrivate.
 */
SmsRequest::SmsRequest(SmsRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the SMS action to be performed by this request.
 */
SmsRequest::Action SmsRequest::action() const
{
    Q_D(const SmsRequest);
    return d->action;
}

/*!
 * Returns the name of the SMS action to be performed by this request.
 */
QString SmsRequest::actionString() const
{
    return SmsRequestPrivate::toString(action());
}

/*!
 * Returns the SMS API version implemented by this request.
 */
QString SmsRequest::apiVersion() const
{
    Q_D(const SmsRequest);
    return d->apiVersion;
}

/*!
 * Sets the SMS action to be performed by this request to \a action.
 */
void SmsRequest::setAction(const Action action)
{
    Q_D(SmsRequest);
    d->action = action;
}

/*!
 * Sets the SMS API version to include in this request to \a version.
 */
void SmsRequest::setApiVersion(const QString &version)
{
    Q_D(SmsRequest);
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
bool SmsRequest::operator==(const SmsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SMS queue name.
 *
 * @par From SMS FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SMS queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SmsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SmsRequest::clearParameter(const QString &name)
{
    Q_D(SmsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SmsRequest::clearParameters()
{
    Q_D(SmsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SmsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SmsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SmsRequest::parameters() const
{
    Q_D(const SmsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SmsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SmsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SmsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SmsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SMS request using the given
 * \a endpoint.
 *
 * This SMS implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SmsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SmsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SMS::SmsRequestPrivate
 * \brief The SmsRequestPrivate class provides private implementation for SmsRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a SmsRequestPrivate object for SMS \a action,
 * with public implementation \a q.
 */
SmsRequestPrivate::SmsRequestPrivate(const SmsRequest::Action action, SmsRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SmsRequest class's copy constructor.
 */
SmsRequestPrivate::SmsRequestPrivate(const SmsRequestPrivate &other,
                                     SmsRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SmsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SMS service's Action
 * query parameters.
 */
QString SmsRequestPrivate::toString(const SmsRequest::Action &action)
{
    #define ActionToString(action) \
        case SmsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SMS
} // namespace QtAws
