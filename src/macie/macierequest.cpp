/*
    Copyright 2013-2020 Paul Colby

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

#include "macierequest.h"
#include "macierequest_p.h"

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::MacieRequest
 * \brief The MacieRequest class provides an interface for Macie requests.
 *
 * \inmodule QtAwsMacie
 */

/*!
 * \enum MacieRequest::Action
 *
 * This enum describes the actions that can be performed as Macie
 * requests.
 *
 * \value AssociateMemberAccountAction Macie AssociateMemberAccount action.
 * \value AssociateS3ResourcesAction Macie AssociateS3Resources action.
 * \value DisassociateMemberAccountAction Macie DisassociateMemberAccount action.
 * \value DisassociateS3ResourcesAction Macie DisassociateS3Resources action.
 * \value ListMemberAccountsAction Macie ListMemberAccounts action.
 * \value ListS3ResourcesAction Macie ListS3Resources action.
 * \value UpdateS3ResourcesAction Macie UpdateS3Resources action.
 */

/*!
 * Constructs a MacieRequest object for Macie \a action.
 */
MacieRequest::MacieRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MacieRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MacieRequest::MacieRequest(const MacieRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MacieRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MacieRequest object to be equal to \a other.
 */
MacieRequest& MacieRequest::operator=(const MacieRequest &other)
{
    Q_D(MacieRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MacieRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MacieRequestPrivate.
 */
MacieRequest::MacieRequest(MacieRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Macie action to be performed by this request.
 */
MacieRequest::Action MacieRequest::action() const
{
    Q_D(const MacieRequest);
    return d->action;
}

/*!
 * Returns the name of the Macie action to be performed by this request.
 */
QString MacieRequest::actionString() const
{
    return MacieRequestPrivate::toString(action());
}

/*!
 * Returns the Macie API version implemented by this request.
 */
QString MacieRequest::apiVersion() const
{
    Q_D(const MacieRequest);
    return d->apiVersion;
}

/*!
 * Sets the Macie action to be performed by this request to \a action.
 */
void MacieRequest::setAction(const Action action)
{
    Q_D(MacieRequest);
    d->action = action;
}

/*!
 * Sets the Macie API version to include in this request to \a version.
 */
void MacieRequest::setApiVersion(const QString &version)
{
    Q_D(MacieRequest);
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
bool MacieRequest::operator==(const MacieRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Macie queue name.
 *
 * @par From Macie FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Macie queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MacieRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MacieRequest::clearParameter(const QString &name)
{
    Q_D(MacieRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MacieRequest::clearParameters()
{
    Q_D(MacieRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MacieRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MacieRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MacieRequest::parameters() const
{
    Q_D(const MacieRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MacieRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MacieRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MacieRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MacieRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Macie request using the given
 * \a endpoint.
 *
 * This Macie implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MacieRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MacieRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Macie::MacieRequestPrivate
 * \brief The MacieRequestPrivate class provides private implementation for MacieRequest.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a MacieRequestPrivate object for Macie \a action,
 * with public implementation \a q.
 */
MacieRequestPrivate::MacieRequestPrivate(const MacieRequest::Action action, MacieRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MacieRequest class's copy constructor.
 */
MacieRequestPrivate::MacieRequestPrivate(const MacieRequestPrivate &other,
                                     MacieRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MacieRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Macie service's Action
 * query parameters.
 */
QString MacieRequestPrivate::toString(const MacieRequest::Action &action)
{
    #define ActionToString(action) \
        case MacieRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Macie
} // namespace QtAws
