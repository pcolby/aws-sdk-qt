/*
    Copyright 2013-2018 Paul Colby

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

#include "inspectorrequest.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::InspectorRequest
 * \brief The InspectorRequest class provides an interface for Inspector requests.
 *
 * \inmodule QtAwsInspector
 */

/*!
 * \enum InspectorRequest::Action
 *
 * This enum describes the actions that can be performed as Inspector
 * requests.
 *
 * \value AddAttributesToFindingsAction Inspector AddAttributesToFindings action.
 * \value CreateAssessmentTargetAction Inspector CreateAssessmentTarget action.
 * \value CreateAssessmentTemplateAction Inspector CreateAssessmentTemplate action.
 * \value CreateExclusionsPreviewAction Inspector CreateExclusionsPreview action.
 * \value CreateResourceGroupAction Inspector CreateResourceGroup action.
 * \value DeleteAssessmentRunAction Inspector DeleteAssessmentRun action.
 * \value DeleteAssessmentTargetAction Inspector DeleteAssessmentTarget action.
 * \value DeleteAssessmentTemplateAction Inspector DeleteAssessmentTemplate action.
 * \value DescribeAssessmentRunsAction Inspector DescribeAssessmentRuns action.
 * \value DescribeAssessmentTargetsAction Inspector DescribeAssessmentTargets action.
 * \value DescribeAssessmentTemplatesAction Inspector DescribeAssessmentTemplates action.
 * \value DescribeCrossAccountAccessRoleAction Inspector DescribeCrossAccountAccessRole action.
 * \value DescribeExclusionsAction Inspector DescribeExclusions action.
 * \value DescribeFindingsAction Inspector DescribeFindings action.
 * \value DescribeResourceGroupsAction Inspector DescribeResourceGroups action.
 * \value DescribeRulesPackagesAction Inspector DescribeRulesPackages action.
 * \value GetAssessmentReportAction Inspector GetAssessmentReport action.
 * \value GetExclusionsPreviewAction Inspector GetExclusionsPreview action.
 * \value GetTelemetryMetadataAction Inspector GetTelemetryMetadata action.
 * \value ListAssessmentRunAgentsAction Inspector ListAssessmentRunAgents action.
 * \value ListAssessmentRunsAction Inspector ListAssessmentRuns action.
 * \value ListAssessmentTargetsAction Inspector ListAssessmentTargets action.
 * \value ListAssessmentTemplatesAction Inspector ListAssessmentTemplates action.
 * \value ListEventSubscriptionsAction Inspector ListEventSubscriptions action.
 * \value ListExclusionsAction Inspector ListExclusions action.
 * \value ListFindingsAction Inspector ListFindings action.
 * \value ListRulesPackagesAction Inspector ListRulesPackages action.
 * \value ListTagsForResourceAction Inspector ListTagsForResource action.
 * \value PreviewAgentsAction Inspector PreviewAgents action.
 * \value RegisterCrossAccountAccessRoleAction Inspector RegisterCrossAccountAccessRole action.
 * \value RemoveAttributesFromFindingsAction Inspector RemoveAttributesFromFindings action.
 * \value SetTagsForResourceAction Inspector SetTagsForResource action.
 * \value StartAssessmentRunAction Inspector StartAssessmentRun action.
 * \value StopAssessmentRunAction Inspector StopAssessmentRun action.
 * \value SubscribeToEventAction Inspector SubscribeToEvent action.
 * \value UnsubscribeFromEventAction Inspector UnsubscribeFromEvent action.
 * \value UpdateAssessmentTargetAction Inspector UpdateAssessmentTarget action.
 */

/*!
 * Constructs a InspectorRequest object for Inspector \a action.
 */
InspectorRequest::InspectorRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new InspectorRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
InspectorRequest::InspectorRequest(const InspectorRequest &other)
    : QtAws::Core::AwsAbstractRequest(new InspectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the InspectorRequest object to be equal to \a other.
 */
InspectorRequest& InspectorRequest::operator=(const InspectorRequest &other)
{
    Q_D(InspectorRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa InspectorRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from InspectorRequestPrivate.
 */
InspectorRequest::InspectorRequest(InspectorRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Inspector action to be performed by this request.
 */
InspectorRequest::Action InspectorRequest::action() const
{
    Q_D(const InspectorRequest);
    return d->action;
}

/*!
 * Returns the name of the Inspector action to be performed by this request.
 */
QString InspectorRequest::actionString() const
{
    return InspectorRequestPrivate::toString(action());
}

/*!
 * Returns the Inspector API version implemented by this request.
 */
QString InspectorRequest::apiVersion() const
{
    Q_D(const InspectorRequest);
    return d->apiVersion;
}

/*!
 * Sets the Inspector action to be performed by this request to \a action.
 */
void InspectorRequest::setAction(const Action action)
{
    Q_D(InspectorRequest);
    d->action = action;
}

/*!
 * Sets the Inspector API version to include in this request to \a version.
 */
void InspectorRequest::setApiVersion(const QString &version)
{
    Q_D(InspectorRequest);
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
bool InspectorRequest::operator==(const InspectorRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Inspector queue name.
 *
 * @par From Inspector FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Inspector queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool InspectorRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int InspectorRequest::clearParameter(const QString &name)
{
    Q_D(InspectorRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void InspectorRequest::clearParameters()
{
    Q_D(InspectorRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant InspectorRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const InspectorRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &InspectorRequest::parameters() const
{
    Q_D(const InspectorRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void InspectorRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(InspectorRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void InspectorRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(InspectorRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Inspector request using the given
 * \a endpoint.
 *
 * This Inspector implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest InspectorRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const InspectorRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Inspector::InspectorRequestPrivate
 * \brief The InspectorRequestPrivate class provides private implementation for InspectorRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a InspectorRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
InspectorRequestPrivate::InspectorRequestPrivate(const InspectorRequest::Action action, InspectorRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the InspectorRequest class's copy constructor.
 */
InspectorRequestPrivate::InspectorRequestPrivate(const InspectorRequestPrivate &other,
                                     InspectorRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts InspectorRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Inspector service's Action
 * query parameters.
 */
QString InspectorRequestPrivate::toString(const InspectorRequest::Action &action)
{
    #define ActionToString(action) \
        case InspectorRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Inspector
} // namespace QtAws
