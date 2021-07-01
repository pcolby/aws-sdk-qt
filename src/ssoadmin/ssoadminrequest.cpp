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

#include "ssoadminrequest.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::SSOAdminRequest
 * \brief The SSOAdminRequest class provides an interface for SSOAdmin requests.
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * \enum SSOAdminRequest::Action
 *
 * This enum describes the actions that can be performed as SSOAdmin
 * requests.
 *
 * \value AttachManagedPolicyToPermissionSetAction SSOAdmin AttachManagedPolicyToPermissionSet action.
 * \value CreateAccountAssignmentAction SSOAdmin CreateAccountAssignment action.
 * \value CreateInstanceAccessControlAttributeConfigurationAction SSOAdmin CreateInstanceAccessControlAttributeConfiguration action.
 * \value CreatePermissionSetAction SSOAdmin CreatePermissionSet action.
 * \value DeleteAccountAssignmentAction SSOAdmin DeleteAccountAssignment action.
 * \value DeleteInlinePolicyFromPermissionSetAction SSOAdmin DeleteInlinePolicyFromPermissionSet action.
 * \value DeleteInstanceAccessControlAttributeConfigurationAction SSOAdmin DeleteInstanceAccessControlAttributeConfiguration action.
 * \value DeletePermissionSetAction SSOAdmin DeletePermissionSet action.
 * \value DescribeAccountAssignmentCreationStatusAction SSOAdmin DescribeAccountAssignmentCreationStatus action.
 * \value DescribeAccountAssignmentDeletionStatusAction SSOAdmin DescribeAccountAssignmentDeletionStatus action.
 * \value DescribeInstanceAccessControlAttributeConfigurationAction SSOAdmin DescribeInstanceAccessControlAttributeConfiguration action.
 * \value DescribePermissionSetAction SSOAdmin DescribePermissionSet action.
 * \value DescribePermissionSetProvisioningStatusAction SSOAdmin DescribePermissionSetProvisioningStatus action.
 * \value DetachManagedPolicyFromPermissionSetAction SSOAdmin DetachManagedPolicyFromPermissionSet action.
 * \value GetInlinePolicyForPermissionSetAction SSOAdmin GetInlinePolicyForPermissionSet action.
 * \value ListAccountAssignmentCreationStatusAction SSOAdmin ListAccountAssignmentCreationStatus action.
 * \value ListAccountAssignmentDeletionStatusAction SSOAdmin ListAccountAssignmentDeletionStatus action.
 * \value ListAccountAssignmentsAction SSOAdmin ListAccountAssignments action.
 * \value ListAccountsForProvisionedPermissionSetAction SSOAdmin ListAccountsForProvisionedPermissionSet action.
 * \value ListInstancesAction SSOAdmin ListInstances action.
 * \value ListManagedPoliciesInPermissionSetAction SSOAdmin ListManagedPoliciesInPermissionSet action.
 * \value ListPermissionSetProvisioningStatusAction SSOAdmin ListPermissionSetProvisioningStatus action.
 * \value ListPermissionSetsAction SSOAdmin ListPermissionSets action.
 * \value ListPermissionSetsProvisionedToAccountAction SSOAdmin ListPermissionSetsProvisionedToAccount action.
 * \value ListTagsForResourceAction SSOAdmin ListTagsForResource action.
 * \value ProvisionPermissionSetAction SSOAdmin ProvisionPermissionSet action.
 * \value PutInlinePolicyToPermissionSetAction SSOAdmin PutInlinePolicyToPermissionSet action.
 * \value TagResourceAction SSOAdmin TagResource action.
 * \value UntagResourceAction SSOAdmin UntagResource action.
 * \value UpdateInstanceAccessControlAttributeConfigurationAction SSOAdmin UpdateInstanceAccessControlAttributeConfiguration action.
 * \value UpdatePermissionSetAction SSOAdmin UpdatePermissionSet action.
 */

/*!
 * Constructs a SSOAdminRequest object for SSOAdmin \a action.
 */
