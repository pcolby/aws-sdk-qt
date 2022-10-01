// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ssoadminrequest.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SsoAdmin {

/*!
 * \class QtAws::SsoAdmin::SsoAdminRequest
 * \brief The SsoAdminRequest class provides an interface for SsoAdmin requests.
 *
 * \inmodule QtAwsSsoAdmin
 */

/*!
 * \enum SsoAdminRequest::Action
 *
 * This enum describes the actions that can be performed as SsoAdmin
 * requests.
 *
 * \value AttachCustomerManagedPolicyReferenceToPermissionSetAction SsoAdmin AttachCustomerManagedPolicyReferenceToPermissionSet action.
 * \value AttachManagedPolicyToPermissionSetAction SsoAdmin AttachManagedPolicyToPermissionSet action.
 * \value CreateAccountAssignmentAction SsoAdmin CreateAccountAssignment action.
 * \value CreateInstanceAccessControlAttributeConfigurationAction SsoAdmin CreateInstanceAccessControlAttributeConfiguration action.
 * \value CreatePermissionSetAction SsoAdmin CreatePermissionSet action.
 * \value DeleteAccountAssignmentAction SsoAdmin DeleteAccountAssignment action.
 * \value DeleteInlinePolicyFromPermissionSetAction SsoAdmin DeleteInlinePolicyFromPermissionSet action.
 * \value DeleteInstanceAccessControlAttributeConfigurationAction SsoAdmin DeleteInstanceAccessControlAttributeConfiguration action.
 * \value DeletePermissionSetAction SsoAdmin DeletePermissionSet action.
 * \value DeletePermissionsBoundaryFromPermissionSetAction SsoAdmin DeletePermissionsBoundaryFromPermissionSet action.
 * \value DescribeAccountAssignmentCreationStatusAction SsoAdmin DescribeAccountAssignmentCreationStatus action.
 * \value DescribeAccountAssignmentDeletionStatusAction SsoAdmin DescribeAccountAssignmentDeletionStatus action.
 * \value DescribeInstanceAccessControlAttributeConfigurationAction SsoAdmin DescribeInstanceAccessControlAttributeConfiguration action.
 * \value DescribePermissionSetAction SsoAdmin DescribePermissionSet action.
 * \value DescribePermissionSetProvisioningStatusAction SsoAdmin DescribePermissionSetProvisioningStatus action.
 * \value DetachCustomerManagedPolicyReferenceFromPermissionSetAction SsoAdmin DetachCustomerManagedPolicyReferenceFromPermissionSet action.
 * \value DetachManagedPolicyFromPermissionSetAction SsoAdmin DetachManagedPolicyFromPermissionSet action.
 * \value GetInlinePolicyForPermissionSetAction SsoAdmin GetInlinePolicyForPermissionSet action.
 * \value GetPermissionsBoundaryForPermissionSetAction SsoAdmin GetPermissionsBoundaryForPermissionSet action.
 * \value ListAccountAssignmentCreationStatusAction SsoAdmin ListAccountAssignmentCreationStatus action.
 * \value ListAccountAssignmentDeletionStatusAction SsoAdmin ListAccountAssignmentDeletionStatus action.
 * \value ListAccountAssignmentsAction SsoAdmin ListAccountAssignments action.
 * \value ListAccountsForProvisionedPermissionSetAction SsoAdmin ListAccountsForProvisionedPermissionSet action.
 * \value ListCustomerManagedPolicyReferencesInPermissionSetAction SsoAdmin ListCustomerManagedPolicyReferencesInPermissionSet action.
 * \value ListInstancesAction SsoAdmin ListInstances action.
 * \value ListManagedPoliciesInPermissionSetAction SsoAdmin ListManagedPoliciesInPermissionSet action.
 * \value ListPermissionSetProvisioningStatusAction SsoAdmin ListPermissionSetProvisioningStatus action.
 * \value ListPermissionSetsAction SsoAdmin ListPermissionSets action.
 * \value ListPermissionSetsProvisionedToAccountAction SsoAdmin ListPermissionSetsProvisionedToAccount action.
 * \value ListTagsForResourceAction SsoAdmin ListTagsForResource action.
 * \value ProvisionPermissionSetAction SsoAdmin ProvisionPermissionSet action.
 * \value PutInlinePolicyToPermissionSetAction SsoAdmin PutInlinePolicyToPermissionSet action.
 * \value PutPermissionsBoundaryToPermissionSetAction SsoAdmin PutPermissionsBoundaryToPermissionSet action.
 * \value TagResourceAction SsoAdmin TagResource action.
 * \value UntagResourceAction SsoAdmin UntagResource action.
 * \value UpdateInstanceAccessControlAttributeConfigurationAction SsoAdmin UpdateInstanceAccessControlAttributeConfiguration action.
 * \value UpdatePermissionSetAction SsoAdmin UpdatePermissionSet action.
 */

/*!
 * Constructs a SsoAdminRequest object for SsoAdmin \a action.
 */
