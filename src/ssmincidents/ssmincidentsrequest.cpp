// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ssmincidentsrequest.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::SsmIncidentsRequest
 * \brief The SsmIncidentsRequest class provides an interface for SsmIncidents requests.
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * \enum SsmIncidentsRequest::Action
 *
 * This enum describes the actions that can be performed as SsmIncidents
 * requests.
 *
 * \value CreateReplicationSetAction SsmIncidents CreateReplicationSet action.
 * \value CreateResponsePlanAction SsmIncidents CreateResponsePlan action.
 * \value CreateTimelineEventAction SsmIncidents CreateTimelineEvent action.
 * \value DeleteIncidentRecordAction SsmIncidents DeleteIncidentRecord action.
 * \value DeleteReplicationSetAction SsmIncidents DeleteReplicationSet action.
 * \value DeleteResourcePolicyAction SsmIncidents DeleteResourcePolicy action.
 * \value DeleteResponsePlanAction SsmIncidents DeleteResponsePlan action.
 * \value DeleteTimelineEventAction SsmIncidents DeleteTimelineEvent action.
 * \value GetIncidentRecordAction SsmIncidents GetIncidentRecord action.
 * \value GetReplicationSetAction SsmIncidents GetReplicationSet action.
 * \value GetResourcePoliciesAction SsmIncidents GetResourcePolicies action.
 * \value GetResponsePlanAction SsmIncidents GetResponsePlan action.
 * \value GetTimelineEventAction SsmIncidents GetTimelineEvent action.
 * \value ListIncidentRecordsAction SsmIncidents ListIncidentRecords action.
 * \value ListRelatedItemsAction SsmIncidents ListRelatedItems action.
 * \value ListReplicationSetsAction SsmIncidents ListReplicationSets action.
 * \value ListResponsePlansAction SsmIncidents ListResponsePlans action.
 * \value ListTagsForResourceAction SsmIncidents ListTagsForResource action.
 * \value ListTimelineEventsAction SsmIncidents ListTimelineEvents action.
 * \value PutResourcePolicyAction SsmIncidents PutResourcePolicy action.
 * \value StartIncidentAction SsmIncidents StartIncident action.
 * \value TagResourceAction SsmIncidents TagResource action.
 * \value UntagResourceAction SsmIncidents UntagResource action.
 * \value UpdateDeletionProtectionAction SsmIncidents UpdateDeletionProtection action.
 * \value UpdateIncidentRecordAction SsmIncidents UpdateIncidentRecord action.
 * \value UpdateRelatedItemsAction SsmIncidents UpdateRelatedItems action.
 * \value UpdateReplicationSetAction SsmIncidents UpdateReplicationSet action.
 * \value UpdateResponsePlanAction SsmIncidents UpdateResponsePlan action.
 * \value UpdateTimelineEventAction SsmIncidents UpdateTimelineEvent action.
 */

/*!
 * Constructs a SsmIncidentsRequest object for SsmIncidents \a action.
 */
SsmIncidentsRequest::SsmIncidentsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SsmIncidentsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SsmIncidentsRequest::SsmIncidentsRequest(const SsmIncidentsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SsmIncidentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SsmIncidentsRequest object to be equal to \a other.
 */
SsmIncidentsRequest& SsmIncidentsRequest::operator=(const SsmIncidentsRequest &other)
{
    Q_D(SsmIncidentsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SsmIncidentsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsmIncidentsRequestPrivate.
 */
SsmIncidentsRequest::SsmIncidentsRequest(SsmIncidentsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SsmIncidents action to be performed by this request.
 */
SsmIncidentsRequest::Action SsmIncidentsRequest::action() const
{
    Q_D(const SsmIncidentsRequest);
    return d->action;
}

/*!
 * Returns the name of the SsmIncidents action to be performed by this request.
 */
QString SsmIncidentsRequest::actionString() const
{
    return SsmIncidentsRequestPrivate::toString(action());
}

/*!
 * Returns the SsmIncidents API version implemented by this request.
 */
QString SsmIncidentsRequest::apiVersion() const
{
    Q_D(const SsmIncidentsRequest);
    return d->apiVersion;
}

/*!
 * Sets the SsmIncidents action to be performed by this request to \a action.
 */
void SsmIncidentsRequest::setAction(const Action action)
{
    Q_D(SsmIncidentsRequest);
    d->action = action;
}

/*!
 * Sets the SsmIncidents API version to include in this request to \a version.
 */
void SsmIncidentsRequest::setApiVersion(const QString &version)
{
    Q_D(SsmIncidentsRequest);
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
bool SsmIncidentsRequest::operator==(const SsmIncidentsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SsmIncidents queue name.
 *
 * @par From SsmIncidents FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SsmIncidents queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SsmIncidentsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SsmIncidentsRequest::clearParameter(const QString &name)
{
    Q_D(SsmIncidentsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SsmIncidentsRequest::clearParameters()
{
    Q_D(SsmIncidentsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SsmIncidentsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SsmIncidentsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SsmIncidentsRequest::parameters() const
{
    Q_D(const SsmIncidentsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SsmIncidentsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SsmIncidentsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SsmIncidentsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SsmIncidentsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SsmIncidents request using the given
 * \a endpoint.
 *
 * This SsmIncidents implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SsmIncidentsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SsmIncidentsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SsmIncidents::SsmIncidentsRequestPrivate
 * \brief The SsmIncidentsRequestPrivate class provides private implementation for SsmIncidentsRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a SsmIncidentsRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
SsmIncidentsRequestPrivate::SsmIncidentsRequestPrivate(const SsmIncidentsRequest::Action action, SsmIncidentsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-05-10"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SsmIncidentsRequest class's copy constructor.
 */
SsmIncidentsRequestPrivate::SsmIncidentsRequestPrivate(const SsmIncidentsRequestPrivate &other,
                                     SsmIncidentsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SsmIncidentsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SsmIncidents service's Action
 * query parameters.
 */
QString SsmIncidentsRequestPrivate::toString(const SsmIncidentsRequest::Action &action)
{
    #define ActionToString(action) \
        case SsmIncidentsRequest::action##Action: return QStringLiteral(#action)
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

} // namespace SsmIncidents
} // namespace QtAws