SSOAdminRequest::SSOAdminRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SSOAdminRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SSOAdminRequest::SSOAdminRequest(const SSOAdminRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SSOAdminRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SSOAdminRequest object to be equal to \a other.
 */
SSOAdminRequest& SSOAdminRequest::operator=(const SSOAdminRequest &other)
{
    Q_D(SSOAdminRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SSOAdminRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SSOAdminRequestPrivate.
 */
SSOAdminRequest::SSOAdminRequest(SSOAdminRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SSOAdmin action to be performed by this request.
 */
SSOAdminRequest::Action SSOAdminRequest::action() const
{
    Q_D(const SSOAdminRequest);
    return d->action;
}

/*!
 * Returns the name of the SSOAdmin action to be performed by this request.
 */
QString SSOAdminRequest::actionString() const
{
    return SSOAdminRequestPrivate::toString(action());
}

/*!
 * Returns the SSOAdmin API version implemented by this request.
 */
QString SSOAdminRequest::apiVersion() const
{
    Q_D(const SSOAdminRequest);
    return d->apiVersion;
}

/*!
 * Sets the SSOAdmin action to be performed by this request to \a action.
 */
void SSOAdminRequest::setAction(const Action action)
{
    Q_D(SSOAdminRequest);
    d->action = action;
}

/*!
 * Sets the SSOAdmin API version to include in this request to \a version.
 */
void SSOAdminRequest::setApiVersion(const QString &version)
{
    Q_D(SSOAdminRequest);
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
bool SSOAdminRequest::operator==(const SSOAdminRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SSOAdmin queue name.
 *
 * @par From SSOAdmin FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SSOAdmin queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SSOAdminRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SSOAdminRequest::clearParameter(const QString &name)
{
    Q_D(SSOAdminRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SSOAdminRequest::clearParameters()
{
    Q_D(SSOAdminRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SSOAdminRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SSOAdminRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SSOAdminRequest::parameters() const
{
    Q_D(const SSOAdminRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SSOAdminRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SSOAdminRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SSOAdminRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SSOAdminRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SSOAdmin request using the given
 * \a endpoint.
 *
 * This SSOAdmin implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SSOAdminRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SSOAdminRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SSOAdmin::SSOAdminRequestPrivate
 * \brief The SSOAdminRequestPrivate class provides private implementation for SSOAdminRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a SSOAdminRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
SSOAdminRequestPrivate::SSOAdminRequestPrivate(const SSOAdminRequest::Action action, SSOAdminRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SSOAdminRequest class's copy constructor.
 */
SSOAdminRequestPrivate::SSOAdminRequestPrivate(const SSOAdminRequestPrivate &other,
                                     SSOAdminRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SSOAdminRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SSOAdmin service's Action
 * query parameters.
 */
QString SSOAdminRequestPrivate::toString(const SSOAdminRequest::Action &action)
{
    #define ActionToString(action) \
        case SSOAdminRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AttachManagedPolicyToPermissionSet);
        ActionToString(CreateAccountAssignment);
        ActionToString(CreateInstanceAccessControlAttributeConfiguration);
        ActionToString(CreatePermissionSet);
        ActionToString(DeleteAccountAssignment);
        ActionToString(DeleteInlinePolicyFromPermissionSet);
        ActionToString(DeleteInstanceAccessControlAttributeConfiguration);
        ActionToString(DeletePermissionSet);
        ActionToString(DescribeAccountAssignmentCreationStatus);
        ActionToString(DescribeAccountAssignmentDeletionStatus);
        ActionToString(DescribeInstanceAccessControlAttributeConfiguration);
        ActionToString(DescribePermissionSet);
        ActionToString(DescribePermissionSetProvisioningStatus);
        ActionToString(DetachManagedPolicyFromPermissionSet);
        ActionToString(GetInlinePolicyForPermissionSet);
        ActionToString(ListAccountAssignmentCreationStatus);
        ActionToString(ListAccountAssignmentDeletionStatus);
        ActionToString(ListAccountAssignments);
        ActionToString(ListAccountsForProvisionedPermissionSet);
        ActionToString(ListInstances);
        ActionToString(ListManagedPoliciesInPermissionSet);
        ActionToString(ListPermissionSetProvisioningStatus);
        ActionToString(ListPermissionSets);
        ActionToString(ListPermissionSetsProvisionedToAccount);
        ActionToString(ListTagsForResource);
        ActionToString(ProvisionPermissionSet);
        ActionToString(PutInlinePolicyToPermissionSet);
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

} // namespace SSOAdmin
} // namespace QtAws
