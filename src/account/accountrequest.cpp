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

#include "accountrequest.h"
#include "accountrequest_p.h"

namespace QtAws {
namespace Account {

/*!
 * \class QtAws::Account::AccountRequest
 * \brief The AccountRequest class provides an interface for Account requests.
 *
 * \inmodule QtAwsAccount
 */

/*!
 * \enum AccountRequest::Action
 *
 * This enum describes the actions that can be performed as Account
 * requests.
 *
 * \value DeleteAlternateContactAction Account DeleteAlternateContact action.
 * \value GetAlternateContactAction Account GetAlternateContact action.
 * \value GetContactInformationAction Account GetContactInformation action.
 * \value PutAlternateContactAction Account PutAlternateContact action.
 * \value PutContactInformationAction Account PutContactInformation action.
 */

/*!
 * Constructs a AccountRequest object for Account \a action.
 */
AccountRequest::AccountRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AccountRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AccountRequest::AccountRequest(const AccountRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AccountRequest object to be equal to \a other.
 */
AccountRequest& AccountRequest::operator=(const AccountRequest &other)
{
    Q_D(AccountRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AccountRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AccountRequestPrivate.
 */
AccountRequest::AccountRequest(AccountRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Account action to be performed by this request.
 */
AccountRequest::Action AccountRequest::action() const
{
    Q_D(const AccountRequest);
    return d->action;
}

/*!
 * Returns the name of the Account action to be performed by this request.
 */
QString AccountRequest::actionString() const
{
    return AccountRequestPrivate::toString(action());
}

/*!
 * Returns the Account API version implemented by this request.
 */
QString AccountRequest::apiVersion() const
{
    Q_D(const AccountRequest);
    return d->apiVersion;
}

/*!
 * Sets the Account action to be performed by this request to \a action.
 */
void AccountRequest::setAction(const Action action)
{
    Q_D(AccountRequest);
    d->action = action;
}

/*!
 * Sets the Account API version to include in this request to \a version.
 */
void AccountRequest::setApiVersion(const QString &version)
{
    Q_D(AccountRequest);
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
bool AccountRequest::operator==(const AccountRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Account queue name.
 *
 * @par From Account FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Account queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AccountRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AccountRequest::clearParameter(const QString &name)
{
    Q_D(AccountRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AccountRequest::clearParameters()
{
    Q_D(AccountRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AccountRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AccountRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AccountRequest::parameters() const
{
    Q_D(const AccountRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AccountRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AccountRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AccountRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AccountRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Account request using the given
 * \a endpoint.
 *
 * This Account implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AccountRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AccountRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Account::AccountRequestPrivate
 * \brief The AccountRequestPrivate class provides private implementation for AccountRequest.
 * \internal
 *
 * \inmodule QtAwsAccount
 */

/*!
 * Constructs a AccountRequestPrivate object for Account \a action,
 * with public implementation \a q.
 */
AccountRequestPrivate::AccountRequestPrivate(const AccountRequest::Action action, AccountRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-02-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AccountRequest class's copy constructor.
 */
AccountRequestPrivate::AccountRequestPrivate(const AccountRequestPrivate &other,
                                     AccountRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AccountRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Account service's Action
 * query parameters.
 */
QString AccountRequestPrivate::toString(const AccountRequest::Action &action)
{
    #define ActionToString(action) \
        case AccountRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DeleteAlternateContact);
        ActionToString(GetAlternateContact);
        ActionToString(GetContactInformation);
        ActionToString(PutAlternateContact);
        ActionToString(PutContactInformation);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Account
} // namespace QtAws
