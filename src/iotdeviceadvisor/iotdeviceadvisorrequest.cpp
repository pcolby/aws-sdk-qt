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

#include "iotdeviceadvisorrequest.h"
#include "iotdeviceadvisorrequest_p.h"

namespace QtAws {
namespace IoTDeviceAdvisor {

/*!
 * \class QtAws::IoTDeviceAdvisor::IoTDeviceAdvisorRequest
 * \brief The IoTDeviceAdvisorRequest class provides an interface for IoTDeviceAdvisor requests.
 *
 * \inmodule QtAwsIoTDeviceAdvisor
 */

/*!
 * \enum IoTDeviceAdvisorRequest::Action
 *
 * This enum describes the actions that can be performed as IoTDeviceAdvisor
 * requests.
 *
 * \value CreateSuiteDefinitionAction IoTDeviceAdvisor CreateSuiteDefinition action.
 * \value DeleteSuiteDefinitionAction IoTDeviceAdvisor DeleteSuiteDefinition action.
 * \value GetSuiteDefinitionAction IoTDeviceAdvisor GetSuiteDefinition action.
 * \value GetSuiteRunAction IoTDeviceAdvisor GetSuiteRun action.
 * \value GetSuiteRunReportAction IoTDeviceAdvisor GetSuiteRunReport action.
 * \value ListSuiteDefinitionsAction IoTDeviceAdvisor ListSuiteDefinitions action.
 * \value ListSuiteRunsAction IoTDeviceAdvisor ListSuiteRuns action.
 * \value ListTagsForResourceAction IoTDeviceAdvisor ListTagsForResource action.
 * \value StartSuiteRunAction IoTDeviceAdvisor StartSuiteRun action.
 * \value StopSuiteRunAction IoTDeviceAdvisor StopSuiteRun action.
 * \value TagResourceAction IoTDeviceAdvisor TagResource action.
 * \value UntagResourceAction IoTDeviceAdvisor UntagResource action.
 * \value UpdateSuiteDefinitionAction IoTDeviceAdvisor UpdateSuiteDefinition action.
 */

/*!
 * Constructs a IoTDeviceAdvisorRequest object for IoTDeviceAdvisor \a action.
 */
IoTDeviceAdvisorRequest::IoTDeviceAdvisorRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IoTDeviceAdvisorRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoTDeviceAdvisorRequest::IoTDeviceAdvisorRequest(const IoTDeviceAdvisorRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IoTDeviceAdvisorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoTDeviceAdvisorRequest object to be equal to \a other.
 */
IoTDeviceAdvisorRequest& IoTDeviceAdvisorRequest::operator=(const IoTDeviceAdvisorRequest &other)
{
    Q_D(IoTDeviceAdvisorRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoTDeviceAdvisorRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTDeviceAdvisorRequestPrivate.
 */
IoTDeviceAdvisorRequest::IoTDeviceAdvisorRequest(IoTDeviceAdvisorRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IoTDeviceAdvisor action to be performed by this request.
 */
IoTDeviceAdvisorRequest::Action IoTDeviceAdvisorRequest::action() const
{
    Q_D(const IoTDeviceAdvisorRequest);
    return d->action;
}

/*!
 * Returns the name of the IoTDeviceAdvisor action to be performed by this request.
 */
QString IoTDeviceAdvisorRequest::actionString() const
{
    return IoTDeviceAdvisorRequestPrivate::toString(action());
}

/*!
 * Returns the IoTDeviceAdvisor API version implemented by this request.
 */
QString IoTDeviceAdvisorRequest::apiVersion() const
{
    Q_D(const IoTDeviceAdvisorRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoTDeviceAdvisor action to be performed by this request to \a action.
 */
void IoTDeviceAdvisorRequest::setAction(const Action action)
{
    Q_D(IoTDeviceAdvisorRequest);
    d->action = action;
}

/*!
 * Sets the IoTDeviceAdvisor API version to include in this request to \a version.
 */
void IoTDeviceAdvisorRequest::setApiVersion(const QString &version)
{
    Q_D(IoTDeviceAdvisorRequest);
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
bool IoTDeviceAdvisorRequest::operator==(const IoTDeviceAdvisorRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoTDeviceAdvisor queue name.
 *
 * @par From IoTDeviceAdvisor FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoTDeviceAdvisor queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoTDeviceAdvisorRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoTDeviceAdvisorRequest::clearParameter(const QString &name)
{
    Q_D(IoTDeviceAdvisorRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoTDeviceAdvisorRequest::clearParameters()
{
    Q_D(IoTDeviceAdvisorRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoTDeviceAdvisorRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoTDeviceAdvisorRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoTDeviceAdvisorRequest::parameters() const
{
    Q_D(const IoTDeviceAdvisorRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoTDeviceAdvisorRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoTDeviceAdvisorRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoTDeviceAdvisorRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoTDeviceAdvisorRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoTDeviceAdvisor request using the given
 * \a endpoint.
 *
 * This IoTDeviceAdvisor implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoTDeviceAdvisorRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoTDeviceAdvisorRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoTDeviceAdvisor::IoTDeviceAdvisorRequestPrivate
 * \brief The IoTDeviceAdvisorRequestPrivate class provides private implementation for IoTDeviceAdvisorRequest.
 * \internal
 *
 * \inmodule QtAwsIoTDeviceAdvisor
 */

/*!
 * Constructs a IoTDeviceAdvisorRequestPrivate object for IoTDeviceAdvisor \a action,
 * with public implementation \a q.
 */
IoTDeviceAdvisorRequestPrivate::IoTDeviceAdvisorRequestPrivate(const IoTDeviceAdvisorRequest::Action action, IoTDeviceAdvisorRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoTDeviceAdvisorRequest class's copy constructor.
 */
IoTDeviceAdvisorRequestPrivate::IoTDeviceAdvisorRequestPrivate(const IoTDeviceAdvisorRequestPrivate &other,
                                     IoTDeviceAdvisorRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoTDeviceAdvisorRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoTDeviceAdvisor service's Action
 * query parameters.
 */
QString IoTDeviceAdvisorRequestPrivate::toString(const IoTDeviceAdvisorRequest::Action &action)
{
    #define ActionToString(action) \
        case IoTDeviceAdvisorRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoTDeviceAdvisor
} // namespace QtAws
