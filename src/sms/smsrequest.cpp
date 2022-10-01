// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "smsrequest.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::SmsRequest
 * \brief The SmsRequest class provides an interface for Sms requests.
 *
 * \inmodule QtAwsSms
 */

/*!
 * \enum SmsRequest::Action
 *
 * This enum describes the actions that can be performed as Sms
 * requests.
 *
 * \value CreateAppAction Sms CreateApp action.
 * \value CreateReplicationJobAction Sms CreateReplicationJob action.
 * \value DeleteAppAction Sms DeleteApp action.
 * \value DeleteAppLaunchConfigurationAction Sms DeleteAppLaunchConfiguration action.
 * \value DeleteAppReplicationConfigurationAction Sms DeleteAppReplicationConfiguration action.
 * \value DeleteAppValidationConfigurationAction Sms DeleteAppValidationConfiguration action.
 * \value DeleteReplicationJobAction Sms DeleteReplicationJob action.
 * \value DeleteServerCatalogAction Sms DeleteServerCatalog action.
 * \value DisassociateConnectorAction Sms DisassociateConnector action.
 * \value GenerateChangeSetAction Sms GenerateChangeSet action.
 * \value GenerateTemplateAction Sms GenerateTemplate action.
 * \value GetAppAction Sms GetApp action.
 * \value GetAppLaunchConfigurationAction Sms GetAppLaunchConfiguration action.
 * \value GetAppReplicationConfigurationAction Sms GetAppReplicationConfiguration action.
 * \value GetAppValidationConfigurationAction Sms GetAppValidationConfiguration action.
 * \value GetAppValidationOutputAction Sms GetAppValidationOutput action.
 * \value GetConnectorsAction Sms GetConnectors action.
 * \value GetReplicationJobsAction Sms GetReplicationJobs action.
 * \value GetReplicationRunsAction Sms GetReplicationRuns action.
 * \value GetServersAction Sms GetServers action.
 * \value ImportAppCatalogAction Sms ImportAppCatalog action.
 * \value ImportServerCatalogAction Sms ImportServerCatalog action.
 * \value LaunchAppAction Sms LaunchApp action.
 * \value ListAppsAction Sms ListApps action.
 * \value NotifyAppValidationOutputAction Sms NotifyAppValidationOutput action.
 * \value PutAppLaunchConfigurationAction Sms PutAppLaunchConfiguration action.
 * \value PutAppReplicationConfigurationAction Sms PutAppReplicationConfiguration action.
 * \value PutAppValidationConfigurationAction Sms PutAppValidationConfiguration action.
 * \value StartAppReplicationAction Sms StartAppReplication action.
 * \value StartOnDemandAppReplicationAction Sms StartOnDemandAppReplication action.
 * \value StartOnDemandReplicationRunAction Sms StartOnDemandReplicationRun action.
 * \value StopAppReplicationAction Sms StopAppReplication action.
 * \value TerminateAppAction Sms TerminateApp action.
 * \value UpdateAppAction Sms UpdateApp action.
 * \value UpdateReplicationJobAction Sms UpdateReplicationJob action.
 */

/*!
 * Constructs a SmsRequest object for Sms \a action.
 */
SmsRequest::SmsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SmsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SmsRequest::SmsRequest(const SmsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SmsRequestPrivate(*other.d_func(), this))
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
SmsRequest::SmsRequest(SmsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Sms action to be performed by this request.
 */
SmsRequest::Action SmsRequest::action() const
{
    Q_D(const SmsRequest);
    return d->action;
}

/*!
 * Returns the name of the Sms action to be performed by this request.
 */
QString SmsRequest::actionString() const
{
    return SmsRequestPrivate::toString(action());
}

/*!
 * Returns the Sms API version implemented by this request.
 */
QString SmsRequest::apiVersion() const
{
    Q_D(const SmsRequest);
    return d->apiVersion;
}

/*!
 * Sets the Sms action to be performed by this request to \a action.
 */
void SmsRequest::setAction(const Action action)
{
    Q_D(SmsRequest);
    d->action = action;
}

/*!
 * Sets the Sms API version to include in this request to \a version.
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
 * Returns \c tue if \a queueName is a valid Sms queue name.
 *
 * @par From Sms FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Sms queue name, \c false otherwise.
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
 * Returns a network request for the Sms request using the given
 * \a endpoint.
 *
 * This Sms implementation builds request URLs by combining the
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
 * \class QtAws::Sms::SmsRequestPrivate
 * \brief The SmsRequestPrivate class provides private implementation for SmsRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a SmsRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
SmsRequestPrivate::SmsRequestPrivate(const SmsRequest::Action action, SmsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2016-10-24"))
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
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SmsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Sms service's Action
 * query parameters.
 */
QString SmsRequestPrivate::toString(const SmsRequest::Action &action)
{
    #define ActionToString(action) \
        case SmsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateApp);
        ActionToString(CreateReplicationJob);
        ActionToString(DeleteApp);
        ActionToString(DeleteAppLaunchConfiguration);
        ActionToString(DeleteAppReplicationConfiguration);
        ActionToString(DeleteAppValidationConfiguration);
        ActionToString(DeleteReplicationJob);
        ActionToString(DeleteServerCatalog);
        ActionToString(DisassociateConnector);
        ActionToString(GenerateChangeSet);
        ActionToString(GenerateTemplate);
        ActionToString(GetApp);
        ActionToString(GetAppLaunchConfiguration);
        ActionToString(GetAppReplicationConfiguration);
        ActionToString(GetAppValidationConfiguration);
        ActionToString(GetAppValidationOutput);
        ActionToString(GetConnectors);
        ActionToString(GetReplicationJobs);
        ActionToString(GetReplicationRuns);
        ActionToString(GetServers);
        ActionToString(ImportAppCatalog);
        ActionToString(ImportServerCatalog);
        ActionToString(LaunchApp);
        ActionToString(ListApps);
        ActionToString(NotifyAppValidationOutput);
        ActionToString(PutAppLaunchConfiguration);
        ActionToString(PutAppReplicationConfiguration);
        ActionToString(PutAppValidationConfiguration);
        ActionToString(StartAppReplication);
        ActionToString(StartOnDemandAppReplication);
        ActionToString(StartOnDemandReplicationRun);
        ActionToString(StopAppReplication);
        ActionToString(TerminateApp);
        ActionToString(UpdateApp);
        ActionToString(UpdateReplicationJob);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Sms
} // namespace QtAws
