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

#include "emrrequest.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::EmrRequest
 * \brief The EmrRequest class provides an interface for EMR requests.
 *
 * \inmodule QtAwsEMR
 */

/*!
 * \enum EmrRequest::Action
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
 * Constructs a EmrRequest object for EMR \a action.
 */
EmrRequest::EmrRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new EmrRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EmrRequest::EmrRequest(const EmrRequest &other)
    : QtAws::Core::AwsAbstractRequest(new EmrRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EmrRequest object to be equal to \a other.
 */
EmrRequest& EmrRequest::operator=(const EmrRequest &other)
{
    Q_D(EmrRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EmrRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EmrRequestPrivate.
 */
EmrRequest::EmrRequest(EmrRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the EMR action to be performed by this request.
 */
EmrRequest::Action EmrRequest::action() const
{
    Q_D(const EmrRequest);
    return d->action;
}

/*!
 * Returns the name of the EMR action to be performed by this request.
 */
QString EmrRequest::actionString() const
{
    return EmrRequestPrivate::toString(action());
}

/*!
 * Returns the EMR API version implemented by this request.
 */
QString EmrRequest::apiVersion() const
{
    Q_D(const EmrRequest);
    return d->apiVersion;
}

/*!
 * Sets the EMR action to be performed by this request to \a action.
 */
void EmrRequest::setAction(const Action action)
{
    Q_D(EmrRequest);
    d->action = action;
}

/*!
 * Sets the EMR API version to include in this request to \a version.
 */
void EmrRequest::setApiVersion(const QString &version)
{
    Q_D(EmrRequest);
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
bool EmrRequest::operator==(const EmrRequest &other) const
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
/*bool EmrRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EmrRequest::clearParameter(const QString &name)
{
    Q_D(EmrRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EmrRequest::clearParameters()
{
    Q_D(EmrRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EmrRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EmrRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EmrRequest::parameters() const
{
    Q_D(const EmrRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EmrRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EmrRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EmrRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EmrRequest);
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
QNetworkRequest EmrRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const EmrRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::EMR::EmrRequestPrivate
 * \brief The EmrRequestPrivate class provides private implementation for EmrRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a EmrRequestPrivate object for EMR \a action,
 * with public implementation \a q.
 */
EmrRequestPrivate::EmrRequestPrivate(const EmrRequest::Action action, EmrRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EmrRequest class's copy constructor.
 */
EmrRequestPrivate::EmrRequestPrivate(const EmrRequestPrivate &other,
                                     EmrRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EmrRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the EMR service's Action
 * query parameters.
 */
QString EmrRequestPrivate::toString(const EmrRequest::Action &action)
{
    #define ActionToString(action) \
        case EmrRequest::action##Action: return QStringLiteral(#action)
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
