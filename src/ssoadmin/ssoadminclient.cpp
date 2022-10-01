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
#include "attachcustomermanagedpolicyreferencetopermissionsetrequest.h"
#include "attachcustomermanagedpolicyreferencetopermissionsetresponse.h"
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
#include "deletepermissionsboundaryfrompermissionsetrequest.h"
#include "deletepermissionsboundaryfrompermissionsetresponse.h"
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
#include "detachcustomermanagedpolicyreferencefrompermissionsetrequest.h"
#include "detachcustomermanagedpolicyreferencefrompermissionsetresponse.h"
#include "detachmanagedpolicyfrompermissionsetrequest.h"
#include "detachmanagedpolicyfrompermissionsetresponse.h"
#include "getinlinepolicyforpermissionsetrequest.h"
#include "getinlinepolicyforpermissionsetresponse.h"
#include "getpermissionsboundaryforpermissionsetrequest.h"
#include "getpermissionsboundaryforpermissionsetresponse.h"
#include "listaccountassignmentcreationstatusrequest.h"
#include "listaccountassignmentcreationstatusresponse.h"
#include "listaccountassignmentdeletionstatusrequest.h"
#include "listaccountassignmentdeletionstatusresponse.h"
#include "listaccountassignmentsrequest.h"
#include "listaccountassignmentsresponse.h"
#include "listaccountsforprovisionedpermissionsetrequest.h"
#include "listaccountsforprovisionedpermissionsetresponse.h"
#include "listcustomermanagedpolicyreferencesinpermissionsetrequest.h"
#include "listcustomermanagedpolicyreferencesinpermissionsetresponse.h"
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
#include "putpermissionsboundarytopermissionsetrequest.h"
#include "putpermissionsboundarytopermissionsetresponse.h"
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
 * \namespace QtAws::SsoAdmin
 * \brief Contains classess for accessing AWS Single Sign-On Admin.
 *
 * \inmodule QtAwsSsoAdmin
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SsoAdmin {

/*!
 * \class QtAws::SsoAdmin::SsoAdminClient
 * \brief The SsoAdminClient class provides access to the AWS Single Sign-On Admin service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSsoAdmin
 *
 *  AWS IAM Identity Center (successor to AWS Single Sign-On) helps you securely create, or connect, your workforce
 *  identities and manage their access centrally across AWS accounts and applications. IAM Identity Center is the
 *  recommended approach for workforce authentication and authorization in AWS, for organizations of any size and
 * 
 *  type> <note>
 * 
 *  Although AWS Single Sign-On was renamed, the <code>sso</code> and <code>identitystore</code> API namespaces will
 *  continue to retain their original name for backward compatibility purposes. For more information, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM Identity Center
 * 
 *  rename</a>> </note>
 * 
 *  This reference guide provides information on single sign-on operations which could be used for access management of AWS
 *  accounts. For information about IAM Identity Center features, see the <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">IAM Identity Center User
 * 
 *  Guide</a>>
 * 
 *  Many operations in the IAM Identity Center APIs rely on identifiers for users and groups, known as principals. For more
 *  information about how to work with principals and principal IDs in IAM Identity Center, see the <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/welcome.html">Identity Store API
 * 
 *  Reference</a>> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .Net, iOS, Android, and more). The SDKs provide a convenient way to create programmatic access to IAM Identity Center
 *  and other AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 */

/*!
 * \brief Constructs a SsoAdminClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SsoAdminClient::SsoAdminClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SsoAdminClientPrivate(this), parent)
{
    Q_D(SsoAdminClient);
    d->apiVersion = QStringLiteral("2020-07-20");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("sso");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Single Sign-On Admin");
    d->serviceName = QStringLiteral("sso");
}

/*!
 * \overload SsoAdminClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SsoAdminClient::SsoAdminClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SsoAdminClientPrivate(this), parent)
{
    Q_D(SsoAdminClient);
    d->apiVersion = QStringLiteral("2020-07-20");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("sso");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Single Sign-On Admin");
    d->serviceName = QStringLiteral("sso");
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * AttachCustomerManagedPolicyReferenceToPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches the specified customer managed policy to the specified
 */
AttachCustomerManagedPolicyReferenceToPermissionSetResponse * SsoAdminClient::attachCustomerManagedPolicyReferenceToPermissionSet(const AttachCustomerManagedPolicyReferenceToPermissionSetRequest &request)
{
    return qobject_cast<AttachCustomerManagedPolicyReferenceToPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * AttachManagedPolicyToPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches an AWS managed policy ARN to a permission
 *
 * set> <note>
 *
 * If the permission set is already referenced by one or more account assignments, you will need to call <code>
 * <a>ProvisionPermissionSet</a> </code> after this operation. Calling <code>ProvisionPermissionSet</code> applies the
 * corresponding IAM policy updates to all assigned
 */
AttachManagedPolicyToPermissionSetResponse * SsoAdminClient::attachManagedPolicyToPermissionSet(const AttachManagedPolicyToPermissionSetRequest &request)
{
    return qobject_cast<AttachManagedPolicyToPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * CreateAccountAssignmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns access to a principal for a specified AWS account using a specified permission
 *
 * set> <note>
 *
 * The term <i>principal</i> here refers to a user or group that is defined in IAM Identity
 *
 * Center> </note> <note>
 *
 * As part of a successful <code>CreateAccountAssignment</code> call, the specified permission set will automatically be
 * provisioned to the account in the form of an IAM policy. That policy is attached to the IAM role created in IAM Identity
 * Center. If the permission set is subsequently updated, the corresponding IAM policies attached to roles in your accounts
 * will not be updated automatically. In this case, you must call <code> <a>ProvisionPermissionSet</a> </code> to make
 * these
 *
 * updates> </note> <note>
 *
 * After a successful response, call <code>DescribeAccountAssignmentCreationStatus</code> to describe the status of an
 * assignment creation request.
 */
CreateAccountAssignmentResponse * SsoAdminClient::createAccountAssignment(const CreateAccountAssignmentRequest &request)
{
    return qobject_cast<CreateAccountAssignmentResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * CreateInstanceAccessControlAttributeConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the attributes-based access control (ABAC) feature for the specified IAM Identity Center instance. You can also
 * specify new attributes to add to your ABAC configuration during the enabling process. For more information about ABAC,
 * see <a href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access Control</a> in the <i>IAM Identity Center
 * User
 *
 * Guide</i>> <note>
 *
 * After a successful response, call <code>DescribeInstanceAccessControlAttributeConfiguration</code> to validate that
 * <code>InstanceAccessControlAttributeConfiguration</code> was
 */
CreateInstanceAccessControlAttributeConfigurationResponse * SsoAdminClient::createInstanceAccessControlAttributeConfiguration(const CreateInstanceAccessControlAttributeConfigurationRequest &request)
{
    return qobject_cast<CreateInstanceAccessControlAttributeConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * CreatePermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a permission set within a specified IAM Identity Center
 *
 * instance> <note>
 *
 * To grant users and groups access to AWS account resources, use <code> <a>CreateAccountAssignment</a>
 */
CreatePermissionSetResponse * SsoAdminClient::createPermissionSet(const CreatePermissionSetRequest &request)
{
    return qobject_cast<CreatePermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * DeleteAccountAssignmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a principal's access from a specified AWS account using a specified permission
 *
 * set> <note>
 *
 * After a successful response, call <code>DescribeAccountAssignmentCreationStatus</code> to describe the status of an
 * assignment deletion
 */
DeleteAccountAssignmentResponse * SsoAdminClient::deleteAccountAssignment(const DeleteAccountAssignmentRequest &request)
{
    return qobject_cast<DeleteAccountAssignmentResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * DeleteInlinePolicyFromPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the inline policy from a specified permission
 */
DeleteInlinePolicyFromPermissionSetResponse * SsoAdminClient::deleteInlinePolicyFromPermissionSet(const DeleteInlinePolicyFromPermissionSetRequest &request)
{
    return qobject_cast<DeleteInlinePolicyFromPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * DeleteInstanceAccessControlAttributeConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the attributes-based access control (ABAC) feature for the specified IAM Identity Center instance and deletes
 * all of the attribute mappings that have been configured. Once deleted, any attributes that are received from an identity
 * source and any custom attributes you have previously configured will not be passed. For more information about ABAC, see
 * <a href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access Control</a> in the <i>IAM Identity Center User
 */
DeleteInstanceAccessControlAttributeConfigurationResponse * SsoAdminClient::deleteInstanceAccessControlAttributeConfiguration(const DeleteInstanceAccessControlAttributeConfigurationRequest &request)
{
    return qobject_cast<DeleteInstanceAccessControlAttributeConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * DeletePermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified permission
 */
DeletePermissionSetResponse * SsoAdminClient::deletePermissionSet(const DeletePermissionSetRequest &request)
{
    return qobject_cast<DeletePermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * DeletePermissionsBoundaryFromPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the permissions boundary from a specified
 */
DeletePermissionsBoundaryFromPermissionSetResponse * SsoAdminClient::deletePermissionsBoundaryFromPermissionSet(const DeletePermissionsBoundaryFromPermissionSetRequest &request)
{
    return qobject_cast<DeletePermissionsBoundaryFromPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * DescribeAccountAssignmentCreationStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the status of the assignment creation
 */
DescribeAccountAssignmentCreationStatusResponse * SsoAdminClient::describeAccountAssignmentCreationStatus(const DescribeAccountAssignmentCreationStatusRequest &request)
{
    return qobject_cast<DescribeAccountAssignmentCreationStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * DescribeAccountAssignmentDeletionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the status of the assignment deletion
 */
DescribeAccountAssignmentDeletionStatusResponse * SsoAdminClient::describeAccountAssignmentDeletionStatus(const DescribeAccountAssignmentDeletionStatusRequest &request)
{
    return qobject_cast<DescribeAccountAssignmentDeletionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * DescribeInstanceAccessControlAttributeConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of IAM Identity Center identity store attributes that have been configured to work with
 * attributes-based access control (ABAC) for the specified IAM Identity Center instance. This will not return attributes
 * configured and sent by an external identity provider. For more information about ABAC, see <a
 * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access Control</a> in the <i>IAM Identity Center User
 */
DescribeInstanceAccessControlAttributeConfigurationResponse * SsoAdminClient::describeInstanceAccessControlAttributeConfiguration(const DescribeInstanceAccessControlAttributeConfigurationRequest &request)
{
    return qobject_cast<DescribeInstanceAccessControlAttributeConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * DescribePermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the details of the permission
 */
DescribePermissionSetResponse * SsoAdminClient::describePermissionSet(const DescribePermissionSetRequest &request)
{
    return qobject_cast<DescribePermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * DescribePermissionSetProvisioningStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the status for the given permission set provisioning
 */
DescribePermissionSetProvisioningStatusResponse * SsoAdminClient::describePermissionSetProvisioningStatus(const DescribePermissionSetProvisioningStatusRequest &request)
{
    return qobject_cast<DescribePermissionSetProvisioningStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * DetachCustomerManagedPolicyReferenceFromPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches the specified customer managed policy from the specified
 */
DetachCustomerManagedPolicyReferenceFromPermissionSetResponse * SsoAdminClient::detachCustomerManagedPolicyReferenceFromPermissionSet(const DetachCustomerManagedPolicyReferenceFromPermissionSetRequest &request)
{
    return qobject_cast<DetachCustomerManagedPolicyReferenceFromPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * DetachManagedPolicyFromPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches the attached AWS managed policy ARN from the specified permission
 */
DetachManagedPolicyFromPermissionSetResponse * SsoAdminClient::detachManagedPolicyFromPermissionSet(const DetachManagedPolicyFromPermissionSetRequest &request)
{
    return qobject_cast<DetachManagedPolicyFromPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * GetInlinePolicyForPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Obtains the inline policy assigned to the permission
 */
GetInlinePolicyForPermissionSetResponse * SsoAdminClient::getInlinePolicyForPermissionSet(const GetInlinePolicyForPermissionSetRequest &request)
{
    return qobject_cast<GetInlinePolicyForPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * GetPermissionsBoundaryForPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Obtains the permissions boundary for a specified
 */
GetPermissionsBoundaryForPermissionSetResponse * SsoAdminClient::getPermissionsBoundaryForPermissionSet(const GetPermissionsBoundaryForPermissionSetRequest &request)
{
    return qobject_cast<GetPermissionsBoundaryForPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * ListAccountAssignmentCreationStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the status of the AWS account assignment creation requests for a specified IAM Identity Center
 */
ListAccountAssignmentCreationStatusResponse * SsoAdminClient::listAccountAssignmentCreationStatus(const ListAccountAssignmentCreationStatusRequest &request)
{
    return qobject_cast<ListAccountAssignmentCreationStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * ListAccountAssignmentDeletionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the status of the AWS account assignment deletion requests for a specified IAM Identity Center
 */
ListAccountAssignmentDeletionStatusResponse * SsoAdminClient::listAccountAssignmentDeletionStatus(const ListAccountAssignmentDeletionStatusRequest &request)
{
    return qobject_cast<ListAccountAssignmentDeletionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * ListAccountAssignmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the assignee of the specified AWS account with the specified permission
 */
ListAccountAssignmentsResponse * SsoAdminClient::listAccountAssignments(const ListAccountAssignmentsRequest &request)
{
    return qobject_cast<ListAccountAssignmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * ListAccountsForProvisionedPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the AWS accounts where the specified permission set is
 */
ListAccountsForProvisionedPermissionSetResponse * SsoAdminClient::listAccountsForProvisionedPermissionSet(const ListAccountsForProvisionedPermissionSetRequest &request)
{
    return qobject_cast<ListAccountsForProvisionedPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * ListCustomerManagedPolicyReferencesInPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all customer managed policies attached to a specified
 */
ListCustomerManagedPolicyReferencesInPermissionSetResponse * SsoAdminClient::listCustomerManagedPolicyReferencesInPermissionSet(const ListCustomerManagedPolicyReferencesInPermissionSetRequest &request)
{
    return qobject_cast<ListCustomerManagedPolicyReferencesInPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * ListInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the IAM Identity Center instances that the caller has access
 */
ListInstancesResponse * SsoAdminClient::listInstances(const ListInstancesRequest &request)
{
    return qobject_cast<ListInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * ListManagedPoliciesInPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the AWS managed policy that is attached to a specified permission
 */
ListManagedPoliciesInPermissionSetResponse * SsoAdminClient::listManagedPoliciesInPermissionSet(const ListManagedPoliciesInPermissionSetRequest &request)
{
    return qobject_cast<ListManagedPoliciesInPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * ListPermissionSetProvisioningStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the status of the permission set provisioning requests for a specified IAM Identity Center
 */
ListPermissionSetProvisioningStatusResponse * SsoAdminClient::listPermissionSetProvisioningStatus(const ListPermissionSetProvisioningStatusRequest &request)
{
    return qobject_cast<ListPermissionSetProvisioningStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * ListPermissionSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the <a>PermissionSet</a>s in an IAM Identity Center
 */
ListPermissionSetsResponse * SsoAdminClient::listPermissionSets(const ListPermissionSetsRequest &request)
{
    return qobject_cast<ListPermissionSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * ListPermissionSetsProvisionedToAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the permission sets that are provisioned to a specified AWS
 */
ListPermissionSetsProvisionedToAccountResponse * SsoAdminClient::listPermissionSetsProvisionedToAccount(const ListPermissionSetsProvisionedToAccountRequest &request)
{
    return qobject_cast<ListPermissionSetsProvisionedToAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that are attached to a specified
 */
ListTagsForResourceResponse * SsoAdminClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * ProvisionPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The process by which a specified permission set is provisioned to the specified
 */
ProvisionPermissionSetResponse * SsoAdminClient::provisionPermissionSet(const ProvisionPermissionSetRequest &request)
{
    return qobject_cast<ProvisionPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * PutInlinePolicyToPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches an inline policy to a permission
 *
 * set> <note>
 *
 * If the permission set is already referenced by one or more account assignments, you will need to call <code>
 * <a>ProvisionPermissionSet</a> </code> after this action to apply the corresponding IAM policy updates to all assigned
 */
PutInlinePolicyToPermissionSetResponse * SsoAdminClient::putInlinePolicyToPermissionSet(const PutInlinePolicyToPermissionSetRequest &request)
{
    return qobject_cast<PutInlinePolicyToPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * PutPermissionsBoundaryToPermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches an AWS managed or customer managed policy to the specified <a>PermissionSet</a> as a permissions
 */
PutPermissionsBoundaryToPermissionSetResponse * SsoAdminClient::putPermissionsBoundaryToPermissionSet(const PutPermissionsBoundaryToPermissionSetRequest &request)
{
    return qobject_cast<PutPermissionsBoundaryToPermissionSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a set of tags with a specified
 */
TagResourceResponse * SsoAdminClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a set of tags from a specified
 */
UntagResourceResponse * SsoAdminClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * UpdateInstanceAccessControlAttributeConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the IAM Identity Center identity store attributes that you can use with the IAM Identity Center instance for
 * attributes-based access control (ABAC). When using an external identity provider as an identity source, you can pass
 * attributes through the SAML assertion as an alternative to configuring attributes from the IAM Identity Center identity
 * store. If a SAML assertion passes any of these attributes, IAM Identity Center replaces the attribute value with the
 * value from the IAM Identity Center identity store. For more information about ABAC, see <a
 * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access Control</a> in the <i>IAM Identity Center User
 */
UpdateInstanceAccessControlAttributeConfigurationResponse * SsoAdminClient::updateInstanceAccessControlAttributeConfiguration(const UpdateInstanceAccessControlAttributeConfigurationRequest &request)
{
    return qobject_cast<UpdateInstanceAccessControlAttributeConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoAdminClient service, and returns a pointer to an
 * UpdatePermissionSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing permission
 */
UpdatePermissionSetResponse * SsoAdminClient::updatePermissionSet(const UpdatePermissionSetRequest &request)
{
    return qobject_cast<UpdatePermissionSetResponse *>(send(request));
}

/*!
 * \class QtAws::SsoAdmin::SsoAdminClientPrivate
 * \brief The SsoAdminClientPrivate class provides private implementation for SsoAdminClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSsoAdmin
 */

/*!
 * Constructs a SsoAdminClientPrivate object with public implementation \a q.
 */
SsoAdminClientPrivate::SsoAdminClientPrivate(SsoAdminClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SsoAdmin
} // namespace QtAws
