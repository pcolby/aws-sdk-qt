// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sagemakeredgerequest.h"
#include "sagemakeredgerequest_p.h"

namespace QtAws {
namespace SagemakerEdge {

/*!
 * \class QtAws::SagemakerEdge::SagemakerEdgeRequest
 * \brief The SagemakerEdgeRequest class provides an interface for SagemakerEdge requests.
 *
 * \inmodule QtAwsSagemakerEdge
 */

/*!
 * \enum SagemakerEdgeRequest::Action
 *
 * This enum describes the actions that can be performed as SagemakerEdge
 * requests.
 *
 * \value GetDeploymentsAction SagemakerEdge GetDeployments action.
 * \value GetDeviceRegistrationAction SagemakerEdge GetDeviceRegistration action.
 * \value SendHeartbeatAction SagemakerEdge SendHeartbeat action.
 */

/*!
 * Constructs a SagemakerEdgeRequest object for SagemakerEdge \a action.
 */
SagemakerEdgeRequest::SagemakerEdgeRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SagemakerEdgeRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SagemakerEdgeRequest::SagemakerEdgeRequest(const SagemakerEdgeRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SagemakerEdgeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SagemakerEdgeRequest object to be equal to \a other.
 */
SagemakerEdgeRequest& SagemakerEdgeRequest::operator=(const SagemakerEdgeRequest &other)
{
    Q_D(SagemakerEdgeRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SagemakerEdgeRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SagemakerEdgeRequestPrivate.
 */
SagemakerEdgeRequest::SagemakerEdgeRequest(SagemakerEdgeRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SagemakerEdge action to be performed by this request.
 */
SagemakerEdgeRequest::Action SagemakerEdgeRequest::action() const
{
    Q_D(const SagemakerEdgeRequest);
    return d->action;
}

/*!
 * Returns the name of the SagemakerEdge action to be performed by this request.
 */
QString SagemakerEdgeRequest::actionString() const
{
    return SagemakerEdgeRequestPrivate::toString(action());
}

/*!
 * Returns the SagemakerEdge API version implemented by this request.
 */
QString SagemakerEdgeRequest::apiVersion() const
{
    Q_D(const SagemakerEdgeRequest);
    return d->apiVersion;
}

/*!
 * Sets the SagemakerEdge action to be performed by this request to \a action.
 */
void SagemakerEdgeRequest::setAction(const Action action)
{
    Q_D(SagemakerEdgeRequest);
    d->action = action;
}

/*!
 * Sets the SagemakerEdge API version to include in this request to \a version.
 */
void SagemakerEdgeRequest::setApiVersion(const QString &version)
{
    Q_D(SagemakerEdgeRequest);
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
bool SagemakerEdgeRequest::operator==(const SagemakerEdgeRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SagemakerEdge queue name.
 *
 * @par From SagemakerEdge FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SagemakerEdge queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SagemakerEdgeRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SagemakerEdgeRequest::clearParameter(const QString &name)
{
    Q_D(SagemakerEdgeRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SagemakerEdgeRequest::clearParameters()
{
    Q_D(SagemakerEdgeRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SagemakerEdgeRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SagemakerEdgeRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SagemakerEdgeRequest::parameters() const
{
    Q_D(const SagemakerEdgeRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SagemakerEdgeRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SagemakerEdgeRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SagemakerEdgeRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SagemakerEdgeRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SagemakerEdge request using the given
 * \a endpoint.
 *
 * This SagemakerEdge implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SagemakerEdgeRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SagemakerEdgeRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SagemakerEdge::SagemakerEdgeRequestPrivate
 * \brief The SagemakerEdgeRequestPrivate class provides private implementation for SagemakerEdgeRequest.
 * \internal
 *
 * \inmodule QtAwsSagemakerEdge
 */

/*!
 * Constructs a SagemakerEdgeRequestPrivate object for SagemakerEdge \a action,
 * with public implementation \a q.
 */
SagemakerEdgeRequestPrivate::SagemakerEdgeRequestPrivate(const SagemakerEdgeRequest::Action action, SagemakerEdgeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-09-23"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SagemakerEdgeRequest class's copy constructor.
 */
SagemakerEdgeRequestPrivate::SagemakerEdgeRequestPrivate(const SagemakerEdgeRequestPrivate &other,
                                     SagemakerEdgeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SagemakerEdgeRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SagemakerEdge service's Action
 * query parameters.
 */
QString SagemakerEdgeRequestPrivate::toString(const SagemakerEdgeRequest::Action &action)
{
    #define ActionToString(action) \
        case SagemakerEdgeRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(GetDeployments);
        ActionToString(GetDeviceRegistration);
        ActionToString(SendHeartbeat);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SagemakerEdge
} // namespace QtAws
