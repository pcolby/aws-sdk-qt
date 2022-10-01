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
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::IotDeviceAdvisorRequest
 * \brief The IotDeviceAdvisorRequest class provides an interface for IotDeviceAdvisor requests.
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * \enum IotDeviceAdvisorRequest::Action
 *
 * This enum describes the actions that can be performed as IotDeviceAdvisor
 * requests.
 *
 * \value CreateSuiteDefinitionAction IotDeviceAdvisor CreateSuiteDefinition action.
 * \value DeleteSuiteDefinitionAction IotDeviceAdvisor DeleteSuiteDefinition action.
 * \value GetEndpointAction IotDeviceAdvisor GetEndpoint action.
 * \value GetSuiteDefinitionAction IotDeviceAdvisor GetSuiteDefinition action.
 * \value GetSuiteRunAction IotDeviceAdvisor GetSuiteRun action.
 * \value GetSuiteRunReportAction IotDeviceAdvisor GetSuiteRunReport action.
 * \value ListSuiteDefinitionsAction IotDeviceAdvisor ListSuiteDefinitions action.
 * \value ListSuiteRunsAction IotDeviceAdvisor ListSuiteRuns action.
 * \value ListTagsForResourceAction IotDeviceAdvisor ListTagsForResource action.
 * \value StartSuiteRunAction IotDeviceAdvisor StartSuiteRun action.
 * \value StopSuiteRunAction IotDeviceAdvisor StopSuiteRun action.
 * \value TagResourceAction IotDeviceAdvisor TagResource action.
 * \value UntagResourceAction IotDeviceAdvisor UntagResource action.
 * \value UpdateSuiteDefinitionAction IotDeviceAdvisor UpdateSuiteDefinition action.
 */

/*!
 * Constructs a IotDeviceAdvisorRequest object for IotDeviceAdvisor \a action.
 */
IotDeviceAdvisorRequest::IotDeviceAdvisorRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IotDeviceAdvisorRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IotDeviceAdvisorRequest::IotDeviceAdvisorRequest(const IotDeviceAdvisorRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IotDeviceAdvisorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IotDeviceAdvisorRequest object to be equal to \a other.
 */
IotDeviceAdvisorRequest& IotDeviceAdvisorRequest::operator=(const IotDeviceAdvisorRequest &other)
{
    Q_D(IotDeviceAdvisorRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IotDeviceAdvisorRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IotDeviceAdvisorRequestPrivate.
 */
IotDeviceAdvisorRequest::IotDeviceAdvisorRequest(IotDeviceAdvisorRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IotDeviceAdvisor action to be performed by this request.
 */
IotDeviceAdvisorRequest::Action IotDeviceAdvisorRequest::action() const
{
    Q_D(const IotDeviceAdvisorRequest);
    return d->action;
}

/*!
 * Returns the name of the IotDeviceAdvisor action to be performed by this request.
 */
QString IotDeviceAdvisorRequest::actionString() const
{
    return IotDeviceAdvisorRequestPrivate::toString(action());
}

/*!
 * Returns the IotDeviceAdvisor API version implemented by this request.
 */
QString IotDeviceAdvisorRequest::apiVersion() const
{
    Q_D(const IotDeviceAdvisorRequest);
    return d->apiVersion;
}

/*!
 * Sets the IotDeviceAdvisor action to be performed by this request to \a action.
 */
void IotDeviceAdvisorRequest::setAction(const Action action)
{
    Q_D(IotDeviceAdvisorRequest);
    d->action = action;
}

/*!
 * Sets the IotDeviceAdvisor API version to include in this request to \a version.
 */
void IotDeviceAdvisorRequest::setApiVersion(const QString &version)
{
    Q_D(IotDeviceAdvisorRequest);
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
bool IotDeviceAdvisorRequest::operator==(const IotDeviceAdvisorRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IotDeviceAdvisor queue name.
 *
 * @par From IotDeviceAdvisor FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IotDeviceAdvisor queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IotDeviceAdvisorRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IotDeviceAdvisorRequest::clearParameter(const QString &name)
{
    Q_D(IotDeviceAdvisorRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IotDeviceAdvisorRequest::clearParameters()
{
    Q_D(IotDeviceAdvisorRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IotDeviceAdvisorRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IotDeviceAdvisorRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IotDeviceAdvisorRequest::parameters() const
{
    Q_D(const IotDeviceAdvisorRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IotDeviceAdvisorRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IotDeviceAdvisorRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IotDeviceAdvisorRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IotDeviceAdvisorRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IotDeviceAdvisor request using the given
 * \a endpoint.
 *
 * This IotDeviceAdvisor implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IotDeviceAdvisorRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IotDeviceAdvisorRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IotDeviceAdvisor::IotDeviceAdvisorRequestPrivate
 * \brief The IotDeviceAdvisorRequestPrivate class provides private implementation for IotDeviceAdvisorRequest.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a IotDeviceAdvisorRequestPrivate object for IotDeviceAdvisor \a action,
 * with public implementation \a q.
 */
IotDeviceAdvisorRequestPrivate::IotDeviceAdvisorRequestPrivate(const IotDeviceAdvisorRequest::Action action, IotDeviceAdvisorRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-09-18"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IotDeviceAdvisorRequest class's copy constructor.
 */
IotDeviceAdvisorRequestPrivate::IotDeviceAdvisorRequestPrivate(const IotDeviceAdvisorRequestPrivate &other,
                                     IotDeviceAdvisorRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IotDeviceAdvisorRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IotDeviceAdvisor service's Action
 * query parameters.
 */
QString IotDeviceAdvisorRequestPrivate::toString(const IotDeviceAdvisorRequest::Action &action)
{
    #define ActionToString(action) \
        case IotDeviceAdvisorRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateSuiteDefinition);
        ActionToString(DeleteSuiteDefinition);
        ActionToString(GetEndpoint);
        ActionToString(GetSuiteDefinition);
        ActionToString(GetSuiteRun);
        ActionToString(GetSuiteRunReport);
        ActionToString(ListSuiteDefinitions);
        ActionToString(ListSuiteRuns);
        ActionToString(ListTagsForResource);
        ActionToString(StartSuiteRun);
        ActionToString(StopSuiteRun);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateSuiteDefinition);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IotDeviceAdvisor
} // namespace QtAws
