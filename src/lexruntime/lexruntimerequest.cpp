// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lexruntimerequest.h"
#include "lexruntimerequest_p.h"

namespace QtAws {
namespace LexRuntime {

/*!
 * \class QtAws::LexRuntime::LexRuntimeRequest
 * \brief The LexRuntimeRequest class provides an interface for LexRuntime requests.
 *
 * \inmodule QtAwsLexRuntime
 */

/*!
 * \enum LexRuntimeRequest::Action
 *
 * This enum describes the actions that can be performed as LexRuntime
 * requests.
 *
 * \value DeleteSessionAction LexRuntime DeleteSession action.
 * \value GetSessionAction LexRuntime GetSession action.
 * \value PostContentAction LexRuntime PostContent action.
 * \value PostTextAction LexRuntime PostText action.
 * \value PutSessionAction LexRuntime PutSession action.
 */

/*!
 * Constructs a LexRuntimeRequest object for LexRuntime \a action.
 */
LexRuntimeRequest::LexRuntimeRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new LexRuntimeRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LexRuntimeRequest::LexRuntimeRequest(const LexRuntimeRequest &other)
    : QtAws::Core::AwsAbstractRequest(new LexRuntimeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LexRuntimeRequest object to be equal to \a other.
 */
LexRuntimeRequest& LexRuntimeRequest::operator=(const LexRuntimeRequest &other)
{
    Q_D(LexRuntimeRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LexRuntimeRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LexRuntimeRequestPrivate.
 */
LexRuntimeRequest::LexRuntimeRequest(LexRuntimeRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the LexRuntime action to be performed by this request.
 */
LexRuntimeRequest::Action LexRuntimeRequest::action() const
{
    Q_D(const LexRuntimeRequest);
    return d->action;
}

/*!
 * Returns the name of the LexRuntime action to be performed by this request.
 */
QString LexRuntimeRequest::actionString() const
{
    return LexRuntimeRequestPrivate::toString(action());
}

/*!
 * Returns the LexRuntime API version implemented by this request.
 */
QString LexRuntimeRequest::apiVersion() const
{
    Q_D(const LexRuntimeRequest);
    return d->apiVersion;
}

/*!
 * Sets the LexRuntime action to be performed by this request to \a action.
 */
void LexRuntimeRequest::setAction(const Action action)
{
    Q_D(LexRuntimeRequest);
    d->action = action;
}

/*!
 * Sets the LexRuntime API version to include in this request to \a version.
 */
void LexRuntimeRequest::setApiVersion(const QString &version)
{
    Q_D(LexRuntimeRequest);
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
bool LexRuntimeRequest::operator==(const LexRuntimeRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid LexRuntime queue name.
 *
 * @par From LexRuntime FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid LexRuntime queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LexRuntimeRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LexRuntimeRequest::clearParameter(const QString &name)
{
    Q_D(LexRuntimeRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LexRuntimeRequest::clearParameters()
{
    Q_D(LexRuntimeRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LexRuntimeRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LexRuntimeRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LexRuntimeRequest::parameters() const
{
    Q_D(const LexRuntimeRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LexRuntimeRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LexRuntimeRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LexRuntimeRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LexRuntimeRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the LexRuntime request using the given
 * \a endpoint.
 *
 * This LexRuntime implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LexRuntimeRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LexRuntimeRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::LexRuntime::LexRuntimeRequestPrivate
 * \brief The LexRuntimeRequestPrivate class provides private implementation for LexRuntimeRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntime
 */

/*!
 * Constructs a LexRuntimeRequestPrivate object for LexRuntime \a action,
 * with public implementation \a q.
 */
LexRuntimeRequestPrivate::LexRuntimeRequestPrivate(const LexRuntimeRequest::Action action, LexRuntimeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2016-11-28"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LexRuntimeRequest class's copy constructor.
 */
LexRuntimeRequestPrivate::LexRuntimeRequestPrivate(const LexRuntimeRequestPrivate &other,
                                     LexRuntimeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LexRuntimeRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the LexRuntime service's Action
 * query parameters.
 */
QString LexRuntimeRequestPrivate::toString(const LexRuntimeRequest::Action &action)
{
    #define ActionToString(action) \
        case LexRuntimeRequest::action##Action: return QStringLiteral(#action)
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

} // namespace LexRuntime
} // namespace QtAws
