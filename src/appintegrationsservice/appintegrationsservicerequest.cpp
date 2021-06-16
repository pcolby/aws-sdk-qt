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

#include "appintegrationsservicerequest.h"
#include "appintegrationsservicerequest_p.h"

namespace QtAws {
namespace AppIntegrationsService {

/*!
 * \class QtAws::AppIntegrationsService::AppIntegrationsServiceRequest
 * \brief The AppIntegrationsServiceRequest class provides an interface for AppIntegrationsService requests.
 *
 * \inmodule QtAwsAppIntegrationsService
 */

/*!
 * \enum AppIntegrationsServiceRequest::Action
 *
 * This enum describes the actions that can be performed as AppIntegrationsService
 * requests.
 *
 * \value CreateEventIntegrationAction AppIntegrationsService CreateEventIntegration action.
 * \value DeleteEventIntegrationAction AppIntegrationsService DeleteEventIntegration action.
 * \value GetEventIntegrationAction AppIntegrationsService GetEventIntegration action.
 * \value ListEventIntegrationAssociationsAction AppIntegrationsService ListEventIntegrationAssociations action.
 * \value ListEventIntegrationsAction AppIntegrationsService ListEventIntegrations action.
 * \value ListTagsForResourceAction AppIntegrationsService ListTagsForResource action.
 * \value TagResourceAction AppIntegrationsService TagResource action.
 * \value UntagResourceAction AppIntegrationsService UntagResource action.
 * \value UpdateEventIntegrationAction AppIntegrationsService UpdateEventIntegration action.
 */

/*!
 * Constructs a AppIntegrationsServiceRequest object for AppIntegrationsService \a action.
 */
AppIntegrationsServiceRequest::AppIntegrationsServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AppIntegrationsServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AppIntegrationsServiceRequest::AppIntegrationsServiceRequest(const AppIntegrationsServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AppIntegrationsServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AppIntegrationsServiceRequest object to be equal to \a other.
 */
AppIntegrationsServiceRequest& AppIntegrationsServiceRequest::operator=(const AppIntegrationsServiceRequest &other)
{
    Q_D(AppIntegrationsServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AppIntegrationsServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppIntegrationsServiceRequestPrivate.
 */
AppIntegrationsServiceRequest::AppIntegrationsServiceRequest(AppIntegrationsServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AppIntegrationsService action to be performed by this request.
 */
AppIntegrationsServiceRequest::Action AppIntegrationsServiceRequest::action() const
{
    Q_D(const AppIntegrationsServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the AppIntegrationsService action to be performed by this request.
 */
QString AppIntegrationsServiceRequest::actionString() const
{
    return AppIntegrationsServiceRequestPrivate::toString(action());
}

/*!
 * Returns the AppIntegrationsService API version implemented by this request.
 */
QString AppIntegrationsServiceRequest::apiVersion() const
{
    Q_D(const AppIntegrationsServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the AppIntegrationsService action to be performed by this request to \a action.
 */
void AppIntegrationsServiceRequest::setAction(const Action action)
{
    Q_D(AppIntegrationsServiceRequest);
    d->action = action;
}

/*!
 * Sets the AppIntegrationsService API version to include in this request to \a version.
 */
void AppIntegrationsServiceRequest::setApiVersion(const QString &version)
{
    Q_D(AppIntegrationsServiceRequest);
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
bool AppIntegrationsServiceRequest::operator==(const AppIntegrationsServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AppIntegrationsService queue name.
 *
 * @par From AppIntegrationsService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AppIntegrationsService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AppIntegrationsServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AppIntegrationsServiceRequest::clearParameter(const QString &name)
{
    Q_D(AppIntegrationsServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AppIntegrationsServiceRequest::clearParameters()
{
    Q_D(AppIntegrationsServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AppIntegrationsServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AppIntegrationsServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AppIntegrationsServiceRequest::parameters() const
{
    Q_D(const AppIntegrationsServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AppIntegrationsServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AppIntegrationsServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AppIntegrationsServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AppIntegrationsServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AppIntegrationsService request using the given
 * \a endpoint.
 *
 * This AppIntegrationsService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AppIntegrationsServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AppIntegrationsServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AppIntegrationsService::AppIntegrationsServiceRequestPrivate
 * \brief The AppIntegrationsServiceRequestPrivate class provides private implementation for AppIntegrationsServiceRequest.
 * \internal
 *
 * \inmodule QtAwsAppIntegrationsService
 */

/*!
 * Constructs a AppIntegrationsServiceRequestPrivate object for AppIntegrationsService \a action,
 * with public implementation \a q.
 */
AppIntegrationsServiceRequestPrivate::AppIntegrationsServiceRequestPrivate(const AppIntegrationsServiceRequest::Action action, AppIntegrationsServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AppIntegrationsServiceRequest class's copy constructor.
 */
AppIntegrationsServiceRequestPrivate::AppIntegrationsServiceRequestPrivate(const AppIntegrationsServiceRequestPrivate &other,
                                     AppIntegrationsServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AppIntegrationsServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AppIntegrationsService service's Action
 * query parameters.
 */
QString AppIntegrationsServiceRequestPrivate::toString(const AppIntegrationsServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case AppIntegrationsServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AppIntegrationsService
} // namespace QtAws
