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

#include "ssoadminclient.h"
#include "ssoadminclient_p.h"

#include "core/awssignaturev4.h"
#include "attachmanagedpolicytopermissionsetrequest.h"
#include "attachmanagedpolicytopermissionsetresponse.h"
#include "createaccountassignmentrequest.h"
#include "createaccountassignmentresponse.h"
#include "createinstanceaccesscontrolattributeconfigurationrequest.h"
#include "createinstanceaccesscontrolattributeconfigurationresponse.h"
#include "createpermissionsetrequest.h"
#include "createpermissionsetresponse.h"
#include "deleteaccountassignmentrequest.h"
#include "deleteaccountassignmentresponse.h"
#include "deleteinlinepolicyfrompermissionsetrequest.h"
#include "deleteinlinepolicyfrompermissionsetresponse.h"
#include "deleteinstanceaccesscontrolattributeconfigurationrequest.h"
#include "deleteinstanceaccesscontrolattributeconfigurationresponse.h"
#include "deletepermissionsetrequest.h"
#include "deletepermissionsetresponse.h"
#include "describeaccountassignmentcreationstatusrequest.h"
#include "describeaccountassignmentcreationstatusresponse.h"
#include "describeaccountassignmentdeletionstatusrequest.h"
#include "describeaccountassignmentdeletionstatusresponse.h"
#include "describeinstanceaccesscontrolattributeconfigurationrequest.h"
#include "describeinstanceaccesscontrolattributeconfigurationresponse.h"
#include "describepermissionsetrequest.h"
#include "describepermissionsetresponse.h"
#include "describepermissionsetprovisioningstatusrequest.h"
#include "describepermissionsetprovisioningstatusresponse.h"
#include "detachmanagedpolicyfrompermissionsetrequest.h"
#include "detachmanagedpolicyfrompermissionsetresponse.h"
#include "getinlinepolicyforpermissionsetrequest.h"
#include "getinlinepolicyforpermissionsetresponse.h"
#include "listaccountassignmentcreationstatusrequest.h"
#include "listaccountassignmentcreationstatusresponse.h"
#include "listaccountassignmentdeletionstatusrequest.h"
#include "listaccountassignmentdeletionstatusresponse.h"
#include "listaccountassignmentsrequest.h"
#include "listaccountassignmentsresponse.h"
#include "listaccountsforprovisionedpermissionsetrequest.h"
#include "listaccountsforprovisionedpermissionsetresponse.h"
#include "listinstancesrequest.h"
#include "listinstancesresponse.h"
#include "listmanagedpoliciesinpermissionsetrequest.h"
#include "listmanagedpoliciesinpermissionsetresponse.h"
#include "listpermissionsetprovisioningstatusrequest.h"
#include "listpermissionsetprovisioningstatusresponse.h"
#include "listpermissionsetsrequest.h"
#include "listpermissionsetsresponse.h"
#include "listpermissionsetsprovisionedtoaccountrequest.h"
#include "listpermissionsetsprovisionedtoaccountresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "provisionpermissionsetrequest.h"
#include "provisionpermissionsetresponse.h"
#include "putinlinepolicytopermissionsetrequest.h"
#include "putinlinepolicytopermissionsetresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateinstanceaccesscontrolattributeconfigurationrequest.h"
#include "updateinstanceaccesscontrolattributeconfigurationresponse.h"
#include "updatepermissionsetrequest.h"
#include "updatepermissionsetresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SSOAdmin
 * \brief Contains classess for accessing AWS Single Sign-On Admin (SSO Admin).
 *
 * \inmodule QtAwsSSOAdmin
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::SSOAdminClient
 * \brief The SSOAdminClient class provides access to the AWS Single Sign-On Admin (SSO Admin) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSSOAdmin
 *
 */

