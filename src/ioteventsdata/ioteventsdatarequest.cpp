/*
    Copyright 2013-2020 Paul Colby

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

#include "ioteventsdatarequest.h"
#include "ioteventsdatarequest_p.h"

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::IoTEventsDataRequest
 * \brief The IoTEventsDataRequest class provides an interface for IoTEventsData requests.
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * \enum IoTEventsDataRequest::Action
 *
 * This enum describes the actions that can be performed as IoTEventsData
 * requests.
 *
 * \value BatchPutMessageAction IoTEventsData BatchPutMessage action.
 * \value BatchUpdateDetectorAction IoTEventsData BatchUpdateDetector action.
 * \value DescribeDetectorAction IoTEventsData DescribeDetector action.
 * \value ListDetectorsAction IoTEventsData ListDetectors action.
 */

/*!
 * Constructs a IoTEventsDataRequest object for IoTEventsData \a action.
 */
IoTEventsDataRequest::IoTEventsDataRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IoTEventsDataRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoTEventsDataRequest::IoTEventsDataRequest(const IoTEventsDataRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IoTEventsDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoTEventsDataRequest object to be equal to \a other.
 */
IoTEventsDataRequest& IoTEventsDataRequest::operator=(const IoTEventsDataRequest &other)
{
    Q_D(IoTEventsDataRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoTEventsDataRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTEventsDataRequestPrivate.
 */
IoTEventsDataRequest::IoTEventsDataRequest(IoTEventsDataRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IoTEventsData action to be performed by this request.
 */
IoTEventsDataRequest::Action IoTEventsDataRequest::action() const
{
    Q_D(const IoTEventsDataRequest);
    return d->action;
}

/*!
 * Returns the name of the IoTEventsData action to be performed by this request.
 */
QString IoTEventsDataRequest::actionString() const
{
    return IoTEventsDataRequestPrivate::toString(action());
}

/*!
 * Returns the IoTEventsData API version implemented by this request.
 */
QString IoTEventsDataRequest::apiVersion() const
{
    Q_D(const IoTEventsDataRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoTEventsData action to be performed by this request to \a action.
 */
void IoTEventsDataRequest::setAction(const Action action)
{
    Q_D(IoTEventsDataRequest);
    d->action = action;
}

/*!
 * Sets the IoTEventsData API version to include in this request to \a version.
 */
void IoTEventsDataRequest::setApiVersion(const QString &version)
{
    Q_D(IoTEventsDataRequest);
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
bool IoTEventsDataRequest::operator==(const IoTEventsDataRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoTEventsData queue name.
 *
 * @par From IoTEventsData FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoTEventsData queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoTEventsDataRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoTEventsDataRequest::clearParameter(const QString &name)
{
    Q_D(IoTEventsDataRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoTEventsDataRequest::clearParameters()
{
    Q_D(IoTEventsDataRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoTEventsDataRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoTEventsDataRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoTEventsDataRequest::parameters() const
{
    Q_D(const IoTEventsDataRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoTEventsDataRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoTEventsDataRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoTEventsDataRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoTEventsDataRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoTEventsData request using the given
 * \a endpoint.
 *
 * This IoTEventsData implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoTEventsDataRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoTEventsDataRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoTEventsData::IoTEventsDataRequestPrivate
 * \brief The IoTEventsDataRequestPrivate class provides private implementation for IoTEventsDataRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a IoTEventsDataRequestPrivate object for IoTEventsData \a action,
 * with public implementation \a q.
 */
IoTEventsDataRequestPrivate::IoTEventsDataRequestPrivate(const IoTEventsDataRequest::Action action, IoTEventsDataRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoTEventsDataRequest class's copy constructor.
 */
IoTEventsDataRequestPrivate::IoTEventsDataRequestPrivate(const IoTEventsDataRequestPrivate &other,
                                     IoTEventsDataRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoTEventsDataRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoTEventsData service's Action
 * query parameters.
 */
QString IoTEventsDataRequestPrivate::toString(const IoTEventsDataRequest::Action &action)
{
    #define ActionToString(action) \
        case IoTEventsDataRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoTEventsData
} // namespace QtAws
