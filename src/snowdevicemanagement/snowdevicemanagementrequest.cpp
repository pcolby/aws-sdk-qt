// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "snowdevicemanagementrequest.h"
#include "snowdevicemanagementrequest_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::SnowDeviceManagementRequest
 * \brief The SnowDeviceManagementRequest class provides an interface for SnowDeviceManagement requests.
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * \enum SnowDeviceManagementRequest::Action
 *
 * This enum describes the actions that can be performed as SnowDeviceManagement
 * requests.
 *
 * \value CancelTaskAction SnowDeviceManagement CancelTask action.
 * \value CreateTaskAction SnowDeviceManagement CreateTask action.
 * \value DescribeDeviceAction SnowDeviceManagement DescribeDevice action.
 * \value DescribeDeviceEc2InstancesAction SnowDeviceManagement DescribeDeviceEc2Instances action.
 * \value DescribeExecutionAction SnowDeviceManagement DescribeExecution action.
 * \value DescribeTaskAction SnowDeviceManagement DescribeTask action.
 * \value ListDeviceResourcesAction SnowDeviceManagement ListDeviceResources action.
 * \value ListDevicesAction SnowDeviceManagement ListDevices action.
 * \value ListExecutionsAction SnowDeviceManagement ListExecutions action.
 * \value ListTagsForResourceAction SnowDeviceManagement ListTagsForResource action.
 * \value ListTasksAction SnowDeviceManagement ListTasks action.
 * \value TagResourceAction SnowDeviceManagement TagResource action.
 * \value UntagResourceAction SnowDeviceManagement UntagResource action.
 */

/*!
 * Constructs a SnowDeviceManagementRequest object for SnowDeviceManagement \a action.
 */
SnowDeviceManagementRequest::SnowDeviceManagementRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SnowDeviceManagementRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SnowDeviceManagementRequest::SnowDeviceManagementRequest(const SnowDeviceManagementRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SnowDeviceManagementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SnowDeviceManagementRequest object to be equal to \a other.
 */
SnowDeviceManagementRequest& SnowDeviceManagementRequest::operator=(const SnowDeviceManagementRequest &other)
{
    Q_D(SnowDeviceManagementRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SnowDeviceManagementRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SnowDeviceManagementRequestPrivate.
 */
SnowDeviceManagementRequest::SnowDeviceManagementRequest(SnowDeviceManagementRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SnowDeviceManagement action to be performed by this request.
 */
SnowDeviceManagementRequest::Action SnowDeviceManagementRequest::action() const
{
    Q_D(const SnowDeviceManagementRequest);
    return d->action;
}

/*!
 * Returns the name of the SnowDeviceManagement action to be performed by this request.
 */
QString SnowDeviceManagementRequest::actionString() const
{
    return SnowDeviceManagementRequestPrivate::toString(action());
}

/*!
 * Returns the SnowDeviceManagement API version implemented by this request.
 */
QString SnowDeviceManagementRequest::apiVersion() const
{
    Q_D(const SnowDeviceManagementRequest);
    return d->apiVersion;
}

/*!
 * Sets the SnowDeviceManagement action to be performed by this request to \a action.
 */
void SnowDeviceManagementRequest::setAction(const Action action)
{
    Q_D(SnowDeviceManagementRequest);
    d->action = action;
}

/*!
 * Sets the SnowDeviceManagement API version to include in this request to \a version.
 */
void SnowDeviceManagementRequest::setApiVersion(const QString &version)
{
    Q_D(SnowDeviceManagementRequest);
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
bool SnowDeviceManagementRequest::operator==(const SnowDeviceManagementRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SnowDeviceManagement queue name.
 *
 * @par From SnowDeviceManagement FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SnowDeviceManagement queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SnowDeviceManagementRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SnowDeviceManagementRequest::clearParameter(const QString &name)
{
    Q_D(SnowDeviceManagementRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SnowDeviceManagementRequest::clearParameters()
{
    Q_D(SnowDeviceManagementRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SnowDeviceManagementRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SnowDeviceManagementRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SnowDeviceManagementRequest::parameters() const
{
    Q_D(const SnowDeviceManagementRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SnowDeviceManagementRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SnowDeviceManagementRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SnowDeviceManagementRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SnowDeviceManagementRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SnowDeviceManagement request using the given
 * \a endpoint.
 *
 * This SnowDeviceManagement implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SnowDeviceManagementRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SnowDeviceManagementRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SnowDeviceManagement::SnowDeviceManagementRequestPrivate
 * \brief The SnowDeviceManagementRequestPrivate class provides private implementation for SnowDeviceManagementRequest.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a SnowDeviceManagementRequestPrivate object for SnowDeviceManagement \a action,
 * with public implementation \a q.
 */
SnowDeviceManagementRequestPrivate::SnowDeviceManagementRequestPrivate(const SnowDeviceManagementRequest::Action action, SnowDeviceManagementRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-08-04"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SnowDeviceManagementRequest class's copy constructor.
 */
SnowDeviceManagementRequestPrivate::SnowDeviceManagementRequestPrivate(const SnowDeviceManagementRequestPrivate &other,
                                     SnowDeviceManagementRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SnowDeviceManagementRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SnowDeviceManagement service's Action
 * query parameters.
 */
QString SnowDeviceManagementRequestPrivate::toString(const SnowDeviceManagementRequest::Action &action)
{
    #define ActionToString(action) \
        case SnowDeviceManagementRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelTask);
        ActionToString(CreateTask);
        ActionToString(DescribeDevice);
        ActionToString(DescribeDeviceEc2Instances);
        ActionToString(DescribeExecution);
        ActionToString(DescribeTask);
        ActionToString(ListDeviceResources);
        ActionToString(ListDevices);
        ActionToString(ListExecutions);
        ActionToString(ListTagsForResource);
        ActionToString(ListTasks);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SnowDeviceManagement
} // namespace QtAws
