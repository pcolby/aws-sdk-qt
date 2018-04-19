/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "emrrequest.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::EMRRequest
 * \brief The EMRRequest class provides an interface for EMR requests.
 *
 * \inmodule QtAwsEMR
 */

/*!
 * \enum EMRRequest::Action
 *
 * This enum describes the actions that can be performed as EMR
 * requests.
 *
 * \value AddInstanceFleetAction EMR AddInstanceFleet action.
 * \value AddInstanceGroupsAction EMR AddInstanceGroups action.
 * \value AddJobFlowStepsAction EMR AddJobFlowSteps action.
 * \value AddTagsAction EMR AddTags action.
 * \value CancelStepsAction EMR CancelSteps action.
 * \value CreateSecurityConfigurationAction EMR CreateSecurityConfiguration action.
 * \value DeleteSecurityConfigurationAction EMR DeleteSecurityConfiguration action.
 * \value DescribeClusterAction EMR DescribeCluster action.
 * \value DescribeJobFlowsAction EMR DescribeJobFlows action.
 * \value DescribeSecurityConfigurationAction EMR DescribeSecurityConfiguration action.
 * \value DescribeStepAction EMR DescribeStep action.
 * \value ListBootstrapActionsAction EMR ListBootstrapActions action.
 * \value ListClustersAction EMR ListClusters action.
 * \value ListInstanceFleetsAction EMR ListInstanceFleets action.
 * \value ListInstanceGroupsAction EMR ListInstanceGroups action.
 * \value ListInstancesAction EMR ListInstances action.
 * \value ListSecurityConfigurationsAction EMR ListSecurityConfigurations action.
 * \value ListStepsAction EMR ListSteps action.
 * \value ModifyInstanceFleetAction EMR ModifyInstanceFleet action.
 * \value ModifyInstanceGroupsAction EMR ModifyInstanceGroups action.
 * \value PutAutoScalingPolicyAction EMR PutAutoScalingPolicy action.
 * \value RemoveAutoScalingPolicyAction EMR RemoveAutoScalingPolicy action.
 * \value RemoveTagsAction EMR RemoveTags action.
 * \value RunJobFlowAction EMR RunJobFlow action.
 * \value SetTerminationProtectionAction EMR SetTerminationProtection action.
 * \value SetVisibleToAllUsersAction EMR SetVisibleToAllUsers action.
 * \value TerminateJobFlowsAction EMR TerminateJobFlows action.
 */

/*!
 * Constructs a[n] EMRRequest object for EMR \a action.
 */
EMRRequest::EMRRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new EMRRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EMRRequest::EMRRequest(const EMRRequest &other)
    : QtAws::Core::AwsAbstractRequest(new EMRRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EMRRequest object to be equal to \a other.
 */
EMRRequest& EMRRequest::operator=(const EMRRequest &other)
{
    Q_D(EMRRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EMRRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EMRRequestPrivate.
 */
EMRRequest::EMRRequest(EMRRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the EMR action to be performed by this request.
 */
EMRRequest::Action EMRRequest::action() const
{
    Q_D(const EMRRequest);
    return d->action;
}

/*!
 * Returns the name of the EMR action to be performed by this request.
 */
QString EMRRequest::actionString() const
{
    return EMRRequestPrivate::toString(action());
}

/*!
 * Returns the EMR API version implemented by this request.
 */
QString EMRRequest::apiVersion() const
{
    Q_D(const EMRRequest);
    return d->apiVersion;
}

/*!
 * Sets the EMR action to be performed by this request to \a action.
 */
void EMRRequest::setAction(const Action action)
{
    Q_D(EMRRequest);
    d->action = action;
}

/*!
 * Sets the EMR API version to include in this request to \a version.
 */
void EMRRequest::setApiVersion(const QString &version)
{
    Q_D(EMRRequest);
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
bool EMRRequest::operator==(const EMRRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid EMR queue name.
 *
 * @par From EMR FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid EMR queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool EMRRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EMRRequest::clearParameter(const QString &name)
{
    Q_D(EMRRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EMRRequest::clearParameters()
{
    Q_D(EMRRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EMRRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EMRRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EMRRequest::parameters() const
{
    Q_D(const EMRRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EMRRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EMRRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EMRRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EMRRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the EMR request using the given
 * \a endpoint.
 *
 * This EMR implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EMRRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const EMRRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::EMR::EMRRequestPrivate
 * \brief The EMRRequestPrivate class provides private implementation for EMRRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a EMRRequestPrivate object for EMR \a action with,
 * public implementation \a q.
 */
EMRRequestPrivate::EMRRequestPrivate(const EMRRequest::Action action, EMRRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EMRRequest class's copy constructor.
 */
EMRRequestPrivate::EMRRequestPrivate(const EMRRequestPrivate &other,
                                     EMRRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EMRRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the EMR service's Action
 * query parameters.
 */
QString EMRRequestPrivate::toString(const EMRRequest::Action &action)
{
    #define ActionToString(action) \
        case EMRRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace EMR
} // namespace QtAws
