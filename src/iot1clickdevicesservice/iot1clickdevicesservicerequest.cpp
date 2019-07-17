/*
    Copyright 2013-2019 Paul Colby

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

#include "iot1clickdevicesservicerequest.h"
#include "iot1clickdevicesservicerequest_p.h"

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::IoT1ClickDevicesServiceRequest
 * \brief The IoT1ClickDevicesServiceRequest class provides an interface for IoT1ClickDevicesService requests.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * \enum IoT1ClickDevicesServiceRequest::Action
 *
 * This enum describes the actions that can be performed as IoT1ClickDevicesService
 * requests.
 *
 * \value ClaimDevicesByClaimCodeAction IoT1ClickDevicesService ClaimDevicesByClaimCode action.
 * \value DescribeDeviceAction IoT1ClickDevicesService DescribeDevice action.
 * \value FinalizeDeviceClaimAction IoT1ClickDevicesService FinalizeDeviceClaim action.
 * \value GetDeviceMethodsAction IoT1ClickDevicesService GetDeviceMethods action.
 * \value InitiateDeviceClaimAction IoT1ClickDevicesService InitiateDeviceClaim action.
 * \value InvokeDeviceMethodAction IoT1ClickDevicesService InvokeDeviceMethod action.
 * \value ListDeviceEventsAction IoT1ClickDevicesService ListDeviceEvents action.
 * \value ListDevicesAction IoT1ClickDevicesService ListDevices action.
 * \value UnclaimDeviceAction IoT1ClickDevicesService UnclaimDevice action.
 * \value UpdateDeviceStateAction IoT1ClickDevicesService UpdateDeviceState action.
 */

/*!
 * Constructs a IoT1ClickDevicesServiceRequest object for IoT1ClickDevicesService \a action.
 */
IoT1ClickDevicesServiceRequest::IoT1ClickDevicesServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IoT1ClickDevicesServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoT1ClickDevicesServiceRequest::IoT1ClickDevicesServiceRequest(const IoT1ClickDevicesServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IoT1ClickDevicesServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoT1ClickDevicesServiceRequest object to be equal to \a other.
 */
IoT1ClickDevicesServiceRequest& IoT1ClickDevicesServiceRequest::operator=(const IoT1ClickDevicesServiceRequest &other)
{
    Q_D(IoT1ClickDevicesServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoT1ClickDevicesServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoT1ClickDevicesServiceRequestPrivate.
 */
IoT1ClickDevicesServiceRequest::IoT1ClickDevicesServiceRequest(IoT1ClickDevicesServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IoT1ClickDevicesService action to be performed by this request.
 */
IoT1ClickDevicesServiceRequest::Action IoT1ClickDevicesServiceRequest::action() const
{
    Q_D(const IoT1ClickDevicesServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the IoT1ClickDevicesService action to be performed by this request.
 */
QString IoT1ClickDevicesServiceRequest::actionString() const
{
    return IoT1ClickDevicesServiceRequestPrivate::toString(action());
}

/*!
 * Returns the IoT1ClickDevicesService API version implemented by this request.
 */
QString IoT1ClickDevicesServiceRequest::apiVersion() const
{
    Q_D(const IoT1ClickDevicesServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoT1ClickDevicesService action to be performed by this request to \a action.
 */
void IoT1ClickDevicesServiceRequest::setAction(const Action action)
{
    Q_D(IoT1ClickDevicesServiceRequest);
    d->action = action;
}

/*!
 * Sets the IoT1ClickDevicesService API version to include in this request to \a version.
 */
void IoT1ClickDevicesServiceRequest::setApiVersion(const QString &version)
{
    Q_D(IoT1ClickDevicesServiceRequest);
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
bool IoT1ClickDevicesServiceRequest::operator==(const IoT1ClickDevicesServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoT1ClickDevicesService queue name.
 *
 * @par From IoT1ClickDevicesService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoT1ClickDevicesService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoT1ClickDevicesServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoT1ClickDevicesServiceRequest::clearParameter(const QString &name)
{
    Q_D(IoT1ClickDevicesServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoT1ClickDevicesServiceRequest::clearParameters()
{
    Q_D(IoT1ClickDevicesServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoT1ClickDevicesServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoT1ClickDevicesServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoT1ClickDevicesServiceRequest::parameters() const
{
    Q_D(const IoT1ClickDevicesServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoT1ClickDevicesServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoT1ClickDevicesServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoT1ClickDevicesServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoT1ClickDevicesServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoT1ClickDevicesService request using the given
 * \a endpoint.
 *
 * This IoT1ClickDevicesService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoT1ClickDevicesServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoT1ClickDevicesServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoT1ClickDevicesService::IoT1ClickDevicesServiceRequestPrivate
 * \brief The IoT1ClickDevicesServiceRequestPrivate class provides private implementation for IoT1ClickDevicesServiceRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a IoT1ClickDevicesServiceRequestPrivate object for IoT1ClickDevicesService \a action,
 * with public implementation \a q.
 */
IoT1ClickDevicesServiceRequestPrivate::IoT1ClickDevicesServiceRequestPrivate(const IoT1ClickDevicesServiceRequest::Action action, IoT1ClickDevicesServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoT1ClickDevicesServiceRequest class's copy constructor.
 */
IoT1ClickDevicesServiceRequestPrivate::IoT1ClickDevicesServiceRequestPrivate(const IoT1ClickDevicesServiceRequestPrivate &other,
                                     IoT1ClickDevicesServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoT1ClickDevicesServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoT1ClickDevicesService service's Action
 * query parameters.
 */
QString IoT1ClickDevicesServiceRequestPrivate::toString(const IoT1ClickDevicesServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case IoT1ClickDevicesServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
