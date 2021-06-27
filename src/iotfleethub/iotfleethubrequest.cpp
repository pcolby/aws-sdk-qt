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

#include "iotfleethubrequest.h"
#include "iotfleethubrequest_p.h"

namespace QtAws {
namespace IoTFleetHub {

/*!
 * \class QtAws::IoTFleetHub::IoTFleetHubRequest
 * \brief The IoTFleetHubRequest class provides an interface for IoTFleetHub requests.
 *
 * \inmodule QtAwsIoTFleetHub
 */

/*!
 * \enum IoTFleetHubRequest::Action
 *
 * This enum describes the actions that can be performed as IoTFleetHub
 * requests.
 *
 * \value CreateApplicationAction IoTFleetHub CreateApplication action.
 * \value DeleteApplicationAction IoTFleetHub DeleteApplication action.
 * \value DescribeApplicationAction IoTFleetHub DescribeApplication action.
 * \value ListApplicationsAction IoTFleetHub ListApplications action.
 * \value ListTagsForResourceAction IoTFleetHub ListTagsForResource action.
 * \value TagResourceAction IoTFleetHub TagResource action.
 * \value UntagResourceAction IoTFleetHub UntagResource action.
 * \value UpdateApplicationAction IoTFleetHub UpdateApplication action.
 */

/*!
 * Constructs a IoTFleetHubRequest object for IoTFleetHub \a action.
 */
IoTFleetHubRequest::IoTFleetHubRequest(const Action action)
    : d_ptr(new IoTFleetHubRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoTFleetHubRequest::IoTFleetHubRequest(const IoTFleetHubRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new IoTFleetHubRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoTFleetHubRequest object to be equal to \a other.
 */
IoTFleetHubRequest& IoTFleetHubRequest::operator=(const IoTFleetHubRequest &other)
{
    Q_D(IoTFleetHubRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoTFleetHubRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTFleetHubRequestPrivate.
 */
IoTFleetHubRequest::IoTFleetHubRequest(IoTFleetHubRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the IoTFleetHub action to be performed by this request.
 */
IoTFleetHubRequest::Action IoTFleetHubRequest::action() const
{
    Q_D(const IoTFleetHubRequest);
    return d->action;
}

/*!
 * Returns the name of the IoTFleetHub action to be performed by this request.
 */
QString IoTFleetHubRequest::actionString() const
{
    return IoTFleetHubRequestPrivate::toString(action());
}

/*!
 * Returns the IoTFleetHub API version implemented by this request.
 */
QString IoTFleetHubRequest::apiVersion() const
{
    Q_D(const IoTFleetHubRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoTFleetHub action to be performed by this request to \a action.
 */
void IoTFleetHubRequest::setAction(const Action action)
{
    Q_D(IoTFleetHubRequest);
    d->action = action;
}

/*!
 * Sets the IoTFleetHub API version to include in this request to \a version.
 */
void IoTFleetHubRequest::setApiVersion(const QString &version)
{
    Q_D(IoTFleetHubRequest);
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
bool IoTFleetHubRequest::operator==(const IoTFleetHubRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoTFleetHub queue name.
 *
 * @par From IoTFleetHub FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoTFleetHub queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoTFleetHubRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoTFleetHubRequest::clearParameter(const QString &name)
{
    Q_D(IoTFleetHubRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoTFleetHubRequest::clearParameters()
{
    Q_D(IoTFleetHubRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoTFleetHubRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoTFleetHubRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoTFleetHubRequest::parameters() const
{
    Q_D(const IoTFleetHubRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoTFleetHubRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoTFleetHubRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoTFleetHubRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoTFleetHubRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoTFleetHub request using the given
 * \a endpoint.
 *
 * This IoTFleetHub implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoTFleetHubRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoTFleetHubRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoTFleetHub::IoTFleetHubRequestPrivate
 * \brief The IoTFleetHubRequestPrivate class provides private implementation for IoTFleetHubRequest.
 * \internal
 *
 * \inmodule QtAwsIoTFleetHub
 */

/*!
 * Constructs a IoTFleetHubRequestPrivate object for IoTFleetHub \a action,
 * with public implementation \a q.
 */
IoTFleetHubRequestPrivate::IoTFleetHubRequestPrivate(const IoTFleetHubRequest::Action action, IoTFleetHubRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoTFleetHubRequest class's copy constructor.
 */
IoTFleetHubRequestPrivate::IoTFleetHubRequestPrivate(const IoTFleetHubRequestPrivate &other,
                                     IoTFleetHubRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoTFleetHubRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoTFleetHub service's Action
 * query parameters.
 */
QString IoTFleetHubRequestPrivate::toString(const IoTFleetHubRequest::Action &action)
{
    #define ActionToString(action) \
        case IoTFleetHubRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoTFleetHub
} // namespace QtAws
