// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rbinrequest.h"
#include "rbinrequest_p.h"

namespace QtAws {
namespace Rbin {

/*!
 * \class QtAws::Rbin::RbinRequest
 * \brief The RbinRequest class provides an interface for Rbin requests.
 *
 * \inmodule QtAwsRbin
 */

/*!
 * \enum RbinRequest::Action
 *
 * This enum describes the actions that can be performed as Rbin
 * requests.
 *
 * \value CreateRuleAction Rbin CreateRule action.
 * \value DeleteRuleAction Rbin DeleteRule action.
 * \value GetRuleAction Rbin GetRule action.
 * \value ListRulesAction Rbin ListRules action.
 * \value ListTagsForResourceAction Rbin ListTagsForResource action.
 * \value TagResourceAction Rbin TagResource action.
 * \value UntagResourceAction Rbin UntagResource action.
 * \value UpdateRuleAction Rbin UpdateRule action.
 */

/*!
 * Constructs a RbinRequest object for Rbin \a action.
 */
RbinRequest::RbinRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new RbinRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
RbinRequest::RbinRequest(const RbinRequest &other)
    : QtAws::Core::AwsAbstractRequest(new RbinRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the RbinRequest object to be equal to \a other.
 */
RbinRequest& RbinRequest::operator=(const RbinRequest &other)
{
    Q_D(RbinRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa RbinRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RbinRequestPrivate.
 */
RbinRequest::RbinRequest(RbinRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Rbin action to be performed by this request.
 */
RbinRequest::Action RbinRequest::action() const
{
    Q_D(const RbinRequest);
    return d->action;
}

/*!
 * Returns the name of the Rbin action to be performed by this request.
 */
QString RbinRequest::actionString() const
{
    return RbinRequestPrivate::toString(action());
}

/*!
 * Returns the Rbin API version implemented by this request.
 */
QString RbinRequest::apiVersion() const
{
    Q_D(const RbinRequest);
    return d->apiVersion;
}

/*!
 * Sets the Rbin action to be performed by this request to \a action.
 */
void RbinRequest::setAction(const Action action)
{
    Q_D(RbinRequest);
    d->action = action;
}

/*!
 * Sets the Rbin API version to include in this request to \a version.
 */
void RbinRequest::setApiVersion(const QString &version)
{
    Q_D(RbinRequest);
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
bool RbinRequest::operator==(const RbinRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Rbin queue name.
 *
 * @par From Rbin FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Rbin queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool RbinRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int RbinRequest::clearParameter(const QString &name)
{
    Q_D(RbinRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void RbinRequest::clearParameters()
{
    Q_D(RbinRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant RbinRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RbinRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &RbinRequest::parameters() const
{
    Q_D(const RbinRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void RbinRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RbinRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void RbinRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RbinRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Rbin request using the given
 * \a endpoint.
 *
 * This Rbin implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest RbinRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const RbinRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Rbin::RbinRequestPrivate
 * \brief The RbinRequestPrivate class provides private implementation for RbinRequest.
 * \internal
 *
 * \inmodule QtAwsRbin
 */

/*!
 * Constructs a RbinRequestPrivate object for Rbin \a action,
 * with public implementation \a q.
 */
RbinRequestPrivate::RbinRequestPrivate(const RbinRequest::Action action, RbinRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-06-15"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RbinRequest class's copy constructor.
 */
RbinRequestPrivate::RbinRequestPrivate(const RbinRequestPrivate &other,
                                     RbinRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts RbinRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Rbin service's Action
 * query parameters.
 */
QString RbinRequestPrivate::toString(const RbinRequest::Action &action)
{
    #define ActionToString(action) \
        case RbinRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateRule);
        ActionToString(DeleteRule);
        ActionToString(GetRule);
        ActionToString(ListRules);
        ActionToString(ListTagsForResource);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateRule);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Rbin
} // namespace QtAws
