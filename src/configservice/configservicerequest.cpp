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

#include "configservicerequest.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::ConfigServiceRequest
 * \brief The ConfigServiceRequest class provides an interface for ConfigService requests.
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * \enum ConfigServiceRequest::Action
 *
 * This enum describes the actions that can be performed as ConfigService
 * requests.
 *
 * \value BatchGetAggregateResourceConfigAction ConfigService BatchGetAggregateResourceConfig action.
 * \value BatchGetResourceConfigAction ConfigService BatchGetResourceConfig action.
 * \value DeleteAggregationAuthorizationAction ConfigService DeleteAggregationAuthorization action.
 * \value DeleteConfigRuleAction ConfigService DeleteConfigRule action.
 * \value DeleteConfigurationAggregatorAction ConfigService DeleteConfigurationAggregator action.
 * \value DeleteConfigurationRecorderAction ConfigService DeleteConfigurationRecorder action.
 * \value DeleteConformancePackAction ConfigService DeleteConformancePack action.
 * \value DeleteDeliveryChannelAction ConfigService DeleteDeliveryChannel action.
 * \value DeleteEvaluationResultsAction ConfigService DeleteEvaluationResults action.
 * \value DeleteOrganizationConfigRuleAction ConfigService DeleteOrganizationConfigRule action.
 * \value DeleteOrganizationConformancePackAction ConfigService DeleteOrganizationConformancePack action.
 * \value DeletePendingAggregationRequestAction ConfigService DeletePendingAggregationRequest action.
 * \value DeleteRemediationConfigurationAction ConfigService DeleteRemediationConfiguration action.
 * \value DeleteRemediationExceptionsAction ConfigService DeleteRemediationExceptions action.
 * \value DeleteResourceConfigAction ConfigService DeleteResourceConfig action.
 * \value DeleteRetentionConfigurationAction ConfigService DeleteRetentionConfiguration action.
 * \value DeleteStoredQueryAction ConfigService DeleteStoredQuery action.
 * \value DeliverConfigSnapshotAction ConfigService DeliverConfigSnapshot action.
 * \value DescribeAggregateComplianceByConfigRulesAction ConfigService DescribeAggregateComplianceByConfigRules action.
 * \value DescribeAggregateComplianceByConformancePacksAction ConfigService DescribeAggregateComplianceByConformancePacks action.
 * \value DescribeAggregationAuthorizationsAction ConfigService DescribeAggregationAuthorizations action.
 * \value DescribeComplianceByConfigRuleAction ConfigService DescribeComplianceByConfigRule action.
 * \value DescribeComplianceByResourceAction ConfigService DescribeComplianceByResource action.
 * \value DescribeConfigRuleEvaluationStatusAction ConfigService DescribeConfigRuleEvaluationStatus action.
 * \value DescribeConfigRulesAction ConfigService DescribeConfigRules action.
 * \value DescribeConfigurationAggregatorSourcesStatusAction ConfigService DescribeConfigurationAggregatorSourcesStatus action.
 * \value DescribeConfigurationAggregatorsAction ConfigService DescribeConfigurationAggregators action.
 * \value DescribeConfigurationRecorderStatusAction ConfigService DescribeConfigurationRecorderStatus action.
 * \value DescribeConfigurationRecordersAction ConfigService DescribeConfigurationRecorders action.
 * \value DescribeConformancePackComplianceAction ConfigService DescribeConformancePackCompliance action.
 * \value DescribeConformancePackStatusAction ConfigService DescribeConformancePackStatus action.
 * \value DescribeConformancePacksAction ConfigService DescribeConformancePacks action.
 * \value DescribeDeliveryChannelStatusAction ConfigService DescribeDeliveryChannelStatus action.
 * \value DescribeDeliveryChannelsAction ConfigService DescribeDeliveryChannels action.
 * \value DescribeOrganizationConfigRuleStatusesAction ConfigService DescribeOrganizationConfigRuleStatuses action.
 * \value DescribeOrganizationConfigRulesAction ConfigService DescribeOrganizationConfigRules action.
 * \value DescribeOrganizationConformancePackStatusesAction ConfigService DescribeOrganizationConformancePackStatuses action.
 * \value DescribeOrganizationConformancePacksAction ConfigService DescribeOrganizationConformancePacks action.
 * \value DescribePendingAggregationRequestsAction ConfigService DescribePendingAggregationRequests action.
 * \value DescribeRemediationConfigurationsAction ConfigService DescribeRemediationConfigurations action.
 * \value DescribeRemediationExceptionsAction ConfigService DescribeRemediationExceptions action.
 * \value DescribeRemediationExecutionStatusAction ConfigService DescribeRemediationExecutionStatus action.
 * \value DescribeRetentionConfigurationsAction ConfigService DescribeRetentionConfigurations action.
 * \value GetAggregateComplianceDetailsByConfigRuleAction ConfigService GetAggregateComplianceDetailsByConfigRule action.
 * \value GetAggregateConfigRuleComplianceSummaryAction ConfigService GetAggregateConfigRuleComplianceSummary action.
 * \value GetAggregateConformancePackComplianceSummaryAction ConfigService GetAggregateConformancePackComplianceSummary action.
 * \value GetAggregateDiscoveredResourceCountsAction ConfigService GetAggregateDiscoveredResourceCounts action.
 * \value GetAggregateResourceConfigAction ConfigService GetAggregateResourceConfig action.
 * \value GetComplianceDetailsByConfigRuleAction ConfigService GetComplianceDetailsByConfigRule action.
 * \value GetComplianceDetailsByResourceAction ConfigService GetComplianceDetailsByResource action.
 * \value GetComplianceSummaryByConfigRuleAction ConfigService GetComplianceSummaryByConfigRule action.
 * \value GetComplianceSummaryByResourceTypeAction ConfigService GetComplianceSummaryByResourceType action.
 * \value GetConformancePackComplianceDetailsAction ConfigService GetConformancePackComplianceDetails action.
 * \value GetConformancePackComplianceSummaryAction ConfigService GetConformancePackComplianceSummary action.
 * \value GetDiscoveredResourceCountsAction ConfigService GetDiscoveredResourceCounts action.
 * \value GetOrganizationConfigRuleDetailedStatusAction ConfigService GetOrganizationConfigRuleDetailedStatus action.
 * \value GetOrganizationConformancePackDetailedStatusAction ConfigService GetOrganizationConformancePackDetailedStatus action.
 * \value GetResourceConfigHistoryAction ConfigService GetResourceConfigHistory action.
 * \value GetStoredQueryAction ConfigService GetStoredQuery action.
 * \value ListAggregateDiscoveredResourcesAction ConfigService ListAggregateDiscoveredResources action.
 * \value ListDiscoveredResourcesAction ConfigService ListDiscoveredResources action.
 * \value ListStoredQueriesAction ConfigService ListStoredQueries action.
 * \value ListTagsForResourceAction ConfigService ListTagsForResource action.
 * \value PutAggregationAuthorizationAction ConfigService PutAggregationAuthorization action.
 * \value PutConfigRuleAction ConfigService PutConfigRule action.
 * \value PutConfigurationAggregatorAction ConfigService PutConfigurationAggregator action.
 * \value PutConfigurationRecorderAction ConfigService PutConfigurationRecorder action.
 * \value PutConformancePackAction ConfigService PutConformancePack action.
 * \value PutDeliveryChannelAction ConfigService PutDeliveryChannel action.
 * \value PutEvaluationsAction ConfigService PutEvaluations action.
 * \value PutExternalEvaluationAction ConfigService PutExternalEvaluation action.
 * \value PutOrganizationConfigRuleAction ConfigService PutOrganizationConfigRule action.
 * \value PutOrganizationConformancePackAction ConfigService PutOrganizationConformancePack action.
 * \value PutRemediationConfigurationsAction ConfigService PutRemediationConfigurations action.
 * \value PutRemediationExceptionsAction ConfigService PutRemediationExceptions action.
 * \value PutResourceConfigAction ConfigService PutResourceConfig action.
 * \value PutRetentionConfigurationAction ConfigService PutRetentionConfiguration action.
 * \value PutStoredQueryAction ConfigService PutStoredQuery action.
 * \value SelectAggregateResourceConfigAction ConfigService SelectAggregateResourceConfig action.
 * \value SelectResourceConfigAction ConfigService SelectResourceConfig action.
 * \value StartConfigRulesEvaluationAction ConfigService StartConfigRulesEvaluation action.
 * \value StartConfigurationRecorderAction ConfigService StartConfigurationRecorder action.
 * \value StartRemediationExecutionAction ConfigService StartRemediationExecution action.
 * \value StopConfigurationRecorderAction ConfigService StopConfigurationRecorder action.
 * \value TagResourceAction ConfigService TagResource action.
 * \value UntagResourceAction ConfigService UntagResource action.
 */

