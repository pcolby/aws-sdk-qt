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

#include "elasticbeanstalkrequest.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::ElasticBeanstalkRequest
 * \brief The ElasticBeanstalkRequest class provides an interface for ElasticBeanstalk requests.
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * \enum ElasticBeanstalkRequest::Action
 *
 * This enum describes the actions that can be performed as ElasticBeanstalk
 * requests.
 *
 * \value AbortEnvironmentUpdateAction ElasticBeanstalk AbortEnvironmentUpdate action.
 * \value ApplyEnvironmentManagedActionAction ElasticBeanstalk ApplyEnvironmentManagedAction action.
 * \value CheckDNSAvailabilityAction ElasticBeanstalk CheckDNSAvailability action.
 * \value ComposeEnvironmentsAction ElasticBeanstalk ComposeEnvironments action.
 * \value CreateApplicationAction ElasticBeanstalk CreateApplication action.
 * \value CreateApplicationVersionAction ElasticBeanstalk CreateApplicationVersion action.
 * \value CreateConfigurationTemplateAction ElasticBeanstalk CreateConfigurationTemplate action.
 * \value CreateEnvironmentAction ElasticBeanstalk CreateEnvironment action.
 * \value CreatePlatformVersionAction ElasticBeanstalk CreatePlatformVersion action.
 * \value CreateStorageLocationAction ElasticBeanstalk CreateStorageLocation action.
 * \value DeleteApplicationAction ElasticBeanstalk DeleteApplication action.
 * \value DeleteApplicationVersionAction ElasticBeanstalk DeleteApplicationVersion action.
 * \value DeleteConfigurationTemplateAction ElasticBeanstalk DeleteConfigurationTemplate action.
 * \value DeleteEnvironmentConfigurationAction ElasticBeanstalk DeleteEnvironmentConfiguration action.
 * \value DeletePlatformVersionAction ElasticBeanstalk DeletePlatformVersion action.
 * \value DescribeAccountAttributesAction ElasticBeanstalk DescribeAccountAttributes action.
 * \value DescribeApplicationVersionsAction ElasticBeanstalk DescribeApplicationVersions action.
 * \value DescribeApplicationsAction ElasticBeanstalk DescribeApplications action.
 * \value DescribeConfigurationOptionsAction ElasticBeanstalk DescribeConfigurationOptions action.
 * \value DescribeConfigurationSettingsAction ElasticBeanstalk DescribeConfigurationSettings action.
 * \value DescribeEnvironmentHealthAction ElasticBeanstalk DescribeEnvironmentHealth action.
 * \value DescribeEnvironmentManagedActionHistoryAction ElasticBeanstalk DescribeEnvironmentManagedActionHistory action.
 * \value DescribeEnvironmentManagedActionsAction ElasticBeanstalk DescribeEnvironmentManagedActions action.
 * \value DescribeEnvironmentResourcesAction ElasticBeanstalk DescribeEnvironmentResources action.
 * \value DescribeEnvironmentsAction ElasticBeanstalk DescribeEnvironments action.
 * \value DescribeEventsAction ElasticBeanstalk DescribeEvents action.
 * \value DescribeInstancesHealthAction ElasticBeanstalk DescribeInstancesHealth action.
 * \value DescribePlatformVersionAction ElasticBeanstalk DescribePlatformVersion action.
 * \value ListAvailableSolutionStacksAction ElasticBeanstalk ListAvailableSolutionStacks action.
 * \value ListPlatformVersionsAction ElasticBeanstalk ListPlatformVersions action.
 * \value ListTagsForResourceAction ElasticBeanstalk ListTagsForResource action.
 * \value RebuildEnvironmentAction ElasticBeanstalk RebuildEnvironment action.
 * \value RequestEnvironmentInfoAction ElasticBeanstalk RequestEnvironmentInfo action.
 * \value RestartAppServerAction ElasticBeanstalk RestartAppServer action.
 * \value RetrieveEnvironmentInfoAction ElasticBeanstalk RetrieveEnvironmentInfo action.
 * \value SwapEnvironmentCNAMEsAction ElasticBeanstalk SwapEnvironmentCNAMEs action.
 * \value TerminateEnvironmentAction ElasticBeanstalk TerminateEnvironment action.
 * \value UpdateApplicationAction ElasticBeanstalk UpdateApplication action.
 * \value UpdateApplicationResourceLifecycleAction ElasticBeanstalk UpdateApplicationResourceLifecycle action.
 * \value UpdateApplicationVersionAction ElasticBeanstalk UpdateApplicationVersion action.
 * \value UpdateConfigurationTemplateAction ElasticBeanstalk UpdateConfigurationTemplate action.
 * \value UpdateEnvironmentAction ElasticBeanstalk UpdateEnvironment action.
 * \value UpdateTagsForResourceAction ElasticBeanstalk UpdateTagsForResource action.
 * \value ValidateConfigurationSettingsAction ElasticBeanstalk ValidateConfigurationSettings action.
 */

