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

#include "ssmincidentsrequest.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SSMIncidents {

/*!
 * \class QtAws::SSMIncidents::SSMIncidentsRequest
 * \brief The SSMIncidentsRequest class provides an interface for SSMIncidents requests.
 *
 * \inmodule QtAwsSSMIncidents
 */

/*!
 * \enum SSMIncidentsRequest::Action
 *
 * This enum describes the actions that can be performed as SSMIncidents
 * requests.
 *
 * \value CreateReplicationSetAction SSMIncidents CreateReplicationSet action.
 * \value CreateResponsePlanAction SSMIncidents CreateResponsePlan action.
 * \value CreateTimelineEventAction SSMIncidents CreateTimelineEvent action.
 * \value DeleteIncidentRecordAction SSMIncidents DeleteIncidentRecord action.
 * \value DeleteReplicationSetAction SSMIncidents DeleteReplicationSet action.
 * \value DeleteResourcePolicyAction SSMIncidents DeleteResourcePolicy action.
 * \value DeleteResponsePlanAction SSMIncidents DeleteResponsePlan action.
 * \value DeleteTimelineEventAction SSMIncidents DeleteTimelineEvent action.
 * \value GetIncidentRecordAction SSMIncidents GetIncidentRecord action.
 * \value GetReplicationSetAction SSMIncidents GetReplicationSet action.
 * \value GetResourcePoliciesAction SSMIncidents GetResourcePolicies action.
 * \value GetResponsePlanAction SSMIncidents GetResponsePlan action.
 * \value GetTimelineEventAction SSMIncidents GetTimelineEvent action.
 * \value ListIncidentRecordsAction SSMIncidents ListIncidentRecords action.
 * \value ListRelatedItemsAction SSMIncidents ListRelatedItems action.
 * \value ListReplicationSetsAction SSMIncidents ListReplicationSets action.
 * \value ListResponsePlansAction SSMIncidents ListResponsePlans action.
 * \value ListTagsForResourceAction SSMIncidents ListTagsForResource action.
 * \value ListTimelineEventsAction SSMIncidents ListTimelineEvents action.
 * \value PutResourcePolicyAction SSMIncidents PutResourcePolicy action.
 * \value StartIncidentAction SSMIncidents StartIncident action.
 * \value TagResourceAction SSMIncidents TagResource action.
 * \value UntagResourceAction SSMIncidents UntagResource action.
 * \value UpdateDeletionProtectionAction SSMIncidents UpdateDeletionProtection action.
 * \value UpdateIncidentRecordAction SSMIncidents UpdateIncidentRecord action.
 * \value UpdateRelatedItemsAction SSMIncidents UpdateRelatedItems action.
 * \value UpdateReplicationSetAction SSMIncidents UpdateReplicationSet action.
 * \value UpdateResponsePlanAction SSMIncidents UpdateResponsePlan action.
 * \value UpdateTimelineEventAction SSMIncidents UpdateTimelineEvent action.
 */

/*!
 * Constructs a SSMIncidentsRequest object for SSMIncidents \a action.
 */
SSMIncidentsRequest::SSMIncidentsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SSMIncidentsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SSMIncidentsRequest::SSMIncidentsRequest(const SSMIncidentsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SSMIncidentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SSMIncidentsRequest object to be equal to \a other.
 */
SSMIncidentsRequest& SSMIncidentsRequest::operator=(const SSMIncidentsRequest &other)
{
    Q_D(SSMIncidentsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SSMIncidentsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SSMIncidentsRequestPrivate.
 */
SSMIncidentsRequest::SSMIncidentsRequest(SSMIncidentsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SSMIncidents action to be performed by this request.
 */
SSMIncidentsRequest::Action SSMIncidentsRequest::action() const
{
    Q_D(const SSMIncidentsRequest);
    return d->action;
}

/*!
 * Returns the name of the SSMIncidents action to be performed by this request.
 */
QString SSMIncidentsRequest::actionString() const
{
    return SSMIncidentsRequestPrivate::toString(action());
}

/*!
 * Returns the SSMIncidents API version implemented by this request.
 */
QString SSMIncidentsRequest::apiVersion() const
{
    Q_D(const SSMIncidentsRequest);
    return d->apiVersion;
}

/*!
 * Sets the SSMIncidents action to be performed by this request to \a action.
 */
void SSMIncidentsRequest::setAction(const Action action)
{
    Q_D(SSMIncidentsRequest);
    d->action = action;
}

/*!
 * Sets the SSMIncidents API version to include in this request to \a version.
 */
void SSMIncidentsRequest::setApiVersion(const QString &version)
{
    Q_D(SSMIncidentsRequest);
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
bool SSMIncidentsRequest::operator==(const SSMIncidentsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SSMIncidents queue name.
 *
 * @par From SSMIncidents FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SSMIncidents queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SSMIncidentsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SSMIncidentsRequest::clearParameter(const QString &name)
{
    Q_D(SSMIncidentsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SSMIncidentsRequest::clearParameters()
{
    Q_D(SSMIncidentsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SSMIncidentsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SSMIncidentsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SSMIncidentsRequest::parameters() const
{
    Q_D(const SSMIncidentsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SSMIncidentsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SSMIncidentsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SSMIncidentsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SSMIncidentsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SSMIncidents request using the given
 * \a endpoint.
 *
 * This SSMIncidents implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SSMIncidentsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SSMIncidentsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SSMIncidents::SSMIncidentsRequestPrivate
 * \brief The SSMIncidentsRequestPrivate class provides private implementation for SSMIncidentsRequest.
 * \internal
 *
 * \inmodule QtAwsSSMIncidents
 */

/*!
 * Constructs a SSMIncidentsRequestPrivate object for SSMIncidents \a action,
 * with public implementation \a q.
 */
SSMIncidentsRequestPrivate::SSMIncidentsRequestPrivate(const SSMIncidentsRequest::Action action, SSMIncidentsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SSMIncidentsRequest class's copy constructor.
 */
SSMIncidentsRequestPrivate::SSMIncidentsRequestPrivate(const SSMIncidentsRequestPrivate &other,
                                     SSMIncidentsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SSMIncidentsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SSMIncidents service's Action
 * query parameters.
 */
QString SSMIncidentsRequestPrivate::toString(const SSMIncidentsRequest::Action &action)
{
    #define ActionToString(action) \
        case SSMIncidentsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateReplicationSet);
        ActionToString(CreateResponsePlan);
        ActionToString(CreateTimelineEvent);
        ActionToString(DeleteIncidentRecord);
        ActionToString(DeleteReplicationSet);
        ActionToString(DeleteResourcePolicy);
        ActionToString(DeleteResponsePlan);
        ActionToString(DeleteTimelineEvent);
        ActionToString(GetIncidentRecord);
        ActionToString(GetReplicationSet);
        ActionToString(GetResourcePolicies);
        ActionToString(GetResponsePlan);
        ActionToString(GetTimelineEvent);
        ActionToString(ListIncidentRecords);
        ActionToString(ListRelatedItems);
        ActionToString(ListReplicationSets);
        ActionToString(ListResponsePlans);
        ActionToString(ListTagsForResource);
        ActionToString(ListTimelineEvents);
        ActionToString(PutResourcePolicy);
        ActionToString(StartIncident);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateDeletionProtection);
        ActionToString(UpdateIncidentRecord);
        ActionToString(UpdateRelatedItems);
        ActionToString(UpdateReplicationSet);
        ActionToString(UpdateResponsePlan);
        ActionToString(UpdateTimelineEvent);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SSMIncidents
} // namespace QtAws
