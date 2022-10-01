// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "workmailrequest.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::WorkMailRequest
 * \brief The WorkMailRequest class provides an interface for WorkMail requests.
 *
 * \inmodule QtAwsWorkMail
 */

/*!
 * \enum WorkMailRequest::Action
 *
 * This enum describes the actions that can be performed as WorkMail
 * requests.
 *
 * \value AssociateDelegateToResourceAction WorkMail AssociateDelegateToResource action.
 * \value AssociateMemberToGroupAction WorkMail AssociateMemberToGroup action.
 * \value CancelMailboxExportJobAction WorkMail CancelMailboxExportJob action.
 * \value CreateAliasAction WorkMail CreateAlias action.
 * \value CreateAvailabilityConfigurationAction WorkMail CreateAvailabilityConfiguration action.
 * \value CreateGroupAction WorkMail CreateGroup action.
 * \value CreateMobileDeviceAccessRuleAction WorkMail CreateMobileDeviceAccessRule action.
 * \value CreateOrganizationAction WorkMail CreateOrganization action.
 * \value CreateResourceAction WorkMail CreateResource action.
 * \value CreateUserAction WorkMail CreateUser action.
 * \value DeleteAccessControlRuleAction WorkMail DeleteAccessControlRule action.
 * \value DeleteAliasAction WorkMail DeleteAlias action.
 * \value DeleteAvailabilityConfigurationAction WorkMail DeleteAvailabilityConfiguration action.
 * \value DeleteEmailMonitoringConfigurationAction WorkMail DeleteEmailMonitoringConfiguration action.
 * \value DeleteGroupAction WorkMail DeleteGroup action.
 * \value DeleteMailboxPermissionsAction WorkMail DeleteMailboxPermissions action.
 * \value DeleteMobileDeviceAccessOverrideAction WorkMail DeleteMobileDeviceAccessOverride action.
 * \value DeleteMobileDeviceAccessRuleAction WorkMail DeleteMobileDeviceAccessRule action.
 * \value DeleteOrganizationAction WorkMail DeleteOrganization action.
 * \value DeleteResourceAction WorkMail DeleteResource action.
 * \value DeleteRetentionPolicyAction WorkMail DeleteRetentionPolicy action.
 * \value DeleteUserAction WorkMail DeleteUser action.
 * \value DeregisterFromWorkMailAction WorkMail DeregisterFromWorkMail action.
 * \value DeregisterMailDomainAction WorkMail DeregisterMailDomain action.
 * \value DescribeEmailMonitoringConfigurationAction WorkMail DescribeEmailMonitoringConfiguration action.
 * \value DescribeGroupAction WorkMail DescribeGroup action.
 * \value DescribeInboundDmarcSettingsAction WorkMail DescribeInboundDmarcSettings action.
 * \value DescribeMailboxExportJobAction WorkMail DescribeMailboxExportJob action.
 * \value DescribeOrganizationAction WorkMail DescribeOrganization action.
 * \value DescribeResourceAction WorkMail DescribeResource action.
 * \value DescribeUserAction WorkMail DescribeUser action.
 * \value DisassociateDelegateFromResourceAction WorkMail DisassociateDelegateFromResource action.
 * \value DisassociateMemberFromGroupAction WorkMail DisassociateMemberFromGroup action.
 * \value GetAccessControlEffectAction WorkMail GetAccessControlEffect action.
 * \value GetDefaultRetentionPolicyAction WorkMail GetDefaultRetentionPolicy action.
 * \value GetMailDomainAction WorkMail GetMailDomain action.
 * \value GetMailboxDetailsAction WorkMail GetMailboxDetails action.
 * \value GetMobileDeviceAccessEffectAction WorkMail GetMobileDeviceAccessEffect action.
 * \value GetMobileDeviceAccessOverrideAction WorkMail GetMobileDeviceAccessOverride action.
 * \value ListAccessControlRulesAction WorkMail ListAccessControlRules action.
 * \value ListAliasesAction WorkMail ListAliases action.
 * \value ListAvailabilityConfigurationsAction WorkMail ListAvailabilityConfigurations action.
 * \value ListGroupMembersAction WorkMail ListGroupMembers action.
 * \value ListGroupsAction WorkMail ListGroups action.
 * \value ListMailDomainsAction WorkMail ListMailDomains action.
 * \value ListMailboxExportJobsAction WorkMail ListMailboxExportJobs action.
 * \value ListMailboxPermissionsAction WorkMail ListMailboxPermissions action.
 * \value ListMobileDeviceAccessOverridesAction WorkMail ListMobileDeviceAccessOverrides action.
 * \value ListMobileDeviceAccessRulesAction WorkMail ListMobileDeviceAccessRules action.
 * \value ListOrganizationsAction WorkMail ListOrganizations action.
 * \value ListResourceDelegatesAction WorkMail ListResourceDelegates action.
 * \value ListResourcesAction WorkMail ListResources action.
 * \value ListTagsForResourceAction WorkMail ListTagsForResource action.
 * \value ListUsersAction WorkMail ListUsers action.
 * \value PutAccessControlRuleAction WorkMail PutAccessControlRule action.
 * \value PutEmailMonitoringConfigurationAction WorkMail PutEmailMonitoringConfiguration action.
 * \value PutInboundDmarcSettingsAction WorkMail PutInboundDmarcSettings action.
 * \value PutMailboxPermissionsAction WorkMail PutMailboxPermissions action.
 * \value PutMobileDeviceAccessOverrideAction WorkMail PutMobileDeviceAccessOverride action.
 * \value PutRetentionPolicyAction WorkMail PutRetentionPolicy action.
 * \value RegisterMailDomainAction WorkMail RegisterMailDomain action.
 * \value RegisterToWorkMailAction WorkMail RegisterToWorkMail action.
 * \value ResetPasswordAction WorkMail ResetPassword action.
 * \value StartMailboxExportJobAction WorkMail StartMailboxExportJob action.
 * \value TagResourceAction WorkMail TagResource action.
 * \value TestAvailabilityConfigurationAction WorkMail TestAvailabilityConfiguration action.
 * \value UntagResourceAction WorkMail UntagResource action.
 * \value UpdateAvailabilityConfigurationAction WorkMail UpdateAvailabilityConfiguration action.
 * \value UpdateDefaultMailDomainAction WorkMail UpdateDefaultMailDomain action.
 * \value UpdateMailboxQuotaAction WorkMail UpdateMailboxQuota action.
 * \value UpdateMobileDeviceAccessRuleAction WorkMail UpdateMobileDeviceAccessRule action.
 * \value UpdatePrimaryEmailAddressAction WorkMail UpdatePrimaryEmailAddress action.
 * \value UpdateResourceAction WorkMail UpdateResource action.
 */

