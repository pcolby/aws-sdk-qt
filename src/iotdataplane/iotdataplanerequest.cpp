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

#include "iotdataplanerequest.h"
#include "iotdataplanerequest_p.h"

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::IoTDataPlaneRequest
 * \brief The IoTDataPlaneRequest class provides an interface for IoTDataPlane requests.
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * \enum IoTDataPlaneRequest::Action
 *
 * This enum describes the actions that can be performed as IoTDataPlane
 * requests.
 *
 * \value DeleteThingShadowAction IoTDataPlane DeleteThingShadow action.
 * \value GetThingShadowAction IoTDataPlane GetThingShadow action.
 * \value ListNamedShadowsForThingAction IoTDataPlane ListNamedShadowsForThing action.
 * \value PublishAction IoTDataPlane Publish action.
 * \value UpdateThingShadowAction IoTDataPlane UpdateThingShadow action.
 */

/*!
 * Constructs a IoTDataPlaneRequest object for IoTDataPlane \a action.
 */
IoTDataPlaneRequest::IoTDataPlaneRequest(const Action action)
    : d_ptr(new IoTDataPlaneRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoTDataPlaneRequest::IoTDataPlaneRequest(const IoTDataPlaneRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new IoTDataPlaneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoTDataPlaneRequest object to be equal to \a other.
 */
IoTDataPlaneRequest& IoTDataPlaneRequest::operator=(const IoTDataPlaneRequest &other)
{
    Q_D(IoTDataPlaneRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoTDataPlaneRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTDataPlaneRequestPrivate.
 */
IoTDataPlaneRequest::IoTDataPlaneRequest(IoTDataPlaneRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the IoTDataPlane action to be performed by this request.
 */
IoTDataPlaneRequest::Action IoTDataPlaneRequest::action() const
{
    Q_D(const IoTDataPlaneRequest);
    return d->action;
}

/*!
 * Returns the name of the IoTDataPlane action to be performed by this request.
 */
QString IoTDataPlaneRequest::actionString() const
{
    return IoTDataPlaneRequestPrivate::toString(action());
}

/*!
 * Returns the IoTDataPlane API version implemented by this request.
 */
QString IoTDataPlaneRequest::apiVersion() const
{
    Q_D(const IoTDataPlaneRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoTDataPlane action to be performed by this request to \a action.
 */
void IoTDataPlaneRequest::setAction(const Action action)
{
    Q_D(IoTDataPlaneRequest);
    d->action = action;
}

/*!
 * Sets the IoTDataPlane API version to include in this request to \a version.
 */
void IoTDataPlaneRequest::setApiVersion(const QString &version)
{
    Q_D(IoTDataPlaneRequest);
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
bool IoTDataPlaneRequest::operator==(const IoTDataPlaneRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoTDataPlane queue name.
 *
 * @par From IoTDataPlane FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoTDataPlane queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoTDataPlaneRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoTDataPlaneRequest::clearParameter(const QString &name)
{
    Q_D(IoTDataPlaneRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoTDataPlaneRequest::clearParameters()
{
    Q_D(IoTDataPlaneRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoTDataPlaneRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoTDataPlaneRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoTDataPlaneRequest::parameters() const
{
    Q_D(const IoTDataPlaneRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoTDataPlaneRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoTDataPlaneRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoTDataPlaneRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoTDataPlaneRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoTDataPlane request using the given
 * \a endpoint.
 *
 * This IoTDataPlane implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoTDataPlaneRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoTDataPlaneRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoTDataPlane::IoTDataPlaneRequestPrivate
 * \brief The IoTDataPlaneRequestPrivate class provides private implementation for IoTDataPlaneRequest.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a IoTDataPlaneRequestPrivate object for IoTDataPlane \a action,
 * with public implementation \a q.
 */
IoTDataPlaneRequestPrivate::IoTDataPlaneRequestPrivate(const IoTDataPlaneRequest::Action action, IoTDataPlaneRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoTDataPlaneRequest class's copy constructor.
 */
IoTDataPlaneRequestPrivate::IoTDataPlaneRequestPrivate(const IoTDataPlaneRequestPrivate &other,
                                     IoTDataPlaneRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoTDataPlaneRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoTDataPlane service's Action
 * query parameters.
 */
QString IoTDataPlaneRequestPrivate::toString(const IoTDataPlaneRequest::Action &action)
{
    #define ActionToString(action) \
        case IoTDataPlaneRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DeleteThingShadow);
        ActionToString(GetThingShadow);
        ActionToString(ListNamedShadowsForThing);
        ActionToString(Publish);
        ActionToString(UpdateThingShadow);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoTDataPlane
} // namespace QtAws
