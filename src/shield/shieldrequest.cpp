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

#include "shieldrequest.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::ShieldRequest
 * \brief The ShieldRequest class provides an interface for Shield requests.
 *
 * \inmodule QtAwsShield
 */

/*!
 * \enum ShieldRequest::Action
 *
 * This enum describes the actions that can be performed as Shield
 * requests.
 *
 * \value CreateProtectionAction Shield CreateProtection action.
 * \value CreateSubscriptionAction Shield CreateSubscription action.
 * \value DeleteProtectionAction Shield DeleteProtection action.
 * \value DeleteSubscriptionAction Shield DeleteSubscription action.
 * \value DescribeAttackAction Shield DescribeAttack action.
 * \value DescribeProtectionAction Shield DescribeProtection action.
 * \value DescribeSubscriptionAction Shield DescribeSubscription action.
 * \value GetSubscriptionStateAction Shield GetSubscriptionState action.
 * \value ListAttacksAction Shield ListAttacks action.
 * \value ListProtectionsAction Shield ListProtections action.
 */

/*!
 * Constructs a ShieldRequest object for Shield \a action.
 */
ShieldRequest::ShieldRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ShieldRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ShieldRequest::ShieldRequest(const ShieldRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ShieldRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ShieldRequest object to be equal to \a other.
 */
ShieldRequest& ShieldRequest::operator=(const ShieldRequest &other)
{
    Q_D(ShieldRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ShieldRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ShieldRequestPrivate.
 */
ShieldRequest::ShieldRequest(ShieldRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Shield action to be performed by this request.
 */
ShieldRequest::Action ShieldRequest::action() const
{
    Q_D(const ShieldRequest);
    return d->action;
}

/*!
 * Returns the name of the Shield action to be performed by this request.
 */
QString ShieldRequest::actionString() const
{
    return ShieldRequestPrivate::toString(action());
}

/*!
 * Returns the Shield API version implemented by this request.
 */
QString ShieldRequest::apiVersion() const
{
    Q_D(const ShieldRequest);
    return d->apiVersion;
}

/*!
 * Sets the Shield action to be performed by this request to \a action.
 */
void ShieldRequest::setAction(const Action action)
{
    Q_D(ShieldRequest);
    d->action = action;
}

/*!
 * Sets the Shield API version to include in this request to \a version.
 */
void ShieldRequest::setApiVersion(const QString &version)
{
    Q_D(ShieldRequest);
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
bool ShieldRequest::operator==(const ShieldRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Shield queue name.
 *
 * @par From Shield FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Shield queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ShieldRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ShieldRequest::clearParameter(const QString &name)
{
    Q_D(ShieldRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ShieldRequest::clearParameters()
{
    Q_D(ShieldRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ShieldRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ShieldRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ShieldRequest::parameters() const
{
    Q_D(const ShieldRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ShieldRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ShieldRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ShieldRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ShieldRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Shield request using the given
 * \a endpoint.
 *
 * This Shield implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ShieldRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ShieldRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Shield::ShieldRequestPrivate
 * \brief The ShieldRequestPrivate class provides private implementation for ShieldRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a ShieldRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
ShieldRequestPrivate::ShieldRequestPrivate(const ShieldRequest::Action action, ShieldRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ShieldRequest class's copy constructor.
 */
ShieldRequestPrivate::ShieldRequestPrivate(const ShieldRequestPrivate &other,
                                     ShieldRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ShieldRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Shield service's Action
 * query parameters.
 */
QString ShieldRequestPrivate::toString(const ShieldRequest::Action &action)
{
    #define ActionToString(action) \
        case ShieldRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Shield
} // namespace QtAws
