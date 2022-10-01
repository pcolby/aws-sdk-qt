// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rumrequest.h"
#include "rumrequest_p.h"

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::RumRequest
 * \brief The RumRequest class provides an interface for Rum requests.
 *
 * \inmodule QtAwsRum
 */

/*!
 * \enum RumRequest::Action
 *
 * This enum describes the actions that can be performed as Rum
 * requests.
 *
 * \value CreateAppMonitorAction Rum CreateAppMonitor action.
 * \value DeleteAppMonitorAction Rum DeleteAppMonitor action.
 * \value GetAppMonitorAction Rum GetAppMonitor action.
 * \value GetAppMonitorDataAction Rum GetAppMonitorData action.
 * \value ListAppMonitorsAction Rum ListAppMonitors action.
 * \value ListTagsForResourceAction Rum ListTagsForResource action.
 * \value PutRumEventsAction Rum PutRumEvents action.
 * \value TagResourceAction Rum TagResource action.
 * \value UntagResourceAction Rum UntagResource action.
 * \value UpdateAppMonitorAction Rum UpdateAppMonitor action.
 */

/*!
 * Constructs a RumRequest object for Rum \a action.
 */
RumRequest::RumRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new RumRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
RumRequest::RumRequest(const RumRequest &other)
    : QtAws::Core::AwsAbstractRequest(new RumRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the RumRequest object to be equal to \a other.
 */
RumRequest& RumRequest::operator=(const RumRequest &other)
{
    Q_D(RumRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa RumRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RumRequestPrivate.
 */
RumRequest::RumRequest(RumRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Rum action to be performed by this request.
 */
RumRequest::Action RumRequest::action() const
{
    Q_D(const RumRequest);
    return d->action;
}

/*!
 * Returns the name of the Rum action to be performed by this request.
 */
QString RumRequest::actionString() const
{
    return RumRequestPrivate::toString(action());
}

/*!
 * Returns the Rum API version implemented by this request.
 */
QString RumRequest::apiVersion() const
{
    Q_D(const RumRequest);
    return d->apiVersion;
}

/*!
 * Sets the Rum action to be performed by this request to \a action.
 */
void RumRequest::setAction(const Action action)
{
    Q_D(RumRequest);
    d->action = action;
}

/*!
 * Sets the Rum API version to include in this request to \a version.
 */
void RumRequest::setApiVersion(const QString &version)
{
    Q_D(RumRequest);
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
bool RumRequest::operator==(const RumRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Rum queue name.
 *
 * @par From Rum FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Rum queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool RumRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int RumRequest::clearParameter(const QString &name)
{
    Q_D(RumRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void RumRequest::clearParameters()
{
    Q_D(RumRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant RumRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RumRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &RumRequest::parameters() const
{
    Q_D(const RumRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void RumRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RumRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void RumRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RumRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Rum request using the given
 * \a endpoint.
 *
 * This Rum implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest RumRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const RumRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Rum::RumRequestPrivate
 * \brief The RumRequestPrivate class provides private implementation for RumRequest.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a RumRequestPrivate object for Rum \a action,
 * with public implementation \a q.
 */
RumRequestPrivate::RumRequestPrivate(const RumRequest::Action action, RumRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-05-10"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RumRequest class's copy constructor.
 */
RumRequestPrivate::RumRequestPrivate(const RumRequestPrivate &other,
                                     RumRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts RumRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Rum service's Action
 * query parameters.
 */
QString RumRequestPrivate::toString(const RumRequest::Action &action)
{
    #define ActionToString(action) \
        case RumRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateAppMonitor);
        ActionToString(DeleteAppMonitor);
        ActionToString(GetAppMonitor);
        ActionToString(GetAppMonitorData);
        ActionToString(ListAppMonitors);
        ActionToString(ListTagsForResource);
        ActionToString(PutRumEvents);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAppMonitor);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Rum
} // namespace QtAws
