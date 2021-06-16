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

#include "ssorequest.h"
#include "ssorequest_p.h"

namespace QtAws {
namespace SSO {

/*!
 * \class QtAws::SSO::SsoRequest
 * \brief The SsoRequest class provides an interface for SSO requests.
 *
 * \inmodule QtAwsSSO
 */

/*!
 * \enum SsoRequest::Action
 *
 * This enum describes the actions that can be performed as SSO
 * requests.
 *
 * \value GetRoleCredentialsAction SSO GetRoleCredentials action.
 * \value ListAccountRolesAction SSO ListAccountRoles action.
 * \value ListAccountsAction SSO ListAccounts action.
 * \value LogoutAction SSO Logout action.
 */

/*!
 * Constructs a SsoRequest object for SSO \a action.
 */
SsoRequest::SsoRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SsoRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SsoRequest::SsoRequest(const SsoRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SsoRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SsoRequest object to be equal to \a other.
 */
SsoRequest& SsoRequest::operator=(const SsoRequest &other)
{
    Q_D(SsoRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SsoRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsoRequestPrivate.
 */
SsoRequest::SsoRequest(SsoRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SSO action to be performed by this request.
 */
SsoRequest::Action SsoRequest::action() const
{
    Q_D(const SsoRequest);
    return d->action;
}

/*!
 * Returns the name of the SSO action to be performed by this request.
 */
QString SsoRequest::actionString() const
{
    return SsoRequestPrivate::toString(action());
}

/*!
 * Returns the SSO API version implemented by this request.
 */
QString SsoRequest::apiVersion() const
{
    Q_D(const SsoRequest);
    return d->apiVersion;
}

/*!
 * Sets the SSO action to be performed by this request to \a action.
 */
void SsoRequest::setAction(const Action action)
{
    Q_D(SsoRequest);
    d->action = action;
}

/*!
 * Sets the SSO API version to include in this request to \a version.
 */
void SsoRequest::setApiVersion(const QString &version)
{
    Q_D(SsoRequest);
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
bool SsoRequest::operator==(const SsoRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SSO queue name.
 *
 * @par From SSO FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SSO queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SsoRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SsoRequest::clearParameter(const QString &name)
{
    Q_D(SsoRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SsoRequest::clearParameters()
{
    Q_D(SsoRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SsoRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SsoRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SsoRequest::parameters() const
{
    Q_D(const SsoRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SsoRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SsoRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SsoRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SsoRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SSO request using the given
 * \a endpoint.
 *
 * This SSO implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SsoRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SsoRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SSO::SsoRequestPrivate
 * \brief The SsoRequestPrivate class provides private implementation for SsoRequest.
 * \internal
 *
 * \inmodule QtAwsSSO
 */

/*!
 * Constructs a SsoRequestPrivate object for SSO \a action,
 * with public implementation \a q.
 */
SsoRequestPrivate::SsoRequestPrivate(const SsoRequest::Action action, SsoRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SsoRequest class's copy constructor.
 */
SsoRequestPrivate::SsoRequestPrivate(const SsoRequestPrivate &other,
                                     SsoRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SsoRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SSO service's Action
 * query parameters.
 */
QString SsoRequestPrivate::toString(const SsoRequest::Action &action)
{
    #define ActionToString(action) \
        case SsoRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SSO
} // namespace QtAws
