// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iot1clickdevicesrequest.h"
#include "iot1clickdevicesrequest_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::IoT1ClickDevicesRequest
 * \brief The IoT1ClickDevicesRequest class provides an interface for IoT1ClickDevices requests.
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * \enum IoT1ClickDevicesRequest::Action
 *
 * This enum describes the actions that can be performed as IoT1ClickDevices
 * requests.
 *
 * \value ClaimDevicesByClaimCodeAction IoT1ClickDevices ClaimDevicesByClaimCode action.
 * \value DescribeDeviceAction IoT1ClickDevices DescribeDevice action.
 * \value FinalizeDeviceClaimAction IoT1ClickDevices FinalizeDeviceClaim action.
 * \value GetDeviceMethodsAction IoT1ClickDevices GetDeviceMethods action.
 * \value InitiateDeviceClaimAction IoT1ClickDevices InitiateDeviceClaim action.
 * \value InvokeDeviceMethodAction IoT1ClickDevices InvokeDeviceMethod action.
 * \value ListDeviceEventsAction IoT1ClickDevices ListDeviceEvents action.
 * \value ListDevicesAction IoT1ClickDevices ListDevices action.
 * \value ListTagsForResourceAction IoT1ClickDevices ListTagsForResource action.
 * \value TagResourceAction IoT1ClickDevices TagResource action.
 * \value UnclaimDeviceAction IoT1ClickDevices UnclaimDevice action.
 * \value UntagResourceAction IoT1ClickDevices UntagResource action.
 * \value UpdateDeviceStateAction IoT1ClickDevices UpdateDeviceState action.
 */

/*!
 * Constructs a IoT1ClickDevicesRequest object for IoT1ClickDevices \a action.
 */
IoT1ClickDevicesRequest::IoT1ClickDevicesRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IoT1ClickDevicesRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoT1ClickDevicesRequest::IoT1ClickDevicesRequest(const IoT1ClickDevicesRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IoT1ClickDevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoT1ClickDevicesRequest object to be equal to \a other.
 */
IoT1ClickDevicesRequest& IoT1ClickDevicesRequest::operator=(const IoT1ClickDevicesRequest &other)
{
    Q_D(IoT1ClickDevicesRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoT1ClickDevicesRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoT1ClickDevicesRequestPrivate.
 */
IoT1ClickDevicesRequest::IoT1ClickDevicesRequest(IoT1ClickDevicesRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IoT1ClickDevices action to be performed by this request.
 */
IoT1ClickDevicesRequest::Action IoT1ClickDevicesRequest::action() const
{
    Q_D(const IoT1ClickDevicesRequest);
    return d->action;
}

/*!
 * Returns the name of the IoT1ClickDevices action to be performed by this request.
 */
QString IoT1ClickDevicesRequest::actionString() const
{
    return IoT1ClickDevicesRequestPrivate::toString(action());
}

/*!
 * Returns the IoT1ClickDevices API version implemented by this request.
 */
QString IoT1ClickDevicesRequest::apiVersion() const
{
    Q_D(const IoT1ClickDevicesRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoT1ClickDevices action to be performed by this request to \a action.
 */
void IoT1ClickDevicesRequest::setAction(const Action action)
{
    Q_D(IoT1ClickDevicesRequest);
    d->action = action;
}

/*!
 * Sets the IoT1ClickDevices API version to include in this request to \a version.
 */
void IoT1ClickDevicesRequest::setApiVersion(const QString &version)
{
    Q_D(IoT1ClickDevicesRequest);
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
bool IoT1ClickDevicesRequest::operator==(const IoT1ClickDevicesRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoT1ClickDevices queue name.
 *
 * @par From IoT1ClickDevices FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoT1ClickDevices queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoT1ClickDevicesRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoT1ClickDevicesRequest::clearParameter(const QString &name)
{
    Q_D(IoT1ClickDevicesRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoT1ClickDevicesRequest::clearParameters()
{
    Q_D(IoT1ClickDevicesRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoT1ClickDevicesRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoT1ClickDevicesRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoT1ClickDevicesRequest::parameters() const
{
    Q_D(const IoT1ClickDevicesRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoT1ClickDevicesRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoT1ClickDevicesRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoT1ClickDevicesRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoT1ClickDevicesRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoT1ClickDevices request using the given
 * \a endpoint.
 *
 * This IoT1ClickDevices implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoT1ClickDevicesRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoT1ClickDevicesRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoT1ClickDevices::IoT1ClickDevicesRequestPrivate
 * \brief The IoT1ClickDevicesRequestPrivate class provides private implementation for IoT1ClickDevicesRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a IoT1ClickDevicesRequestPrivate object for IoT1ClickDevices \a action,
 * with public implementation \a q.
 */
IoT1ClickDevicesRequestPrivate::IoT1ClickDevicesRequestPrivate(const IoT1ClickDevicesRequest::Action action, IoT1ClickDevicesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-05-14"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoT1ClickDevicesRequest class's copy constructor.
 */
IoT1ClickDevicesRequestPrivate::IoT1ClickDevicesRequestPrivate(const IoT1ClickDevicesRequestPrivate &other,
                                     IoT1ClickDevicesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoT1ClickDevicesRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoT1ClickDevices service's Action
 * query parameters.
 */
QString IoT1ClickDevicesRequestPrivate::toString(const IoT1ClickDevicesRequest::Action &action)
{
    #define ActionToString(action) \
        case IoT1ClickDevicesRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(ClaimDevicesByClaimCode);
        ActionToString(DescribeDevice);
        ActionToString(FinalizeDeviceClaim);
        ActionToString(GetDeviceMethods);
        ActionToString(InitiateDeviceClaim);
        ActionToString(InvokeDeviceMethod);
        ActionToString(ListDeviceEvents);
        ActionToString(ListDevices);
        ActionToString(ListTagsForResource);
        ActionToString(TagResource);
        ActionToString(UnclaimDevice);
        ActionToString(UntagResource);
        ActionToString(UpdateDeviceState);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoT1ClickDevices
} // namespace QtAws