/*!
 * Constructs a ElasticBeanstalkRequest object for ElasticBeanstalk \a action.
 */
ElasticBeanstalkRequest::ElasticBeanstalkRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ElasticBeanstalkRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ElasticBeanstalkRequest::ElasticBeanstalkRequest(const ElasticBeanstalkRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ElasticBeanstalkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ElasticBeanstalkRequest object to be equal to \a other.
 */
ElasticBeanstalkRequest& ElasticBeanstalkRequest::operator=(const ElasticBeanstalkRequest &other)
{
    Q_D(ElasticBeanstalkRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ElasticBeanstalkRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticBeanstalkRequestPrivate.
 */
ElasticBeanstalkRequest::ElasticBeanstalkRequest(ElasticBeanstalkRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ElasticBeanstalk action to be performed by this request.
 */
ElasticBeanstalkRequest::Action ElasticBeanstalkRequest::action() const
{
    Q_D(const ElasticBeanstalkRequest);
    return d->action;
}

/*!
 * Returns the name of the ElasticBeanstalk action to be performed by this request.
 */
QString ElasticBeanstalkRequest::actionString() const
{
    return ElasticBeanstalkRequestPrivate::toString(action());
}

/*!
 * Returns the ElasticBeanstalk API version implemented by this request.
 */
QString ElasticBeanstalkRequest::apiVersion() const
{
    Q_D(const ElasticBeanstalkRequest);
    return d->apiVersion;
}

/*!
 * Sets the ElasticBeanstalk action to be performed by this request to \a action.
 */
void ElasticBeanstalkRequest::setAction(const Action action)
{
    Q_D(ElasticBeanstalkRequest);
    d->action = action;
}

/*!
 * Sets the ElasticBeanstalk API version to include in this request to \a version.
 */
void ElasticBeanstalkRequest::setApiVersion(const QString &version)
{
    Q_D(ElasticBeanstalkRequest);
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
bool ElasticBeanstalkRequest::operator==(const ElasticBeanstalkRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ElasticBeanstalk queue name.
 *
 * @par From ElasticBeanstalk FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ElasticBeanstalk queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ElasticBeanstalkRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ElasticBeanstalkRequest::clearParameter(const QString &name)
{
    Q_D(ElasticBeanstalkRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ElasticBeanstalkRequest::clearParameters()
{
    Q_D(ElasticBeanstalkRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ElasticBeanstalkRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ElasticBeanstalkRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ElasticBeanstalkRequest::parameters() const
{
    Q_D(const ElasticBeanstalkRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ElasticBeanstalkRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ElasticBeanstalkRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ElasticBeanstalkRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ElasticBeanstalkRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ElasticBeanstalk request using the given
 * \a endpoint.
 *
 * This ElasticBeanstalk implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ElasticBeanstalkRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ElasticBeanstalkRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ElasticBeanstalk::ElasticBeanstalkRequestPrivate
 * \brief The ElasticBeanstalkRequestPrivate class provides private implementation for ElasticBeanstalkRequest.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a ElasticBeanstalkRequestPrivate object for ElasticBeanstalk \a action,
 * with public implementation \a q.
 */
ElasticBeanstalkRequestPrivate::ElasticBeanstalkRequestPrivate(const ElasticBeanstalkRequest::Action action, ElasticBeanstalkRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ElasticBeanstalkRequest class's copy constructor.
 */
ElasticBeanstalkRequestPrivate::ElasticBeanstalkRequestPrivate(const ElasticBeanstalkRequestPrivate &other,
                                     ElasticBeanstalkRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ElasticBeanstalkRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ElasticBeanstalk service's Action
 * query parameters.
 */
QString ElasticBeanstalkRequestPrivate::toString(const ElasticBeanstalkRequest::Action &action)
{
    #define ActionToString(action) \
        case ElasticBeanstalkRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ElasticBeanstalk
} // namespace QtAws
