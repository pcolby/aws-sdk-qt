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

#include "lexruntimeservicerequest.h"
#include "lexruntimeservicerequest_p.h"

namespace QtAws {
namespace LexRuntimeService {

/*!
 * \class QtAws::LexRuntimeService::LexRuntimeServiceRequest
 * \brief The LexRuntimeServiceRequest class provides an interface for LexRuntimeService requests.
 *
 * \inmodule QtAwsLexRuntimeService
 */

/*!
 * \enum LexRuntimeServiceRequest::Action
 *
 * This enum describes the actions that can be performed as LexRuntimeService
 * requests.
 *
 * \value DeleteSessionAction LexRuntimeService DeleteSession action.
 * \value GetSessionAction LexRuntimeService GetSession action.
 * \value PostContentAction LexRuntimeService PostContent action.
 * \value PostTextAction LexRuntimeService PostText action.
 * \value PutSessionAction LexRuntimeService PutSession action.
 */

/*!
 * Constructs a LexRuntimeServiceRequest object for LexRuntimeService \a action.
 */
LexRuntimeServiceRequest::LexRuntimeServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new LexRuntimeServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LexRuntimeServiceRequest::LexRuntimeServiceRequest(const LexRuntimeServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new LexRuntimeServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LexRuntimeServiceRequest object to be equal to \a other.
 */
LexRuntimeServiceRequest& LexRuntimeServiceRequest::operator=(const LexRuntimeServiceRequest &other)
{
    Q_D(LexRuntimeServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LexRuntimeServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LexRuntimeServiceRequestPrivate.
 */
LexRuntimeServiceRequest::LexRuntimeServiceRequest(LexRuntimeServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the LexRuntimeService action to be performed by this request.
 */
LexRuntimeServiceRequest::Action LexRuntimeServiceRequest::action() const
{
    Q_D(const LexRuntimeServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the LexRuntimeService action to be performed by this request.
 */
QString LexRuntimeServiceRequest::actionString() const
{
    return LexRuntimeServiceRequestPrivate::toString(action());
}

/*!
 * Returns the LexRuntimeService API version implemented by this request.
 */
QString LexRuntimeServiceRequest::apiVersion() const
{
    Q_D(const LexRuntimeServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the LexRuntimeService action to be performed by this request to \a action.
 */
void LexRuntimeServiceRequest::setAction(const Action action)
{
    Q_D(LexRuntimeServiceRequest);
    d->action = action;
}

/*!
 * Sets the LexRuntimeService API version to include in this request to \a version.
 */
void LexRuntimeServiceRequest::setApiVersion(const QString &version)
{
    Q_D(LexRuntimeServiceRequest);
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
bool LexRuntimeServiceRequest::operator==(const LexRuntimeServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid LexRuntimeService queue name.
 *
 * @par From LexRuntimeService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid LexRuntimeService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LexRuntimeServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LexRuntimeServiceRequest::clearParameter(const QString &name)
{
    Q_D(LexRuntimeServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LexRuntimeServiceRequest::clearParameters()
{
    Q_D(LexRuntimeServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LexRuntimeServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LexRuntimeServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LexRuntimeServiceRequest::parameters() const
{
    Q_D(const LexRuntimeServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LexRuntimeServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LexRuntimeServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LexRuntimeServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LexRuntimeServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the LexRuntimeService request using the given
 * \a endpoint.
 *
 * This LexRuntimeService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LexRuntimeServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LexRuntimeServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::LexRuntimeService::LexRuntimeServiceRequestPrivate
 * \brief The LexRuntimeServiceRequestPrivate class provides private implementation for LexRuntimeServiceRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeService
 */

/*!
 * Constructs a LexRuntimeServiceRequestPrivate object for LexRuntimeService \a action,
 * with public implementation \a q.
 */
LexRuntimeServiceRequestPrivate::LexRuntimeServiceRequestPrivate(const LexRuntimeServiceRequest::Action action, LexRuntimeServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LexRuntimeServiceRequest class's copy constructor.
 */
LexRuntimeServiceRequestPrivate::LexRuntimeServiceRequestPrivate(const LexRuntimeServiceRequestPrivate &other,
                                     LexRuntimeServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LexRuntimeServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the LexRuntimeService service's Action
 * query parameters.
 */
QString LexRuntimeServiceRequestPrivate::toString(const LexRuntimeServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case LexRuntimeServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DeleteSession);
        ActionToString(GetSession);
        ActionToString(PostContent);
        ActionToString(PostText);
        ActionToString(PutSession);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace LexRuntimeService
} // namespace QtAws
