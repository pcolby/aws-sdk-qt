// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "codestarnotificationsrequest.h"
#include "codestarnotificationsrequest_p.h"

namespace QtAws {
namespace CodestarNotifications {

/*!
 * \class QtAws::CodestarNotifications::CodestarNotificationsRequest
 * \brief The CodestarNotificationsRequest class provides an interface for CodestarNotifications requests.
 *
 * \inmodule QtAwsCodestarNotifications
 */

/*!
 * \enum CodestarNotificationsRequest::Action
 *
 * This enum describes the actions that can be performed as CodestarNotifications
 * requests.
 *
 * \value CreateNotificationRuleAction CodestarNotifications CreateNotificationRule action.
 * \value DeleteNotificationRuleAction CodestarNotifications DeleteNotificationRule action.
 * \value DeleteTargetAction CodestarNotifications DeleteTarget action.
 * \value DescribeNotificationRuleAction CodestarNotifications DescribeNotificationRule action.
 * \value ListEventTypesAction CodestarNotifications ListEventTypes action.
 * \value ListNotificationRulesAction CodestarNotifications ListNotificationRules action.
 * \value ListTagsForResourceAction CodestarNotifications ListTagsForResource action.
 * \value ListTargetsAction CodestarNotifications ListTargets action.
 * \value SubscribeAction CodestarNotifications Subscribe action.
 * \value TagResourceAction CodestarNotifications TagResource action.
 * \value UnsubscribeAction CodestarNotifications Unsubscribe action.
 * \value UntagResourceAction CodestarNotifications UntagResource action.
 * \value UpdateNotificationRuleAction CodestarNotifications UpdateNotificationRule action.
 */

/*!
 * Constructs a CodestarNotificationsRequest object for CodestarNotifications \a action.
 */
CodestarNotificationsRequest::CodestarNotificationsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CodestarNotificationsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CodestarNotificationsRequest::CodestarNotificationsRequest(const CodestarNotificationsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CodestarNotificationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CodestarNotificationsRequest object to be equal to \a other.
 */
CodestarNotificationsRequest& CodestarNotificationsRequest::operator=(const CodestarNotificationsRequest &other)
{
    Q_D(CodestarNotificationsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CodestarNotificationsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodestarNotificationsRequestPrivate.
 */
CodestarNotificationsRequest::CodestarNotificationsRequest(CodestarNotificationsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CodestarNotifications action to be performed by this request.
 */
CodestarNotificationsRequest::Action CodestarNotificationsRequest::action() const
{
    Q_D(const CodestarNotificationsRequest);
    return d->action;
}

/*!
 * Returns the name of the CodestarNotifications action to be performed by this request.
 */
QString CodestarNotificationsRequest::actionString() const
{
    return CodestarNotificationsRequestPrivate::toString(action());
}

/*!
 * Returns the CodestarNotifications API version implemented by this request.
 */
QString CodestarNotificationsRequest::apiVersion() const
{
    Q_D(const CodestarNotificationsRequest);
    return d->apiVersion;
}

/*!
 * Sets the CodestarNotifications action to be performed by this request to \a action.
 */
void CodestarNotificationsRequest::setAction(const Action action)
{
    Q_D(CodestarNotificationsRequest);
    d->action = action;
}

/*!
 * Sets the CodestarNotifications API version to include in this request to \a version.
 */
void CodestarNotificationsRequest::setApiVersion(const QString &version)
{
    Q_D(CodestarNotificationsRequest);
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
bool CodestarNotificationsRequest::operator==(const CodestarNotificationsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CodestarNotifications queue name.
 *
 * @par From CodestarNotifications FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CodestarNotifications queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CodestarNotificationsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CodestarNotificationsRequest::clearParameter(const QString &name)
{
    Q_D(CodestarNotificationsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CodestarNotificationsRequest::clearParameters()
{
    Q_D(CodestarNotificationsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CodestarNotificationsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CodestarNotificationsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CodestarNotificationsRequest::parameters() const
{
    Q_D(const CodestarNotificationsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CodestarNotificationsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CodestarNotificationsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CodestarNotificationsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CodestarNotificationsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CodestarNotifications request using the given
 * \a endpoint.
 *
 * This CodestarNotifications implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CodestarNotificationsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CodestarNotificationsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CodestarNotifications::CodestarNotificationsRequestPrivate
 * \brief The CodestarNotificationsRequestPrivate class provides private implementation for CodestarNotificationsRequest.
 * \internal
 *
 * \inmodule QtAwsCodestarNotifications
 */

/*!
 * Constructs a CodestarNotificationsRequestPrivate object for CodestarNotifications \a action,
 * with public implementation \a q.
 */
CodestarNotificationsRequestPrivate::CodestarNotificationsRequestPrivate(const CodestarNotificationsRequest::Action action, CodestarNotificationsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-10-15"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CodestarNotificationsRequest class's copy constructor.
 */
CodestarNotificationsRequestPrivate::CodestarNotificationsRequestPrivate(const CodestarNotificationsRequestPrivate &other,
                                     CodestarNotificationsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CodestarNotificationsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CodestarNotifications service's Action
 * query parameters.
 */
QString CodestarNotificationsRequestPrivate::toString(const CodestarNotificationsRequest::Action &action)
{
    #define ActionToString(action) \
        case CodestarNotificationsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateNotificationRule);
        ActionToString(DeleteNotificationRule);
        ActionToString(DeleteTarget);
        ActionToString(DescribeNotificationRule);
        ActionToString(ListEventTypes);
        ActionToString(ListNotificationRules);
        ActionToString(ListTagsForResource);
        ActionToString(ListTargets);
        ActionToString(Subscribe);
        ActionToString(TagResource);
        ActionToString(Unsubscribe);
        ActionToString(UntagResource);
        ActionToString(UpdateNotificationRule);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CodestarNotifications
} // namespace QtAws
