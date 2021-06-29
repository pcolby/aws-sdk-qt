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

#include "iotsecuretunnelingrequest.h"
#include "iotsecuretunnelingrequest_p.h"

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::IoTSecureTunnelingRequest
 * \brief The IoTSecureTunnelingRequest class provides an interface for IoTSecureTunneling requests.
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * \enum IoTSecureTunnelingRequest::Action
 *
 * This enum describes the actions that can be performed as IoTSecureTunneling
 * requests.
 *
 * \value CloseTunnelAction IoTSecureTunneling CloseTunnel action.
 * \value DescribeTunnelAction IoTSecureTunneling DescribeTunnel action.
 * \value ListTagsForResourceAction IoTSecureTunneling ListTagsForResource action.
 * \value ListTunnelsAction IoTSecureTunneling ListTunnels action.
 * \value OpenTunnelAction IoTSecureTunneling OpenTunnel action.
 * \value TagResourceAction IoTSecureTunneling TagResource action.
 * \value UntagResourceAction IoTSecureTunneling UntagResource action.
 */

/*!
 * Constructs a IoTSecureTunnelingRequest object for IoTSecureTunneling \a action.
 */
IoTSecureTunnelingRequest::IoTSecureTunnelingRequest(const Action action)
    : d_ptr(new IoTSecureTunnelingRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoTSecureTunnelingRequest::IoTSecureTunnelingRequest(const IoTSecureTunnelingRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new IoTSecureTunnelingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoTSecureTunnelingRequest object to be equal to \a other.
 */
IoTSecureTunnelingRequest& IoTSecureTunnelingRequest::operator=(const IoTSecureTunnelingRequest &other)
{
    Q_D(IoTSecureTunnelingRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoTSecureTunnelingRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTSecureTunnelingRequestPrivate.
 */
IoTSecureTunnelingRequest::IoTSecureTunnelingRequest(IoTSecureTunnelingRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the IoTSecureTunneling action to be performed by this request.
 */
IoTSecureTunnelingRequest::Action IoTSecureTunnelingRequest::action() const
{
    Q_D(const IoTSecureTunnelingRequest);
    return d->action;
}

/*!
 * Returns the name of the IoTSecureTunneling action to be performed by this request.
 */
QString IoTSecureTunnelingRequest::actionString() const
{
    return IoTSecureTunnelingRequestPrivate::toString(action());
}

/*!
 * Returns the IoTSecureTunneling API version implemented by this request.
 */
QString IoTSecureTunnelingRequest::apiVersion() const
{
    Q_D(const IoTSecureTunnelingRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoTSecureTunneling action to be performed by this request to \a action.
 */
void IoTSecureTunnelingRequest::setAction(const Action action)
{
    Q_D(IoTSecureTunnelingRequest);
    d->action = action;
}

/*!
 * Sets the IoTSecureTunneling API version to include in this request to \a version.
 */
void IoTSecureTunnelingRequest::setApiVersion(const QString &version)
{
    Q_D(IoTSecureTunnelingRequest);
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
bool IoTSecureTunnelingRequest::operator==(const IoTSecureTunnelingRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoTSecureTunneling queue name.
 *
 * @par From IoTSecureTunneling FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoTSecureTunneling queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoTSecureTunnelingRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoTSecureTunnelingRequest::clearParameter(const QString &name)
{
    Q_D(IoTSecureTunnelingRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoTSecureTunnelingRequest::clearParameters()
{
    Q_D(IoTSecureTunnelingRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoTSecureTunnelingRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoTSecureTunnelingRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoTSecureTunnelingRequest::parameters() const
{
    Q_D(const IoTSecureTunnelingRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoTSecureTunnelingRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoTSecureTunnelingRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoTSecureTunnelingRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoTSecureTunnelingRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoTSecureTunneling request using the given
 * \a endpoint.
 *
 * This IoTSecureTunneling implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoTSecureTunnelingRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoTSecureTunnelingRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoTSecureTunneling::IoTSecureTunnelingRequestPrivate
 * \brief The IoTSecureTunnelingRequestPrivate class provides private implementation for IoTSecureTunnelingRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a IoTSecureTunnelingRequestPrivate object for IoTSecureTunneling \a action,
 * with public implementation \a q.
 */
IoTSecureTunnelingRequestPrivate::IoTSecureTunnelingRequestPrivate(const IoTSecureTunnelingRequest::Action action, IoTSecureTunnelingRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoTSecureTunnelingRequest class's copy constructor.
 */
IoTSecureTunnelingRequestPrivate::IoTSecureTunnelingRequestPrivate(const IoTSecureTunnelingRequestPrivate &other,
                                     IoTSecureTunnelingRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoTSecureTunnelingRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoTSecureTunneling service's Action
 * query parameters.
 */
QString IoTSecureTunnelingRequestPrivate::toString(const IoTSecureTunnelingRequest::Action &action)
{
    #define ActionToString(action) \
        case IoTSecureTunnelingRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CloseTunnel);
        ActionToString(DescribeTunnel);
        ActionToString(ListTagsForResource);
        ActionToString(ListTunnels);
        ActionToString(OpenTunnel);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoTSecureTunneling
} // namespace QtAws
