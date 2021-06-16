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

#include "appregistryrequest.h"
#include "appregistryrequest_p.h"

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::AppRegistryRequest
 * \brief The AppRegistryRequest class provides an interface for AppRegistry requests.
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * \enum AppRegistryRequest::Action
 *
 * This enum describes the actions that can be performed as AppRegistry
 * requests.
 *
 * \value AssociateAttributeGroupAction AppRegistry AssociateAttributeGroup action.
 * \value AssociateResourceAction AppRegistry AssociateResource action.
 * \value CreateApplicationAction AppRegistry CreateApplication action.
 * \value CreateAttributeGroupAction AppRegistry CreateAttributeGroup action.
 * \value DeleteApplicationAction AppRegistry DeleteApplication action.
 * \value DeleteAttributeGroupAction AppRegistry DeleteAttributeGroup action.
 * \value DisassociateAttributeGroupAction AppRegistry DisassociateAttributeGroup action.
 * \value DisassociateResourceAction AppRegistry DisassociateResource action.
 * \value GetApplicationAction AppRegistry GetApplication action.
 * \value GetAttributeGroupAction AppRegistry GetAttributeGroup action.
 * \value ListApplicationsAction AppRegistry ListApplications action.
 * \value ListAssociatedAttributeGroupsAction AppRegistry ListAssociatedAttributeGroups action.
 * \value ListAssociatedResourcesAction AppRegistry ListAssociatedResources action.
 * \value ListAttributeGroupsAction AppRegistry ListAttributeGroups action.
 * \value ListTagsForResourceAction AppRegistry ListTagsForResource action.
 * \value SyncResourceAction AppRegistry SyncResource action.
 * \value TagResourceAction AppRegistry TagResource action.
 * \value UntagResourceAction AppRegistry UntagResource action.
 * \value UpdateApplicationAction AppRegistry UpdateApplication action.
 * \value UpdateAttributeGroupAction AppRegistry UpdateAttributeGroup action.
 */

/*!
 * Constructs a AppRegistryRequest object for AppRegistry \a action.
 */
AppRegistryRequest::AppRegistryRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AppRegistryRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AppRegistryRequest::AppRegistryRequest(const AppRegistryRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AppRegistryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AppRegistryRequest object to be equal to \a other.
 */
AppRegistryRequest& AppRegistryRequest::operator=(const AppRegistryRequest &other)
{
    Q_D(AppRegistryRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AppRegistryRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppRegistryRequestPrivate.
 */
AppRegistryRequest::AppRegistryRequest(AppRegistryRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AppRegistry action to be performed by this request.
 */
AppRegistryRequest::Action AppRegistryRequest::action() const
{
    Q_D(const AppRegistryRequest);
    return d->action;
}

/*!
 * Returns the name of the AppRegistry action to be performed by this request.
 */
QString AppRegistryRequest::actionString() const
{
    return AppRegistryRequestPrivate::toString(action());
}

/*!
 * Returns the AppRegistry API version implemented by this request.
 */
QString AppRegistryRequest::apiVersion() const
{
    Q_D(const AppRegistryRequest);
    return d->apiVersion;
}

/*!
 * Sets the AppRegistry action to be performed by this request to \a action.
 */
void AppRegistryRequest::setAction(const Action action)
{
    Q_D(AppRegistryRequest);
    d->action = action;
}

/*!
 * Sets the AppRegistry API version to include in this request to \a version.
 */
void AppRegistryRequest::setApiVersion(const QString &version)
{
    Q_D(AppRegistryRequest);
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
bool AppRegistryRequest::operator==(const AppRegistryRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AppRegistry queue name.
 *
 * @par From AppRegistry FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AppRegistry queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AppRegistryRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AppRegistryRequest::clearParameter(const QString &name)
{
    Q_D(AppRegistryRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AppRegistryRequest::clearParameters()
{
    Q_D(AppRegistryRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AppRegistryRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AppRegistryRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AppRegistryRequest::parameters() const
{
    Q_D(const AppRegistryRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AppRegistryRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AppRegistryRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AppRegistryRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AppRegistryRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AppRegistry request using the given
 * \a endpoint.
 *
 * This AppRegistry implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AppRegistryRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AppRegistryRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AppRegistry::AppRegistryRequestPrivate
 * \brief The AppRegistryRequestPrivate class provides private implementation for AppRegistryRequest.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a AppRegistryRequestPrivate object for AppRegistry \a action,
 * with public implementation \a q.
 */
AppRegistryRequestPrivate::AppRegistryRequestPrivate(const AppRegistryRequest::Action action, AppRegistryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AppRegistryRequest class's copy constructor.
 */
AppRegistryRequestPrivate::AppRegistryRequestPrivate(const AppRegistryRequestPrivate &other,
                                     AppRegistryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AppRegistryRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AppRegistry service's Action
 * query parameters.
 */
QString AppRegistryRequestPrivate::toString(const AppRegistryRequest::Action &action)
{
    #define ActionToString(action) \
        case AppRegistryRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AppRegistry
} // namespace QtAws
