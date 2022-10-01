// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "connectrequest.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::ConnectRequest
 * \brief The ConnectRequest class provides an interface for Connect requests.
 *
 * \inmodule QtAwsConnect
 */

/*!
 * \enum ConnectRequest::Action
 *
 * This enum describes the actions that can be performed as Connect
 * requests.
 *
 * \value AssociateApprovedOriginAction Connect AssociateApprovedOrigin action.
 * \value AssociateBotAction Connect AssociateBot action.
 * \value AssociateDefaultVocabularyAction Connect AssociateDefaultVocabulary action.
 * \value AssociateInstanceStorageConfigAction Connect AssociateInstanceStorageConfig action.
 * \value AssociateLambdaFunctionAction Connect AssociateLambdaFunction action.
 * \value AssociateLexBotAction Connect AssociateLexBot action.
 * \value AssociatePhoneNumberContactFlowAction Connect AssociatePhoneNumberContactFlow action.
 * \value AssociateQueueQuickConnectsAction Connect AssociateQueueQuickConnects action.
 * \value AssociateRoutingProfileQueuesAction Connect AssociateRoutingProfileQueues action.
 * \value AssociateSecurityKeyAction Connect AssociateSecurityKey action.
 * \value ClaimPhoneNumberAction Connect ClaimPhoneNumber action.
 * \value CreateAgentStatusAction Connect CreateAgentStatus action.
 * \value CreateContactFlowAction Connect CreateContactFlow action.
 * \value CreateContactFlowModuleAction Connect CreateContactFlowModule action.
 * \value CreateHoursOfOperationAction Connect CreateHoursOfOperation action.
 * \value CreateInstanceAction Connect CreateInstance action.
 * \value CreateIntegrationAssociationAction Connect CreateIntegrationAssociation action.
 * \value CreateQueueAction Connect CreateQueue action.
 * \value CreateQuickConnectAction Connect CreateQuickConnect action.
 * \value CreateRoutingProfileAction Connect CreateRoutingProfile action.
 * \value CreateSecurityProfileAction Connect CreateSecurityProfile action.
 * \value CreateTaskTemplateAction Connect CreateTaskTemplate action.
 * \value CreateUseCaseAction Connect CreateUseCase action.
 * \value CreateUserAction Connect CreateUser action.
 * \value CreateUserHierarchyGroupAction Connect CreateUserHierarchyGroup action.
 * \value CreateVocabularyAction Connect CreateVocabulary action.
 * \value DeleteContactFlowAction Connect DeleteContactFlow action.
 * \value DeleteContactFlowModuleAction Connect DeleteContactFlowModule action.
 * \value DeleteHoursOfOperationAction Connect DeleteHoursOfOperation action.
 * \value DeleteInstanceAction Connect DeleteInstance action.
 * \value DeleteIntegrationAssociationAction Connect DeleteIntegrationAssociation action.
 * \value DeleteQuickConnectAction Connect DeleteQuickConnect action.
 * \value DeleteSecurityProfileAction Connect DeleteSecurityProfile action.
 * \value DeleteTaskTemplateAction Connect DeleteTaskTemplate action.
 * \value DeleteUseCaseAction Connect DeleteUseCase action.
 * \value DeleteUserAction Connect DeleteUser action.
 * \value DeleteUserHierarchyGroupAction Connect DeleteUserHierarchyGroup action.
 * \value DeleteVocabularyAction Connect DeleteVocabulary action.
 * \value DescribeAgentStatusAction Connect DescribeAgentStatus action.
 * \value DescribeContactAction Connect DescribeContact action.
 * \value DescribeContactFlowAction Connect DescribeContactFlow action.
 * \value DescribeContactFlowModuleAction Connect DescribeContactFlowModule action.
 * \value DescribeHoursOfOperationAction Connect DescribeHoursOfOperation action.
 * \value DescribeInstanceAction Connect DescribeInstance action.
 * \value DescribeInstanceAttributeAction Connect DescribeInstanceAttribute action.
 * \value DescribeInstanceStorageConfigAction Connect DescribeInstanceStorageConfig action.
 * \value DescribePhoneNumberAction Connect DescribePhoneNumber action.
 * \value DescribeQueueAction Connect DescribeQueue action.
 * \value DescribeQuickConnectAction Connect DescribeQuickConnect action.
 * \value DescribeRoutingProfileAction Connect DescribeRoutingProfile action.
 * \value DescribeSecurityProfileAction Connect DescribeSecurityProfile action.
 * \value DescribeUserAction Connect DescribeUser action.
 * \value DescribeUserHierarchyGroupAction Connect DescribeUserHierarchyGroup action.
 * \value DescribeUserHierarchyStructureAction Connect DescribeUserHierarchyStructure action.
 * \value DescribeVocabularyAction Connect DescribeVocabulary action.
 * \value DisassociateApprovedOriginAction Connect DisassociateApprovedOrigin action.
 * \value DisassociateBotAction Connect DisassociateBot action.
 * \value DisassociateInstanceStorageConfigAction Connect DisassociateInstanceStorageConfig action.
 * \value DisassociateLambdaFunctionAction Connect DisassociateLambdaFunction action.
 * \value DisassociateLexBotAction Connect DisassociateLexBot action.
 * \value DisassociatePhoneNumberContactFlowAction Connect DisassociatePhoneNumberContactFlow action.
 * \value DisassociateQueueQuickConnectsAction Connect DisassociateQueueQuickConnects action.
 * \value DisassociateRoutingProfileQueuesAction Connect DisassociateRoutingProfileQueues action.
 * \value DisassociateSecurityKeyAction Connect DisassociateSecurityKey action.
 * \value GetContactAttributesAction Connect GetContactAttributes action.
 * \value GetCurrentMetricDataAction Connect GetCurrentMetricData action.
 * \value GetCurrentUserDataAction Connect GetCurrentUserData action.
 * \value GetFederationTokenAction Connect GetFederationToken action.
 * \value GetMetricDataAction Connect GetMetricData action.
 * \value GetTaskTemplateAction Connect GetTaskTemplate action.
 * \value ListAgentStatusesAction Connect ListAgentStatuses action.
 * \value ListApprovedOriginsAction Connect ListApprovedOrigins action.
 * \value ListBotsAction Connect ListBots action.
 * \value ListContactFlowModulesAction Connect ListContactFlowModules action.
 * \value ListContactFlowsAction Connect ListContactFlows action.
 * \value ListContactReferencesAction Connect ListContactReferences action.
 * \value ListDefaultVocabulariesAction Connect ListDefaultVocabularies action.
 * \value ListHoursOfOperationsAction Connect ListHoursOfOperations action.
 * \value ListInstanceAttributesAction Connect ListInstanceAttributes action.
 * \value ListInstanceStorageConfigsAction Connect ListInstanceStorageConfigs action.
 * \value ListInstancesAction Connect ListInstances action.
 * \value ListIntegrationAssociationsAction Connect ListIntegrationAssociations action.
 * \value ListLambdaFunctionsAction Connect ListLambdaFunctions action.
 * \value ListLexBotsAction Connect ListLexBots action.
 * \value ListPhoneNumbersAction Connect ListPhoneNumbers action.
 * \value ListPhoneNumbersV2Action Connect ListPhoneNumbersV2 action.
 * \value ListPromptsAction Connect ListPrompts action.
 * \value ListQueueQuickConnectsAction Connect ListQueueQuickConnects action.
 * \value ListQueuesAction Connect ListQueues action.
 * \value ListQuickConnectsAction Connect ListQuickConnects action.
 * \value ListRoutingProfileQueuesAction Connect ListRoutingProfileQueues action.
 * \value ListRoutingProfilesAction Connect ListRoutingProfiles action.
 * \value ListSecurityKeysAction Connect ListSecurityKeys action.
 * \value ListSecurityProfilePermissionsAction Connect ListSecurityProfilePermissions action.
 * \value ListSecurityProfilesAction Connect ListSecurityProfiles action.
 * \value ListTagsForResourceAction Connect ListTagsForResource action.
 * \value ListTaskTemplatesAction Connect ListTaskTemplates action.
 * \value ListUseCasesAction Connect ListUseCases action.
 * \value ListUserHierarchyGroupsAction Connect ListUserHierarchyGroups action.
 * \value ListUsersAction Connect ListUsers action.
 * \value PutUserStatusAction Connect PutUserStatus action.
 * \value ReleasePhoneNumberAction Connect ReleasePhoneNumber action.
 * \value ResumeContactRecordingAction Connect ResumeContactRecording action.
 * \value SearchAvailablePhoneNumbersAction Connect SearchAvailablePhoneNumbers action.
 * \value SearchQueuesAction Connect SearchQueues action.
 * \value SearchRoutingProfilesAction Connect SearchRoutingProfiles action.
 * \value SearchSecurityProfilesAction Connect SearchSecurityProfiles action.
 * \value SearchUsersAction Connect SearchUsers action.
 * \value SearchVocabulariesAction Connect SearchVocabularies action.
 * \value StartChatContactAction Connect StartChatContact action.
 * \value StartContactRecordingAction Connect StartContactRecording action.
 * \value StartContactStreamingAction Connect StartContactStreaming action.
 * \value StartOutboundVoiceContactAction Connect StartOutboundVoiceContact action.
 * \value StartTaskContactAction Connect StartTaskContact action.
 * \value StopContactAction Connect StopContact action.
 * \value StopContactRecordingAction Connect StopContactRecording action.
 * \value StopContactStreamingAction Connect StopContactStreaming action.
 * \value SuspendContactRecordingAction Connect SuspendContactRecording action.
 * \value TagResourceAction Connect TagResource action.
 * \value TransferContactAction Connect TransferContact action.
 * \value UntagResourceAction Connect UntagResource action.
 * \value UpdateAgentStatusAction Connect UpdateAgentStatus action.
 * \value UpdateContactAction Connect UpdateContact action.
 * \value UpdateContactAttributesAction Connect UpdateContactAttributes action.
 * \value UpdateContactFlowContentAction Connect UpdateContactFlowContent action.
 * \value UpdateContactFlowMetadataAction Connect UpdateContactFlowMetadata action.
 * \value UpdateContactFlowModuleContentAction Connect UpdateContactFlowModuleContent action.
 * \value UpdateContactFlowModuleMetadataAction Connect UpdateContactFlowModuleMetadata action.
 * \value UpdateContactFlowNameAction Connect UpdateContactFlowName action.
 * \value UpdateContactScheduleAction Connect UpdateContactSchedule action.
 * \value UpdateHoursOfOperationAction Connect UpdateHoursOfOperation action.
 * \value UpdateInstanceAttributeAction Connect UpdateInstanceAttribute action.
 * \value UpdateInstanceStorageConfigAction Connect UpdateInstanceStorageConfig action.
 * \value UpdatePhoneNumberAction Connect UpdatePhoneNumber action.
 * \value UpdateQueueHoursOfOperationAction Connect UpdateQueueHoursOfOperation action.
 * \value UpdateQueueMaxContactsAction Connect UpdateQueueMaxContacts action.
 * \value UpdateQueueNameAction Connect UpdateQueueName action.
 * \value UpdateQueueOutboundCallerConfigAction Connect UpdateQueueOutboundCallerConfig action.
 * \value UpdateQueueStatusAction Connect UpdateQueueStatus action.
 * \value UpdateQuickConnectConfigAction Connect UpdateQuickConnectConfig action.
 * \value UpdateQuickConnectNameAction Connect UpdateQuickConnectName action.
 * \value UpdateRoutingProfileConcurrencyAction Connect UpdateRoutingProfileConcurrency action.
 * \value UpdateRoutingProfileDefaultOutboundQueueAction Connect UpdateRoutingProfileDefaultOutboundQueue action.
 * \value UpdateRoutingProfileNameAction Connect UpdateRoutingProfileName action.
 * \value UpdateRoutingProfileQueuesAction Connect UpdateRoutingProfileQueues action.
 * \value UpdateSecurityProfileAction Connect UpdateSecurityProfile action.
 * \value UpdateTaskTemplateAction Connect UpdateTaskTemplate action.
 * \value UpdateUserHierarchyAction Connect UpdateUserHierarchy action.
 * \value UpdateUserHierarchyGroupNameAction Connect UpdateUserHierarchyGroupName action.
 * \value UpdateUserHierarchyStructureAction Connect UpdateUserHierarchyStructure action.
 * \value UpdateUserIdentityInfoAction Connect UpdateUserIdentityInfo action.
 * \value UpdateUserPhoneConfigAction Connect UpdateUserPhoneConfig action.
 * \value UpdateUserRoutingProfileAction Connect UpdateUserRoutingProfile action.
 * \value UpdateUserSecurityProfilesAction Connect UpdateUserSecurityProfiles action.
 */

