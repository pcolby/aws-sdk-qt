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

#include "appconfigrequest.h"
#include "appconfigrequest_p.h"

namespace QtAws {
namespace AppConfig {

/*!
 * \class QtAws::AppConfig::AppConfigRequest
 * \brief The AppConfigRequest class provides an interface for AppConfig requests.
 *
 * \inmodule QtAwsAppConfig
 */

/*!
 * \enum AppConfigRequest::Action
 *
 * This enum describes the actions that can be performed as AppConfig
 * requests.
 *
 * \value CreateApplicationAction AppConfig CreateApplication action.
 * \value CreateConfigurationProfileAction AppConfig CreateConfigurationProfile action.
 * \value CreateDeploymentStrategyAction AppConfig CreateDeploymentStrategy action.
 * \value CreateEnvironmentAction AppConfig CreateEnvironment action.
 * \value CreateHostedConfigurationVersionAction AppConfig CreateHostedConfigurationVersion action.
 * \value DeleteApplicationAction AppConfig DeleteApplication action.
 * \value DeleteConfigurationProfileAction AppConfig DeleteConfigurationProfile action.
 * \value DeleteDeploymentStrategyAction AppConfig DeleteDeploymentStrategy action.
 * \value DeleteEnvironmentAction AppConfig DeleteEnvironment action.
 * \value DeleteHostedConfigurationVersionAction AppConfig DeleteHostedConfigurationVersion action.
 * \value GetApplicationAction AppConfig GetApplication action.
 * \value GetConfigurationAction AppConfig GetConfiguration action.
 * \value GetConfigurationProfileAction AppConfig GetConfigurationProfile action.
 * \value GetDeploymentAction AppConfig GetDeployment action.
 * \value GetDeploymentStrategyAction AppConfig GetDeploymentStrategy action.
 * \value GetEnvironmentAction AppConfig GetEnvironment action.
 * \value GetHostedConfigurationVersionAction AppConfig GetHostedConfigurationVersion action.
 * \value ListApplicationsAction AppConfig ListApplications action.
 * \value ListConfigurationProfilesAction AppConfig ListConfigurationProfiles action.
 * \value ListDeploymentStrategiesAction AppConfig ListDeploymentStrategies action.
 * \value ListDeploymentsAction AppConfig ListDeployments action.
 * \value ListEnvironmentsAction AppConfig ListEnvironments action.
 * \value ListHostedConfigurationVersionsAction AppConfig ListHostedConfigurationVersions action.
 * \value ListTagsForResourceAction AppConfig ListTagsForResource action.
 * \value StartDeploymentAction AppConfig StartDeployment action.
 * \value StopDeploymentAction AppConfig StopDeployment action.
 * \value TagResourceAction AppConfig TagResource action.
 * \value UntagResourceAction AppConfig UntagResource action.
 * \value UpdateApplicationAction AppConfig UpdateApplication action.
 * \value UpdateConfigurationProfileAction AppConfig UpdateConfigurationProfile action.
 * \value UpdateDeploymentStrategyAction AppConfig UpdateDeploymentStrategy action.
 * \value UpdateEnvironmentAction AppConfig UpdateEnvironment action.
 * \value ValidateConfigurationAction AppConfig ValidateConfiguration action.
 */

/*!
 * Constructs a AppConfigRequest object for AppConfig \a action.
 */
AppConfigRequest::AppConfigRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AppConfigRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AppConfigRequest::AppConfigRequest(const AppConfigRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AppConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AppConfigRequest object to be equal to \a other.
 */
AppConfigRequest& AppConfigRequest::operator=(const AppConfigRequest &other)
{
    Q_D(AppConfigRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AppConfigRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppConfigRequestPrivate.
 */
AppConfigRequest::AppConfigRequest(AppConfigRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AppConfig action to be performed by this request.
 */
AppConfigRequest::Action AppConfigRequest::action() const
{
    Q_D(const AppConfigRequest);
    return d->action;
}

/*!
 * Returns the name of the AppConfig action to be performed by this request.
 */
QString AppConfigRequest::actionString() const
{
    return AppConfigRequestPrivate::toString(action());
}

/*!
 * Returns the AppConfig API version implemented by this request.
 */
QString AppConfigRequest::apiVersion() const
{
    Q_D(const AppConfigRequest);
    return d->apiVersion;
}

/*!
 * Sets the AppConfig action to be performed by this request to \a action.
 */
void AppConfigRequest::setAction(const Action action)
{
    Q_D(AppConfigRequest);
    d->action = action;
}

/*!
 * Sets the AppConfig API version to include in this request to \a version.
 */
void AppConfigRequest::setApiVersion(const QString &version)
{
    Q_D(AppConfigRequest);
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
bool AppConfigRequest::operator==(const AppConfigRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AppConfig queue name.
 *
 * @par From AppConfig FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AppConfig queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AppConfigRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AppConfigRequest::clearParameter(const QString &name)
{
    Q_D(AppConfigRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AppConfigRequest::clearParameters()
{
    Q_D(AppConfigRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AppConfigRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AppConfigRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AppConfigRequest::parameters() const
{
    Q_D(const AppConfigRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AppConfigRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AppConfigRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AppConfigRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AppConfigRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AppConfig request using the given
 * \a endpoint.
 *
 * This AppConfig implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AppConfigRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AppConfigRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AppConfig::AppConfigRequestPrivate
 * \brief The AppConfigRequestPrivate class provides private implementation for AppConfigRequest.
 * \internal
 *
 * \inmodule QtAwsAppConfig
 */

/*!
 * Constructs a AppConfigRequestPrivate object for AppConfig \a action,
 * with public implementation \a q.
 */
AppConfigRequestPrivate::AppConfigRequestPrivate(const AppConfigRequest::Action action, AppConfigRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AppConfigRequest class's copy constructor.
 */
AppConfigRequestPrivate::AppConfigRequestPrivate(const AppConfigRequestPrivate &other,
                                     AppConfigRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AppConfigRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AppConfig service's Action
 * query parameters.
 */
QString AppConfigRequestPrivate::toString(const AppConfigRequest::Action &action)
{
    #define ActionToString(action) \
        case AppConfigRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateApplication);
        ActionToString(CreateConfigurationProfile);
        ActionToString(CreateDeploymentStrategy);
        ActionToString(CreateEnvironment);
        ActionToString(CreateHostedConfigurationVersion);
        ActionToString(DeleteApplication);
        ActionToString(DeleteConfigurationProfile);
        ActionToString(DeleteDeploymentStrategy);
        ActionToString(DeleteEnvironment);
        ActionToString(DeleteHostedConfigurationVersion);
        ActionToString(GetApplication);
        ActionToString(GetConfiguration);
        ActionToString(GetConfigurationProfile);
        ActionToString(GetDeployment);
        ActionToString(GetDeploymentStrategy);
        ActionToString(GetEnvironment);
        ActionToString(GetHostedConfigurationVersion);
        ActionToString(ListApplications);
        ActionToString(ListConfigurationProfiles);
        ActionToString(ListDeploymentStrategies);
        ActionToString(ListDeployments);
        ActionToString(ListEnvironments);
        ActionToString(ListHostedConfigurationVersions);
        ActionToString(ListTagsForResource);
        ActionToString(StartDeployment);
        ActionToString(StopDeployment);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateApplication);
        ActionToString(UpdateConfigurationProfile);
        ActionToString(UpdateDeploymentStrategy);
        ActionToString(UpdateEnvironment);
        ActionToString(ValidateConfiguration);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AppConfig
} // namespace QtAws
