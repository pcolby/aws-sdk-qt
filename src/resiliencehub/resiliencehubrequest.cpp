// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resiliencehubrequest.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ResilienceHubRequest
 * \brief The ResilienceHubRequest class provides an interface for ResilienceHub requests.
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * \enum ResilienceHubRequest::Action
 *
 * This enum describes the actions that can be performed as ResilienceHub
 * requests.
 *
 * \value AddDraftAppVersionResourceMappingsAction ResilienceHub AddDraftAppVersionResourceMappings action.
 * \value CreateAppAction ResilienceHub CreateApp action.
 * \value CreateRecommendationTemplateAction ResilienceHub CreateRecommendationTemplate action.
 * \value CreateResiliencyPolicyAction ResilienceHub CreateResiliencyPolicy action.
 * \value DeleteAppAction ResilienceHub DeleteApp action.
 * \value DeleteAppAssessmentAction ResilienceHub DeleteAppAssessment action.
 * \value DeleteRecommendationTemplateAction ResilienceHub DeleteRecommendationTemplate action.
 * \value DeleteResiliencyPolicyAction ResilienceHub DeleteResiliencyPolicy action.
 * \value DescribeAppAction ResilienceHub DescribeApp action.
 * \value DescribeAppAssessmentAction ResilienceHub DescribeAppAssessment action.
 * \value DescribeAppVersionResourcesResolutionStatusAction ResilienceHub DescribeAppVersionResourcesResolutionStatus action.
 * \value DescribeAppVersionTemplateAction ResilienceHub DescribeAppVersionTemplate action.
 * \value DescribeDraftAppVersionResourcesImportStatusAction ResilienceHub DescribeDraftAppVersionResourcesImportStatus action.
 * \value DescribeResiliencyPolicyAction ResilienceHub DescribeResiliencyPolicy action.
 * \value ImportResourcesToDraftAppVersionAction ResilienceHub ImportResourcesToDraftAppVersion action.
 * \value ListAlarmRecommendationsAction ResilienceHub ListAlarmRecommendations action.
 * \value ListAppAssessmentsAction ResilienceHub ListAppAssessments action.
 * \value ListAppComponentCompliancesAction ResilienceHub ListAppComponentCompliances action.
 * \value ListAppComponentRecommendationsAction ResilienceHub ListAppComponentRecommendations action.
 * \value ListAppVersionResourceMappingsAction ResilienceHub ListAppVersionResourceMappings action.
 * \value ListAppVersionResourcesAction ResilienceHub ListAppVersionResources action.
 * \value ListAppVersionsAction ResilienceHub ListAppVersions action.
 * \value ListAppsAction ResilienceHub ListApps action.
 * \value ListRecommendationTemplatesAction ResilienceHub ListRecommendationTemplates action.
 * \value ListResiliencyPoliciesAction ResilienceHub ListResiliencyPolicies action.
 * \value ListSopRecommendationsAction ResilienceHub ListSopRecommendations action.
 * \value ListSuggestedResiliencyPoliciesAction ResilienceHub ListSuggestedResiliencyPolicies action.
 * \value ListTagsForResourceAction ResilienceHub ListTagsForResource action.
 * \value ListTestRecommendationsAction ResilienceHub ListTestRecommendations action.
 * \value ListUnsupportedAppVersionResourcesAction ResilienceHub ListUnsupportedAppVersionResources action.
 * \value PublishAppVersionAction ResilienceHub PublishAppVersion action.
 * \value PutDraftAppVersionTemplateAction ResilienceHub PutDraftAppVersionTemplate action.
 * \value RemoveDraftAppVersionResourceMappingsAction ResilienceHub RemoveDraftAppVersionResourceMappings action.
 * \value ResolveAppVersionResourcesAction ResilienceHub ResolveAppVersionResources action.
 * \value StartAppAssessmentAction ResilienceHub StartAppAssessment action.
 * \value TagResourceAction ResilienceHub TagResource action.
 * \value UntagResourceAction ResilienceHub UntagResource action.
 * \value UpdateAppAction ResilienceHub UpdateApp action.
 * \value UpdateResiliencyPolicyAction ResilienceHub UpdateResiliencyPolicy action.
 */

/*!
 * Constructs a ResilienceHubRequest object for ResilienceHub \a action.
 */
