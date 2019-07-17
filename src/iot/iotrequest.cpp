/*
    Copyright 2013-2019 Paul Colby

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
 * \value CancelAuditTaskAction IoT CancelAuditTask action.
 * \value CancelCertificateTransferAction IoT CancelCertificateTransfer action.
 * \value CancelJobAction IoT CancelJob action.
 * \value CancelJobExecutionAction IoT CancelJobExecution action.
 * \value ClearDefaultAuthorizerAction IoT ClearDefaultAuthorizer action.
 * \value CreateAuthorizerAction IoT CreateAuthorizer action.
 * \value CreateBillingGroupAction IoT CreateBillingGroup action.
 * \value CreateCertificateFromCsrAction IoT CreateCertificateFromCsr action.
 * \value CreateDynamicThingGroupAction IoT CreateDynamicThingGroup action.
 * \value CreateJobAction IoT CreateJob action.
 * \value CreateKeysAndCertificateAction IoT CreateKeysAndCertificate action.
 * \value CreateOTAUpdateAction IoT CreateOTAUpdate action.
 * \value CreatePolicyAction IoT CreatePolicy action.
 * \value CreatePolicyVersionAction IoT CreatePolicyVersion action.
 * \value CreateRoleAliasAction IoT CreateRoleAlias action.
 * \value CreateScheduledAuditAction IoT CreateScheduledAudit action.
 * \value CreateSecurityProfileAction IoT CreateSecurityProfile action.
 * \value CreateStreamAction IoT CreateStream action.
 * \value CreateThingAction IoT CreateThing action.
 * \value CreateThingGroupAction IoT CreateThingGroup action.
 * \value CreateThingTypeAction IoT CreateThingType action.
 * \value CreateTopicRuleAction IoT CreateTopicRule action.
 * \value DeleteAccountAuditConfigurationAction IoT DeleteAccountAuditConfiguration action.
 * \value DeleteAuthorizerAction IoT DeleteAuthorizer action.
 * \value DeleteBillingGroupAction IoT DeleteBillingGroup action.
 * \value DeleteCACertificateAction IoT DeleteCACertificate action.
 * \value DeleteCertificateAction IoT DeleteCertificate action.
 * \value DeleteDynamicThingGroupAction IoT DeleteDynamicThingGroup action.
 * \value DeleteJobAction IoT DeleteJob action.
 * \value DeleteJobExecutionAction IoT DeleteJobExecution action.
 * \value DeleteOTAUpdateAction IoT DeleteOTAUpdate action.
 * \value DeletePolicyAction IoT DeletePolicy action.
 * \value DeletePolicyVersionAction IoT DeletePolicyVersion action.
 * \value DeleteRegistrationCodeAction IoT DeleteRegistrationCode action.
 * \value DeleteRoleAliasAction IoT DeleteRoleAlias action.
 * \value DeleteScheduledAuditAction IoT DeleteScheduledAudit action.
 * \value DeleteSecurityProfileAction IoT DeleteSecurityProfile action.
 * \value DeleteStreamAction IoT DeleteStream action.
 * \value DeleteThingAction IoT DeleteThing action.
 * \value DeleteThingGroupAction IoT DeleteThingGroup action.
 * \value DeleteThingTypeAction IoT DeleteThingType action.
 * \value DeleteTopicRuleAction IoT DeleteTopicRule action.
 * \value DeleteV2LoggingLevelAction IoT DeleteV2LoggingLevel action.
 * \value DeprecateThingTypeAction IoT DeprecateThingType action.
 * \value DescribeAccountAuditConfigurationAction IoT DescribeAccountAuditConfiguration action.
 * \value DescribeAuditTaskAction IoT DescribeAuditTask action.
 * \value DescribeAuthorizerAction IoT DescribeAuthorizer action.
 * \value DescribeBillingGroupAction IoT DescribeBillingGroup action.
 * \value DescribeCACertificateAction IoT DescribeCACertificate action.
 * \value DescribeCertificateAction IoT DescribeCertificate action.
 * \value DescribeDefaultAuthorizerAction IoT DescribeDefaultAuthorizer action.
 * \value DescribeEndpointAction IoT DescribeEndpoint action.
 * \value DescribeEventConfigurationsAction IoT DescribeEventConfigurations action.
 * \value DescribeIndexAction IoT DescribeIndex action.
 * \value DescribeJobAction IoT DescribeJob action.
 * \value DescribeJobExecutionAction IoT DescribeJobExecution action.
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
 * \value GetEffectivePoliciesAction IoT GetEffectivePolicies action.
 * \value GetIndexingConfigurationAction IoT GetIndexingConfiguration action.
 * \value GetJobDocumentAction IoT GetJobDocument action.
 * \value GetLoggingOptionsAction IoT GetLoggingOptions action.
 * \value GetOTAUpdateAction IoT GetOTAUpdate action.
 * \value GetPolicyAction IoT GetPolicy action.
 * \value GetPolicyVersionAction IoT GetPolicyVersion action.
 * \value GetRegistrationCodeAction IoT GetRegistrationCode action.
 * \value GetStatisticsAction IoT GetStatistics action.
 * \value GetTopicRuleAction IoT GetTopicRule action.
 * \value GetV2LoggingOptionsAction IoT GetV2LoggingOptions action.
 * \value ListActiveViolationsAction IoT ListActiveViolations action.
 * \value ListAttachedPoliciesAction IoT ListAttachedPolicies action.
 * \value ListAuditFindingsAction IoT ListAuditFindings action.
 * \value ListAuditTasksAction IoT ListAuditTasks action.
 * \value ListAuthorizersAction IoT ListAuthorizers action.
 * \value ListBillingGroupsAction IoT ListBillingGroups action.
 * \value ListCACertificatesAction IoT ListCACertificates action.
 * \value ListCertificatesAction IoT ListCertificates action.
 * \value ListCertificatesByCAAction IoT ListCertificatesByCA action.
 * \value ListIndicesAction IoT ListIndices action.
 * \value ListJobExecutionsForJobAction IoT ListJobExecutionsForJob action.
 * \value ListJobExecutionsForThingAction IoT ListJobExecutionsForThing action.
 * \value ListJobsAction IoT ListJobs action.
 * \value ListOTAUpdatesAction IoT ListOTAUpdates action.
 * \value ListOutgoingCertificatesAction IoT ListOutgoingCertificates action.
 * \value ListPoliciesAction IoT ListPolicies action.
 * \value ListPolicyPrincipalsAction IoT ListPolicyPrincipals action.
 * \value ListPolicyVersionsAction IoT ListPolicyVersions action.
 * \value ListPrincipalPoliciesAction IoT ListPrincipalPolicies action.
 * \value ListPrincipalThingsAction IoT ListPrincipalThings action.
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
 * \value ListTopicRulesAction IoT ListTopicRules action.
 * \value ListV2LoggingLevelsAction IoT ListV2LoggingLevels action.
 * \value ListViolationEventsAction IoT ListViolationEvents action.
 * \value RegisterCACertificateAction IoT RegisterCACertificate action.
 * \value RegisterCertificateAction IoT RegisterCertificate action.
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
 * \value StartOnDemandAuditTaskAction IoT StartOnDemandAuditTask action.
 * \value StartThingRegistrationTaskAction IoT StartThingRegistrationTask action.
 * \value StopThingRegistrationTaskAction IoT StopThingRegistrationTask action.
 * \value TagResourceAction IoT TagResource action.
 * \value TestAuthorizationAction IoT TestAuthorization action.
 * \value TestInvokeAuthorizerAction IoT TestInvokeAuthorizer action.
 * \value TransferCertificateAction IoT TransferCertificate action.
 * \value UntagResourceAction IoT UntagResource action.
 * \value UpdateAccountAuditConfigurationAction IoT UpdateAccountAuditConfiguration action.
 * \value UpdateAuthorizerAction IoT UpdateAuthorizer action.
 * \value UpdateBillingGroupAction IoT UpdateBillingGroup action.
 * \value UpdateCACertificateAction IoT UpdateCACertificate action.
 * \value UpdateCertificateAction IoT UpdateCertificate action.
 * \value UpdateDynamicThingGroupAction IoT UpdateDynamicThingGroup action.
 * \value UpdateEventConfigurationsAction IoT UpdateEventConfigurations action.
 * \value UpdateIndexingConfigurationAction IoT UpdateIndexingConfiguration action.
 * \value UpdateJobAction IoT UpdateJob action.
 * \value UpdateRoleAliasAction IoT UpdateRoleAlias action.
 * \value UpdateScheduledAuditAction IoT UpdateScheduledAudit action.
 * \value UpdateSecurityProfileAction IoT UpdateSecurityProfile action.
 * \value UpdateStreamAction IoT UpdateStream action.
 * \value UpdateThingAction IoT UpdateThing action.
 * \value UpdateThingGroupAction IoT UpdateThingGroup action.
 * \value UpdateThingGroupsForThingAction IoT UpdateThingGroupsForThing action.
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
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
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
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoT
} // namespace QtAws
