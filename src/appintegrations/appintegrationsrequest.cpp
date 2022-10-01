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

#include "appintegrationsrequest.h"
#include "appintegrationsrequest_p.h"

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::AppIntegrationsRequest
 * \brief The AppIntegrationsRequest class provides an interface for AppIntegrations requests.
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * \enum AppIntegrationsRequest::Action
 *
 * This enum describes the actions that can be performed as AppIntegrations
 * requests.
 *
 * \value CreateDataIntegrationAction AppIntegrations CreateDataIntegration action.
 * \value CreateEventIntegrationAction AppIntegrations CreateEventIntegration action.
 * \value DeleteDataIntegrationAction AppIntegrations DeleteDataIntegration action.
 * \value DeleteEventIntegrationAction AppIntegrations DeleteEventIntegration action.
 * \value GetDataIntegrationAction AppIntegrations GetDataIntegration action.
 * \value GetEventIntegrationAction AppIntegrations GetEventIntegration action.
 * \value ListDataIntegrationAssociationsAction AppIntegrations ListDataIntegrationAssociations action.
 * \value ListDataIntegrationsAction AppIntegrations ListDataIntegrations action.
 * \value ListEventIntegrationAssociationsAction AppIntegrations ListEventIntegrationAssociations action.
 * \value ListEventIntegrationsAction AppIntegrations ListEventIntegrations action.
 * \value ListTagsForResourceAction AppIntegrations ListTagsForResource action.
 * \value TagResourceAction AppIntegrations TagResource action.
 * \value UntagResourceAction AppIntegrations UntagResource action.
 * \value UpdateDataIntegrationAction AppIntegrations UpdateDataIntegration action.
 * \value UpdateEventIntegrationAction AppIntegrations UpdateEventIntegration action.
 */

/*!
 * Constructs a AppIntegrationsRequest object for AppIntegrations \a action.
 */
AppIntegrationsRequest::AppIntegrationsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AppIntegrationsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AppIntegrationsRequest::AppIntegrationsRequest(const AppIntegrationsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AppIntegrationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AppIntegrationsRequest object to be equal to \a other.
 */
AppIntegrationsRequest& AppIntegrationsRequest::operator=(const AppIntegrationsRequest &other)
{
    Q_D(AppIntegrationsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AppIntegrationsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppIntegrationsRequestPrivate.
 */
AppIntegrationsRequest::AppIntegrationsRequest(AppIntegrationsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AppIntegrations action to be performed by this request.
 */
AppIntegrationsRequest::Action AppIntegrationsRequest::action() const
{
    Q_D(const AppIntegrationsRequest);
    return d->action;
}

/*!
 * Returns the name of the AppIntegrations action to be performed by this request.
 */
QString AppIntegrationsRequest::actionString() const
{
    return AppIntegrationsRequestPrivate::toString(action());
}

/*!
 * Returns the AppIntegrations API version implemented by this request.
 */
QString AppIntegrationsRequest::apiVersion() const
{
    Q_D(const AppIntegrationsRequest);
    return d->apiVersion;
}

/*!
 * Sets the AppIntegrations action to be performed by this request to \a action.
 */
void AppIntegrationsRequest::setAction(const Action action)
{
    Q_D(AppIntegrationsRequest);
    d->action = action;
}

/*!
 * Sets the AppIntegrations API version to include in this request to \a version.
 */
void AppIntegrationsRequest::setApiVersion(const QString &version)
{
    Q_D(AppIntegrationsRequest);
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
bool AppIntegrationsRequest::operator==(const AppIntegrationsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AppIntegrations queue name.
 *
 * @par From AppIntegrations FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AppIntegrations queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AppIntegrationsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AppIntegrationsRequest::clearParameter(const QString &name)
{
    Q_D(AppIntegrationsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AppIntegrationsRequest::clearParameters()
{
    Q_D(AppIntegrationsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AppIntegrationsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AppIntegrationsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AppIntegrationsRequest::parameters() const
{
    Q_D(const AppIntegrationsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AppIntegrationsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AppIntegrationsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AppIntegrationsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AppIntegrationsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AppIntegrations request using the given
 * \a endpoint.
 *
 * This AppIntegrations implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AppIntegrationsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AppIntegrationsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AppIntegrations::AppIntegrationsRequestPrivate
 * \brief The AppIntegrationsRequestPrivate class provides private implementation for AppIntegrationsRequest.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a AppIntegrationsRequestPrivate object for AppIntegrations \a action,
 * with public implementation \a q.
 */
AppIntegrationsRequestPrivate::AppIntegrationsRequestPrivate(const AppIntegrationsRequest::Action action, AppIntegrationsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-07-29"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AppIntegrationsRequest class's copy constructor.
 */
AppIntegrationsRequestPrivate::AppIntegrationsRequestPrivate(const AppIntegrationsRequestPrivate &other,
                                     AppIntegrationsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AppIntegrationsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AppIntegrations service's Action
 * query parameters.
 */
QString AppIntegrationsRequestPrivate::toString(const AppIntegrationsRequest::Action &action)
{
    #define ActionToString(action) \
        case AppIntegrationsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateDataIntegration);
        ActionToString(CreateEventIntegration);
        ActionToString(DeleteDataIntegration);
        ActionToString(DeleteEventIntegration);
        ActionToString(GetDataIntegration);
        ActionToString(GetEventIntegration);
        ActionToString(ListDataIntegrationAssociations);
        ActionToString(ListDataIntegrations);
        ActionToString(ListEventIntegrationAssociations);
        ActionToString(ListEventIntegrations);
        ActionToString(ListTagsForResource);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateDataIntegration);
        ActionToString(UpdateEventIntegration);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AppIntegrations
} // namespace QtAws