ResilienceHubRequest::ResilienceHubRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ResilienceHubRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ResilienceHubRequest::ResilienceHubRequest(const ResilienceHubRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ResilienceHubRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ResilienceHubRequest object to be equal to \a other.
 */
ResilienceHubRequest& ResilienceHubRequest::operator=(const ResilienceHubRequest &other)
{
    Q_D(ResilienceHubRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ResilienceHubRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ResilienceHubRequestPrivate.
 */
ResilienceHubRequest::ResilienceHubRequest(ResilienceHubRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ResilienceHub action to be performed by this request.
 */
ResilienceHubRequest::Action ResilienceHubRequest::action() const
{
    Q_D(const ResilienceHubRequest);
    return d->action;
}

/*!
 * Returns the name of the ResilienceHub action to be performed by this request.
 */
QString ResilienceHubRequest::actionString() const
{
    return ResilienceHubRequestPrivate::toString(action());
}

/*!
 * Returns the ResilienceHub API version implemented by this request.
 */
QString ResilienceHubRequest::apiVersion() const
{
    Q_D(const ResilienceHubRequest);
    return d->apiVersion;
}

/*!
 * Sets the ResilienceHub action to be performed by this request to \a action.
 */
void ResilienceHubRequest::setAction(const Action action)
{
    Q_D(ResilienceHubRequest);
    d->action = action;
}

/*!
 * Sets the ResilienceHub API version to include in this request to \a version.
 */
void ResilienceHubRequest::setApiVersion(const QString &version)
{
    Q_D(ResilienceHubRequest);
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
bool ResilienceHubRequest::operator==(const ResilienceHubRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ResilienceHub queue name.
 *
 * @par From ResilienceHub FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ResilienceHub queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ResilienceHubRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ResilienceHubRequest::clearParameter(const QString &name)
{
    Q_D(ResilienceHubRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ResilienceHubRequest::clearParameters()
{
    Q_D(ResilienceHubRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ResilienceHubRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ResilienceHubRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ResilienceHubRequest::parameters() const
{
    Q_D(const ResilienceHubRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ResilienceHubRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ResilienceHubRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ResilienceHubRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ResilienceHubRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ResilienceHub request using the given
 * \a endpoint.
 *
 * This ResilienceHub implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ResilienceHubRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ResilienceHubRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ResilienceHub::ResilienceHubRequestPrivate
 * \brief The ResilienceHubRequestPrivate class provides private implementation for ResilienceHubRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ResilienceHubRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ResilienceHubRequestPrivate::ResilienceHubRequestPrivate(const ResilienceHubRequest::Action action, ResilienceHubRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-04-30"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ResilienceHubRequest class's copy constructor.
 */
ResilienceHubRequestPrivate::ResilienceHubRequestPrivate(const ResilienceHubRequestPrivate &other,
                                     ResilienceHubRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ResilienceHubRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ResilienceHub service's Action
 * query parameters.
 */
QString ResilienceHubRequestPrivate::toString(const ResilienceHubRequest::Action &action)
{
    #define ActionToString(action) \
        case ResilienceHubRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddDraftAppVersionResourceMappings);
        ActionToString(CreateApp);
        ActionToString(CreateRecommendationTemplate);
        ActionToString(CreateResiliencyPolicy);
        ActionToString(DeleteApp);
        ActionToString(DeleteAppAssessment);
        ActionToString(DeleteRecommendationTemplate);
        ActionToString(DeleteResiliencyPolicy);
        ActionToString(DescribeApp);
        ActionToString(DescribeAppAssessment);
        ActionToString(DescribeAppVersionResourcesResolutionStatus);
        ActionToString(DescribeAppVersionTemplate);
        ActionToString(DescribeDraftAppVersionResourcesImportStatus);
        ActionToString(DescribeResiliencyPolicy);
        ActionToString(ImportResourcesToDraftAppVersion);
        ActionToString(ListAlarmRecommendations);
        ActionToString(ListAppAssessments);
        ActionToString(ListAppComponentCompliances);
        ActionToString(ListAppComponentRecommendations);
        ActionToString(ListAppVersionResourceMappings);
        ActionToString(ListAppVersionResources);
        ActionToString(ListAppVersions);
        ActionToString(ListApps);
        ActionToString(ListRecommendationTemplates);
        ActionToString(ListResiliencyPolicies);
        ActionToString(ListSopRecommendations);
        ActionToString(ListSuggestedResiliencyPolicies);
        ActionToString(ListTagsForResource);
        ActionToString(ListTestRecommendations);
        ActionToString(ListUnsupportedAppVersionResources);
        ActionToString(PublishAppVersion);
        ActionToString(PutDraftAppVersionTemplate);
        ActionToString(RemoveDraftAppVersionResourceMappings);
        ActionToString(ResolveAppVersionResources);
        ActionToString(StartAppAssessment);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateApp);
        ActionToString(UpdateResiliencyPolicy);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ResilienceHub
} // namespace QtAws
