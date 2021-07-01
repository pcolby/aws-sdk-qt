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

#include "appflowrequest.h"
#include "appflowrequest_p.h"

namespace QtAws {
namespace Appflow {

/*!
 * \class QtAws::Appflow::AppflowRequest
 * \brief The AppflowRequest class provides an interface for Appflow requests.
 *
 * \inmodule QtAwsAppflow
 */

/*!
 * \enum AppflowRequest::Action
 *
 * This enum describes the actions that can be performed as Appflow
 * requests.
 *
 * \value CreateConnectorProfileAction Appflow CreateConnectorProfile action.
 * \value CreateFlowAction Appflow CreateFlow action.
 * \value DeleteConnectorProfileAction Appflow DeleteConnectorProfile action.
 * \value DeleteFlowAction Appflow DeleteFlow action.
 * \value DescribeConnectorEntityAction Appflow DescribeConnectorEntity action.
 * \value DescribeConnectorProfilesAction Appflow DescribeConnectorProfiles action.
 * \value DescribeConnectorsAction Appflow DescribeConnectors action.
 * \value DescribeFlowAction Appflow DescribeFlow action.
 * \value DescribeFlowExecutionRecordsAction Appflow DescribeFlowExecutionRecords action.
 * \value ListConnectorEntitiesAction Appflow ListConnectorEntities action.
 * \value ListFlowsAction Appflow ListFlows action.
 * \value ListTagsForResourceAction Appflow ListTagsForResource action.
 * \value StartFlowAction Appflow StartFlow action.
 * \value StopFlowAction Appflow StopFlow action.
 * \value TagResourceAction Appflow TagResource action.
 * \value UntagResourceAction Appflow UntagResource action.
 * \value UpdateConnectorProfileAction Appflow UpdateConnectorProfile action.
 * \value UpdateFlowAction Appflow UpdateFlow action.
 */

/*!
 * Constructs a AppflowRequest object for Appflow \a action.
 */
AppflowRequest::AppflowRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AppflowRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AppflowRequest::AppflowRequest(const AppflowRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AppflowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AppflowRequest object to be equal to \a other.
 */
AppflowRequest& AppflowRequest::operator=(const AppflowRequest &other)
{
    Q_D(AppflowRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AppflowRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppflowRequestPrivate.
 */
AppflowRequest::AppflowRequest(AppflowRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Appflow action to be performed by this request.
 */
AppflowRequest::Action AppflowRequest::action() const
{
    Q_D(const AppflowRequest);
    return d->action;
}

/*!
 * Returns the name of the Appflow action to be performed by this request.
 */
QString AppflowRequest::actionString() const
{
    return AppflowRequestPrivate::toString(action());
}

/*!
 * Returns the Appflow API version implemented by this request.
 */
QString AppflowRequest::apiVersion() const
{
    Q_D(const AppflowRequest);
    return d->apiVersion;
}

/*!
 * Sets the Appflow action to be performed by this request to \a action.
 */
void AppflowRequest::setAction(const Action action)
{
    Q_D(AppflowRequest);
    d->action = action;
}

/*!
 * Sets the Appflow API version to include in this request to \a version.
 */
void AppflowRequest::setApiVersion(const QString &version)
{
    Q_D(AppflowRequest);
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
bool AppflowRequest::operator==(const AppflowRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Appflow queue name.
 *
 * @par From Appflow FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Appflow queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AppflowRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AppflowRequest::clearParameter(const QString &name)
{
    Q_D(AppflowRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AppflowRequest::clearParameters()
{
    Q_D(AppflowRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AppflowRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AppflowRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AppflowRequest::parameters() const
{
    Q_D(const AppflowRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AppflowRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AppflowRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AppflowRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AppflowRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Appflow request using the given
 * \a endpoint.
 *
 * This Appflow implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AppflowRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AppflowRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Appflow::AppflowRequestPrivate
 * \brief The AppflowRequestPrivate class provides private implementation for AppflowRequest.
 * \internal
 *
 * \inmodule QtAwsAppflow
 */

/*!
 * Constructs a AppflowRequestPrivate object for Appflow \a action,
 * with public implementation \a q.
 */
AppflowRequestPrivate::AppflowRequestPrivate(const AppflowRequest::Action action, AppflowRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AppflowRequest class's copy constructor.
 */
AppflowRequestPrivate::AppflowRequestPrivate(const AppflowRequestPrivate &other,
                                     AppflowRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AppflowRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Appflow service's Action
 * query parameters.
 */
QString AppflowRequestPrivate::toString(const AppflowRequest::Action &action)
{
    #define ActionToString(action) \
        case AppflowRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateConnectorProfile);
        ActionToString(CreateFlow);
        ActionToString(DeleteConnectorProfile);
        ActionToString(DeleteFlow);
        ActionToString(DescribeConnectorEntity);
        ActionToString(DescribeConnectorProfiles);
        ActionToString(DescribeConnectors);
        ActionToString(DescribeFlow);
        ActionToString(DescribeFlowExecutionRecords);
        ActionToString(ListConnectorEntities);
        ActionToString(ListFlows);
        ActionToString(ListTagsForResource);
        ActionToString(StartFlow);
        ActionToString(StopFlow);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateConnectorProfile);
        ActionToString(UpdateFlow);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Appflow
} // namespace QtAws
