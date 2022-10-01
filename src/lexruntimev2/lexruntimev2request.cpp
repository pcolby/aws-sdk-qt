// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lexruntimev2request.h"
#include "lexruntimev2request_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::LexRuntimeV2Request
 * \brief The LexRuntimeV2Request class provides an interface for LexRuntimeV2 requests.
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * \enum LexRuntimeV2Request::Action
 *
 * This enum describes the actions that can be performed as LexRuntimeV2
 * requests.
 *
 * \value DeleteSessionAction LexRuntimeV2 DeleteSession action.
 * \value GetSessionAction LexRuntimeV2 GetSession action.
 * \value PutSessionAction LexRuntimeV2 PutSession action.
 * \value RecognizeTextAction LexRuntimeV2 RecognizeText action.
 * \value RecognizeUtteranceAction LexRuntimeV2 RecognizeUtterance action.
 * \value StartConversationAction LexRuntimeV2 StartConversation action.
 */

/*!
 * Constructs a LexRuntimeV2Request object for LexRuntimeV2 \a action.
 */
LexRuntimeV2Request::LexRuntimeV2Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new LexRuntimeV2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LexRuntimeV2Request::LexRuntimeV2Request(const LexRuntimeV2Request &other)
    : QtAws::Core::AwsAbstractRequest(new LexRuntimeV2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LexRuntimeV2Request object to be equal to \a other.
 */
LexRuntimeV2Request& LexRuntimeV2Request::operator=(const LexRuntimeV2Request &other)
{
    Q_D(LexRuntimeV2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LexRuntimeV2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LexRuntimeV2RequestPrivate.
 */
LexRuntimeV2Request::LexRuntimeV2Request(LexRuntimeV2RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the LexRuntimeV2 action to be performed by this request.
 */
LexRuntimeV2Request::Action LexRuntimeV2Request::action() const
{
    Q_D(const LexRuntimeV2Request);
    return d->action;
}

/*!
 * Returns the name of the LexRuntimeV2 action to be performed by this request.
 */
QString LexRuntimeV2Request::actionString() const
{
    return LexRuntimeV2RequestPrivate::toString(action());
}

/*!
 * Returns the LexRuntimeV2 API version implemented by this request.
 */
QString LexRuntimeV2Request::apiVersion() const
{
    Q_D(const LexRuntimeV2Request);
    return d->apiVersion;
}

/*!
 * Sets the LexRuntimeV2 action to be performed by this request to \a action.
 */
void LexRuntimeV2Request::setAction(const Action action)
{
    Q_D(LexRuntimeV2Request);
    d->action = action;
}

/*!
 * Sets the LexRuntimeV2 API version to include in this request to \a version.
 */
void LexRuntimeV2Request::setApiVersion(const QString &version)
{
    Q_D(LexRuntimeV2Request);
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
bool LexRuntimeV2Request::operator==(const LexRuntimeV2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid LexRuntimeV2 queue name.
 *
 * @par From LexRuntimeV2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid LexRuntimeV2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LexRuntimeV2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LexRuntimeV2Request::clearParameter(const QString &name)
{
    Q_D(LexRuntimeV2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LexRuntimeV2Request::clearParameters()
{
    Q_D(LexRuntimeV2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LexRuntimeV2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LexRuntimeV2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LexRuntimeV2Request::parameters() const
{
    Q_D(const LexRuntimeV2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LexRuntimeV2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LexRuntimeV2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LexRuntimeV2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(LexRuntimeV2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the LexRuntimeV2 request using the given
 * \a endpoint.
 *
 * This LexRuntimeV2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LexRuntimeV2Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LexRuntimeV2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::LexRuntimeV2::LexRuntimeV2RequestPrivate
 * \brief The LexRuntimeV2RequestPrivate class provides private implementation for LexRuntimeV2Request.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a LexRuntimeV2RequestPrivate object for LexRuntimeV2 \a action,
 * with public implementation \a q.
 */
LexRuntimeV2RequestPrivate::LexRuntimeV2RequestPrivate(const LexRuntimeV2Request::Action action, LexRuntimeV2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-08-07"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LexRuntimeV2Request class's copy constructor.
 */
LexRuntimeV2RequestPrivate::LexRuntimeV2RequestPrivate(const LexRuntimeV2RequestPrivate &other,
                                     LexRuntimeV2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LexRuntimeV2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the LexRuntimeV2 service's Action
 * query parameters.
 */
QString LexRuntimeV2RequestPrivate::toString(const LexRuntimeV2Request::Action &action)
{
    #define ActionToString(action) \
        case LexRuntimeV2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DeleteSession);
        ActionToString(GetSession);
        ActionToString(PutSession);
        ActionToString(RecognizeText);
        ActionToString(RecognizeUtterance);
        ActionToString(StartConversation);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace LexRuntimeV2
} // namespace QtAws
