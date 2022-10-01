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

#include "iotrequest.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::IoTRequest
 * \brief The IoTRequest class provides an interface for IoT requests.
 *
 * \inmodule QtAwsIoT
 */

/*!
 * \enum IoTRequest::Action
 *
 * This enum describes the actions that can be performed as IoT
 * requests.
 *
 * \value AcceptCertificateTransferAction IoT AcceptCertificateTransfer action.
 * \value AddThingToBillingGroupAction IoT AddThingToBillingGroup action.
 * \value AddThingToThingGroupAction IoT AddThingToThingGroup action.
 * \value AssociateTargetsWithJobAction IoT AssociateTargetsWithJob action.
 * \value AttachPolicyAction IoT AttachPolicy action.
 * \value AttachPrincipalPolicyAction IoT AttachPrincipalPolicy action.
 * \value AttachSecurityProfileAction IoT AttachSecurityProfile action.
 * \value AttachThingPrincipalAction IoT AttachThingPrincipal action.
 * \value CancelAuditMitigationActionsTaskAction IoT CancelAuditMitigationActionsTask action.
 * \value CancelAuditTaskAction IoT CancelAuditTask action.
 * \value CancelCertificateTransferAction IoT CancelCertificateTransfer action.
 * \value CancelDetectMitigationActionsTaskAction IoT CancelDetectMitigationActionsTask action.
 * \value CancelJobAction IoT CancelJob action.
 * \value CancelJobExecutionAction IoT CancelJobExecution action.
 * \value ClearDefaultAuthorizerAction IoT ClearDefaultAuthorizer action.
 * \value ConfirmTopicRuleDestinationAction IoT ConfirmTopicRuleDestination action.
 * \value CreateAuditSuppressionAction IoT CreateAuditSuppression action.
 * \value CreateAuthorizerAction IoT CreateAuthorizer action.
 * \value CreateBillingGroupAction IoT CreateBillingGroup action.
 * \value CreateCertificateFromCsrAction IoT CreateCertificateFromCsr action.
 * \value CreateCustomMetricAction IoT CreateCustomMetric action.
 * \value CreateDimensionAction IoT CreateDimension action.
 * \value CreateDomainConfigurationAction IoT CreateDomainConfiguration action.
 * \value CreateDynamicThingGroupAction IoT CreateDynamicThingGroup action.
 * \value CreateFleetMetricAction IoT CreateFleetMetric action.
 * \value CreateJobAction IoT CreateJob action.
 * \value CreateJobTemplateAction IoT CreateJobTemplate action.
 * \value CreateKeysAndCertificateAction IoT CreateKeysAndCertificate action.
 * \value CreateMitigationActionAction IoT CreateMitigationAction action.
 * \value CreateOTAUpdateAction IoT CreateOTAUpdate action.
 * \value CreatePolicyAction IoT CreatePolicy action.
 * \value CreatePolicyVersionAction IoT CreatePolicyVersion action.
 * \value CreateProvisioningClaimAction IoT CreateProvisioningClaim action.
 * \value CreateProvisioningTemplateAction IoT CreateProvisioningTemplate action.
 * \value CreateProvisioningTemplateVersionAction IoT CreateProvisioningTemplateVersion action.
 * \value CreateRoleAliasAction IoT CreateRoleAlias action.
 * \value CreateScheduledAuditAction IoT CreateScheduledAudit action.
 * \value CreateSecurityProfileAction IoT CreateSecurityProfile action.
 * \value CreateStreamAction IoT CreateStream action.
 * \value CreateThingAction IoT CreateThing action.
 * \value CreateThingGroupAction IoT CreateThingGroup action.
 * \value CreateThingTypeAction IoT CreateThingType action.
 * \value CreateTopicRuleAction IoT CreateTopicRule action.
 * \value CreateTopicRuleDestinationAction IoT CreateTopicRuleDestination action.
 * \value DeleteAccountAuditConfigurationAction IoT DeleteAccountAuditConfiguration action.
 * \value DeleteAuditSuppressionAction IoT DeleteAuditSuppression action.
 * \value DeleteAuthorizerAction IoT DeleteAuthorizer action.
 * \value DeleteBillingGroupAction IoT DeleteBillingGroup action.
 * \value DeleteCACertificateAction IoT DeleteCACertificate action.
 * \value DeleteCertificateAction IoT DeleteCertificate action.
 * \value DeleteCustomMetricAction IoT DeleteCustomMetric action.
 * \value DeleteDimensionAction IoT DeleteDimension action.
 * \value DeleteDomainConfigurationAction IoT DeleteDomainConfiguration action.
 * \value DeleteDynamicThingGroupAction IoT DeleteDynamicThingGroup action.
 * \value DeleteFleetMetricAction IoT DeleteFleetMetric action.
 * \value DeleteJobAction IoT DeleteJob action.
 * \value DeleteJobExecutionAction IoT DeleteJobExecution action.
 * \value DeleteJobTemplateAction IoT DeleteJobTemplate action.
 * \value DeleteMitigationActionAction IoT DeleteMitigationAction action.
 * \value DeleteOTAUpdateAction IoT DeleteOTAUpdate action.
 * \value DeletePolicyAction IoT DeletePolicy action.
 * \value DeletePolicyVersionAction IoT DeletePolicyVersion action.
 * \value DeleteProvisioningTemplateAction IoT DeleteProvisioningTemplate action.
 * \value DeleteProvisioningTemplateVersionAction IoT DeleteProvisioningTemplateVersion action.
 * \value DeleteRegistrationCodeAction IoT DeleteRegistrationCode action.
 * \value DeleteRoleAliasAction IoT DeleteRoleAlias action.
 * \value DeleteScheduledAuditAction IoT DeleteScheduledAudit action.
 * \value DeleteSecurityProfileAction IoT DeleteSecurityProfile action.
 * \value DeleteStreamAction IoT DeleteStream action.
 * \value DeleteThingAction IoT DeleteThing action.
 * \value DeleteThingGroupAction IoT DeleteThingGroup action.
 * \value DeleteThingTypeAction IoT DeleteThingType action.
 * \value DeleteTopicRuleAction IoT DeleteTopicRule action.
 * \value DeleteTopicRuleDestinationAction IoT DeleteTopicRuleDestination action.
 * \value DeleteV2LoggingLevelAction IoT DeleteV2LoggingLevel action.
 * \value DeprecateThingTypeAction IoT DeprecateThingType action.
 * \value DescribeAccountAuditConfigurationAction IoT DescribeAccountAuditConfiguration action.
 * \value DescribeAuditFindingAction IoT DescribeAuditFinding action.
 * \value DescribeAuditMitigationActionsTaskAction IoT DescribeAuditMitigationActionsTask action.
 * \value DescribeAuditSuppressionAction IoT DescribeAuditSuppression action.
 * \value DescribeAuditTaskAction IoT DescribeAuditTask action.
 * \value DescribeAuthorizerAction IoT DescribeAuthorizer action.
 * \value DescribeBillingGroupAction IoT DescribeBillingGroup action.
 * \value DescribeCACertificateAction IoT DescribeCACertificate action.
 * \value DescribeCertificateAction IoT DescribeCertificate action.
 * \value DescribeCustomMetricAction IoT DescribeCustomMetric action.
 * \value DescribeDefaultAuthorizerAction IoT DescribeDefaultAuthorizer action.
 * \value DescribeDetectMitigationActionsTaskAction IoT DescribeDetectMitigationActionsTask action.
 * \value DescribeDimensionAction IoT DescribeDimension action.
 * \value DescribeDomainConfigurationAction IoT DescribeDomainConfiguration action.
 * \value DescribeEndpointAction IoT DescribeEndpoint action.
 * \value DescribeEventConfigurationsAction IoT DescribeEventConfigurations action.
 * \value DescribeFleetMetricAction IoT DescribeFleetMetric action.
 * \value DescribeIndexAction IoT DescribeIndex action.
 * \value DescribeJobAction IoT DescribeJob action.
 * \value DescribeJobExecutionAction IoT DescribeJobExecution action.
 * \value DescribeJobTemplateAction IoT DescribeJobTemplate action.
 * \value DescribeManagedJobTemplateAction IoT DescribeManagedJobTemplate action.
 * \value DescribeMitigationActionAction IoT DescribeMitigationAction action.
 * \value DescribeProvisioningTemplateAction IoT DescribeProvisioningTemplate action.
 * \value DescribeProvisioningTemplateVersionAction IoT DescribeProvisioningTemplateVersion action.
 * \value DescribeRoleAliasAction IoT DescribeRoleAlias action.
 * \value DescribeScheduledAuditAction IoT DescribeScheduledAudit action.
 * \value DescribeSecurityProfileAction IoT DescribeSecurityProfile action.
 * \value DescribeStreamAction IoT DescribeStream action.
 * \value DescribeThingAction IoT DescribeThing action.
 * \value DescribeThingGroupAction IoT DescribeThingGroup action.
 * \value DescribeThingRegistrationTaskAction IoT DescribeThingRegistrationTask action.
 * \value DescribeThingTypeAction IoT DescribeThingType action.
 * \value DetachPolicyAction IoT DetachPolicy action.
 * \value DetachPrincipalPolicyAction IoT DetachPrincipalPolicy action.
 * \value DetachSecurityProfileAction IoT DetachSecurityProfile action.
 * \value DetachThingPrincipalAction IoT DetachThingPrincipal action.
 * \value DisableTopicRuleAction IoT DisableTopicRule action.
 * \value EnableTopicRuleAction IoT EnableTopicRule action.
 * \value GetBehaviorModelTrainingSummariesAction IoT GetBehaviorModelTrainingSummaries action.
 * \value GetBucketsAggregationAction IoT GetBucketsAggregation action.
 * \value GetCardinalityAction IoT GetCardinality action.
 * \value GetEffectivePoliciesAction IoT GetEffectivePolicies action.
 * \value GetIndexingConfigurationAction IoT GetIndexingConfiguration action.
 * \value GetJobDocumentAction IoT GetJobDocument action.
 * \value GetLoggingOptionsAction IoT GetLoggingOptions action.
 * \value GetOTAUpdateAction IoT GetOTAUpdate action.
 * \value GetPercentilesAction IoT GetPercentiles action.
 * \value GetPolicyAction IoT GetPolicy action.
 * \value GetPolicyVersionAction IoT GetPolicyVersion action.
 * \value GetRegistrationCodeAction IoT GetRegistrationCode action.
 * \value GetStatisticsAction IoT GetStatistics action.
 * \value GetTopicRuleAction IoT GetTopicRule action.
 * \value GetTopicRuleDestinationAction IoT GetTopicRuleDestination action.
 * \value GetV2LoggingOptionsAction IoT GetV2LoggingOptions action.
 * \value ListActiveViolationsAction IoT ListActiveViolations action.
 * \value ListAttachedPoliciesAction IoT ListAttachedPolicies action.
 * \value ListAuditFindingsAction IoT ListAuditFindings action.
 * \value ListAuditMitigationActionsExecutionsAction IoT ListAuditMitigationActionsExecutions action.
 * \value ListAuditMitigationActionsTasksAction IoT ListAuditMitigationActionsTasks action.
 * \value ListAuditSuppressionsAction IoT ListAuditSuppressions action.
 * \value ListAuditTasksAction IoT ListAuditTasks action.
 * \value ListAuthorizersAction IoT ListAuthorizers action.
 * \value ListBillingGroupsAction IoT ListBillingGroups action.
 * \value ListCACertificatesAction IoT ListCACertificates action.
 * \value ListCertificatesAction IoT ListCertificates action.
 * \value ListCertificatesByCAAction IoT ListCertificatesByCA action.
 * \value ListCustomMetricsAction IoT ListCustomMetrics action.
 * \value ListDetectMitigationActionsExecutionsAction IoT ListDetectMitigationActionsExecutions action.
 * \value ListDetectMitigationActionsTasksAction IoT ListDetectMitigationActionsTasks action.
 * \value ListDimensionsAction IoT ListDimensions action.
 * \value ListDomainConfigurationsAction IoT ListDomainConfigurations action.
 * \value ListFleetMetricsAction IoT ListFleetMetrics action.
 * \value ListIndicesAction IoT ListIndices action.
 * \value ListJobExecutionsForJobAction IoT ListJobExecutionsForJob action.
 * \value ListJobExecutionsForThingAction IoT ListJobExecutionsForThing action.
 * \value ListJobTemplatesAction IoT ListJobTemplates action.
 * \value ListJobsAction IoT ListJobs action.
 * \value ListManagedJobTemplatesAction IoT ListManagedJobTemplates action.
 * \value ListMetricValuesAction IoT ListMetricValues action.
 * \value ListMitigationActionsAction IoT ListMitigationActions action.
 * \value ListOTAUpdatesAction IoT ListOTAUpdates action.
 * \value ListOutgoingCertificatesAction IoT ListOutgoingCertificates action.
 * \value ListPoliciesAction IoT ListPolicies action.
 * \value ListPolicyPrincipalsAction IoT ListPolicyPrincipals action.
 * \value ListPolicyVersionsAction IoT ListPolicyVersions action.
 * \value ListPrincipalPoliciesAction IoT ListPrincipalPolicies action.
 * \value ListPrincipalThingsAction IoT ListPrincipalThings action.
 * \value ListProvisioningTemplateVersionsAction IoT ListProvisioningTemplateVersions action.
 * \value ListProvisioningTemplatesAction IoT ListProvisioningTemplates action.
 * \value ListRoleAliasesAction IoT ListRoleAliases action.
 * \value ListScheduledAuditsAction IoT ListScheduledAudits action.
 * \value ListSecurityProfilesAction IoT ListSecurityProfiles action.
 * \value ListSecurityProfilesForTargetAction IoT ListSecurityProfilesForTarget action.
 * \value ListStreamsAction IoT ListStreams action.
 * \value ListTagsForResourceAction IoT ListTagsForResource action.
 * \value ListTargetsForPolicyAction IoT ListTargetsForPolicy action.
 * \value ListTargetsForSecurityProfileAction IoT ListTargetsForSecurityProfile action.
 * \value ListThingGroupsAction IoT ListThingGroups action.
 * \value ListThingGroupsForThingAction IoT ListThingGroupsForThing action.
 * \value ListThingPrincipalsAction IoT ListThingPrincipals action.
 * \value ListThingRegistrationTaskReportsAction IoT ListThingRegistrationTaskReports action.
 * \value ListThingRegistrationTasksAction IoT ListThingRegistrationTasks action.
 * \value ListThingTypesAction IoT ListThingTypes action.
 * \value ListThingsAction IoT ListThings action.
 * \value ListThingsInBillingGroupAction IoT ListThingsInBillingGroup action.
 * \value ListThingsInThingGroupAction IoT ListThingsInThingGroup action.
 * \value ListTopicRuleDestinationsAction IoT ListTopicRuleDestinations action.
 * \value ListTopicRulesAction IoT ListTopicRules action.
 * \value ListV2LoggingLevelsAction IoT ListV2LoggingLevels action.
 * \value ListViolationEventsAction IoT ListViolationEvents action.
 * \value PutVerificationStateOnViolationAction IoT PutVerificationStateOnViolation action.
 * \value RegisterCACertificateAction IoT RegisterCACertificate action.
 * \value RegisterCertificateAction IoT RegisterCertificate action.
 * \value RegisterCertificateWithoutCAAction IoT RegisterCertificateWithoutCA action.
 * \value RegisterThingAction IoT RegisterThing action.
 * \value RejectCertificateTransferAction IoT RejectCertificateTransfer action.
 * \value RemoveThingFromBillingGroupAction IoT RemoveThingFromBillingGroup action.
 * \value RemoveThingFromThingGroupAction IoT RemoveThingFromThingGroup action.
 * \value ReplaceTopicRuleAction IoT ReplaceTopicRule action.
 * \value SearchIndexAction IoT SearchIndex action.
 * \value SetDefaultAuthorizerAction IoT SetDefaultAuthorizer action.
 * \value SetDefaultPolicyVersionAction IoT SetDefaultPolicyVersion action.
 * \value SetLoggingOptionsAction IoT SetLoggingOptions action.
 * \value SetV2LoggingLevelAction IoT SetV2LoggingLevel action.
 * \value SetV2LoggingOptionsAction IoT SetV2LoggingOptions action.
 * \value StartAuditMitigationActionsTaskAction IoT StartAuditMitigationActionsTask action.
 * \value StartDetectMitigationActionsTaskAction IoT StartDetectMitigationActionsTask action.
 * \value StartOnDemandAuditTaskAction IoT StartOnDemandAuditTask action.
 * \value StartThingRegistrationTaskAction IoT StartThingRegistrationTask action.
 * \value StopThingRegistrationTaskAction IoT StopThingRegistrationTask action.
 * \value TagResourceAction IoT TagResource action.
 * \value TestAuthorizationAction IoT TestAuthorization action.
 * \value TestInvokeAuthorizerAction IoT TestInvokeAuthorizer action.
 * \value TransferCertificateAction IoT TransferCertificate action.
 * \value UntagResourceAction IoT UntagResource action.
 * \value UpdateAccountAuditConfigurationAction IoT UpdateAccountAuditConfiguration action.
 * \value UpdateAuditSuppressionAction IoT UpdateAuditSuppression action.
 * \value UpdateAuthorizerAction IoT UpdateAuthorizer action.
 * \value UpdateBillingGroupAction IoT UpdateBillingGroup action.
 * \value UpdateCACertificateAction IoT UpdateCACertificate action.
 * \value UpdateCertificateAction IoT UpdateCertificate action.
 * \value UpdateCustomMetricAction IoT UpdateCustomMetric action.
 * \value UpdateDimensionAction IoT UpdateDimension action.
 * \value UpdateDomainConfigurationAction IoT UpdateDomainConfiguration action.
 * \value UpdateDynamicThingGroupAction IoT UpdateDynamicThingGroup action.
 * \value UpdateEventConfigurationsAction IoT UpdateEventConfigurations action.
 * \value UpdateFleetMetricAction IoT UpdateFleetMetric action.
 * \value UpdateIndexingConfigurationAction IoT UpdateIndexingConfiguration action.
 * \value UpdateJobAction IoT UpdateJob action.
 * \value UpdateMitigationActionAction IoT UpdateMitigationAction action.
 * \value UpdateProvisioningTemplateAction IoT UpdateProvisioningTemplate action.
 * \value UpdateRoleAliasAction IoT UpdateRoleAlias action.
 * \value UpdateScheduledAuditAction IoT UpdateScheduledAudit action.
 * \value UpdateSecurityProfileAction IoT UpdateSecurityProfile action.
 * \value UpdateStreamAction IoT UpdateStream action.
 * \value UpdateThingAction IoT UpdateThing action.
 * \value UpdateThingGroupAction IoT UpdateThingGroup action.
 * \value UpdateThingGroupsForThingAction IoT UpdateThingGroupsForThing action.
 * \value UpdateTopicRuleDestinationAction IoT UpdateTopicRuleDestination action.
 * \value ValidateSecurityProfileBehaviorsAction IoT ValidateSecurityProfileBehaviors action.
 */

