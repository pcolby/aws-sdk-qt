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

#include "customerprofilesrequest.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::CustomerProfilesRequest
 * \brief The CustomerProfilesRequest class provides an interface for CustomerProfiles requests.
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * \enum CustomerProfilesRequest::Action
 *
 * This enum describes the actions that can be performed as CustomerProfiles
 * requests.
 *
 * \value AddProfileKeyAction CustomerProfiles AddProfileKey action.
 * \value CreateDomainAction CustomerProfiles CreateDomain action.
 * \value CreateProfileAction CustomerProfiles CreateProfile action.
 * \value DeleteDomainAction CustomerProfiles DeleteDomain action.
 * \value DeleteIntegrationAction CustomerProfiles DeleteIntegration action.
 * \value DeleteProfileAction CustomerProfiles DeleteProfile action.
 * \value DeleteProfileKeyAction CustomerProfiles DeleteProfileKey action.
 * \value DeleteProfileObjectAction CustomerProfiles DeleteProfileObject action.
 * \value DeleteProfileObjectTypeAction CustomerProfiles DeleteProfileObjectType action.
 * \value GetDomainAction CustomerProfiles GetDomain action.
 * \value GetIntegrationAction CustomerProfiles GetIntegration action.
 * \value GetMatchesAction CustomerProfiles GetMatches action.
 * \value GetProfileObjectTypeAction CustomerProfiles GetProfileObjectType action.
 * \value GetProfileObjectTypeTemplateAction CustomerProfiles GetProfileObjectTypeTemplate action.
 * \value ListAccountIntegrationsAction CustomerProfiles ListAccountIntegrations action.
 * \value ListDomainsAction CustomerProfiles ListDomains action.
 * \value ListIntegrationsAction CustomerProfiles ListIntegrations action.
 * \value ListProfileObjectTypeTemplatesAction CustomerProfiles ListProfileObjectTypeTemplates action.
 * \value ListProfileObjectTypesAction CustomerProfiles ListProfileObjectTypes action.
 * \value ListProfileObjectsAction CustomerProfiles ListProfileObjects action.
 * \value ListTagsForResourceAction CustomerProfiles ListTagsForResource action.
 * \value MergeProfilesAction CustomerProfiles MergeProfiles action.
 * \value PutIntegrationAction CustomerProfiles PutIntegration action.
 * \value PutProfileObjectAction CustomerProfiles PutProfileObject action.
 * \value PutProfileObjectTypeAction CustomerProfiles PutProfileObjectType action.
 * \value SearchProfilesAction CustomerProfiles SearchProfiles action.
 * \value TagResourceAction CustomerProfiles TagResource action.
 * \value UntagResourceAction CustomerProfiles UntagResource action.
 * \value UpdateDomainAction CustomerProfiles UpdateDomain action.
 * \value UpdateProfileAction CustomerProfiles UpdateProfile action.
 */

/*!
 * Constructs a CustomerProfilesRequest object for CustomerProfiles \a action.
 */
CustomerProfilesRequest::CustomerProfilesRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CustomerProfilesRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CustomerProfilesRequest::CustomerProfilesRequest(const CustomerProfilesRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CustomerProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CustomerProfilesRequest object to be equal to \a other.
 */
CustomerProfilesRequest& CustomerProfilesRequest::operator=(const CustomerProfilesRequest &other)
{
    Q_D(CustomerProfilesRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CustomerProfilesRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CustomerProfilesRequestPrivate.
 */
CustomerProfilesRequest::CustomerProfilesRequest(CustomerProfilesRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CustomerProfiles action to be performed by this request.
 */
CustomerProfilesRequest::Action CustomerProfilesRequest::action() const
{
    Q_D(const CustomerProfilesRequest);
    return d->action;
}

/*!
 * Returns the name of the CustomerProfiles action to be performed by this request.
 */
QString CustomerProfilesRequest::actionString() const
{
    return CustomerProfilesRequestPrivate::toString(action());
}

/*!
 * Returns the CustomerProfiles API version implemented by this request.
 */
QString CustomerProfilesRequest::apiVersion() const
{
    Q_D(const CustomerProfilesRequest);
    return d->apiVersion;
}

/*!
 * Sets the CustomerProfiles action to be performed by this request to \a action.
 */
void CustomerProfilesRequest::setAction(const Action action)
{
    Q_D(CustomerProfilesRequest);
    d->action = action;
}

/*!
 * Sets the CustomerProfiles API version to include in this request to \a version.
 */
void CustomerProfilesRequest::setApiVersion(const QString &version)
{
    Q_D(CustomerProfilesRequest);
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
bool CustomerProfilesRequest::operator==(const CustomerProfilesRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CustomerProfiles queue name.
 *
 * @par From CustomerProfiles FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CustomerProfiles queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CustomerProfilesRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CustomerProfilesRequest::clearParameter(const QString &name)
{
    Q_D(CustomerProfilesRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CustomerProfilesRequest::clearParameters()
{
    Q_D(CustomerProfilesRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CustomerProfilesRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CustomerProfilesRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CustomerProfilesRequest::parameters() const
{
    Q_D(const CustomerProfilesRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CustomerProfilesRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CustomerProfilesRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CustomerProfilesRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CustomerProfilesRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CustomerProfiles request using the given
 * \a endpoint.
 *
 * This CustomerProfiles implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CustomerProfilesRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CustomerProfilesRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CustomerProfiles::CustomerProfilesRequestPrivate
 * \brief The CustomerProfilesRequestPrivate class provides private implementation for CustomerProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a CustomerProfilesRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
CustomerProfilesRequestPrivate::CustomerProfilesRequestPrivate(const CustomerProfilesRequest::Action action, CustomerProfilesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CustomerProfilesRequest class's copy constructor.
 */
CustomerProfilesRequestPrivate::CustomerProfilesRequestPrivate(const CustomerProfilesRequestPrivate &other,
                                     CustomerProfilesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CustomerProfilesRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CustomerProfiles service's Action
 * query parameters.
 */
QString CustomerProfilesRequestPrivate::toString(const CustomerProfilesRequest::Action &action)
{
    #define ActionToString(action) \
        case CustomerProfilesRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CustomerProfiles
} // namespace QtAws