/*!
 * \brief Constructs a SSOAdminClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SSOAdminClient::SSOAdminClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SSOAdminClientPrivate(this), parent)
{
    Q_D(SSOAdminClient);
    d->apiVersion = QStringLiteral("2020-07-20");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("sso");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Single Sign-On Admin");
    d->serviceName = QStringLiteral("sso");
}

/*!
 * \overload SSOAdminClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SSOAdminClient::SSOAdminClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SSOAdminClientPrivate(this), parent)
{
    Q_D(SSOAdminClient);
    d->apiVersion = QStringLiteral("2020-07-20");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("sso");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Single Sign-On Admin");
    d->serviceName = QStringLiteral("sso");
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * AttachManagedPolicyToPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches an IAM managed policy ARN to a permission
 *
 * set> <note>
 *
 * If the permission set is already referenced by one or more account assignments, you will need to call <code>
 * <a>ProvisionPermissionSet</a> </code> after this action to apply the corresponding IAM policy updates to all assigned
 */
AttachManagedPolicyToPermissionSetResponse * SSOAdminClient::attachManagedPolicyToPermissionSet(const AttachManagedPolicyToPermissionSetRequest &request)
{
    return qobject_cast<AttachManagedPolicyToPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * CreateAccountAssignmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns access to a principal for a specified AWS account using a specified permission
 *
 * set> <note>
 *
 * The term <i>principal</i> here refers to a user or group that is defined in AWS
 *
 * SSO> </note> <note>
 *
 * As part of a successful <code>CreateAccountAssignment</code> call, the specified permission set will automatically be
 * provisioned to the account in the form of an IAM policy attached to the SSO-created IAM role. If the permission set is
 * subsequently updated, the corresponding IAM policies attached to roles in your accounts will not be updated
 * automatically. In this case, you will need to call <code> <a>ProvisionPermissionSet</a> </code> to make these
 */
CreateAccountAssignmentResponse * SSOAdminClient::createAccountAssignment(const CreateAccountAssignmentRequest &request)
{
    return qobject_cast<CreateAccountAssignmentResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * CreateInstanceAccessControlAttributeConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the attributes-based access control (ABAC) feature for the specified AWS SSO instance. You can also specify new
 * attributes to add to your ABAC configuration during the enabling process. For more information about ABAC, see <a
 * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access Control</a> in the <i>AWS SSO User
 */
CreateInstanceAccessControlAttributeConfigurationResponse * SSOAdminClient::createInstanceAccessControlAttributeConfiguration(const CreateInstanceAccessControlAttributeConfigurationRequest &request)
{
    return qobject_cast<CreateInstanceAccessControlAttributeConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * CreatePermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a permission set within a specified SSO
 *
 * instance> <note>
 *
 * To grant users and groups access to AWS account resources, use <code> <a>CreateAccountAssignment</a>
 */
CreatePermissionSetResponse * SSOAdminClient::createPermissionSet(const CreatePermissionSetRequest &request)
{
    return qobject_cast<CreatePermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * DeleteAccountAssignmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a principal's access from a specified AWS account using a specified permission
 */
DeleteAccountAssignmentResponse * SSOAdminClient::deleteAccountAssignment(const DeleteAccountAssignmentRequest &request)
{
    return qobject_cast<DeleteAccountAssignmentResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * DeleteInlinePolicyFromPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the inline policy from a specified permission
 */
DeleteInlinePolicyFromPermissionSetResponse * SSOAdminClient::deleteInlinePolicyFromPermissionSet(const DeleteInlinePolicyFromPermissionSetRequest &request)
{
    return qobject_cast<DeleteInlinePolicyFromPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * DeleteInstanceAccessControlAttributeConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the attributes-based access control (ABAC) feature for the specified AWS SSO instance and deletes all of the
 * attribute mappings that have been configured. Once deleted, any attributes that are received from an identity source and
 * any custom attributes you have previously configured will not be passed. For more information about ABAC, see <a
 * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access Control</a> in the <i>AWS SSO User
 */
DeleteInstanceAccessControlAttributeConfigurationResponse * SSOAdminClient::deleteInstanceAccessControlAttributeConfiguration(const DeleteInstanceAccessControlAttributeConfigurationRequest &request)
{
    return qobject_cast<DeleteInstanceAccessControlAttributeConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * DeletePermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified permission
 */
DeletePermissionSetResponse * SSOAdminClient::deletePermissionSet(const DeletePermissionSetRequest &request)
{
    return qobject_cast<DeletePermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * DescribeAccountAssignmentCreationStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the status of the assignment creation
 */
DescribeAccountAssignmentCreationStatusResponse * SSOAdminClient::describeAccountAssignmentCreationStatus(const DescribeAccountAssignmentCreationStatusRequest &request)
{
    return qobject_cast<DescribeAccountAssignmentCreationStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * DescribeAccountAssignmentDeletionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the status of the assignment deletion
 */
DescribeAccountAssignmentDeletionStatusResponse * SSOAdminClient::describeAccountAssignmentDeletionStatus(const DescribeAccountAssignmentDeletionStatusRequest &request)
{
    return qobject_cast<DescribeAccountAssignmentDeletionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * DescribeInstanceAccessControlAttributeConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of AWS SSO identity store attributes that have been configured to work with attributes-based access
 * control (ABAC) for the specified AWS SSO instance. This will not return attributes configured and sent by an external
 * identity provider. For more information about ABAC, see <a
 * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access Control</a> in the <i>AWS SSO User
 */
DescribeInstanceAccessControlAttributeConfigurationResponse * SSOAdminClient::describeInstanceAccessControlAttributeConfiguration(const DescribeInstanceAccessControlAttributeConfigurationRequest &request)
{
    return qobject_cast<DescribeInstanceAccessControlAttributeConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * DescribePermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the details of the permission
 */
DescribePermissionSetResponse * SSOAdminClient::describePermissionSet(const DescribePermissionSetRequest &request)
{
    return qobject_cast<DescribePermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * DescribePermissionSetProvisioningStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the status for the given permission set provisioning
 */
DescribePermissionSetProvisioningStatusResponse * SSOAdminClient::describePermissionSetProvisioningStatus(const DescribePermissionSetProvisioningStatusRequest &request)
{
    return qobject_cast<DescribePermissionSetProvisioningStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * DetachManagedPolicyFromPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches the attached IAM managed policy ARN from the specified permission
 */
DetachManagedPolicyFromPermissionSetResponse * SSOAdminClient::detachManagedPolicyFromPermissionSet(const DetachManagedPolicyFromPermissionSetRequest &request)
{
    return qobject_cast<DetachManagedPolicyFromPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * GetInlinePolicyForPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Obtains the inline policy assigned to the permission
 */
GetInlinePolicyForPermissionSetResponse * SSOAdminClient::getInlinePolicyForPermissionSet(const GetInlinePolicyForPermissionSetRequest &request)
{
    return qobject_cast<GetInlinePolicyForPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * ListAccountAssignmentCreationStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the status of the AWS account assignment creation requests for a specified SSO
 */
ListAccountAssignmentCreationStatusResponse * SSOAdminClient::listAccountAssignmentCreationStatus(const ListAccountAssignmentCreationStatusRequest &request)
{
    return qobject_cast<ListAccountAssignmentCreationStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * ListAccountAssignmentDeletionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the status of the AWS account assignment deletion requests for a specified SSO
 */
ListAccountAssignmentDeletionStatusResponse * SSOAdminClient::listAccountAssignmentDeletionStatus(const ListAccountAssignmentDeletionStatusRequest &request)
{
    return qobject_cast<ListAccountAssignmentDeletionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * ListAccountAssignmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the assignee of the specified AWS account with the specified permission
 */
ListAccountAssignmentsResponse * SSOAdminClient::listAccountAssignments(const ListAccountAssignmentsRequest &request)
{
    return qobject_cast<ListAccountAssignmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * ListAccountsForProvisionedPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the AWS accounts where the specified permission set is
 */
ListAccountsForProvisionedPermissionSetResponse * SSOAdminClient::listAccountsForProvisionedPermissionSet(const ListAccountsForProvisionedPermissionSetRequest &request)
{
    return qobject_cast<ListAccountsForProvisionedPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * ListInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the SSO instances that the caller has access
 */
ListInstancesResponse * SSOAdminClient::listInstances(const ListInstancesRequest &request)
{
    return qobject_cast<ListInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * ListManagedPoliciesInPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the IAM managed policy that is attached to a specified permission
 */
ListManagedPoliciesInPermissionSetResponse * SSOAdminClient::listManagedPoliciesInPermissionSet(const ListManagedPoliciesInPermissionSetRequest &request)
{
    return qobject_cast<ListManagedPoliciesInPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * ListPermissionSetProvisioningStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the status of the permission set provisioning requests for a specified SSO
 */
ListPermissionSetProvisioningStatusResponse * SSOAdminClient::listPermissionSetProvisioningStatus(const ListPermissionSetProvisioningStatusRequest &request)
{
    return qobject_cast<ListPermissionSetProvisioningStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * ListPermissionSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the <a>PermissionSet</a>s in an SSO
 */
ListPermissionSetsResponse * SSOAdminClient::listPermissionSets(const ListPermissionSetsRequest &request)
{
    return qobject_cast<ListPermissionSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * ListPermissionSetsProvisionedToAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the permission sets that are provisioned to a specified AWS
 */
ListPermissionSetsProvisionedToAccountResponse * SSOAdminClient::listPermissionSetsProvisionedToAccount(const ListPermissionSetsProvisionedToAccountRequest &request)
{
    return qobject_cast<ListPermissionSetsProvisionedToAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that are attached to a specified
 */
ListTagsForResourceResponse * SSOAdminClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * ProvisionPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The process by which a specified permission set is provisioned to the specified
 */
ProvisionPermissionSetResponse * SSOAdminClient::provisionPermissionSet(const ProvisionPermissionSetRequest &request)
{
    return qobject_cast<ProvisionPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * PutInlinePolicyToPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches an IAM inline policy to a permission
 *
 * set> <note>
 *
 * If the permission set is already referenced by one or more account assignments, you will need to call <code>
 * <a>ProvisionPermissionSet</a> </code> after this action to apply the corresponding IAM policy updates to all assigned
 */
PutInlinePolicyToPermissionSetResponse * SSOAdminClient::putInlinePolicyToPermissionSet(const PutInlinePolicyToPermissionSetRequest &request)
{
    return qobject_cast<PutInlinePolicyToPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a set of tags with a specified
 */
TagResourceResponse * SSOAdminClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a set of tags from a specified
 */
UntagResourceResponse * SSOAdminClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * UpdateInstanceAccessControlAttributeConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the AWS SSO identity store attributes to use with the AWS SSO instance for attributes-based access control
 * (ABAC). When using an external identity provider as an identity source, you can pass attributes through the SAML
 * assertion as an alternative to configuring attributes from the AWS SSO identity store. If a SAML assertion passes any of
 * these attributes, AWS SSO will replace the attribute value with the value from the AWS SSO identity store. For more
 * information about ABAC, see <a href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access Control</a> in the
 * <i>AWS SSO User
 */
UpdateInstanceAccessControlAttributeConfigurationResponse * SSOAdminClient::updateInstanceAccessControlAttributeConfiguration(const UpdateInstanceAccessControlAttributeConfigurationRequest &request)
{
    return qobject_cast<UpdateInstanceAccessControlAttributeConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SSOAdminClient service, and returns a pointer to an
 * UpdatePermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing permission
 */
UpdatePermissionSetResponse * SSOAdminClient::updatePermissionSet(const UpdatePermissionSetRequest &request)
{
    return qobject_cast<UpdatePermissionSetResponse *>(send(request));
}

/*!
 * \class QtAws::SSOAdmin::SSOAdminClientPrivate
 * \brief The SSOAdminClientPrivate class provides private implementation for SSOAdminClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a SSOAdminClientPrivate object with public implementation \a q.
 */
SSOAdminClientPrivate::SSOAdminClientPrivate(SSOAdminClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SSOAdmin
} // namespace QtAws