/*!
 * Constructs a ConfigServiceRequest object for ConfigService \a action.
 */
ConfigServiceRequest::ConfigServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ConfigServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ConfigServiceRequest::ConfigServiceRequest(const ConfigServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ConfigServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ConfigServiceRequest object to be equal to \a other.
 */
ConfigServiceRequest& ConfigServiceRequest::operator=(const ConfigServiceRequest &other)
{
    Q_D(ConfigServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ConfigServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConfigServiceRequestPrivate.
 */
ConfigServiceRequest::ConfigServiceRequest(ConfigServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ConfigService action to be performed by this request.
 */
ConfigServiceRequest::Action ConfigServiceRequest::action() const
{
    Q_D(const ConfigServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the ConfigService action to be performed by this request.
 */
QString ConfigServiceRequest::actionString() const
{
    return ConfigServiceRequestPrivate::toString(action());
}

/*!
 * Returns the ConfigService API version implemented by this request.
 */
QString ConfigServiceRequest::apiVersion() const
{
    Q_D(const ConfigServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the ConfigService action to be performed by this request to \a action.
 */
void ConfigServiceRequest::setAction(const Action action)
{
    Q_D(ConfigServiceRequest);
    d->action = action;
}

/*!
 * Sets the ConfigService API version to include in this request to \a version.
 */
void ConfigServiceRequest::setApiVersion(const QString &version)
{
    Q_D(ConfigServiceRequest);
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
bool ConfigServiceRequest::operator==(const ConfigServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ConfigService queue name.
 *
 * @par From ConfigService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ConfigService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ConfigServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ConfigServiceRequest::clearParameter(const QString &name)
{
    Q_D(ConfigServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ConfigServiceRequest::clearParameters()
{
    Q_D(ConfigServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ConfigServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ConfigServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ConfigServiceRequest::parameters() const
{
    Q_D(const ConfigServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ConfigServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ConfigServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ConfigServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ConfigServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ConfigService request using the given
 * \a endpoint.
 *
 * This ConfigService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ConfigServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ConfigServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ConfigService::ConfigServiceRequestPrivate
 * \brief The ConfigServiceRequestPrivate class provides private implementation for ConfigServiceRequest.
 * \internal
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a ConfigServiceRequestPrivate object for ConfigService \a action,
 * with public implementation \a q.
 */
ConfigServiceRequestPrivate::ConfigServiceRequestPrivate(const ConfigServiceRequest::Action action, ConfigServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ConfigServiceRequest class's copy constructor.
 */
ConfigServiceRequestPrivate::ConfigServiceRequestPrivate(const ConfigServiceRequestPrivate &other,
                                     ConfigServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ConfigServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ConfigService service's Action
 * query parameters.
 */
QString ConfigServiceRequestPrivate::toString(const ConfigServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case ConfigServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchGetAggregateResourceConfig);
        ActionToString(BatchGetResourceConfig);
        ActionToString(DeleteAggregationAuthorization);
        ActionToString(DeleteConfigRule);
        ActionToString(DeleteConfigurationAggregator);
        ActionToString(DeleteConfigurationRecorder);
        ActionToString(DeleteConformancePack);
        ActionToString(DeleteDeliveryChannel);
        ActionToString(DeleteEvaluationResults);
        ActionToString(DeleteOrganizationConfigRule);
        ActionToString(DeleteOrganizationConformancePack);
        ActionToString(DeletePendingAggregationRequest);
        ActionToString(DeleteRemediationConfiguration);
        ActionToString(DeleteRemediationExceptions);
        ActionToString(DeleteResourceConfig);
        ActionToString(DeleteRetentionConfiguration);
        ActionToString(DeleteStoredQuery);
        ActionToString(DeliverConfigSnapshot);
        ActionToString(DescribeAggregateComplianceByConfigRules);
        ActionToString(DescribeAggregateComplianceByConformancePacks);
        ActionToString(DescribeAggregationAuthorizations);
        ActionToString(DescribeComplianceByConfigRule);
        ActionToString(DescribeComplianceByResource);
        ActionToString(DescribeConfigRuleEvaluationStatus);
        ActionToString(DescribeConfigRules);
        ActionToString(DescribeConfigurationAggregatorSourcesStatus);
        ActionToString(DescribeConfigurationAggregators);
        ActionToString(DescribeConfigurationRecorderStatus);
        ActionToString(DescribeConfigurationRecorders);
        ActionToString(DescribeConformancePackCompliance);
        ActionToString(DescribeConformancePackStatus);
        ActionToString(DescribeConformancePacks);
        ActionToString(DescribeDeliveryChannelStatus);
        ActionToString(DescribeDeliveryChannels);
        ActionToString(DescribeOrganizationConfigRuleStatuses);
        ActionToString(DescribeOrganizationConfigRules);
        ActionToString(DescribeOrganizationConformancePackStatuses);
        ActionToString(DescribeOrganizationConformancePacks);
        ActionToString(DescribePendingAggregationRequests);
        ActionToString(DescribeRemediationConfigurations);
        ActionToString(DescribeRemediationExceptions);
        ActionToString(DescribeRemediationExecutionStatus);
        ActionToString(DescribeRetentionConfigurations);
        ActionToString(GetAggregateComplianceDetailsByConfigRule);
        ActionToString(GetAggregateConfigRuleComplianceSummary);
        ActionToString(GetAggregateConformancePackComplianceSummary);
        ActionToString(GetAggregateDiscoveredResourceCounts);
        ActionToString(GetAggregateResourceConfig);
        ActionToString(GetComplianceDetailsByConfigRule);
        ActionToString(GetComplianceDetailsByResource);
        ActionToString(GetComplianceSummaryByConfigRule);
        ActionToString(GetComplianceSummaryByResourceType);
        ActionToString(GetConformancePackComplianceDetails);
        ActionToString(GetConformancePackComplianceSummary);
        ActionToString(GetDiscoveredResourceCounts);
        ActionToString(GetOrganizationConfigRuleDetailedStatus);
        ActionToString(GetOrganizationConformancePackDetailedStatus);
        ActionToString(GetResourceConfigHistory);
        ActionToString(GetStoredQuery);
        ActionToString(ListAggregateDiscoveredResources);
        ActionToString(ListDiscoveredResources);
        ActionToString(ListStoredQueries);
        ActionToString(ListTagsForResource);
        ActionToString(PutAggregationAuthorization);
        ActionToString(PutConfigRule);
        ActionToString(PutConfigurationAggregator);
        ActionToString(PutConfigurationRecorder);
        ActionToString(PutConformancePack);
        ActionToString(PutDeliveryChannel);
        ActionToString(PutEvaluations);
        ActionToString(PutExternalEvaluation);
        ActionToString(PutOrganizationConfigRule);
        ActionToString(PutOrganizationConformancePack);
        ActionToString(PutRemediationConfigurations);
        ActionToString(PutRemediationExceptions);
        ActionToString(PutResourceConfig);
        ActionToString(PutRetentionConfiguration);
        ActionToString(PutStoredQuery);
        ActionToString(SelectAggregateResourceConfig);
        ActionToString(SelectResourceConfig);
        ActionToString(StartConfigRulesEvaluation);
        ActionToString(StartConfigurationRecorder);
        ActionToString(StartRemediationExecution);
        ActionToString(StopConfigurationRecorder);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ConfigService
} // namespace QtAws
