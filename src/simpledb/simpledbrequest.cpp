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

#include "simpledbrequest.h"
#include "simpledbrequest_p.h"

namespace QtAws {
namespace SimpleDB {

/*!
 * \class QtAws::SimpleDB::SimpleDBRequest
 * \brief The SimpleDBRequest class provides an interface for SimpleDB requests.
 *
 * \inmodule QtAwsSimpleDB
 */

/*!
 * \enum SimpleDBRequest::Action
 *
 * This enum describes the actions that can be performed as SimpleDB
 * requests.
 *
 * \value BatchDeleteAttributesAction SimpleDB BatchDeleteAttributes action.
 * \value BatchPutAttributesAction SimpleDB BatchPutAttributes action.
 * \value CreateDomainAction SimpleDB CreateDomain action.
 * \value DeleteAttributesAction SimpleDB DeleteAttributes action.
 * \value DeleteDomainAction SimpleDB DeleteDomain action.
 * \value DomainMetadataAction SimpleDB DomainMetadata action.
 * \value GetAttributesAction SimpleDB GetAttributes action.
 * \value ListDomainsAction SimpleDB ListDomains action.
 * \value PutAttributesAction SimpleDB PutAttributes action.
 * \value SelectAction SimpleDB Select action.
 */

/*!
 * Constructs a SimpleDBRequest object for SimpleDB \a action.
 */
SimpleDBRequest::SimpleDBRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SimpleDBRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SimpleDBRequest::SimpleDBRequest(const SimpleDBRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SimpleDBRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SimpleDBRequest object to be equal to \a other.
 */
SimpleDBRequest& SimpleDBRequest::operator=(const SimpleDBRequest &other)
{
    Q_D(SimpleDBRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SimpleDBRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SimpleDBRequestPrivate.
 */
SimpleDBRequest::SimpleDBRequest(SimpleDBRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SimpleDB action to be performed by this request.
 */
SimpleDBRequest::Action SimpleDBRequest::action() const
{
    Q_D(const SimpleDBRequest);
    return d->action;
}

/*!
 * Returns the name of the SimpleDB action to be performed by this request.
 */
QString SimpleDBRequest::actionString() const
{
    return SimpleDBRequestPrivate::toString(action());
}

/*!
 * Returns the SimpleDB API version implemented by this request.
 */
QString SimpleDBRequest::apiVersion() const
{
    Q_D(const SimpleDBRequest);
    return d->apiVersion;
}

/*!
 * Sets the SimpleDB action to be performed by this request to \a action.
 */
void SimpleDBRequest::setAction(const Action action)
{
    Q_D(SimpleDBRequest);
    d->action = action;
}

/*!
 * Sets the SimpleDB API version to include in this request to \a version.
 */
void SimpleDBRequest::setApiVersion(const QString &version)
{
    Q_D(SimpleDBRequest);
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
bool SimpleDBRequest::operator==(const SimpleDBRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SimpleDB queue name.
 *
 * @par From SimpleDB FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SimpleDB queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SimpleDBRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SimpleDBRequest::clearParameter(const QString &name)
{
    Q_D(SimpleDBRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SimpleDBRequest::clearParameters()
{
    Q_D(SimpleDBRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SimpleDBRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SimpleDBRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SimpleDBRequest::parameters() const
{
    Q_D(const SimpleDBRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SimpleDBRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SimpleDBRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SimpleDBRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SimpleDBRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SimpleDB request using the given
 * \a endpoint.
 *
 * This SimpleDB implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SimpleDBRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SimpleDBRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SimpleDB::SimpleDBRequestPrivate
 * \brief The SimpleDBRequestPrivate class provides private implementation for SimpleDBRequest.
 * \internal
 *
 * \inmodule QtAwsSimpleDB
 */

/*!
 * Constructs a SimpleDBRequestPrivate object for SimpleDB \a action,
 * with public implementation \a q.
 */
SimpleDBRequestPrivate::SimpleDBRequestPrivate(const SimpleDBRequest::Action action, SimpleDBRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SimpleDBRequest class's copy constructor.
 */
SimpleDBRequestPrivate::SimpleDBRequestPrivate(const SimpleDBRequestPrivate &other,
                                     SimpleDBRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SimpleDBRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SimpleDB service's Action
 * query parameters.
 */
QString SimpleDBRequestPrivate::toString(const SimpleDBRequest::Action &action)
{
    #define ActionToString(action) \
        case SimpleDBRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SimpleDB
} // namespace QtAws