/*!
 * Constructs a ConnectRequest object for Connect \a action.
 */
ConnectRequest::ConnectRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ConnectRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ConnectRequest::ConnectRequest(const ConnectRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ConnectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ConnectRequest object to be equal to \a other.
 */
ConnectRequest& ConnectRequest::operator=(const ConnectRequest &other)
{
    Q_D(ConnectRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ConnectRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConnectRequestPrivate.
 */
ConnectRequest::ConnectRequest(ConnectRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Connect action to be performed by this request.
 */
ConnectRequest::Action ConnectRequest::action() const
{
    Q_D(const ConnectRequest);
    return d->action;
}

/*!
 * Returns the name of the Connect action to be performed by this request.
 */
QString ConnectRequest::actionString() const
{
    return ConnectRequestPrivate::toString(action());
}

/*!
 * Returns the Connect API version implemented by this request.
 */
QString ConnectRequest::apiVersion() const
{
    Q_D(const ConnectRequest);
    return d->apiVersion;
}

/*!
 * Sets the Connect action to be performed by this request to \a action.
 */
void ConnectRequest::setAction(const Action action)
{
    Q_D(ConnectRequest);
    d->action = action;
}

/*!
 * Sets the Connect API version to include in this request to \a version.
 */
void ConnectRequest::setApiVersion(const QString &version)
{
    Q_D(ConnectRequest);
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
bool ConnectRequest::operator==(const ConnectRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Connect queue name.
 *
 * @par From Connect FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Connect queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ConnectRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ConnectRequest::clearParameter(const QString &name)
{
    Q_D(ConnectRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ConnectRequest::clearParameters()
{
    Q_D(ConnectRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ConnectRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ConnectRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ConnectRequest::parameters() const
{
    Q_D(const ConnectRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ConnectRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ConnectRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ConnectRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ConnectRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Connect request using the given
 * \a endpoint.
 *
 * This Connect implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ConnectRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ConnectRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Connect::ConnectRequestPrivate
 * \brief The ConnectRequestPrivate class provides private implementation for ConnectRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a ConnectRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
ConnectRequestPrivate::ConnectRequestPrivate(const ConnectRequest::Action action, ConnectRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-08-08"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ConnectRequest class's copy constructor.
 */
ConnectRequestPrivate::ConnectRequestPrivate(const ConnectRequestPrivate &other,
                                     ConnectRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ConnectRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Connect service's Action
 * query parameters.
 */
QString ConnectRequestPrivate::toString(const ConnectRequest::Action &action)
{
    #define ActionToString(action) \
        case ConnectRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateApprovedOrigin);
        ActionToString(AssociateBot);
        ActionToString(AssociateDefaultVocabulary);
        ActionToString(AssociateInstanceStorageConfig);
        ActionToString(AssociateLambdaFunction);
        ActionToString(AssociateLexBot);
        ActionToString(AssociatePhoneNumberContactFlow);
        ActionToString(AssociateQueueQuickConnects);
        ActionToString(AssociateRoutingProfileQueues);
        ActionToString(AssociateSecurityKey);
        ActionToString(ClaimPhoneNumber);
        ActionToString(CreateAgentStatus);
        ActionToString(CreateContactFlow);
        ActionToString(CreateContactFlowModule);
        ActionToString(CreateHoursOfOperation);
        ActionToString(CreateInstance);
        ActionToString(CreateIntegrationAssociation);
        ActionToString(CreateQueue);
        ActionToString(CreateQuickConnect);
        ActionToString(CreateRoutingProfile);
        ActionToString(CreateSecurityProfile);
        ActionToString(CreateTaskTemplate);
        ActionToString(CreateUseCase);
        ActionToString(CreateUser);
        ActionToString(CreateUserHierarchyGroup);
        ActionToString(CreateVocabulary);
        ActionToString(DeleteContactFlow);
        ActionToString(DeleteContactFlowModule);
        ActionToString(DeleteHoursOfOperation);
        ActionToString(DeleteInstance);
        ActionToString(DeleteIntegrationAssociation);
        ActionToString(DeleteQuickConnect);
        ActionToString(DeleteSecurityProfile);
        ActionToString(DeleteTaskTemplate);
        ActionToString(DeleteUseCase);
        ActionToString(DeleteUser);
        ActionToString(DeleteUserHierarchyGroup);
        ActionToString(DeleteVocabulary);
        ActionToString(DescribeAgentStatus);
        ActionToString(DescribeContact);
        ActionToString(DescribeContactFlow);
        ActionToString(DescribeContactFlowModule);
        ActionToString(DescribeHoursOfOperation);
        ActionToString(DescribeInstance);
        ActionToString(DescribeInstanceAttribute);
        ActionToString(DescribeInstanceStorageConfig);
        ActionToString(DescribePhoneNumber);
        ActionToString(DescribeQueue);
        ActionToString(DescribeQuickConnect);
        ActionToString(DescribeRoutingProfile);
        ActionToString(DescribeSecurityProfile);
        ActionToString(DescribeUser);
        ActionToString(DescribeUserHierarchyGroup);
        ActionToString(DescribeUserHierarchyStructure);
        ActionToString(DescribeVocabulary);
        ActionToString(DisassociateApprovedOrigin);
        ActionToString(DisassociateBot);
        ActionToString(DisassociateInstanceStorageConfig);
        ActionToString(DisassociateLambdaFunction);
        ActionToString(DisassociateLexBot);
        ActionToString(DisassociatePhoneNumberContactFlow);
        ActionToString(DisassociateQueueQuickConnects);
        ActionToString(DisassociateRoutingProfileQueues);
        ActionToString(DisassociateSecurityKey);
        ActionToString(GetContactAttributes);
        ActionToString(GetCurrentMetricData);
        ActionToString(GetCurrentUserData);
        ActionToString(GetFederationToken);
        ActionToString(GetMetricData);
        ActionToString(GetTaskTemplate);
        ActionToString(ListAgentStatuses);
        ActionToString(ListApprovedOrigins);
        ActionToString(ListBots);
        ActionToString(ListContactFlowModules);
        ActionToString(ListContactFlows);
        ActionToString(ListContactReferences);
        ActionToString(ListDefaultVocabularies);
        ActionToString(ListHoursOfOperations);
        ActionToString(ListInstanceAttributes);
        ActionToString(ListInstanceStorageConfigs);
        ActionToString(ListInstances);
        ActionToString(ListIntegrationAssociations);
        ActionToString(ListLambdaFunctions);
        ActionToString(ListLexBots);
        ActionToString(ListPhoneNumbers);
        ActionToString(ListPhoneNumbersV2);
        ActionToString(ListPrompts);
        ActionToString(ListQueueQuickConnects);
        ActionToString(ListQueues);
        ActionToString(ListQuickConnects);
        ActionToString(ListRoutingProfileQueues);
        ActionToString(ListRoutingProfiles);
        ActionToString(ListSecurityKeys);
        ActionToString(ListSecurityProfilePermissions);
        ActionToString(ListSecurityProfiles);
        ActionToString(ListTagsForResource);
        ActionToString(ListTaskTemplates);
        ActionToString(ListUseCases);
        ActionToString(ListUserHierarchyGroups);
        ActionToString(ListUsers);
        ActionToString(PutUserStatus);
        ActionToString(ReleasePhoneNumber);
        ActionToString(ResumeContactRecording);
        ActionToString(SearchAvailablePhoneNumbers);
        ActionToString(SearchQueues);
        ActionToString(SearchRoutingProfiles);
        ActionToString(SearchSecurityProfiles);
        ActionToString(SearchUsers);
        ActionToString(SearchVocabularies);
        ActionToString(StartChatContact);
        ActionToString(StartContactRecording);
        ActionToString(StartContactStreaming);
        ActionToString(StartOutboundVoiceContact);
        ActionToString(StartTaskContact);
        ActionToString(StopContact);
        ActionToString(StopContactRecording);
        ActionToString(StopContactStreaming);
        ActionToString(SuspendContactRecording);
        ActionToString(TagResource);
        ActionToString(TransferContact);
        ActionToString(UntagResource);
        ActionToString(UpdateAgentStatus);
        ActionToString(UpdateContact);
        ActionToString(UpdateContactAttributes);
        ActionToString(UpdateContactFlowContent);
        ActionToString(UpdateContactFlowMetadata);
        ActionToString(UpdateContactFlowModuleContent);
        ActionToString(UpdateContactFlowModuleMetadata);
        ActionToString(UpdateContactFlowName);
        ActionToString(UpdateContactSchedule);
        ActionToString(UpdateHoursOfOperation);
        ActionToString(UpdateInstanceAttribute);
        ActionToString(UpdateInstanceStorageConfig);
        ActionToString(UpdatePhoneNumber);
        ActionToString(UpdateQueueHoursOfOperation);
        ActionToString(UpdateQueueMaxContacts);
        ActionToString(UpdateQueueName);
        ActionToString(UpdateQueueOutboundCallerConfig);
        ActionToString(UpdateQueueStatus);
        ActionToString(UpdateQuickConnectConfig);
        ActionToString(UpdateQuickConnectName);
        ActionToString(UpdateRoutingProfileConcurrency);
        ActionToString(UpdateRoutingProfileDefaultOutboundQueue);
        ActionToString(UpdateRoutingProfileName);
        ActionToString(UpdateRoutingProfileQueues);
        ActionToString(UpdateSecurityProfile);
        ActionToString(UpdateTaskTemplate);
        ActionToString(UpdateUserHierarchy);
        ActionToString(UpdateUserHierarchyGroupName);
        ActionToString(UpdateUserHierarchyStructure);
        ActionToString(UpdateUserIdentityInfo);
        ActionToString(UpdateUserPhoneConfig);
        ActionToString(UpdateUserRoutingProfile);
        ActionToString(UpdateUserSecurityProfiles);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Connect
} // namespace QtAws
