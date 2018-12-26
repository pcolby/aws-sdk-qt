/*
    Copyright 2013-2018 Paul Colby

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

#include "mediaconnectrequest.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::MediaConnectRequest
 * \brief The MediaConnectRequest class provides an interface for MediaConnect requests.
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * \enum MediaConnectRequest::Action
 *
 * This enum describes the actions that can be performed as MediaConnect
 * requests.
 *
 * \value AddFlowOutputsAction MediaConnect AddFlowOutputs action.
 * \value CreateFlowAction MediaConnect CreateFlow action.
 * \value DeleteFlowAction MediaConnect DeleteFlow action.
 * \value DescribeFlowAction MediaConnect DescribeFlow action.
 * \value GrantFlowEntitlementsAction MediaConnect GrantFlowEntitlements action.
 * \value ListEntitlementsAction MediaConnect ListEntitlements action.
 * \value ListFlowsAction MediaConnect ListFlows action.
 * \value RemoveFlowOutputAction MediaConnect RemoveFlowOutput action.
 * \value RevokeFlowEntitlementAction MediaConnect RevokeFlowEntitlement action.
 * \value StartFlowAction MediaConnect StartFlow action.
 * \value StopFlowAction MediaConnect StopFlow action.
 * \value UpdateFlowEntitlementAction MediaConnect UpdateFlowEntitlement action.
 * \value UpdateFlowOutputAction MediaConnect UpdateFlowOutput action.
 * \value UpdateFlowSourceAction MediaConnect UpdateFlowSource action.
 */

/*!
 * Constructs a MediaConnectRequest object for MediaConnect \a action.
 */
MediaConnectRequest::MediaConnectRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MediaConnectRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MediaConnectRequest::MediaConnectRequest(const MediaConnectRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MediaConnectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MediaConnectRequest object to be equal to \a other.
 */
MediaConnectRequest& MediaConnectRequest::operator=(const MediaConnectRequest &other)
{
    Q_D(MediaConnectRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MediaConnectRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaConnectRequestPrivate.
 */
MediaConnectRequest::MediaConnectRequest(MediaConnectRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MediaConnect action to be performed by this request.
 */
MediaConnectRequest::Action MediaConnectRequest::action() const
{
    Q_D(const MediaConnectRequest);
    return d->action;
}

/*!
 * Returns the name of the MediaConnect action to be performed by this request.
 */
QString MediaConnectRequest::actionString() const
{
    return MediaConnectRequestPrivate::toString(action());
}

/*!
 * Returns the MediaConnect API version implemented by this request.
 */
QString MediaConnectRequest::apiVersion() const
{
    Q_D(const MediaConnectRequest);
    return d->apiVersion;
}

/*!
 * Sets the MediaConnect action to be performed by this request to \a action.
 */
void MediaConnectRequest::setAction(const Action action)
{
    Q_D(MediaConnectRequest);
    d->action = action;
}

/*!
 * Sets the MediaConnect API version to include in this request to \a version.
 */
void MediaConnectRequest::setApiVersion(const QString &version)
{
    Q_D(MediaConnectRequest);
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
bool MediaConnectRequest::operator==(const MediaConnectRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MediaConnect queue name.
 *
 * @par From MediaConnect FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MediaConnect queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MediaConnectRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MediaConnectRequest::clearParameter(const QString &name)
{
    Q_D(MediaConnectRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MediaConnectRequest::clearParameters()
{
    Q_D(MediaConnectRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MediaConnectRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MediaConnectRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MediaConnectRequest::parameters() const
{
    Q_D(const MediaConnectRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MediaConnectRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MediaConnectRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MediaConnectRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MediaConnectRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MediaConnect request using the given
 * \a endpoint.
 *
 * This MediaConnect implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MediaConnectRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MediaConnectRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MediaConnect::MediaConnectRequestPrivate
 * \brief The MediaConnectRequestPrivate class provides private implementation for MediaConnectRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a MediaConnectRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
MediaConnectRequestPrivate::MediaConnectRequestPrivate(const MediaConnectRequest::Action action, MediaConnectRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MediaConnectRequest class's copy constructor.
 */
MediaConnectRequestPrivate::MediaConnectRequestPrivate(const MediaConnectRequestPrivate &other,
                                     MediaConnectRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MediaConnectRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MediaConnect service's Action
 * query parameters.
 */
QString MediaConnectRequestPrivate::toString(const MediaConnectRequest::Action &action)
{
    #define ActionToString(action) \
        case MediaConnectRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MediaConnect
} // namespace QtAws
