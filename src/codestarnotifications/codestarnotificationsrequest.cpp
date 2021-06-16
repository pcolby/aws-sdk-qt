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

#include "codestarnotificationsrequest.h"
#include "codestarnotificationsrequest_p.h"

namespace QtAws {
namespace CodeStarNotifications {

/*!
 * \class QtAws::CodeStarNotifications::CodeStarNotificationsRequest
 * \brief The CodeStarNotificationsRequest class provides an interface for CodeStarNotifications requests.
 *
 * \inmodule QtAwsCodeStarNotifications
 */

/*!
 * \enum CodeStarNotificationsRequest::Action
 *
 * This enum describes the actions that can be performed as CodeStarNotifications
 * requests.
 *
 * \value CreateNotificationRuleAction CodeStarNotifications CreateNotificationRule action.
 * \value DeleteNotificationRuleAction CodeStarNotifications DeleteNotificationRule action.
 * \value DeleteTargetAction CodeStarNotifications DeleteTarget action.
 * \value DescribeNotificationRuleAction CodeStarNotifications DescribeNotificationRule action.
 * \value ListEventTypesAction CodeStarNotifications ListEventTypes action.
 * \value ListNotificationRulesAction CodeStarNotifications ListNotificationRules action.
 * \value ListTagsForResourceAction CodeStarNotifications ListTagsForResource action.
 * \value ListTargetsAction CodeStarNotifications ListTargets action.
 * \value SubscribeAction CodeStarNotifications Subscribe action.
 * \value TagResourceAction CodeStarNotifications TagResource action.
 * \value UnsubscribeAction CodeStarNotifications Unsubscribe action.
 * \value UntagResourceAction CodeStarNotifications UntagResource action.
 * \value UpdateNotificationRuleAction CodeStarNotifications UpdateNotificationRule action.
 */

/*!
 * Constructs a CodeStarNotificationsRequest object for CodeStarNotifications \a action.
 */
CodeStarNotificationsRequest::CodeStarNotificationsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CodeStarNotificationsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CodeStarNotificationsRequest::CodeStarNotificationsRequest(const CodeStarNotificationsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CodeStarNotificationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CodeStarNotificationsRequest object to be equal to \a other.
 */
CodeStarNotificationsRequest& CodeStarNotificationsRequest::operator=(const CodeStarNotificationsRequest &other)
{
    Q_D(CodeStarNotificationsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CodeStarNotificationsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeStarNotificationsRequestPrivate.
 */
CodeStarNotificationsRequest::CodeStarNotificationsRequest(CodeStarNotificationsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CodeStarNotifications action to be performed by this request.
 */
CodeStarNotificationsRequest::Action CodeStarNotificationsRequest::action() const
{
    Q_D(const CodeStarNotificationsRequest);
    return d->action;
}

/*!
 * Returns the name of the CodeStarNotifications action to be performed by this request.
 */
QString CodeStarNotificationsRequest::actionString() const
{
    return CodeStarNotificationsRequestPrivate::toString(action());
}

/*!
 * Returns the CodeStarNotifications API version implemented by this request.
 */
QString CodeStarNotificationsRequest::apiVersion() const
{
    Q_D(const CodeStarNotificationsRequest);
    return d->apiVersion;
}

/*!
 * Sets the CodeStarNotifications action to be performed by this request to \a action.
 */
void CodeStarNotificationsRequest::setAction(const Action action)
{
    Q_D(CodeStarNotificationsRequest);
    d->action = action;
}

/*!
 * Sets the CodeStarNotifications API version to include in this request to \a version.
 */
void CodeStarNotificationsRequest::setApiVersion(const QString &version)
{
    Q_D(CodeStarNotificationsRequest);
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
bool CodeStarNotificationsRequest::operator==(const CodeStarNotificationsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CodeStarNotifications queue name.
 *
 * @par From CodeStarNotifications FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CodeStarNotifications queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CodeStarNotificationsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CodeStarNotificationsRequest::clearParameter(const QString &name)
{
    Q_D(CodeStarNotificationsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CodeStarNotificationsRequest::clearParameters()
{
    Q_D(CodeStarNotificationsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CodeStarNotificationsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CodeStarNotificationsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CodeStarNotificationsRequest::parameters() const
{
    Q_D(const CodeStarNotificationsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CodeStarNotificationsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CodeStarNotificationsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CodeStarNotificationsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CodeStarNotificationsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CodeStarNotifications request using the given
 * \a endpoint.
 *
 * This CodeStarNotifications implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CodeStarNotificationsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CodeStarNotificationsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CodeStarNotifications::CodeStarNotificationsRequestPrivate
 * \brief The CodeStarNotificationsRequestPrivate class provides private implementation for CodeStarNotificationsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeStarNotifications
 */

/*!
 * Constructs a CodeStarNotificationsRequestPrivate object for CodeStarNotifications \a action,
 * with public implementation \a q.
 */
CodeStarNotificationsRequestPrivate::CodeStarNotificationsRequestPrivate(const CodeStarNotificationsRequest::Action action, CodeStarNotificationsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CodeStarNotificationsRequest class's copy constructor.
 */
CodeStarNotificationsRequestPrivate::CodeStarNotificationsRequestPrivate(const CodeStarNotificationsRequestPrivate &other,
                                     CodeStarNotificationsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CodeStarNotificationsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CodeStarNotifications service's Action
 * query parameters.
 */
QString CodeStarNotificationsRequestPrivate::toString(const CodeStarNotificationsRequest::Action &action)
{
    #define ActionToString(action) \
        case CodeStarNotificationsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CodeStarNotifications
} // namespace QtAws