SsoAdminRequest::SsoAdminRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SsoAdminRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SsoAdminRequest::SsoAdminRequest(const SsoAdminRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SsoAdminRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SsoAdminRequest object to be equal to \a other.
 */
SsoAdminRequest& SsoAdminRequest::operator=(const SsoAdminRequest &other)
{
    Q_D(SsoAdminRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SsoAdminRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsoAdminRequestPrivate.
 */
SsoAdminRequest::SsoAdminRequest(SsoAdminRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SsoAdmin action to be performed by this request.
 */
SsoAdminRequest::Action SsoAdminRequest::action() const
{
    Q_D(const SsoAdminRequest);
    return d->action;
}

/*!
 * Returns the name of the SsoAdmin action to be performed by this request.
 */
QString SsoAdminRequest::actionString() const
{
    return SsoAdminRequestPrivate::toString(action());
}

/*!
 * Returns the SsoAdmin API version implemented by this request.
 */
QString SsoAdminRequest::apiVersion() const
{
    Q_D(const SsoAdminRequest);
    return d->apiVersion;
}

/*!
 * Sets the SsoAdmin action to be performed by this request to \a action.
 */
void SsoAdminRequest::setAction(const Action action)
{
    Q_D(SsoAdminRequest);
    d->action = action;
}

/*!
 * Sets the SsoAdmin API version to include in this request to \a version.
 */
void SsoAdminRequest::setApiVersion(const QString &version)
{
    Q_D(SsoAdminRequest);
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
bool SsoAdminRequest::operator==(const SsoAdminRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SsoAdmin queue name.
 *
 * @par From SsoAdmin FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SsoAdmin queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SsoAdminRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SsoAdminRequest::clearParameter(const QString &name)
{
    Q_D(SsoAdminRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SsoAdminRequest::clearParameters()
{
    Q_D(SsoAdminRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SsoAdminRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SsoAdminRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SsoAdminRequest::parameters() const
{
    Q_D(const SsoAdminRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SsoAdminRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SsoAdminRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SsoAdminRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SsoAdminRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SsoAdmin request using the given
 * \a endpoint.
 *
 * This SsoAdmin implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SsoAdminRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SsoAdminRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SsoAdmin::SsoAdminRequestPrivate
 * \brief The SsoAdminRequestPrivate class provides private implementation for SsoAdminRequest.
 * \internal
 *
 * \inmodule QtAwsSsoAdmin
 */

/*!
 * Constructs a SsoAdminRequestPrivate object for SsoAdmin \a action,
 * with public implementation \a q.
 */
SsoAdminRequestPrivate::SsoAdminRequestPrivate(const SsoAdminRequest::Action action, SsoAdminRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-07-20"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SsoAdminRequest class's copy constructor.
 */
SsoAdminRequestPrivate::SsoAdminRequestPrivate(const SsoAdminRequestPrivate &other,
                                     SsoAdminRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SsoAdminRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SsoAdmin service's Action
 * query parameters.
 */
QString SsoAdminRequestPrivate::toString(const SsoAdminRequest::Action &action)
{
    #define ActionToString(action) \
        case SsoAdminRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AttachCustomerManagedPolicyReferenceToPermissionSet);
        ActionToString(AttachManagedPolicyToPermissionSet);
        ActionToString(CreateAccountAssignment);
        ActionToString(CreateInstanceAccessControlAttributeConfiguration);
        ActionToString(CreatePermissionSet);
        ActionToString(DeleteAccountAssignment);
        ActionToString(DeleteInlinePolicyFromPermissionSet);
        ActionToString(DeleteInstanceAccessControlAttributeConfiguration);
        ActionToString(DeletePermissionSet);
        ActionToString(DeletePermissionsBoundaryFromPermissionSet);
        ActionToString(DescribeAccountAssignmentCreationStatus);
        ActionToString(DescribeAccountAssignmentDeletionStatus);
        ActionToString(DescribeInstanceAccessControlAttributeConfiguration);
        ActionToString(DescribePermissionSet);
        ActionToString(DescribePermissionSetProvisioningStatus);
        ActionToString(DetachCustomerManagedPolicyReferenceFromPermissionSet);
        ActionToString(DetachManagedPolicyFromPermissionSet);
        ActionToString(GetInlinePolicyForPermissionSet);
        ActionToString(GetPermissionsBoundaryForPermissionSet);
        ActionToString(ListAccountAssignmentCreationStatus);
        ActionToString(ListAccountAssignmentDeletionStatus);
        ActionToString(ListAccountAssignments);
        ActionToString(ListAccountsForProvisionedPermissionSet);
        ActionToString(ListCustomerManagedPolicyReferencesInPermissionSet);
        ActionToString(ListInstances);
        ActionToString(ListManagedPoliciesInPermissionSet);
        ActionToString(ListPermissionSetProvisioningStatus);
        ActionToString(ListPermissionSets);
        ActionToString(ListPermissionSetsProvisionedToAccount);
        ActionToString(ListTagsForResource);
        ActionToString(ProvisionPermissionSet);
        ActionToString(PutInlinePolicyToPermissionSet);
        ActionToString(PutPermissionsBoundaryToPermissionSet);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateInstanceAccessControlAttributeConfiguration);
        ActionToString(UpdatePermissionSet);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SsoAdmin
} // namespace QtAws
