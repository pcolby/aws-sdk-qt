// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "codestarconnectionsrequest.h"
#include "codestarconnectionsrequest_p.h"

namespace QtAws {
namespace CodeStarconnections {

/*!
 * \class QtAws::CodeStarconnections::CodeStarconnectionsRequest
 * \brief The CodeStarconnectionsRequest class provides an interface for CodeStarconnections requests.
 *
 * \inmodule QtAwsCodeStarconnections
 */

/*!
 * \enum CodeStarconnectionsRequest::Action
 *
 * This enum describes the actions that can be performed as CodeStarconnections
 * requests.
 *
 * \value CreateConnectionAction CodeStarconnections CreateConnection action.
 * \value CreateHostAction CodeStarconnections CreateHost action.
 * \value DeleteConnectionAction CodeStarconnections DeleteConnection action.
 * \value DeleteHostAction CodeStarconnections DeleteHost action.
 * \value GetConnectionAction CodeStarconnections GetConnection action.
 * \value GetHostAction CodeStarconnections GetHost action.
 * \value ListConnectionsAction CodeStarconnections ListConnections action.
 * \value ListHostsAction CodeStarconnections ListHosts action.
 * \value ListTagsForResourceAction CodeStarconnections ListTagsForResource action.
 * \value TagResourceAction CodeStarconnections TagResource action.
 * \value UntagResourceAction CodeStarconnections UntagResource action.
 * \value UpdateHostAction CodeStarconnections UpdateHost action.
 */

/*!
 * Constructs a CodeStarconnectionsRequest object for CodeStarconnections \a action.
 */
CodeStarconnectionsRequest::CodeStarconnectionsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CodeStarconnectionsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CodeStarconnectionsRequest::CodeStarconnectionsRequest(const CodeStarconnectionsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CodeStarconnectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CodeStarconnectionsRequest object to be equal to \a other.
 */
CodeStarconnectionsRequest& CodeStarconnectionsRequest::operator=(const CodeStarconnectionsRequest &other)
{
    Q_D(CodeStarconnectionsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CodeStarconnectionsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeStarconnectionsRequestPrivate.
 */
CodeStarconnectionsRequest::CodeStarconnectionsRequest(CodeStarconnectionsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CodeStarconnections action to be performed by this request.
 */
CodeStarconnectionsRequest::Action CodeStarconnectionsRequest::action() const
{
    Q_D(const CodeStarconnectionsRequest);
    return d->action;
}

/*!
 * Returns the name of the CodeStarconnections action to be performed by this request.
 */
QString CodeStarconnectionsRequest::actionString() const
{
    return CodeStarconnectionsRequestPrivate::toString(action());
}

/*!
 * Returns the CodeStarconnections API version implemented by this request.
 */
QString CodeStarconnectionsRequest::apiVersion() const
{
    Q_D(const CodeStarconnectionsRequest);
    return d->apiVersion;
}

/*!
 * Sets the CodeStarconnections action to be performed by this request to \a action.
 */
void CodeStarconnectionsRequest::setAction(const Action action)
{
    Q_D(CodeStarconnectionsRequest);
    d->action = action;
}

/*!
 * Sets the CodeStarconnections API version to include in this request to \a version.
 */
void CodeStarconnectionsRequest::setApiVersion(const QString &version)
{
    Q_D(CodeStarconnectionsRequest);
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
bool CodeStarconnectionsRequest::operator==(const CodeStarconnectionsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CodeStarconnections queue name.
 *
 * @par From CodeStarconnections FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CodeStarconnections queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CodeStarconnectionsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CodeStarconnectionsRequest::clearParameter(const QString &name)
{
    Q_D(CodeStarconnectionsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CodeStarconnectionsRequest::clearParameters()
{
    Q_D(CodeStarconnectionsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CodeStarconnectionsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CodeStarconnectionsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CodeStarconnectionsRequest::parameters() const
{
    Q_D(const CodeStarconnectionsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CodeStarconnectionsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CodeStarconnectionsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CodeStarconnectionsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CodeStarconnectionsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CodeStarconnections request using the given
 * \a endpoint.
 *
 * This CodeStarconnections implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CodeStarconnectionsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CodeStarconnectionsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CodeStarconnections::CodeStarconnectionsRequestPrivate
 * \brief The CodeStarconnectionsRequestPrivate class provides private implementation for CodeStarconnectionsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeStarconnections
 */

/*!
 * Constructs a CodeStarconnectionsRequestPrivate object for CodeStarconnections \a action,
 * with public implementation \a q.
 */
CodeStarconnectionsRequestPrivate::CodeStarconnectionsRequestPrivate(const CodeStarconnectionsRequest::Action action, CodeStarconnectionsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-12-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CodeStarconnectionsRequest class's copy constructor.
 */
CodeStarconnectionsRequestPrivate::CodeStarconnectionsRequestPrivate(const CodeStarconnectionsRequestPrivate &other,
                                     CodeStarconnectionsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CodeStarconnectionsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CodeStarconnections service's Action
 * query parameters.
 */
QString CodeStarconnectionsRequestPrivate::toString(const CodeStarconnectionsRequest::Action &action)
{
    #define ActionToString(action) \
        case CodeStarconnectionsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateConnection);
        ActionToString(CreateHost);
        ActionToString(DeleteConnection);
        ActionToString(DeleteHost);
        ActionToString(GetConnection);
        ActionToString(GetHost);
        ActionToString(ListConnections);
        ActionToString(ListHosts);
        ActionToString(ListTagsForResource);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateHost);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CodeStarconnections
} // namespace QtAws