/*!
 * Constructs a IoTRequest object for IoT \a action.
 */
IoTRequest::IoTRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IoTRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoTRequest::IoTRequest(const IoTRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IoTRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoTRequest object to be equal to \a other.
 */
IoTRequest& IoTRequest::operator=(const IoTRequest &other)
{
    Q_D(IoTRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoTRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTRequestPrivate.
 */
IoTRequest::IoTRequest(IoTRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IoT action to be performed by this request.
 */
IoTRequest::Action IoTRequest::action() const
{
    Q_D(const IoTRequest);
    return d->action;
}

/*!
 * Returns the name of the IoT action to be performed by this request.
 */
QString IoTRequest::actionString() const
{
    return IoTRequestPrivate::toString(action());
}

/*!
 * Returns the IoT API version implemented by this request.
 */
QString IoTRequest::apiVersion() const
{
    Q_D(const IoTRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoT action to be performed by this request to \a action.
 */
void IoTRequest::setAction(const Action action)
{
    Q_D(IoTRequest);
    d->action = action;
}

/*!
 * Sets the IoT API version to include in this request to \a version.
 */
void IoTRequest::setApiVersion(const QString &version)
{
    Q_D(IoTRequest);
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
bool IoTRequest::operator==(const IoTRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoT queue name.
 *
 * @par From IoT FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoT queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoTRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoTRequest::clearParameter(const QString &name)
{
    Q_D(IoTRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoTRequest::clearParameters()
{
    Q_D(IoTRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoTRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoTRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoTRequest::parameters() const
{
    Q_D(const IoTRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoTRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoTRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoTRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoTRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoT request using the given
 * \a endpoint.
 *
 * This IoT implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoTRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoTRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoT::IoTRequestPrivate
 * \brief The IoTRequestPrivate class provides private implementation for IoTRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a IoTRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
IoTRequestPrivate::IoTRequestPrivate(const IoTRequest::Action action, IoTRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2015-05-28"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoTRequest class's copy constructor.
 */
IoTRequestPrivate::IoTRequestPrivate(const IoTRequestPrivate &other,
                                     IoTRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoTRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoT service's Action
 * query parameters.
 */
QString IoTRequestPrivate::toString(const IoTRequest::Action &action)
{
    #define ActionToString(action) \
        case IoTRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptCertificateTransfer);
        ActionToString(AddThingToBillingGroup);
        ActionToString(AddThingToThingGroup);
        ActionToString(AssociateTargetsWithJob);
        ActionToString(AttachPolicy);
        ActionToString(AttachPrincipalPolicy);
        ActionToString(AttachSecurityProfile);
        ActionToString(AttachThingPrincipal);
        ActionToString(CancelAuditMitigationActionsTask);
        ActionToString(CancelAuditTask);
        ActionToString(CancelCertificateTransfer);
        ActionToString(CancelDetectMitigationActionsTask);
        ActionToString(CancelJob);
        ActionToString(CancelJobExecution);
        ActionToString(ClearDefaultAuthorizer);
        ActionToString(ConfirmTopicRuleDestination);
        ActionToString(CreateAuditSuppression);
        ActionToString(CreateAuthorizer);
        ActionToString(CreateBillingGroup);
        ActionToString(CreateCertificateFromCsr);
        ActionToString(CreateCustomMetric);
        ActionToString(CreateDimension);
        ActionToString(CreateDomainConfiguration);
        ActionToString(CreateDynamicThingGroup);
        ActionToString(CreateFleetMetric);
        ActionToString(CreateJob);
        ActionToString(CreateJobTemplate);
        ActionToString(CreateKeysAndCertificate);
        ActionToString(CreateMitigationAction);
        ActionToString(CreateOTAUpdate);
        ActionToString(CreatePolicy);
        ActionToString(CreatePolicyVersion);
        ActionToString(CreateProvisioningClaim);
        ActionToString(CreateProvisioningTemplate);
        ActionToString(CreateProvisioningTemplateVersion);
        ActionToString(CreateRoleAlias);
        ActionToString(CreateScheduledAudit);
        ActionToString(CreateSecurityProfile);
        ActionToString(CreateStream);
        ActionToString(CreateThing);
        ActionToString(CreateThingGroup);
        ActionToString(CreateThingType);
        ActionToString(CreateTopicRule);
        ActionToString(CreateTopicRuleDestination);
        ActionToString(DeleteAccountAuditConfiguration);
        ActionToString(DeleteAuditSuppression);
        ActionToString(DeleteAuthorizer);
        ActionToString(DeleteBillingGroup);
        ActionToString(DeleteCACertificate);
        ActionToString(DeleteCertificate);
        ActionToString(DeleteCustomMetric);
        ActionToString(DeleteDimension);
        ActionToString(DeleteDomainConfiguration);
        ActionToString(DeleteDynamicThingGroup);
        ActionToString(DeleteFleetMetric);
        ActionToString(DeleteJob);
        ActionToString(DeleteJobExecution);
        ActionToString(DeleteJobTemplate);
        ActionToString(DeleteMitigationAction);
        ActionToString(DeleteOTAUpdate);
        ActionToString(DeletePolicy);
        ActionToString(DeletePolicyVersion);
        ActionToString(DeleteProvisioningTemplate);
        ActionToString(DeleteProvisioningTemplateVersion);
        ActionToString(DeleteRegistrationCode);
        ActionToString(DeleteRoleAlias);
        ActionToString(DeleteScheduledAudit);
        ActionToString(DeleteSecurityProfile);
        ActionToString(DeleteStream);
        ActionToString(DeleteThing);
        ActionToString(DeleteThingGroup);
        ActionToString(DeleteThingType);
        ActionToString(DeleteTopicRule);
        ActionToString(DeleteTopicRuleDestination);
        ActionToString(DeleteV2LoggingLevel);
        ActionToString(DeprecateThingType);
        ActionToString(DescribeAccountAuditConfiguration);
        ActionToString(DescribeAuditFinding);
        ActionToString(DescribeAuditMitigationActionsTask);
        ActionToString(DescribeAuditSuppression);
        ActionToString(DescribeAuditTask);
        ActionToString(DescribeAuthorizer);
        ActionToString(DescribeBillingGroup);
        ActionToString(DescribeCACertificate);
        ActionToString(DescribeCertificate);
        ActionToString(DescribeCustomMetric);
        ActionToString(DescribeDefaultAuthorizer);
        ActionToString(DescribeDetectMitigationActionsTask);
        ActionToString(DescribeDimension);
        ActionToString(DescribeDomainConfiguration);
        ActionToString(DescribeEndpoint);
        ActionToString(DescribeEventConfigurations);
        ActionToString(DescribeFleetMetric);
        ActionToString(DescribeIndex);
        ActionToString(DescribeJob);
        ActionToString(DescribeJobExecution);
        ActionToString(DescribeJobTemplate);
        ActionToString(DescribeManagedJobTemplate);
        ActionToString(DescribeMitigationAction);
        ActionToString(DescribeProvisioningTemplate);
        ActionToString(DescribeProvisioningTemplateVersion);
        ActionToString(DescribeRoleAlias);
        ActionToString(DescribeScheduledAudit);
        ActionToString(DescribeSecurityProfile);
        ActionToString(DescribeStream);
        ActionToString(DescribeThing);
        ActionToString(DescribeThingGroup);
        ActionToString(DescribeThingRegistrationTask);
        ActionToString(DescribeThingType);
        ActionToString(DetachPolicy);
        ActionToString(DetachPrincipalPolicy);
        ActionToString(DetachSecurityProfile);
        ActionToString(DetachThingPrincipal);
        ActionToString(DisableTopicRule);
        ActionToString(EnableTopicRule);
        ActionToString(GetBehaviorModelTrainingSummaries);
        ActionToString(GetBucketsAggregation);
        ActionToString(GetCardinality);
        ActionToString(GetEffectivePolicies);
        ActionToString(GetIndexingConfiguration);
        ActionToString(GetJobDocument);
        ActionToString(GetLoggingOptions);
        ActionToString(GetOTAUpdate);
        ActionToString(GetPercentiles);
        ActionToString(GetPolicy);
        ActionToString(GetPolicyVersion);
        ActionToString(GetRegistrationCode);
        ActionToString(GetStatistics);
        ActionToString(GetTopicRule);
        ActionToString(GetTopicRuleDestination);
        ActionToString(GetV2LoggingOptions);
        ActionToString(ListActiveViolations);
        ActionToString(ListAttachedPolicies);
        ActionToString(ListAuditFindings);
        ActionToString(ListAuditMitigationActionsExecutions);
        ActionToString(ListAuditMitigationActionsTasks);
        ActionToString(ListAuditSuppressions);
        ActionToString(ListAuditTasks);
        ActionToString(ListAuthorizers);
        ActionToString(ListBillingGroups);
        ActionToString(ListCACertificates);
        ActionToString(ListCertificates);
        ActionToString(ListCertificatesByCA);
        ActionToString(ListCustomMetrics);
        ActionToString(ListDetectMitigationActionsExecutions);
        ActionToString(ListDetectMitigationActionsTasks);
        ActionToString(ListDimensions);
        ActionToString(ListDomainConfigurations);
        ActionToString(ListFleetMetrics);
        ActionToString(ListIndices);
        ActionToString(ListJobExecutionsForJob);
        ActionToString(ListJobExecutionsForThing);
        ActionToString(ListJobTemplates);
        ActionToString(ListJobs);
        ActionToString(ListManagedJobTemplates);
        ActionToString(ListMetricValues);
        ActionToString(ListMitigationActions);
        ActionToString(ListOTAUpdates);
        ActionToString(ListOutgoingCertificates);
        ActionToString(ListPolicies);
        ActionToString(ListPolicyPrincipals);
        ActionToString(ListPolicyVersions);
        ActionToString(ListPrincipalPolicies);
        ActionToString(ListPrincipalThings);
        ActionToString(ListProvisioningTemplateVersions);
        ActionToString(ListProvisioningTemplates);
        ActionToString(ListRoleAliases);
        ActionToString(ListScheduledAudits);
        ActionToString(ListSecurityProfiles);
        ActionToString(ListSecurityProfilesForTarget);
        ActionToString(ListStreams);
        ActionToString(ListTagsForResource);
        ActionToString(ListTargetsForPolicy);
        ActionToString(ListTargetsForSecurityProfile);
        ActionToString(ListThingGroups);
        ActionToString(ListThingGroupsForThing);
        ActionToString(ListThingPrincipals);
        ActionToString(ListThingRegistrationTaskReports);
        ActionToString(ListThingRegistrationTasks);
        ActionToString(ListThingTypes);
        ActionToString(ListThings);
        ActionToString(ListThingsInBillingGroup);
        ActionToString(ListThingsInThingGroup);
        ActionToString(ListTopicRuleDestinations);
        ActionToString(ListTopicRules);
        ActionToString(ListV2LoggingLevels);
        ActionToString(ListViolationEvents);
        ActionToString(PutVerificationStateOnViolation);
        ActionToString(RegisterCACertificate);
        ActionToString(RegisterCertificate);
        ActionToString(RegisterCertificateWithoutCA);
        ActionToString(RegisterThing);
        ActionToString(RejectCertificateTransfer);
        ActionToString(RemoveThingFromBillingGroup);
        ActionToString(RemoveThingFromThingGroup);
        ActionToString(ReplaceTopicRule);
        ActionToString(SearchIndex);
        ActionToString(SetDefaultAuthorizer);
        ActionToString(SetDefaultPolicyVersion);
        ActionToString(SetLoggingOptions);
        ActionToString(SetV2LoggingLevel);
        ActionToString(SetV2LoggingOptions);
        ActionToString(StartAuditMitigationActionsTask);
        ActionToString(StartDetectMitigationActionsTask);
        ActionToString(StartOnDemandAuditTask);
        ActionToString(StartThingRegistrationTask);
        ActionToString(StopThingRegistrationTask);
        ActionToString(TagResource);
        ActionToString(TestAuthorization);
        ActionToString(TestInvokeAuthorizer);
        ActionToString(TransferCertificate);
        ActionToString(UntagResource);
        ActionToString(UpdateAccountAuditConfiguration);
        ActionToString(UpdateAuditSuppression);
        ActionToString(UpdateAuthorizer);
        ActionToString(UpdateBillingGroup);
        ActionToString(UpdateCACertificate);
        ActionToString(UpdateCertificate);
        ActionToString(UpdateCustomMetric);
        ActionToString(UpdateDimension);
        ActionToString(UpdateDomainConfiguration);
        ActionToString(UpdateDynamicThingGroup);
        ActionToString(UpdateEventConfigurations);
        ActionToString(UpdateFleetMetric);
        ActionToString(UpdateIndexingConfiguration);
        ActionToString(UpdateJob);
        ActionToString(UpdateMitigationAction);
        ActionToString(UpdateProvisioningTemplate);
        ActionToString(UpdateRoleAlias);
        ActionToString(UpdateScheduledAudit);
        ActionToString(UpdateSecurityProfile);
        ActionToString(UpdateStream);
        ActionToString(UpdateThing);
        ActionToString(UpdateThingGroup);
        ActionToString(UpdateThingGroupsForThing);
        ActionToString(UpdateTopicRuleDestination);
        ActionToString(ValidateSecurityProfileBehaviors);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoT
} // namespace QtAws
