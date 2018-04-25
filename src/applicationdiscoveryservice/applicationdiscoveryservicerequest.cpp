/*
    Copyright 2013-2018 Paul Colby

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

#include "applicationdiscoveryservicerequest.h"
#include "applicationdiscoveryservicerequest_p.h"

namespace QtAws {
namespace ApplicationDiscoveryService {

/*!
 * \class QtAws::ApplicationDiscoveryService::ApplicationDiscoveryServiceRequest
 * \brief The ApplicationDiscoveryServiceRequest class provides an interface for ApplicationDiscoveryService requests.
 *
 * \inmodule QtAwsApplicationDiscoveryService
 */

/*!
 * \enum ApplicationDiscoveryServiceRequest::Action
 *
 * This enum describes the actions that can be performed as ApplicationDiscoveryService
 * requests.
 *
 * \value AssociateConfigurationItemsToApplicationAction ApplicationDiscoveryService AssociateConfigurationItemsToApplication action.
 * \value CreateApplicationAction ApplicationDiscoveryService CreateApplication action.
 * \value CreateTagsAction ApplicationDiscoveryService CreateTags action.
 * \value DeleteApplicationsAction ApplicationDiscoveryService DeleteApplications action.
 * \value DeleteTagsAction ApplicationDiscoveryService DeleteTags action.
 * \value DescribeAgentsAction ApplicationDiscoveryService DescribeAgents action.
 * \value DescribeConfigurationsAction ApplicationDiscoveryService DescribeConfigurations action.
 * \value DescribeExportConfigurationsAction ApplicationDiscoveryService DescribeExportConfigurations action.
 * \value DescribeExportTasksAction ApplicationDiscoveryService DescribeExportTasks action.
 * \value DescribeTagsAction ApplicationDiscoveryService DescribeTags action.
 * \value DisassociateConfigurationItemsFromApplicationAction ApplicationDiscoveryService DisassociateConfigurationItemsFromApplication action.
 * \value ExportConfigurationsAction ApplicationDiscoveryService ExportConfigurations action.
 * \value GetDiscoverySummaryAction ApplicationDiscoveryService GetDiscoverySummary action.
 * \value ListConfigurationsAction ApplicationDiscoveryService ListConfigurations action.
 * \value ListServerNeighborsAction ApplicationDiscoveryService ListServerNeighbors action.
 * \value StartDataCollectionByAgentIdsAction ApplicationDiscoveryService StartDataCollectionByAgentIds action.
 * \value StartExportTaskAction ApplicationDiscoveryService StartExportTask action.
 * \value StopDataCollectionByAgentIdsAction ApplicationDiscoveryService StopDataCollectionByAgentIds action.
 * \value UpdateApplicationAction ApplicationDiscoveryService UpdateApplication action.
 */

/*!
 * Constructs a ApplicationDiscoveryServiceRequest object for ApplicationDiscoveryService \a action.
 */
ApplicationDiscoveryServiceRequest::ApplicationDiscoveryServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ApplicationDiscoveryServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ApplicationDiscoveryServiceRequest::ApplicationDiscoveryServiceRequest(const ApplicationDiscoveryServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ApplicationDiscoveryServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ApplicationDiscoveryServiceRequest object to be equal to \a other.
 */
ApplicationDiscoveryServiceRequest& ApplicationDiscoveryServiceRequest::operator=(const ApplicationDiscoveryServiceRequest &other)
{
    Q_D(ApplicationDiscoveryServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ApplicationDiscoveryServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApplicationDiscoveryServiceRequestPrivate.
 */
ApplicationDiscoveryServiceRequest::ApplicationDiscoveryServiceRequest(ApplicationDiscoveryServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ApplicationDiscoveryService action to be performed by this request.
 */
ApplicationDiscoveryServiceRequest::Action ApplicationDiscoveryServiceRequest::action() const
{
    Q_D(const ApplicationDiscoveryServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the ApplicationDiscoveryService action to be performed by this request.
 */
QString ApplicationDiscoveryServiceRequest::actionString() const
{
    return ApplicationDiscoveryServiceRequestPrivate::toString(action());
}

/*!
 * Returns the ApplicationDiscoveryService API version implemented by this request.
 */
QString ApplicationDiscoveryServiceRequest::apiVersion() const
{
    Q_D(const ApplicationDiscoveryServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the ApplicationDiscoveryService action to be performed by this request to \a action.
 */
void ApplicationDiscoveryServiceRequest::setAction(const Action action)
{
    Q_D(ApplicationDiscoveryServiceRequest);
    d->action = action;
}

/*!
 * Sets the ApplicationDiscoveryService API version to include in this request to \a version.
 */
void ApplicationDiscoveryServiceRequest::setApiVersion(const QString &version)
{
    Q_D(ApplicationDiscoveryServiceRequest);
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
bool ApplicationDiscoveryServiceRequest::operator==(const ApplicationDiscoveryServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ApplicationDiscoveryService queue name.
 *
 * @par From ApplicationDiscoveryService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ApplicationDiscoveryService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ApplicationDiscoveryServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ApplicationDiscoveryServiceRequest::clearParameter(const QString &name)
{
    Q_D(ApplicationDiscoveryServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ApplicationDiscoveryServiceRequest::clearParameters()
{
    Q_D(ApplicationDiscoveryServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ApplicationDiscoveryServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ApplicationDiscoveryServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ApplicationDiscoveryServiceRequest::parameters() const
{
    Q_D(const ApplicationDiscoveryServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ApplicationDiscoveryServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ApplicationDiscoveryServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ApplicationDiscoveryServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ApplicationDiscoveryServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ApplicationDiscoveryService request using the given
 * \a endpoint.
 *
 * This ApplicationDiscoveryService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ApplicationDiscoveryServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ApplicationDiscoveryServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ApplicationDiscoveryService::ApplicationDiscoveryServiceRequestPrivate
 * \brief The ApplicationDiscoveryServiceRequestPrivate class provides private implementation for ApplicationDiscoveryServiceRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationDiscoveryService
 */

/*!
 * Constructs a ApplicationDiscoveryServiceRequestPrivate object for ApplicationDiscoveryService \a action,
 * with public implementation \a q.
 */
ApplicationDiscoveryServiceRequestPrivate::ApplicationDiscoveryServiceRequestPrivate(const ApplicationDiscoveryServiceRequest::Action action, ApplicationDiscoveryServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ApplicationDiscoveryServiceRequest class's copy constructor.
 */
ApplicationDiscoveryServiceRequestPrivate::ApplicationDiscoveryServiceRequestPrivate(const ApplicationDiscoveryServiceRequestPrivate &other,
                                     ApplicationDiscoveryServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ApplicationDiscoveryServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ApplicationDiscoveryService service's Action
 * query parameters.
 */
QString ApplicationDiscoveryServiceRequestPrivate::toString(const ApplicationDiscoveryServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case ApplicationDiscoveryServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
