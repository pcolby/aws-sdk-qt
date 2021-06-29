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

#include "xrayrequest.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::XRayRequest
 * \brief The XRayRequest class provides an interface for XRay requests.
 *
 * \inmodule QtAwsXRay
 */

/*!
 * \enum XRayRequest::Action
 *
 * This enum describes the actions that can be performed as XRay
 * requests.
 *
 * \value BatchGetTracesAction XRay BatchGetTraces action.
 * \value CreateGroupAction XRay CreateGroup action.
 * \value CreateSamplingRuleAction XRay CreateSamplingRule action.
 * \value DeleteGroupAction XRay DeleteGroup action.
 * \value DeleteSamplingRuleAction XRay DeleteSamplingRule action.
 * \value GetEncryptionConfigAction XRay GetEncryptionConfig action.
 * \value GetGroupAction XRay GetGroup action.
 * \value GetGroupsAction XRay GetGroups action.
 * \value GetInsightAction XRay GetInsight action.
 * \value GetInsightEventsAction XRay GetInsightEvents action.
 * \value GetInsightImpactGraphAction XRay GetInsightImpactGraph action.
 * \value GetInsightSummariesAction XRay GetInsightSummaries action.
 * \value GetSamplingRulesAction XRay GetSamplingRules action.
 * \value GetSamplingStatisticSummariesAction XRay GetSamplingStatisticSummaries action.
 * \value GetSamplingTargetsAction XRay GetSamplingTargets action.
 * \value GetServiceGraphAction XRay GetServiceGraph action.
 * \value GetTimeSeriesServiceStatisticsAction XRay GetTimeSeriesServiceStatistics action.
 * \value GetTraceGraphAction XRay GetTraceGraph action.
 * \value GetTraceSummariesAction XRay GetTraceSummaries action.
 * \value ListTagsForResourceAction XRay ListTagsForResource action.
 * \value PutEncryptionConfigAction XRay PutEncryptionConfig action.
 * \value PutTelemetryRecordsAction XRay PutTelemetryRecords action.
 * \value PutTraceSegmentsAction XRay PutTraceSegments action.
 * \value TagResourceAction XRay TagResource action.
 * \value UntagResourceAction XRay UntagResource action.
 * \value UpdateGroupAction XRay UpdateGroup action.
 * \value UpdateSamplingRuleAction XRay UpdateSamplingRule action.
 */

/*!
 * Constructs a XRayRequest object for XRay \a action.
 */
XRayRequest::XRayRequest(const Action action)
    : d_ptr(new XRayRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
XRayRequest::XRayRequest(const XRayRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new XRayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the XRayRequest object to be equal to \a other.
 */
XRayRequest& XRayRequest::operator=(const XRayRequest &other)
{
    Q_D(XRayRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa XRayRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from XRayRequestPrivate.
 */
XRayRequest::XRayRequest(XRayRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the XRay action to be performed by this request.
 */
XRayRequest::Action XRayRequest::action() const
{
    Q_D(const XRayRequest);
    return d->action;
}

/*!
 * Returns the name of the XRay action to be performed by this request.
 */
QString XRayRequest::actionString() const
{
    return XRayRequestPrivate::toString(action());
}

/*!
 * Returns the XRay API version implemented by this request.
 */
QString XRayRequest::apiVersion() const
{
    Q_D(const XRayRequest);
    return d->apiVersion;
}

/*!
 * Sets the XRay action to be performed by this request to \a action.
 */
void XRayRequest::setAction(const Action action)
{
    Q_D(XRayRequest);
    d->action = action;
}

/*!
 * Sets the XRay API version to include in this request to \a version.
 */
void XRayRequest::setApiVersion(const QString &version)
{
    Q_D(XRayRequest);
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
bool XRayRequest::operator==(const XRayRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid XRay queue name.
 *
 * @par From XRay FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid XRay queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool XRayRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int XRayRequest::clearParameter(const QString &name)
{
    Q_D(XRayRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void XRayRequest::clearParameters()
{
    Q_D(XRayRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant XRayRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const XRayRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &XRayRequest::parameters() const
{
    Q_D(const XRayRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void XRayRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(XRayRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void XRayRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(XRayRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the XRay request using the given
 * \a endpoint.
 *
 * This XRay implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest XRayRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const XRayRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::XRay::XRayRequestPrivate
 * \brief The XRayRequestPrivate class provides private implementation for XRayRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a XRayRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
XRayRequestPrivate::XRayRequestPrivate(const XRayRequest::Action action, XRayRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the XRayRequest class's copy constructor.
 */
XRayRequestPrivate::XRayRequestPrivate(const XRayRequestPrivate &other,
                                     XRayRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts XRayRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the XRay service's Action
 * query parameters.
 */
QString XRayRequestPrivate::toString(const XRayRequest::Action &action)
{
    #define ActionToString(action) \
        case XRayRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchGetTraces);
        ActionToString(CreateGroup);
        ActionToString(CreateSamplingRule);
        ActionToString(DeleteGroup);
        ActionToString(DeleteSamplingRule);
        ActionToString(GetEncryptionConfig);
        ActionToString(GetGroup);
        ActionToString(GetGroups);
        ActionToString(GetInsight);
        ActionToString(GetInsightEvents);
        ActionToString(GetInsightImpactGraph);
        ActionToString(GetInsightSummaries);
        ActionToString(GetSamplingRules);
        ActionToString(GetSamplingStatisticSummaries);
        ActionToString(GetSamplingTargets);
        ActionToString(GetServiceGraph);
        ActionToString(GetTimeSeriesServiceStatistics);
        ActionToString(GetTraceGraph);
        ActionToString(GetTraceSummaries);
        ActionToString(ListTagsForResource);
        ActionToString(PutEncryptionConfig);
        ActionToString(PutTelemetryRecords);
        ActionToString(PutTraceSegments);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateGroup);
        ActionToString(UpdateSamplingRule);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace XRay
} // namespace QtAws