/*!
 * Constructs a WorkMailRequest object for WorkMail \a action.
 */
WorkMailRequest::WorkMailRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new WorkMailRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
WorkMailRequest::WorkMailRequest(const WorkMailRequest &other)
    : QtAws::Core::AwsAbstractRequest(new WorkMailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the WorkMailRequest object to be equal to \a other.
 */
WorkMailRequest& WorkMailRequest::operator=(const WorkMailRequest &other)
{
    Q_D(WorkMailRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa WorkMailRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkMailRequestPrivate.
 */
WorkMailRequest::WorkMailRequest(WorkMailRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the WorkMail action to be performed by this request.
 */
WorkMailRequest::Action WorkMailRequest::action() const
{
    Q_D(const WorkMailRequest);
    return d->action;
}

/*!
 * Returns the name of the WorkMail action to be performed by this request.
 */
QString WorkMailRequest::actionString() const
{
    return WorkMailRequestPrivate::toString(action());
}

/*!
 * Returns the WorkMail API version implemented by this request.
 */
QString WorkMailRequest::apiVersion() const
{
    Q_D(const WorkMailRequest);
    return d->apiVersion;
}

/*!
 * Sets the WorkMail action to be performed by this request to \a action.
 */
void WorkMailRequest::setAction(const Action action)
{
    Q_D(WorkMailRequest);
    d->action = action;
}

/*!
 * Sets the WorkMail API version to include in this request to \a version.
 */
void WorkMailRequest::setApiVersion(const QString &version)
{
    Q_D(WorkMailRequest);
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
bool WorkMailRequest::operator==(const WorkMailRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid WorkMail queue name.
 *
 * @par From WorkMail FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid WorkMail queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool WorkMailRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int WorkMailRequest::clearParameter(const QString &name)
{
    Q_D(WorkMailRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void WorkMailRequest::clearParameters()
{
    Q_D(WorkMailRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant WorkMailRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const WorkMailRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &WorkMailRequest::parameters() const
{
    Q_D(const WorkMailRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void WorkMailRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(WorkMailRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void WorkMailRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(WorkMailRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the WorkMail request using the given
 * \a endpoint.
 *
 * This WorkMail implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest WorkMailRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const WorkMailRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::WorkMail::WorkMailRequestPrivate
 * \brief The WorkMailRequestPrivate class provides private implementation for WorkMailRequest.
 * \internal
 *
 * \inmodule QtAwsWorkMail
 */

/*!
 * Constructs a WorkMailRequestPrivate object for WorkMail \a action,
 * with public implementation \a q.
 */
WorkMailRequestPrivate::WorkMailRequestPrivate(const WorkMailRequest::Action action, WorkMailRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-10-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the WorkMailRequest class's copy constructor.
 */
WorkMailRequestPrivate::WorkMailRequestPrivate(const WorkMailRequestPrivate &other,
                                     WorkMailRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts WorkMailRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the WorkMail service's Action
 * query parameters.
 */
QString WorkMailRequestPrivate::toString(const WorkMailRequest::Action &action)
{
    #define ActionToString(action) \
        case WorkMailRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateDelegateToResource);
        ActionToString(AssociateMemberToGroup);
        ActionToString(CancelMailboxExportJob);
        ActionToString(CreateAlias);
        ActionToString(CreateAvailabilityConfiguration);
        ActionToString(CreateGroup);
        ActionToString(CreateMobileDeviceAccessRule);
        ActionToString(CreateOrganization);
        ActionToString(CreateResource);
        ActionToString(CreateUser);
        ActionToString(DeleteAccessControlRule);
        ActionToString(DeleteAlias);
        ActionToString(DeleteAvailabilityConfiguration);
        ActionToString(DeleteEmailMonitoringConfiguration);
        ActionToString(DeleteGroup);
        ActionToString(DeleteMailboxPermissions);
        ActionToString(DeleteMobileDeviceAccessOverride);
        ActionToString(DeleteMobileDeviceAccessRule);
        ActionToString(DeleteOrganization);
        ActionToString(DeleteResource);
        ActionToString(DeleteRetentionPolicy);
        ActionToString(DeleteUser);
        ActionToString(DeregisterFromWorkMail);
        ActionToString(DeregisterMailDomain);
        ActionToString(DescribeEmailMonitoringConfiguration);
        ActionToString(DescribeGroup);
        ActionToString(DescribeInboundDmarcSettings);
        ActionToString(DescribeMailboxExportJob);
        ActionToString(DescribeOrganization);
        ActionToString(DescribeResource);
        ActionToString(DescribeUser);
        ActionToString(DisassociateDelegateFromResource);
        ActionToString(DisassociateMemberFromGroup);
        ActionToString(GetAccessControlEffect);
        ActionToString(GetDefaultRetentionPolicy);
        ActionToString(GetMailDomain);
        ActionToString(GetMailboxDetails);
        ActionToString(GetMobileDeviceAccessEffect);
        ActionToString(GetMobileDeviceAccessOverride);
        ActionToString(ListAccessControlRules);
        ActionToString(ListAliases);
        ActionToString(ListAvailabilityConfigurations);
        ActionToString(ListGroupMembers);
        ActionToString(ListGroups);
        ActionToString(ListMailDomains);
        ActionToString(ListMailboxExportJobs);
        ActionToString(ListMailboxPermissions);
        ActionToString(ListMobileDeviceAccessOverrides);
        ActionToString(ListMobileDeviceAccessRules);
        ActionToString(ListOrganizations);
        ActionToString(ListResourceDelegates);
        ActionToString(ListResources);
        ActionToString(ListTagsForResource);
        ActionToString(ListUsers);
        ActionToString(PutAccessControlRule);
        ActionToString(PutEmailMonitoringConfiguration);
        ActionToString(PutInboundDmarcSettings);
        ActionToString(PutMailboxPermissions);
        ActionToString(PutMobileDeviceAccessOverride);
        ActionToString(PutRetentionPolicy);
        ActionToString(RegisterMailDomain);
        ActionToString(RegisterToWorkMail);
        ActionToString(ResetPassword);
        ActionToString(StartMailboxExportJob);
        ActionToString(TagResource);
        ActionToString(TestAvailabilityConfiguration);
        ActionToString(UntagResource);
        ActionToString(UpdateAvailabilityConfiguration);
        ActionToString(UpdateDefaultMailDomain);
        ActionToString(UpdateMailboxQuota);
        ActionToString(UpdateMobileDeviceAccessRule);
        ActionToString(UpdatePrimaryEmailAddress);
        ActionToString(UpdateResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace WorkMail
} // namespace QtAws
