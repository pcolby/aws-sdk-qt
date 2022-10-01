// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iotjobsdataplanerequest.h"
#include "iotjobsdataplanerequest_p.h"

namespace QtAws {
namespace IoTJobsDataPlane {

/*!
 * \class QtAws::IoTJobsDataPlane::IoTJobsDataPlaneRequest
 * \brief The IoTJobsDataPlaneRequest class provides an interface for IoTJobsDataPlane requests.
 *
 * \inmodule QtAwsIoTJobsDataPlane
 */

/*!
 * \enum IoTJobsDataPlaneRequest::Action
 *
 * This enum describes the actions that can be performed as IoTJobsDataPlane
 * requests.
 *
 * \value DescribeJobExecutionAction IoTJobsDataPlane DescribeJobExecution action.
 * \value GetPendingJobExecutionsAction IoTJobsDataPlane GetPendingJobExecutions action.
 * \value StartNextPendingJobExecutionAction IoTJobsDataPlane StartNextPendingJobExecution action.
 * \value UpdateJobExecutionAction IoTJobsDataPlane UpdateJobExecution action.
 */

/*!
 * Constructs a IoTJobsDataPlaneRequest object for IoTJobsDataPlane \a action.
 */
IoTJobsDataPlaneRequest::IoTJobsDataPlaneRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IoTJobsDataPlaneRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoTJobsDataPlaneRequest::IoTJobsDataPlaneRequest(const IoTJobsDataPlaneRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IoTJobsDataPlaneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoTJobsDataPlaneRequest object to be equal to \a other.
 */
IoTJobsDataPlaneRequest& IoTJobsDataPlaneRequest::operator=(const IoTJobsDataPlaneRequest &other)
{
    Q_D(IoTJobsDataPlaneRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoTJobsDataPlaneRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTJobsDataPlaneRequestPrivate.
 */
IoTJobsDataPlaneRequest::IoTJobsDataPlaneRequest(IoTJobsDataPlaneRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IoTJobsDataPlane action to be performed by this request.
 */
IoTJobsDataPlaneRequest::Action IoTJobsDataPlaneRequest::action() const
{
    Q_D(const IoTJobsDataPlaneRequest);
    return d->action;
}

/*!
 * Returns the name of the IoTJobsDataPlane action to be performed by this request.
 */
QString IoTJobsDataPlaneRequest::actionString() const
{
    return IoTJobsDataPlaneRequestPrivate::toString(action());
}

/*!
 * Returns the IoTJobsDataPlane API version implemented by this request.
 */
QString IoTJobsDataPlaneRequest::apiVersion() const
{
    Q_D(const IoTJobsDataPlaneRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoTJobsDataPlane action to be performed by this request to \a action.
 */
void IoTJobsDataPlaneRequest::setAction(const Action action)
{
    Q_D(IoTJobsDataPlaneRequest);
    d->action = action;
}

/*!
 * Sets the IoTJobsDataPlane API version to include in this request to \a version.
 */
void IoTJobsDataPlaneRequest::setApiVersion(const QString &version)
{
    Q_D(IoTJobsDataPlaneRequest);
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
bool IoTJobsDataPlaneRequest::operator==(const IoTJobsDataPlaneRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoTJobsDataPlane queue name.
 *
 * @par From IoTJobsDataPlane FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoTJobsDataPlane queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoTJobsDataPlaneRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoTJobsDataPlaneRequest::clearParameter(const QString &name)
{
    Q_D(IoTJobsDataPlaneRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoTJobsDataPlaneRequest::clearParameters()
{
    Q_D(IoTJobsDataPlaneRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoTJobsDataPlaneRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoTJobsDataPlaneRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoTJobsDataPlaneRequest::parameters() const
{
    Q_D(const IoTJobsDataPlaneRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoTJobsDataPlaneRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoTJobsDataPlaneRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoTJobsDataPlaneRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoTJobsDataPlaneRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoTJobsDataPlane request using the given
 * \a endpoint.
 *
 * This IoTJobsDataPlane implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoTJobsDataPlaneRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoTJobsDataPlaneRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoTJobsDataPlane::IoTJobsDataPlaneRequestPrivate
 * \brief The IoTJobsDataPlaneRequestPrivate class provides private implementation for IoTJobsDataPlaneRequest.
 * \internal
 *
 * \inmodule QtAwsIoTJobsDataPlane
 */

/*!
 * Constructs a IoTJobsDataPlaneRequestPrivate object for IoTJobsDataPlane \a action,
 * with public implementation \a q.
 */
IoTJobsDataPlaneRequestPrivate::IoTJobsDataPlaneRequestPrivate(const IoTJobsDataPlaneRequest::Action action, IoTJobsDataPlaneRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-09-29"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoTJobsDataPlaneRequest class's copy constructor.
 */
IoTJobsDataPlaneRequestPrivate::IoTJobsDataPlaneRequestPrivate(const IoTJobsDataPlaneRequestPrivate &other,
                                     IoTJobsDataPlaneRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoTJobsDataPlaneRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoTJobsDataPlane service's Action
 * query parameters.
 */
QString IoTJobsDataPlaneRequestPrivate::toString(const IoTJobsDataPlaneRequest::Action &action)
{
    #define ActionToString(action) \
        case IoTJobsDataPlaneRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DescribeJobExecution);
        ActionToString(GetPendingJobExecutions);
        ActionToString(StartNextPendingJobExecution);
        ActionToString(UpdateJobExecution);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoTJobsDataPlane
} // namespace QtAws
