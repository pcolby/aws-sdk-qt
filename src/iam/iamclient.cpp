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

#include "iamclient.h"
#include "iamclient_p.h"

#include "core/awssignaturev4.h"
#include "addclientidtoopenidconnectproviderrequest.h"
#include "addclientidtoopenidconnectproviderresponse.h"
#include "addroletoinstanceprofilerequest.h"
#include "addroletoinstanceprofileresponse.h"
#include "addusertogrouprequest.h"
#include "addusertogroupresponse.h"
#include "attachgrouppolicyrequest.h"
#include "attachgrouppolicyresponse.h"
#include "attachrolepolicyrequest.h"
#include "attachrolepolicyresponse.h"
#include "attachuserpolicyrequest.h"
#include "attachuserpolicyresponse.h"
#include "changepasswordrequest.h"
#include "changepasswordresponse.h"
#include "createaccesskeyrequest.h"
#include "createaccesskeyresponse.h"
#include "createaccountaliasrequest.h"
#include "createaccountaliasresponse.h"
#include "creategrouprequest.h"
#include "creategroupresponse.h"
#include "createinstanceprofilerequest.h"
#include "createinstanceprofileresponse.h"
#include "createloginprofilerequest.h"
#include "createloginprofileresponse.h"
#include "createopenidconnectproviderrequest.h"
#include "createopenidconnectproviderresponse.h"
#include "createpolicyrequest.h"
#include "createpolicyresponse.h"
#include "createpolicyversionrequest.h"
#include "createpolicyversionresponse.h"
#include "createrolerequest.h"
#include "createroleresponse.h"
#include "createsamlproviderrequest.h"
#include "createsamlproviderresponse.h"
#include "createservicelinkedrolerequest.h"
#include "createservicelinkedroleresponse.h"
#include "createservicespecificcredentialrequest.h"
#include "createservicespecificcredentialresponse.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "createvirtualmfadevicerequest.h"
#include "createvirtualmfadeviceresponse.h"
#include "deactivatemfadevicerequest.h"
#include "deactivatemfadeviceresponse.h"
#include "deleteaccesskeyrequest.h"
#include "deleteaccesskeyresponse.h"
#include "deleteaccountaliasrequest.h"
#include "deleteaccountaliasresponse.h"
#include "deleteaccountpasswordpolicyrequest.h"
#include "deleteaccountpasswordpolicyresponse.h"
#include "deletegrouprequest.h"
#include "deletegroupresponse.h"
#include "deletegrouppolicyrequest.h"
#include "deletegrouppolicyresponse.h"
#include "deleteinstanceprofilerequest.h"
#include "deleteinstanceprofileresponse.h"
#include "deleteloginprofilerequest.h"
#include "deleteloginprofileresponse.h"
#include "deleteopenidconnectproviderrequest.h"
#include "deleteopenidconnectproviderresponse.h"
#include "deletepolicyrequest.h"
#include "deletepolicyresponse.h"
#include "deletepolicyversionrequest.h"
#include "deletepolicyversionresponse.h"
#include "deleterolerequest.h"
#include "deleteroleresponse.h"
#include "deleterolepermissionsboundaryrequest.h"
#include "deleterolepermissionsboundaryresponse.h"
#include "deleterolepolicyrequest.h"
#include "deleterolepolicyresponse.h"
#include "deletesamlproviderrequest.h"
#include "deletesamlproviderresponse.h"
#include "deletesshpublickeyrequest.h"
#include "deletesshpublickeyresponse.h"
#include "deleteservercertificaterequest.h"
#include "deleteservercertificateresponse.h"
#include "deleteservicelinkedrolerequest.h"
#include "deleteservicelinkedroleresponse.h"
#include "deleteservicespecificcredentialrequest.h"
#include "deleteservicespecificcredentialresponse.h"
#include "deletesigningcertificaterequest.h"
#include "deletesigningcertificateresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "deleteuserpermissionsboundaryrequest.h"
#include "deleteuserpermissionsboundaryresponse.h"
#include "deleteuserpolicyrequest.h"
#include "deleteuserpolicyresponse.h"
#include "deletevirtualmfadevicerequest.h"
#include "deletevirtualmfadeviceresponse.h"
#include "detachgrouppolicyrequest.h"
#include "detachgrouppolicyresponse.h"
#include "detachrolepolicyrequest.h"
#include "detachrolepolicyresponse.h"
#include "detachuserpolicyrequest.h"
#include "detachuserpolicyresponse.h"
#include "enablemfadevicerequest.h"
#include "enablemfadeviceresponse.h"
#include "generatecredentialreportrequest.h"
#include "generatecredentialreportresponse.h"
#include "generateorganizationsaccessreportrequest.h"
#include "generateorganizationsaccessreportresponse.h"
#include "generateservicelastaccesseddetailsrequest.h"
#include "generateservicelastaccesseddetailsresponse.h"
#include "getaccesskeylastusedrequest.h"
#include "getaccesskeylastusedresponse.h"
#include "getaccountauthorizationdetailsrequest.h"
#include "getaccountauthorizationdetailsresponse.h"
#include "getaccountpasswordpolicyrequest.h"
#include "getaccountpasswordpolicyresponse.h"
#include "getaccountsummaryrequest.h"
#include "getaccountsummaryresponse.h"
#include "getcontextkeysforcustompolicyrequest.h"
#include "getcontextkeysforcustompolicyresponse.h"
#include "getcontextkeysforprincipalpolicyrequest.h"
#include "getcontextkeysforprincipalpolicyresponse.h"
#include "getcredentialreportrequest.h"
#include "getcredentialreportresponse.h"
#include "getgrouprequest.h"
#include "getgroupresponse.h"
#include "getgrouppolicyrequest.h"
#include "getgrouppolicyresponse.h"
#include "getinstanceprofilerequest.h"
#include "getinstanceprofileresponse.h"
#include "getloginprofilerequest.h"
#include "getloginprofileresponse.h"
#include "getopenidconnectproviderrequest.h"
#include "getopenidconnectproviderresponse.h"
#include "getorganizationsaccessreportrequest.h"
#include "getorganizationsaccessreportresponse.h"
#include "getpolicyrequest.h"
#include "getpolicyresponse.h"
#include "getpolicyversionrequest.h"
#include "getpolicyversionresponse.h"
#include "getrolerequest.h"
#include "getroleresponse.h"
#include "getrolepolicyrequest.h"
#include "getrolepolicyresponse.h"
#include "getsamlproviderrequest.h"
#include "getsamlproviderresponse.h"
#include "getsshpublickeyrequest.h"
#include "getsshpublickeyresponse.h"
#include "getservercertificaterequest.h"
#include "getservercertificateresponse.h"
#include "getservicelastaccesseddetailsrequest.h"
#include "getservicelastaccesseddetailsresponse.h"
#include "getservicelastaccesseddetailswithentitiesrequest.h"
#include "getservicelastaccesseddetailswithentitiesresponse.h"
#include "getservicelinkedroledeletionstatusrequest.h"
#include "getservicelinkedroledeletionstatusresponse.h"
#include "getuserrequest.h"
#include "getuserresponse.h"
#include "getuserpolicyrequest.h"
#include "getuserpolicyresponse.h"
#include "listaccesskeysrequest.h"
#include "listaccesskeysresponse.h"
#include "listaccountaliasesrequest.h"
#include "listaccountaliasesresponse.h"
#include "listattachedgrouppoliciesrequest.h"
#include "listattachedgrouppoliciesresponse.h"
#include "listattachedrolepoliciesrequest.h"
#include "listattachedrolepoliciesresponse.h"
#include "listattacheduserpoliciesrequest.h"
#include "listattacheduserpoliciesresponse.h"
#include "listentitiesforpolicyrequest.h"
#include "listentitiesforpolicyresponse.h"
#include "listgrouppoliciesrequest.h"
#include "listgrouppoliciesresponse.h"
#include "listgroupsrequest.h"
#include "listgroupsresponse.h"
#include "listgroupsforuserrequest.h"
#include "listgroupsforuserresponse.h"
#include "listinstanceprofiletagsrequest.h"
#include "listinstanceprofiletagsresponse.h"
#include "listinstanceprofilesrequest.h"
#include "listinstanceprofilesresponse.h"
#include "listinstanceprofilesforrolerequest.h"
#include "listinstanceprofilesforroleresponse.h"
#include "listmfadevicetagsrequest.h"
#include "listmfadevicetagsresponse.h"
#include "listmfadevicesrequest.h"
#include "listmfadevicesresponse.h"
#include "listopenidconnectprovidertagsrequest.h"
#include "listopenidconnectprovidertagsresponse.h"
#include "listopenidconnectprovidersrequest.h"
#include "listopenidconnectprovidersresponse.h"
#include "listpoliciesrequest.h"
#include "listpoliciesresponse.h"
#include "listpoliciesgrantingserviceaccessrequest.h"
#include "listpoliciesgrantingserviceaccessresponse.h"
#include "listpolicytagsrequest.h"
#include "listpolicytagsresponse.h"
#include "listpolicyversionsrequest.h"
#include "listpolicyversionsresponse.h"
#include "listrolepoliciesrequest.h"
#include "listrolepoliciesresponse.h"
#include "listroletagsrequest.h"
#include "listroletagsresponse.h"
#include "listrolesrequest.h"
#include "listrolesresponse.h"
#include "listsamlprovidertagsrequest.h"
#include "listsamlprovidertagsresponse.h"
#include "listsamlprovidersrequest.h"
#include "listsamlprovidersresponse.h"
#include "listsshpublickeysrequest.h"
#include "listsshpublickeysresponse.h"
#include "listservercertificatetagsrequest.h"
#include "listservercertificatetagsresponse.h"
#include "listservercertificatesrequest.h"
#include "listservercertificatesresponse.h"
#include "listservicespecificcredentialsrequest.h"
#include "listservicespecificcredentialsresponse.h"
#include "listsigningcertificatesrequest.h"
#include "listsigningcertificatesresponse.h"
#include "listuserpoliciesrequest.h"
#include "listuserpoliciesresponse.h"
#include "listusertagsrequest.h"
#include "listusertagsresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"
#include "listvirtualmfadevicesrequest.h"
#include "listvirtualmfadevicesresponse.h"
#include "putgrouppolicyrequest.h"
#include "putgrouppolicyresponse.h"
#include "putrolepermissionsboundaryrequest.h"
#include "putrolepermissionsboundaryresponse.h"
#include "putrolepolicyrequest.h"
#include "putrolepolicyresponse.h"
#include "putuserpermissionsboundaryrequest.h"
#include "putuserpermissionsboundaryresponse.h"
#include "putuserpolicyrequest.h"
#include "putuserpolicyresponse.h"
#include "removeclientidfromopenidconnectproviderrequest.h"
#include "removeclientidfromopenidconnectproviderresponse.h"
#include "removerolefrominstanceprofilerequest.h"
#include "removerolefrominstanceprofileresponse.h"
#include "removeuserfromgrouprequest.h"
#include "removeuserfromgroupresponse.h"
#include "resetservicespecificcredentialrequest.h"
#include "resetservicespecificcredentialresponse.h"
#include "resyncmfadevicerequest.h"
#include "resyncmfadeviceresponse.h"
#include "setdefaultpolicyversionrequest.h"
#include "setdefaultpolicyversionresponse.h"
#include "setsecuritytokenservicepreferencesrequest.h"
#include "setsecuritytokenservicepreferencesresponse.h"
#include "simulatecustompolicyrequest.h"
#include "simulatecustompolicyresponse.h"
#include "simulateprincipalpolicyrequest.h"
#include "simulateprincipalpolicyresponse.h"
#include "taginstanceprofilerequest.h"
#include "taginstanceprofileresponse.h"
#include "tagmfadevicerequest.h"
#include "tagmfadeviceresponse.h"
#include "tagopenidconnectproviderrequest.h"
#include "tagopenidconnectproviderresponse.h"
#include "tagpolicyrequest.h"
#include "tagpolicyresponse.h"
#include "tagrolerequest.h"
#include "tagroleresponse.h"
#include "tagsamlproviderrequest.h"
#include "tagsamlproviderresponse.h"
#include "tagservercertificaterequest.h"
#include "tagservercertificateresponse.h"
#include "taguserrequest.h"
#include "taguserresponse.h"
#include "untaginstanceprofilerequest.h"
#include "untaginstanceprofileresponse.h"
#include "untagmfadevicerequest.h"
#include "untagmfadeviceresponse.h"
#include "untagopenidconnectproviderrequest.h"
#include "untagopenidconnectproviderresponse.h"
#include "untagpolicyrequest.h"
#include "untagpolicyresponse.h"
#include "untagrolerequest.h"
#include "untagroleresponse.h"
#include "untagsamlproviderrequest.h"
#include "untagsamlproviderresponse.h"
#include "untagservercertificaterequest.h"
#include "untagservercertificateresponse.h"
#include "untaguserrequest.h"
#include "untaguserresponse.h"
#include "updateaccesskeyrequest.h"
#include "updateaccesskeyresponse.h"
#include "updateaccountpasswordpolicyrequest.h"
#include "updateaccountpasswordpolicyresponse.h"
#include "updateassumerolepolicyrequest.h"
#include "updateassumerolepolicyresponse.h"
#include "updategrouprequest.h"
#include "updategroupresponse.h"
#include "updateloginprofilerequest.h"
#include "updateloginprofileresponse.h"
#include "updateopenidconnectproviderthumbprintrequest.h"
#include "updateopenidconnectproviderthumbprintresponse.h"
#include "updaterolerequest.h"
#include "updateroleresponse.h"
#include "updateroledescriptionrequest.h"
#include "updateroledescriptionresponse.h"
#include "updatesamlproviderrequest.h"
#include "updatesamlproviderresponse.h"
#include "updatesshpublickeyrequest.h"
#include "updatesshpublickeyresponse.h"
#include "updateservercertificaterequest.h"
#include "updateservercertificateresponse.h"
#include "updateservicespecificcredentialrequest.h"
#include "updateservicespecificcredentialresponse.h"
#include "updatesigningcertificaterequest.h"
#include "updatesigningcertificateresponse.h"
#include "updateuserrequest.h"
#include "updateuserresponse.h"
#include "uploadsshpublickeyrequest.h"
#include "uploadsshpublickeyresponse.h"
#include "uploadservercertificaterequest.h"
#include "uploadservercertificateresponse.h"
#include "uploadsigningcertificaterequest.h"
#include "uploadsigningcertificateresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IAM
 * \brief Contains classess for accessing AWS Identity and Access Management (IAM).
 *
 * \inmodule QtAwsIam
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::IamClient
 * \brief The IamClient class provides access to the AWS Identity and Access Management (IAM) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
 */

/*!
 * \brief Constructs a IamClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IamClient::IamClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2010-05-08"),
    QStringLiteral("iam"),
    QStringLiteral("AWS Identity and Access Management"),
    QStringLiteral("iam"),
    parent), d_ptr(new IamClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload IamClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IamClient::IamClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2010-05-08"),
    QStringLiteral("iam"),
    QStringLiteral("AWS Identity and Access Management"),
    QStringLiteral("iam"),
    parent), d_ptr(new IamClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * AddClientIDToOpenIDConnectProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a new client ID (also known as audience) to the list of client IDs already registered for the specified IAM OpenID
 * Connect (OIDC) provider
 *
 * resource>
 *
 * This operation is idempotent; it does not fail or return an error if you add an existing client ID to the
 */
AddClientIDToOpenIDConnectProviderResponse * IamClient::addClientIDToOpenIDConnectProvider(const AddClientIDToOpenIDConnectProviderRequest &request)
{
    return qobject_cast<AddClientIDToOpenIDConnectProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * AddRoleToInstanceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified IAM role to the specified instance profile. An instance profile can contain only one role, and this
 * quota cannot be increased. You can remove the existing role and then add a different role to an instance profile. You
 * must then wait for the change to appear across all of AWS because of <a
 * href="https://en.wikipedia.org/wiki/Eventual_consistency">eventual consistency</a>. To force the change, you must <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DisassociateIamInstanceProfile.html">disassociate the
 * instance profile</a> and then <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_AssociateIamInstanceProfile.html">associate the
 * instance profile</a>, or you can stop your instance and then restart
 *
 * it> <note>
 *
 * The caller of this operation must be granted the <code>PassRole</code> permission on the IAM role by a permissions
 *
 * policy> </note>
 *
 * For more information about roles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with roles</a>. For more
 * information about instance profiles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About instance
 */
AddRoleToInstanceProfileResponse * IamClient::addRoleToInstanceProfile(const AddRoleToInstanceProfileRequest &request)
{
    return qobject_cast<AddRoleToInstanceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * AddUserToGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified user to the specified
 */
AddUserToGroupResponse * IamClient::addUserToGroup(const AddUserToGroupRequest &request)
{
    return qobject_cast<AddUserToGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * AttachGroupPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches the specified managed policy to the specified IAM
 *
 * group>
 *
 * You use this operation to attach a managed policy to a group. To embed an inline policy in a group, use
 *
 * <a>PutGroupPolicy</a>>
 *
 * As a best practice, you can validate your IAM policies. To learn more, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_policy-validator.html">Validating IAM
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For more information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 */
AttachGroupPolicyResponse * IamClient::attachGroupPolicy(const AttachGroupPolicyRequest &request)
{
    return qobject_cast<AttachGroupPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * AttachRolePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches the specified managed policy to the specified IAM role. When you attach a managed policy to a role, the managed
 * policy becomes part of the role's permission (access)
 *
 * policy> <note>
 *
 * You cannot use a managed policy as the role's trust policy. The role's trust policy is created at the same time as the
 * role, using <a>CreateRole</a>. You can update a role's trust policy using
 *
 * <a>UpdateAssumeRolePolicy</a>> </note>
 *
 * Use this operation to attach a <i>managed</i> policy to a role. To embed an inline policy in a role, use
 * <a>PutRolePolicy</a>. For more information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * As a best practice, you can validate your IAM policies. To learn more, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_policy-validator.html">Validating IAM
 * policies</a> in the <i>IAM User
 */
AttachRolePolicyResponse * IamClient::attachRolePolicy(const AttachRolePolicyRequest &request)
{
    return qobject_cast<AttachRolePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * AttachUserPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches the specified managed policy to the specified
 *
 * user>
 *
 * You use this operation to attach a <i>managed</i> policy to a user. To embed an inline policy in a user, use
 *
 * <a>PutUserPolicy</a>>
 *
 * As a best practice, you can validate your IAM policies. To learn more, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_policy-validator.html">Validating IAM
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For more information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 */
AttachUserPolicyResponse * IamClient::attachUserPolicy(const AttachUserPolicyRequest &request)
{
    return qobject_cast<AttachUserPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ChangePasswordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the password of the IAM user who is calling this operation. This operation can be performed using the AWS CLI,
 * the AWS API, or the <b>My Security Credentials</b> page in the AWS Management Console. The AWS account root user
 * password is not affected by this
 *
 * operation>
 *
 * Use <a>UpdateLoginProfile</a> to use the AWS CLI, the AWS API, or the <b>Users</b> page in the IAM console to change the
 * password for any IAM user. For more information about modifying passwords, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing passwords</a> in the <i>IAM
 * User
 */
ChangePasswordResponse * IamClient::changePassword(const ChangePasswordRequest &request)
{
    return qobject_cast<ChangePasswordResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * CreateAccessKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new AWS secret access key and corresponding AWS access key ID for the specified user. The default status for
 * new keys is
 *
 * <code>Active</code>>
 *
 * If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the
 * request. This operation works for access keys under the AWS account. Consequently, you can use this operation to manage
 * AWS account root user credentials. This is true even if the AWS account has no associated
 *
 * users>
 *
 * For information about quotas on the number of keys you can create, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM and STS quotas</a> in the <i>IAM
 * User
 *
 * Guide</i>> <b>
 *
 * To ensure the security of your AWS account, the secret access key is accessible only during key and user creation. You
 * must save the key (for example, in a text file) if you want to be able to access it again. If a secret key is lost, you
 * can delete the access keys for the associated user and then create new
 */
CreateAccessKeyResponse * IamClient::createAccessKey(const CreateAccessKeyRequest &request)
{
    return qobject_cast<CreateAccessKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * CreateAccountAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an alias for your AWS account. For information about using an AWS account alias, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using an alias for your AWS account ID</a> in
 * the <i>IAM User
 */
CreateAccountAliasResponse * IamClient::createAccountAlias(const CreateAccountAliasRequest &request)
{
    return qobject_cast<CreateAccountAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * CreateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 *
 * group>
 *
 * For information about the number of groups you can create, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM and STS quotas</a> in the <i>IAM
 * User
 */
CreateGroupResponse * IamClient::createGroup(const CreateGroupRequest &request)
{
    return qobject_cast<CreateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * CreateInstanceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new instance profile. For information about instance profiles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_switch-role-ec2.html">Using roles for applications
 * on Amazon EC2</a> in the <i>IAM User Guide</i>, and <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/iam-roles-for-amazon-ec2.html#ec2-instance-profile">Instance
 * profiles</a> in the <i>Amazon EC2 User
 *
 * Guide</i>>
 *
 * For information about the number of instance profiles you can create, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM object quotas</a> in the <i>IAM
 * User
 */
CreateInstanceProfileResponse * IamClient::createInstanceProfile(const CreateInstanceProfileRequest &request)
{
    return qobject_cast<CreateInstanceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * CreateLoginProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a password for the specified IAM user. A password allows an IAM user to access AWS services through the AWS
 * Management
 *
 * Console>
 *
 * You can use the AWS CLI, the AWS API, or the <b>Users</b> page in the IAM console to create a password for any IAM user.
 * Use <a>ChangePassword</a> to update your own existing password in the <b>My Security Credentials</b> page in the AWS
 * Management
 *
 * Console>
 *
 * For more information about managing passwords, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing passwords</a> in the <i>IAM
 * User
 */
CreateLoginProfileResponse * IamClient::createLoginProfile(const CreateLoginProfileRequest &request)
{
    return qobject_cast<CreateLoginProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * CreateOpenIDConnectProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an IAM entity to describe an identity provider (IdP) that supports <a href="http://openid.net/connect/">OpenID
 * Connect
 *
 * (OIDC)</a>>
 *
 * The OIDC provider that you create with this operation can be used as a principal in a role's trust policy. Such a policy
 * establishes a trust relationship between AWS and the OIDC
 *
 * provider>
 *
 * If you are using an OIDC identity provider from Google, Facebook, or Amazon Cognito, you don't need to create a separate
 * IAM identity provider. These OIDC identity providers are already built-in to AWS and are available for your use.
 * Instead, you can move directly to creating new roles using your identity provider. To learn more, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-idp_oidc.html">Creating a role for web
 * identity or OpenID connect federation</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * When you create the IAM OIDC provider, you specify the
 *
 * following> <ul> <li>
 *
 * The URL of the OIDC identity provider (IdP) to
 *
 * trus> </li> <li>
 *
 * A list of client IDs (also known as audiences) that identify the application or applications that are allowed to
 * authenticate using the OIDC
 *
 * provide> </li> <li>
 *
 * A list of thumbprints of one or more server certificates that the IdP
 *
 * use> </li> </ul>
 *
 * You get all of this information from the OIDC IdP that you want to use to access
 *
 * AWS> <note>
 *
 * The trust for the OIDC provider is derived from the IAM provider that this operation creates. Therefore, it is best to
 * limit access to the <a>CreateOpenIDConnectProvider</a> operation to highly privileged
 */
CreateOpenIDConnectProviderResponse * IamClient::createOpenIDConnectProvider(const CreateOpenIDConnectProviderRequest &request)
{
    return qobject_cast<CreateOpenIDConnectProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * CreatePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new managed policy for your AWS
 *
 * account>
 *
 * This operation creates a policy version with a version identifier of <code>v1</code> and sets v1 as the policy's default
 * version. For more information about policy versions, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for managed
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * As a best practice, you can validate your IAM policies. To learn more, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_policy-validator.html">Validating IAM
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For more information about managed policies in general, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 */
CreatePolicyResponse * IamClient::createPolicy(const CreatePolicyRequest &request)
{
    return qobject_cast<CreatePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * CreatePolicyVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new version of the specified managed policy. To update a managed policy, you create a new policy version. A
 * managed policy can have up to five versions. If the policy has five versions, you must delete an existing version using
 * <a>DeletePolicyVersion</a> before you create a new
 *
 * version>
 *
 * Optionally, you can set the new version as the policy's default version. The default version is the version that is in
 * effect for the IAM users, groups, and roles to which the policy is
 *
 * attached>
 *
 * For more information about managed policy versions, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for managed
 * policies</a> in the <i>IAM User
 */
CreatePolicyVersionResponse * IamClient::createPolicyVersion(const CreatePolicyVersionRequest &request)
{
    return qobject_cast<CreatePolicyVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * CreateRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new role for your AWS account. For more information about roles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">IAM roles</a>. For information about
 * quotas for role names and the number of roles you can create, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM and STS quotas</a> in the <i>IAM
 * User
 */
CreateRoleResponse * IamClient::createRole(const CreateRoleRequest &request)
{
    return qobject_cast<CreateRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * CreateSAMLProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an IAM resource that describes an identity provider (IdP) that supports SAML
 *
 * 2.0>
 *
 * The SAML provider resource that you create with this operation can be used as a principal in an IAM role's trust policy.
 * Such a policy can enable federated users who sign in using the SAML IdP to assume the role. You can create an IAM role
 * that supports Web-based single sign-on (SSO) to the AWS Management Console or one that supports API access to
 *
 * AWS>
 *
 * When you create the SAML provider resource, you upload a SAML metadata document that you get from your IdP. That
 * document includes the issuer's name, expiration information, and keys that can be used to validate the SAML
 * authentication response (assertions) that the IdP sends. You must generate the metadata document using the identity
 * management software that is used as your organization's
 *
 * IdP> <note>
 *
 * This operation requires <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 * Version
 *
 * 4</a>> </note>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-saml.html">Enabling SAML 2.0
 * federated users to access the AWS Management Console</a> and <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_saml.html">About SAML 2.0-based federation</a>
 * in the <i>IAM User
 */
CreateSAMLProviderResponse * IamClient::createSAMLProvider(const CreateSAMLProviderRequest &request)
{
    return qobject_cast<CreateSAMLProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * CreateServiceLinkedRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an IAM role that is linked to a specific AWS service. The service controls the attached policies and when the
 * role can be deleted. This helps ensure that the service is not broken by an unexpectedly changed or deleted role, which
 * could put your AWS resources into an unknown state. Allowing the service to control the role helps improve service
 * stability and proper cleanup when a service and its role are no longer needed. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">Using service-linked roles</a>
 * in the <i>IAM User Guide</i>.
 *
 * </p
 *
 * To attach a policy to this service-linked role, you must make the request using the AWS service that depends on this
 */
CreateServiceLinkedRoleResponse * IamClient::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request)
{
    return qobject_cast<CreateServiceLinkedRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * CreateServiceSpecificCredentialResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a set of credentials consisting of a user name and password that can be used to access the service specified
 * in the request. These credentials are generated by IAM, and can be used only for the specified service.
 *
 * </p
 *
 * You can have a maximum of two sets of service-specific credentials for each supported service per
 *
 * user>
 *
 * You can create service-specific credentials for AWS CodeCommit and Amazon Keyspaces (for Apache
 *
 * Cassandra)>
 *
 * You can reset the password to a new service-generated value by calling
 *
 * <a>ResetServiceSpecificCredential</a>>
 *
 * For more information about service-specific credentials, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_ssh-keys.html">Using IAM with AWS CodeCommit: Git
 * credentials, SSH keys, and AWS access keys</a> in the <i>IAM User
 */
CreateServiceSpecificCredentialResponse * IamClient::createServiceSpecificCredential(const CreateServiceSpecificCredentialRequest &request)
{
    return qobject_cast<CreateServiceSpecificCredentialResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * CreateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new IAM user for your AWS
 *
 * account>
 *
 * For information about quotas for the number of IAM users you can create, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM and STS quotas</a> in the <i>IAM
 * User
 */
CreateUserResponse * IamClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * CreateVirtualMFADeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new virtual MFA device for the AWS account. After creating the virtual MFA, use <a>EnableMFADevice</a> to
 * attach the MFA device to an IAM user. For more information about creating and working with virtual MFA devices, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using a virtual MFA device</a> in the
 * <i>IAM User
 *
 * Guide</i>>
 *
 * For information about the maximum number of MFA devices you can create, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM and STS quotas</a> in the <i>IAM
 * User
 *
 * Guide</i>> <b>
 *
 * The seed information contained in the QR code and the Base32 string should be treated like any other secret access
 * information. In other words, protect the seed information as you would your AWS access keys or your passwords. After you
 * provision your virtual device, you should ensure that the information is destroyed following secure
 */
CreateVirtualMFADeviceResponse * IamClient::createVirtualMFADevice(const CreateVirtualMFADeviceRequest &request)
{
    return qobject_cast<CreateVirtualMFADeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeactivateMFADeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deactivates the specified MFA device and removes it from association with the user name for which it was originally
 *
 * enabled>
 *
 * For more information about creating and working with virtual MFA devices, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Enabling a virtual multi-factor
 * authentication (MFA) device</a> in the <i>IAM User
 */
DeactivateMFADeviceResponse * IamClient::deactivateMFADevice(const DeactivateMFADeviceRequest &request)
{
    return qobject_cast<DeactivateMFADeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteAccessKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the access key pair associated with the specified IAM
 *
 * user>
 *
 * If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the
 * request. This operation works for access keys under the AWS account. Consequently, you can use this operation to manage
 * AWS account root user credentials even if the AWS account has no associated
 */
DeleteAccessKeyResponse * IamClient::deleteAccessKey(const DeleteAccessKeyRequest &request)
{
    return qobject_cast<DeleteAccessKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteAccountAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified AWS account alias. For information about using an AWS account alias, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using an alias for your AWS account ID</a> in
 * the <i>IAM User
 */
DeleteAccountAliasResponse * IamClient::deleteAccountAlias(const DeleteAccountAliasRequest &request)
{
    return qobject_cast<DeleteAccountAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteAccountPasswordPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the password policy for the AWS account. There are no
 */
DeleteAccountPasswordPolicyResponse * IamClient::deleteAccountPasswordPolicy(const DeleteAccountPasswordPolicyRequest &request)
{
    return qobject_cast<DeleteAccountPasswordPolicyResponse *>(send(request));
}

/*!
 * Sends a DeleteAccountPasswordPolicy request to the IamClient service, and returns a pointer to an
 * DeleteAccountPasswordPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the password policy for the AWS account. There are no
 */
DeleteAccountPasswordPolicyResponse * IamClient::deleteAccountPasswordPolicy()
{
    return deleteAccountPasswordPolicy(DeleteAccountPasswordPolicyRequest());
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified IAM group. The group must not contain any users or have any attached
 */
DeleteGroupResponse * IamClient::deleteGroup(const DeleteGroupRequest &request)
{
    return qobject_cast<DeleteGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteGroupPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified inline policy that is embedded in the specified IAM
 *
 * group>
 *
 * A group can also have managed policies attached to it. To detach a managed policy from a group, use
 * <a>DetachGroupPolicy</a>. For more information about policies, refer to <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 */
DeleteGroupPolicyResponse * IamClient::deleteGroupPolicy(const DeleteGroupPolicyRequest &request)
{
    return qobject_cast<DeleteGroupPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteInstanceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified instance profile. The instance profile must not have an associated
 *
 * role> <b>
 *
 * Make sure that you do not have any Amazon EC2 instances running with the instance profile you are about to delete.
 * Deleting a role or instance profile that is associated with a running instance will break any applications running on
 * the
 *
 * instance> </b>
 *
 * For more information about instance profiles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About instance
 */
DeleteInstanceProfileResponse * IamClient::deleteInstanceProfile(const DeleteInstanceProfileRequest &request)
{
    return qobject_cast<DeleteInstanceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteLoginProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the password for the specified IAM user, which terminates the user's ability to access AWS services through the
 * AWS Management
 *
 * Console>
 *
 * You can use the AWS CLI, the AWS API, or the <b>Users</b> page in the IAM console to delete a password for any IAM user.
 * You can use <a>ChangePassword</a> to update, but not delete, your own password in the <b>My Security Credentials</b>
 * page in the AWS Management
 *
 * Console> <b>
 *
 * Deleting a user's password does not prevent a user from accessing AWS through the command line interface or the API. To
 * prevent all user access, you must also either make any access keys inactive or delete them. For more information about
 * making keys inactive or deleting them, see <a>UpdateAccessKey</a> and <a>DeleteAccessKey</a>.
 */
DeleteLoginProfileResponse * IamClient::deleteLoginProfile(const DeleteLoginProfileRequest &request)
{
    return qobject_cast<DeleteLoginProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteOpenIDConnectProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an OpenID Connect identity provider (IdP) resource object in
 *
 * IAM>
 *
 * Deleting an IAM OIDC provider resource does not update any roles that reference the provider as a principal in their
 * trust policies. Any attempt to assume a role that references a deleted provider
 *
 * fails>
 *
 * This operation is idempotent; it does not fail or return an error if you call the operation for a provider that does not
 */
DeleteOpenIDConnectProviderResponse * IamClient::deleteOpenIDConnectProvider(const DeleteOpenIDConnectProviderRequest &request)
{
    return qobject_cast<DeleteOpenIDConnectProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeletePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified managed
 *
 * policy>
 *
 * Before you can delete a managed policy, you must first detach the policy from all users, groups, and roles that it is
 * attached to. In addition, you must delete all the policy's versions. The following steps describe the process for
 * deleting a managed
 *
 * policy> <ul> <li>
 *
 * Detach the policy from all users, groups, and roles that the policy is attached to, using <a>DetachUserPolicy</a>,
 * <a>DetachGroupPolicy</a>, or <a>DetachRolePolicy</a>. To list all the users, groups, and roles that a policy is attached
 * to, use
 *
 * <a>ListEntitiesForPolicy</a>> </li> <li>
 *
 * Delete all versions of the policy using <a>DeletePolicyVersion</a>. To list the policy's versions, use
 * <a>ListPolicyVersions</a>. You cannot use <a>DeletePolicyVersion</a> to delete the version that is marked as the default
 * version. You delete the policy's default version in the next step of the
 *
 * process> </li> <li>
 *
 * Delete the policy (this automatically deletes the policy's default version) using this
 *
 * operation> </li> </ul>
 *
 * For information about managed policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 */
DeletePolicyResponse * IamClient::deletePolicy(const DeletePolicyRequest &request)
{
    return qobject_cast<DeletePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeletePolicyVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified version from the specified managed
 *
 * policy>
 *
 * You cannot delete the default version from a policy using this operation. To delete the default version from a policy,
 * use <a>DeletePolicy</a>. To find out which version of a policy is marked as the default version, use
 *
 * <a>ListPolicyVersions</a>>
 *
 * For information about versions for managed policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for managed
 * policies</a> in the <i>IAM User
 */
DeletePolicyVersionResponse * IamClient::deletePolicyVersion(const DeletePolicyVersionRequest &request)
{
    return qobject_cast<DeletePolicyVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified role. The role must not have any policies attached. For more information about roles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with
 *
 * roles</a>> <b>
 *
 * Make sure that you do not have any Amazon EC2 instances running with the role you are about to delete. Deleting a role
 * or instance profile that is associated with a running instance will break any applications running on the
 */
DeleteRoleResponse * IamClient::deleteRole(const DeleteRoleRequest &request)
{
    return qobject_cast<DeleteRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteRolePermissionsBoundaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the permissions boundary for the specified IAM role.
 *
 * </p <b>
 *
 * Deleting the permissions boundary for a role might increase its permissions. For example, it might allow anyone who
 * assumes the role to perform all the actions granted in its permissions policies.
 */
DeleteRolePermissionsBoundaryResponse * IamClient::deleteRolePermissionsBoundary(const DeleteRolePermissionsBoundaryRequest &request)
{
    return qobject_cast<DeleteRolePermissionsBoundaryResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteRolePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified inline policy that is embedded in the specified IAM
 *
 * role>
 *
 * A role can also have managed policies attached to it. To detach a managed policy from a role, use
 * <a>DetachRolePolicy</a>. For more information about policies, refer to <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 */
DeleteRolePolicyResponse * IamClient::deleteRolePolicy(const DeleteRolePolicyRequest &request)
{
    return qobject_cast<DeleteRolePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteSAMLProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a SAML provider resource in
 *
 * IAM>
 *
 * Deleting the provider resource from IAM does not update any roles that reference the SAML provider resource's ARN as a
 * principal in their trust policies. Any attempt to assume a role that references a non-existent provider resource ARN
 *
 * fails> <note>
 *
 * This operation requires <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 * Version
 */
DeleteSAMLProviderResponse * IamClient::deleteSAMLProvider(const DeleteSAMLProviderRequest &request)
{
    return qobject_cast<DeleteSAMLProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteSSHPublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified SSH public
 *
 * key>
 *
 * The SSH public key deleted by this operation is used only for authenticating the associated IAM user to an AWS
 * CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a
 * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for
 * SSH connections</a> in the <i>AWS CodeCommit User
 */
DeleteSSHPublicKeyResponse * IamClient::deleteSSHPublicKey(const DeleteSSHPublicKeyRequest &request)
{
    return qobject_cast<DeleteSSHPublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteServerCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified server
 *
 * certificate>
 *
 * For more information about working with server certificates, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working with server
 * certificates</a> in the <i>IAM User Guide</i>. This topic also includes a list of AWS services that can use the server
 * certificates that you manage with
 *
 * IAM> <b>
 *
 * If you are using a server certificate with Elastic Load Balancing, deleting the certificate could have implications for
 * your application. If Elastic Load Balancing doesn't detect the deletion of bound certificates, it may continue to use
 * the certificates. This could cause Elastic Load Balancing to stop accepting traffic. We recommend that you remove the
 * reference to the certificate from Elastic Load Balancing before using this command to delete the certificate. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/ElasticLoadBalancing/latest/APIReference/API_DeleteLoadBalancerListeners.html">DeleteLoadBalancerListeners</a>
 * in the <i>Elastic Load Balancing API
 */
DeleteServerCertificateResponse * IamClient::deleteServerCertificate(const DeleteServerCertificateRequest &request)
{
    return qobject_cast<DeleteServerCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteServiceLinkedRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Submits a service-linked role deletion request and returns a <code>DeletionTaskId</code>, which you can use to check the
 * status of the deletion. Before you call this operation, confirm that the role has no active sessions and that any
 * resources used by the role in the linked service are deleted. If you call this operation more than once for the same
 * service-linked role and an earlier deletion task is not complete, then the <code>DeletionTaskId</code> of the earlier
 * request is
 *
 * returned>
 *
 * If you submit a deletion request for a service-linked role whose linked service is still accessing a resource, then the
 * deletion task fails. If it fails, the <a>GetServiceLinkedRoleDeletionStatus</a> operation returns the reason for the
 * failure, usually including the resources that must be deleted. To delete the service-linked role, you must first remove
 * those resources from the linked service and then submit the deletion request again. Resources are specific to the
 * service that is linked to the role. For more information about removing resources from a service, see the <a
 * href="http://docs.aws.amazon.com/">AWS documentation</a> for your
 *
 * service>
 *
 * For more information about service-linked roles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_terms-and-concepts.html#iam-term-service-linked-role">Roles
 * terms and concepts: AWS service-linked role</a> in the <i>IAM User
 */
DeleteServiceLinkedRoleResponse * IamClient::deleteServiceLinkedRole(const DeleteServiceLinkedRoleRequest &request)
{
    return qobject_cast<DeleteServiceLinkedRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteServiceSpecificCredentialResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified service-specific
 */
DeleteServiceSpecificCredentialResponse * IamClient::deleteServiceSpecificCredential(const DeleteServiceSpecificCredentialRequest &request)
{
    return qobject_cast<DeleteServiceSpecificCredentialResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteSigningCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a signing certificate associated with the specified IAM
 *
 * user>
 *
 * If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the
 * request. This operation works for access keys under the AWS account. Consequently, you can use this operation to manage
 * AWS account root user credentials even if the AWS account has no associated IAM
 */
DeleteSigningCertificateResponse * IamClient::deleteSigningCertificate(const DeleteSigningCertificateRequest &request)
{
    return qobject_cast<DeleteSigningCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified IAM user. Unlike the AWS Management Console, when you delete a user programmatically, you must
 * delete the items attached to the user manually, or the deletion fails. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_users_manage.html#id_users_deleting_cli">Deleting an IAM
 * user</a>. Before attempting to delete a user, remove the following
 *
 * items> <ul> <li>
 *
 * Password
 *
 * (<a>DeleteLoginProfile</a>> </li> <li>
 *
 * Access keys
 *
 * (<a>DeleteAccessKey</a>> </li> <li>
 *
 * Signing certificate
 *
 * (<a>DeleteSigningCertificate</a>> </li> <li>
 *
 * SSH public key
 *
 * (<a>DeleteSSHPublicKey</a>> </li> <li>
 *
 * Git credentials
 *
 * (<a>DeleteServiceSpecificCredential</a>> </li> <li>
 *
 * Multi-factor authentication (MFA) device (<a>DeactivateMFADevice</a>,
 *
 * <a>DeleteVirtualMFADevice</a>> </li> <li>
 *
 * Inline policies
 *
 * (<a>DeleteUserPolicy</a>> </li> <li>
 *
 * Attached managed policies
 *
 * (<a>DetachUserPolicy</a>> </li> <li>
 *
 * Group memberships
 */
DeleteUserResponse * IamClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteUserPermissionsBoundaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the permissions boundary for the specified IAM
 *
 * user> <b>
 *
 * Deleting the permissions boundary for a user might increase its permissions by allowing the user to perform all the
 * actions granted in its permissions policies.
 */
DeleteUserPermissionsBoundaryResponse * IamClient::deleteUserPermissionsBoundary(const DeleteUserPermissionsBoundaryRequest &request)
{
    return qobject_cast<DeleteUserPermissionsBoundaryResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteUserPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified inline policy that is embedded in the specified IAM
 *
 * user>
 *
 * A user can also have managed policies attached to it. To detach a managed policy from a user, use
 * <a>DetachUserPolicy</a>. For more information about policies, refer to <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 */
DeleteUserPolicyResponse * IamClient::deleteUserPolicy(const DeleteUserPolicyRequest &request)
{
    return qobject_cast<DeleteUserPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DeleteVirtualMFADeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a virtual MFA
 *
 * device> <note>
 *
 * You must deactivate a user's virtual MFA device before you can delete it. For information about deactivating MFA
 * devices, see <a>DeactivateMFADevice</a>.
 */
DeleteVirtualMFADeviceResponse * IamClient::deleteVirtualMFADevice(const DeleteVirtualMFADeviceRequest &request)
{
    return qobject_cast<DeleteVirtualMFADeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DetachGroupPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified managed policy from the specified IAM
 *
 * group>
 *
 * A group can also have inline policies embedded with it. To delete an inline policy, use <a>DeleteGroupPolicy</a>. For
 * information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 */
DetachGroupPolicyResponse * IamClient::detachGroupPolicy(const DetachGroupPolicyRequest &request)
{
    return qobject_cast<DetachGroupPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DetachRolePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified managed policy from the specified
 *
 * role>
 *
 * A role can also have inline policies embedded with it. To delete an inline policy, use <a>DeleteRolePolicy</a>. For
 * information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 */
DetachRolePolicyResponse * IamClient::detachRolePolicy(const DetachRolePolicyRequest &request)
{
    return qobject_cast<DetachRolePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * DetachUserPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified managed policy from the specified
 *
 * user>
 *
 * A user can also have inline policies embedded with it. To delete an inline policy, use <a>DeleteUserPolicy</a>. For
 * information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 */
DetachUserPolicyResponse * IamClient::detachUserPolicy(const DetachUserPolicyRequest &request)
{
    return qobject_cast<DetachUserPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * EnableMFADeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the specified MFA device and associates it with the specified IAM user. When enabled, the MFA device is required
 * for every subsequent login by the IAM user associated with the
 */
EnableMFADeviceResponse * IamClient::enableMFADevice(const EnableMFADeviceRequest &request)
{
    return qobject_cast<EnableMFADeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GenerateCredentialReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a credential report for the AWS account. For more information about the credential report, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting credential reports</a> in the
 * <i>IAM User
 */
GenerateCredentialReportResponse * IamClient::generateCredentialReport(const GenerateCredentialReportRequest &request)
{
    return qobject_cast<GenerateCredentialReportResponse *>(send(request));
}

/*!
 * Sends a GenerateCredentialReport request to the IamClient service, and returns a pointer to an
 * GenerateCredentialReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a credential report for the AWS account. For more information about the credential report, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting credential reports</a> in the
 * <i>IAM User
 */
GenerateCredentialReportResponse * IamClient::generateCredentialReport()
{
    return generateCredentialReport(GenerateCredentialReportRequest());
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GenerateOrganizationsAccessReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a report for service last accessed data for AWS Organizations. You can generate a report for any entities
 * (organization root, organizational unit, or account) or policies in your
 *
 * organization>
 *
 * To call this operation, you must be signed in using your AWS Organizations management account credentials. You can use
 * your long-term IAM user or root user credentials, or temporary credentials from assuming an IAM role. SCPs must be
 * enabled for your organization root. You must have the required IAM and AWS Organizations permissions. For more
 * information, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Refining
 * permissions using service last accessed data</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * You can generate a service last accessed data report for entities by specifying only the entity's path. This data
 * includes a list of services that are allowed by any service control policies (SCPs) that apply to the
 *
 * entity>
 *
 * You can generate a service last accessed data report for a policy by specifying an entity's path and an optional AWS
 * Organizations policy ID. This data includes a list of services that are allowed by the specified
 *
 * SCP>
 *
 * For each service in both report types, the data includes the most recent account activity that the policy allows to
 * account principals in the entity or the entity's children. For important information about the data, reporting period,
 * permissions required, troubleshooting, and supported Regions see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing permissions using
 * service last accessed data</a> in the <i>IAM User
 *
 * Guide</i>> <b>
 *
 * The data includes all attempts to access AWS, not just the successful ones. This includes all attempts that were made
 * using the AWS Management Console, the AWS API through any of the SDKs, or any of the command line tools. An unexpected
 * entry in the service last accessed data does not mean that an account has been compromised, because the request might
 * have been denied. Refer to your CloudTrail logs as the authoritative source for information about all API calls and
 * whether they were successful or denied access. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/cloudtrail-integration.html">Logging IAM events with
 * CloudTrail</a> in the <i>IAM User
 *
 * Guide</i>> </b>
 *
 * This operation returns a <code>JobId</code>. Use this parameter in the <code> <a>GetOrganizationsAccessReport</a>
 * </code> operation to check the status of the report generation. To check the status of this request, use the
 * <code>JobId</code> parameter in the <code> <a>GetOrganizationsAccessReport</a> </code> operation and test the
 * <code>JobStatus</code> response parameter. When the job is complete, you can retrieve the
 *
 * report>
 *
 * To generate a service last accessed data report for entities, specify an entity path without specifying the optional AWS
 * Organizations policy ID. The type of entity that you specify determines the data returned in the
 *
 * report> <ul> <li>
 *
 * <b>Root</b> – When you specify the organizations root as the entity, the resulting report lists all of the services
 * allowed by SCPs that are attached to your root. For each service, the report includes data for all accounts in your
 * organization except the management account, because the management account is not limited by
 *
 * SCPs> </li> <li>
 *
 * <b>OU</b> – When you specify an organizational unit (OU) as the entity, the resulting report lists all of the services
 * allowed by SCPs that are attached to the OU and its parents. For each service, the report includes data for all accounts
 * in the OU or its children. This data excludes the management account, because the management account is not limited by
 *
 * SCPs> </li> <li>
 *
 * <b>management account</b> – When you specify the management account, the resulting report lists all AWS services,
 * because the management account is not limited by SCPs. For each service, the report includes data for only the
 * management
 *
 * account> </li> <li>
 *
 * <b>Account</b> – When you specify another account as the entity, the resulting report lists all of the services allowed
 * by SCPs that are attached to the account and its parents. For each service, the report includes data for only the
 * specified
 *
 * account> </li> </ul>
 *
 * To generate a service last accessed data report for policies, specify an entity path and the optional AWS Organizations
 * policy ID. The type of entity that you specify determines the data returned for each
 *
 * service> <ul> <li>
 *
 * <b>Root</b> – When you specify the root entity and a policy ID, the resulting report lists all of the services that are
 * allowed by the specified SCP. For each service, the report includes data for all accounts in your organization to which
 * the SCP applies. This data excludes the management account, because the management account is not limited by SCPs. If
 * the SCP is not attached to any entities in the organization, then the report will return a list of services with no
 *
 * data> </li> <li>
 *
 * <b>OU</b> – When you specify an OU entity and a policy ID, the resulting report lists all of the services that are
 * allowed by the specified SCP. For each service, the report includes data for all accounts in the OU or its children to
 * which the SCP applies. This means that other accounts outside the OU that are affected by the SCP might not be included
 * in the data. This data excludes the management account, because the management account is not limited by SCPs. If the
 * SCP is not attached to the OU or one of its children, the report will return a list of services with no
 *
 * data> </li> <li>
 *
 * <b>management account</b> – When you specify the management account, the resulting report lists all AWS services,
 * because the management account is not limited by SCPs. If you specify a policy ID in the CLI or API, the policy is
 * ignored. For each service, the report includes data for only the management
 *
 * account> </li> <li>
 *
 * <b>Account</b> – When you specify another account entity and a policy ID, the resulting report lists all of the services
 * that are allowed by the specified SCP. For each service, the report includes data for only the specified account. This
 * means that other accounts in the organization that are affected by the SCP might not be included in the data. If the SCP
 * is not attached to the account, the report will return a list of services with no
 *
 * data> </li> </ul> <note>
 *
 * Service last accessed data does not use other policy types when determining whether a principal could access a service.
 * These other policy types include identity-based policies, resource-based policies, access control lists, IAM permissions
 * boundaries, and STS assume role policies. It only applies SCP logic. For more about the evaluation of policy types, see
 * <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
 * policies</a> in the <i>IAM User
 *
 * Guide</i>> </note>
 *
 * For more information about service last accessed data, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing policy scope by
 * viewing user activity</a> in the <i>IAM User
 */
GenerateOrganizationsAccessReportResponse * IamClient::generateOrganizationsAccessReport(const GenerateOrganizationsAccessReportRequest &request)
{
    return qobject_cast<GenerateOrganizationsAccessReportResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GenerateServiceLastAccessedDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a report that includes details about when an IAM resource (user, group, role, or policy) was last used in an
 * attempt to access AWS services. Recent activity usually appears within four hours. IAM reports activity for the last 365
 * days, or less if your Region began supporting this feature within the last year. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#access-advisor_tracking-period">Regions
 * where data is
 *
 * tracked</a>> <b>
 *
 * The service last accessed data includes all attempts to access an AWS API, not just the successful ones. This includes
 * all attempts that were made using the AWS Management Console, the AWS API through any of the SDKs, or any of the command
 * line tools. An unexpected entry in the service last accessed data does not mean that your account has been compromised,
 * because the request might have been denied. Refer to your CloudTrail logs as the authoritative source for information
 * about all API calls and whether they were successful or denied access. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/cloudtrail-integration.html">Logging IAM events with
 * CloudTrail</a> in the <i>IAM User
 *
 * Guide</i>> </b>
 *
 * The <code>GenerateServiceLastAccessedDetails</code> operation returns a <code>JobId</code>. Use this parameter in the
 * following operations to retrieve the following details from your report:
 *
 * </p <ul> <li>
 *
 * <a>GetServiceLastAccessedDetails</a> – Use this operation for users, groups, roles, or policies to list every AWS
 * service that the resource could access using permissions policies. For each service, the response includes information
 * about the most recent access
 *
 * attempt>
 *
 * The <code>JobId</code> returned by <code>GenerateServiceLastAccessedDetail</code> must be used by the same role within a
 * session, or by the same user when used to call
 *
 * <code>GetServiceLastAccessedDetail</code>> </li> <li>
 *
 * <a>GetServiceLastAccessedDetailsWithEntities</a> – Use this operation for groups and policies to list information about
 * the associated entities (users or roles) that attempted to access a specific AWS service.
 *
 * </p </li> </ul>
 *
 * To check the status of the <code>GenerateServiceLastAccessedDetails</code> request, use the <code>JobId</code> parameter
 * in the same operations and test the <code>JobStatus</code> response
 *
 * parameter>
 *
 * For additional information about the permissions policies that allow an identity (user, group, or role) to access
 * specific services, use the <a>ListPoliciesGrantingServiceAccess</a>
 *
 * operation> <note>
 *
 * Service last accessed data does not use other policy types when determining whether a resource could access a service.
 * These other policy types include resource-based policies, access control lists, AWS Organizations policies, IAM
 * permissions boundaries, and AWS STS assume role policies. It only applies permissions policy logic. For more about the
 * evaluation of policy types, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
 * policies</a> in the <i>IAM User
 *
 * Guide</i>> </note>
 *
 * For more information about service and action last accessed data, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing permissions using
 * service last accessed data</a> in the <i>IAM User
 */
GenerateServiceLastAccessedDetailsResponse * IamClient::generateServiceLastAccessedDetails(const GenerateServiceLastAccessedDetailsRequest &request)
{
    return qobject_cast<GenerateServiceLastAccessedDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetAccessKeyLastUsedResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about when the specified access key was last used. The information includes the date and time of
 * last use, along with the AWS service and Region that were specified in the last request made with that
 */
GetAccessKeyLastUsedResponse * IamClient::getAccessKeyLastUsed(const GetAccessKeyLastUsedRequest &request)
{
    return qobject_cast<GetAccessKeyLastUsedResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetAccountAuthorizationDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about all IAM users, groups, roles, and policies in your AWS account, including their
 * relationships to one another. Use this operation to obtain a snapshot of the configuration of IAM permissions (users,
 * groups, roles, and policies) in your
 *
 * account> <note>
 *
 * Policies returned by this operation are URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC
 * 3986</a>. You can use a URL decoding method to convert the policy back to plain JSON text. For example, if you use Java,
 * you can use the <code>decode</code> method of the <code>java.net.URLDecoder</code> utility class in the Java SDK. Other
 * languages and SDKs provide similar
 *
 * functionality> </note>
 *
 * You can optionally filter the results using the <code>Filter</code> parameter. You can paginate the results using the
 * <code>MaxItems</code> and <code>Marker</code>
 */
GetAccountAuthorizationDetailsResponse * IamClient::getAccountAuthorizationDetails(const GetAccountAuthorizationDetailsRequest &request)
{
    return qobject_cast<GetAccountAuthorizationDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetAccountPasswordPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the password policy for the AWS account. This tells you the complexity requirements and mandatory rotation
 * periods for the IAM user passwords in your account. For more information about using a password policy, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing an IAM password
 */
GetAccountPasswordPolicyResponse * IamClient::getAccountPasswordPolicy(const GetAccountPasswordPolicyRequest &request)
{
    return qobject_cast<GetAccountPasswordPolicyResponse *>(send(request));
}

/*!
 * Sends a GetAccountPasswordPolicy request to the IamClient service, and returns a pointer to an
 * GetAccountPasswordPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the password policy for the AWS account. This tells you the complexity requirements and mandatory rotation
 * periods for the IAM user passwords in your account. For more information about using a password policy, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing an IAM password
 */
GetAccountPasswordPolicyResponse * IamClient::getAccountPasswordPolicy()
{
    return getAccountPasswordPolicy(GetAccountPasswordPolicyRequest());
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetAccountSummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about IAM entity usage and IAM quotas in the AWS
 *
 * account>
 *
 * For information about IAM quotas, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM and STS quotas</a> in the <i>IAM
 * User
 */
GetAccountSummaryResponse * IamClient::getAccountSummary(const GetAccountSummaryRequest &request)
{
    return qobject_cast<GetAccountSummaryResponse *>(send(request));
}

/*!
 * Sends a GetAccountSummary request to the IamClient service, and returns a pointer to an
 * GetAccountSummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about IAM entity usage and IAM quotas in the AWS
 *
 * account>
 *
 * For information about IAM quotas, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM and STS quotas</a> in the <i>IAM
 * User
 */
GetAccountSummaryResponse * IamClient::getAccountSummary()
{
    return getAccountSummary(GetAccountSummaryRequest());
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetContextKeysForCustomPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of all of the context keys referenced in the input policies. The policies are supplied as a list of one or
 * more strings. To get the context keys from policies associated with an IAM user, group, or role, use
 *
 * <a>GetContextKeysForPrincipalPolicy</a>>
 *
 * Context keys are variables maintained by AWS and its services that provide details about the context of an API query
 * request. Context keys can be evaluated by testing against a value specified in an IAM policy. Use
 * <code>GetContextKeysForCustomPolicy</code> to understand what key names and values you must supply when you call
 * <a>SimulateCustomPolicy</a>. Note that all parameters are shown in unencoded form here for clarity but must be URL
 * encoded to be included as a part of a real HTML
 */
GetContextKeysForCustomPolicyResponse * IamClient::getContextKeysForCustomPolicy(const GetContextKeysForCustomPolicyRequest &request)
{
    return qobject_cast<GetContextKeysForCustomPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetContextKeysForPrincipalPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of all of the context keys referenced in all the IAM policies that are attached to the specified IAM entity.
 * The entity can be an IAM user, group, or role. If you specify a user, then the request also includes all of the policies
 * attached to groups that the user is a member
 *
 * of>
 *
 * You can optionally include a list of one or more additional policies, specified as strings. If you want to include
 * <i>only</i> a list of policies by string, use <a>GetContextKeysForCustomPolicy</a>
 *
 * instead>
 *
 * <b>Note:</b> This operation discloses information about the permissions granted to other users. If you do not want users
 * to see other user's permissions, then consider allowing them to use <a>GetContextKeysForCustomPolicy</a>
 *
 * instead>
 *
 * Context keys are variables maintained by AWS and its services that provide details about the context of an API query
 * request. Context keys can be evaluated by testing against a value in an IAM policy. Use
 * <a>GetContextKeysForPrincipalPolicy</a> to understand what key names and values you must supply when you call
 */
GetContextKeysForPrincipalPolicyResponse * IamClient::getContextKeysForPrincipalPolicy(const GetContextKeysForPrincipalPolicyRequest &request)
{
    return qobject_cast<GetContextKeysForPrincipalPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetCredentialReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a credential report for the AWS account. For more information about the credential report, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting credential reports</a> in the
 * <i>IAM User
 */
GetCredentialReportResponse * IamClient::getCredentialReport(const GetCredentialReportRequest &request)
{
    return qobject_cast<GetCredentialReportResponse *>(send(request));
}

/*!
 * Sends a GetCredentialReport request to the IamClient service, and returns a pointer to an
 * GetCredentialReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a credential report for the AWS account. For more information about the credential report, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting credential reports</a> in the
 * <i>IAM User
 */
GetCredentialReportResponse * IamClient::getCredentialReport()
{
    return getCredentialReport(GetCredentialReportRequest());
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of IAM users that are in the specified IAM group. You can paginate the results using the
 * <code>MaxItems</code> and <code>Marker</code>
 */
GetGroupResponse * IamClient::getGroup(const GetGroupRequest &request)
{
    return qobject_cast<GetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetGroupPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified inline policy document that is embedded in the specified IAM
 *
 * group> <note>
 *
 * Policies returned by this operation are URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC
 * 3986</a>. You can use a URL decoding method to convert the policy back to plain JSON text. For example, if you use Java,
 * you can use the <code>decode</code> method of the <code>java.net.URLDecoder</code> utility class in the Java SDK. Other
 * languages and SDKs provide similar
 *
 * functionality> </note>
 *
 * An IAM group can also have managed policies attached to it. To retrieve a managed policy document that is attached to a
 * group, use <a>GetPolicy</a> to determine the policy's default version, then use <a>GetPolicyVersion</a> to retrieve the
 * policy
 *
 * document>
 *
 * For more information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 */
GetGroupPolicyResponse * IamClient::getGroupPolicy(const GetGroupPolicyRequest &request)
{
    return qobject_cast<GetGroupPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetInstanceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the specified instance profile, including the instance profile's path, GUID, ARN, and role.
 * For more information about instance profiles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About instance profiles</a> in the
 * <i>IAM User
 */
GetInstanceProfileResponse * IamClient::getInstanceProfile(const GetInstanceProfileRequest &request)
{
    return qobject_cast<GetInstanceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetLoginProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the user name and password creation date for the specified IAM user. If the user has not been assigned a
 * password, the operation returns a 404 (<code>NoSuchEntity</code>)
 */
GetLoginProfileResponse * IamClient::getLoginProfile(const GetLoginProfileRequest &request)
{
    return qobject_cast<GetLoginProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetOpenIDConnectProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified OpenID Connect (OIDC) provider resource object in
 */
GetOpenIDConnectProviderResponse * IamClient::getOpenIDConnectProvider(const GetOpenIDConnectProviderRequest &request)
{
    return qobject_cast<GetOpenIDConnectProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetOrganizationsAccessReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the service last accessed data report for AWS Organizations that was previously generated using the <code>
 * <a>GenerateOrganizationsAccessReport</a> </code> operation. This operation retrieves the status of your report job and
 * the report
 *
 * contents>
 *
 * Depending on the parameters that you passed when you generated the report, the data returned could include different
 * information. For details, see
 *
 * <a>GenerateOrganizationsAccessReport</a>>
 *
 * To call this operation, you must be signed in to the management account in your organization. SCPs must be enabled for
 * your organization root. You must have permissions to perform this operation. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Refining permissions using
 * service last accessed data</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For each service that principals in an account (root users, IAM users, or IAM roles) could access using SCPs, the
 * operation returns details about the most recent access attempt. If there was no attempt, the service is listed without
 * details about the most recent attempt to access the service. If the operation fails, it returns the reason that it
 *
 * failed>
 *
 * By default, the list is sorted by service
 */
GetOrganizationsAccessReportResponse * IamClient::getOrganizationsAccessReport(const GetOrganizationsAccessReportRequest &request)
{
    return qobject_cast<GetOrganizationsAccessReportResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the specified managed policy, including the policy's default version and the total number of
 * IAM users, groups, and roles to which the policy is attached. To retrieve the list of the specific users, groups, and
 * roles that the policy is attached to, use <a>ListEntitiesForPolicy</a>. This operation returns metadata about the
 * policy. To retrieve the actual policy document for a specific version of the policy, use
 *
 * <a>GetPolicyVersion</a>>
 *
 * This operation retrieves information about managed policies. To retrieve information about an inline policy that is
 * embedded with an IAM user, group, or role, use <a>GetUserPolicy</a>, <a>GetGroupPolicy</a>, or
 *
 * <a>GetRolePolicy</a>>
 *
 * For more information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 */
GetPolicyResponse * IamClient::getPolicy(const GetPolicyRequest &request)
{
    return qobject_cast<GetPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetPolicyVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the specified version of the specified managed policy, including the policy
 *
 * document> <note>
 *
 * Policies returned by this operation are URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC
 * 3986</a>. You can use a URL decoding method to convert the policy back to plain JSON text. For example, if you use Java,
 * you can use the <code>decode</code> method of the <code>java.net.URLDecoder</code> utility class in the Java SDK. Other
 * languages and SDKs provide similar
 *
 * functionality> </note>
 *
 * To list the available versions for a policy, use
 *
 * <a>ListPolicyVersions</a>>
 *
 * This operation retrieves information about managed policies. To retrieve information about an inline policy that is
 * embedded in a user, group, or role, use <a>GetUserPolicy</a>, <a>GetGroupPolicy</a>, or
 *
 * <a>GetRolePolicy</a>>
 *
 * For more information about the types of policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For more information about managed policy versions, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for managed
 * policies</a> in the <i>IAM User
 */
GetPolicyVersionResponse * IamClient::getPolicyVersion(const GetPolicyVersionRequest &request)
{
    return qobject_cast<GetPolicyVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the specified role, including the role's path, GUID, ARN, and the role's trust policy that
 * grants permission to assume the role. For more information about roles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with
 *
 * roles</a>> <note>
 *
 * Policies returned by this operation are URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC
 * 3986</a>. You can use a URL decoding method to convert the policy back to plain JSON text. For example, if you use Java,
 * you can use the <code>decode</code> method of the <code>java.net.URLDecoder</code> utility class in the Java SDK. Other
 * languages and SDKs provide similar
 */
GetRoleResponse * IamClient::getRole(const GetRoleRequest &request)
{
    return qobject_cast<GetRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetRolePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified inline policy document that is embedded with the specified IAM
 *
 * role> <note>
 *
 * Policies returned by this operation are URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC
 * 3986</a>. You can use a URL decoding method to convert the policy back to plain JSON text. For example, if you use Java,
 * you can use the <code>decode</code> method of the <code>java.net.URLDecoder</code> utility class in the Java SDK. Other
 * languages and SDKs provide similar
 *
 * functionality> </note>
 *
 * An IAM role can also have managed policies attached to it. To retrieve a managed policy document that is attached to a
 * role, use <a>GetPolicy</a> to determine the policy's default version, then use <a>GetPolicyVersion</a> to retrieve the
 * policy
 *
 * document>
 *
 * For more information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For more information about roles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using roles to delegate permissions and
 * federate
 */
GetRolePolicyResponse * IamClient::getRolePolicy(const GetRolePolicyRequest &request)
{
    return qobject_cast<GetRolePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetSAMLProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the SAML provider metadocument that was uploaded when the IAM SAML provider resource object was created or
 *
 * updated> <note>
 *
 * This operation requires <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 * Version
 */
GetSAMLProviderResponse * IamClient::getSAMLProvider(const GetSAMLProviderRequest &request)
{
    return qobject_cast<GetSAMLProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetSSHPublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified SSH public key, including metadata about the
 *
 * key>
 *
 * The SSH public key retrieved by this operation is used only for authenticating the associated IAM user to an AWS
 * CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a
 * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for
 * SSH connections</a> in the <i>AWS CodeCommit User
 */
GetSSHPublicKeyResponse * IamClient::getSSHPublicKey(const GetSSHPublicKeyRequest &request)
{
    return qobject_cast<GetSSHPublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetServerCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the specified server certificate stored in
 *
 * IAM>
 *
 * For more information about working with server certificates, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working with server
 * certificates</a> in the <i>IAM User Guide</i>. This topic includes a list of AWS services that can use the server
 * certificates that you manage with
 */
GetServerCertificateResponse * IamClient::getServerCertificate(const GetServerCertificateRequest &request)
{
    return qobject_cast<GetServerCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetServiceLastAccessedDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a service last accessed report that was created using the <code>GenerateServiceLastAccessedDetails</code>
 * operation. You can use the <code>JobId</code> parameter in <code>GetServiceLastAccessedDetails</code> to retrieve the
 * status of your report job. When the report is complete, you can retrieve the generated report. The report includes a
 * list of AWS services that the resource (user, group, role, or managed policy) can
 *
 * access> <note>
 *
 * Service last accessed data does not use other policy types when determining whether a resource could access a service.
 * These other policy types include resource-based policies, access control lists, AWS Organizations policies, IAM
 * permissions boundaries, and AWS STS assume role policies. It only applies permissions policy logic. For more about the
 * evaluation of policy types, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
 * policies</a> in the <i>IAM User
 *
 * Guide</i>> </note>
 *
 * For each service that the resource could access using permissions policies, the operation returns details about the most
 * recent access attempt. If there was no attempt, the service is listed without details about the most recent attempt to
 * access the service. If the operation fails, the <code>GetServiceLastAccessedDetails</code> operation returns the reason
 * that it
 *
 * failed>
 *
 * The <code>GetServiceLastAccessedDetails</code> operation returns a list of services. This list includes the number of
 * entities that have attempted to access the service and the date and time of the last attempt. It also returns the ARN of
 * the following entity, depending on the resource ARN that you used to generate the
 *
 * report> <ul> <li>
 *
 * <b>User</b> – Returns the user ARN that you used to generate the
 *
 * repor> </li> <li>
 *
 * <b>Group</b> – Returns the ARN of the group member (user) that last attempted to access the
 *
 * servic> </li> <li>
 *
 * <b>Role</b> – Returns the role ARN that you used to generate the
 *
 * repor> </li> <li>
 *
 * <b>Policy</b> – Returns the ARN of the user or role that last used the policy to attempt to access the
 *
 * servic> </li> </ul>
 *
 * By default, the list is sorted by service
 *
 * namespace>
 *
 * If you specified <code>ACTION_LEVEL</code> granularity when you generated the report, this operation returns service and
 * action last accessed data. This includes the most recent access attempt for each tracked action within a service.
 * Otherwise, this operation returns only service
 *
 * data>
 *
 * For more information about service and action last accessed data, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing permissions using
 * service last accessed data</a> in the <i>IAM User
 */
GetServiceLastAccessedDetailsResponse * IamClient::getServiceLastAccessedDetails(const GetServiceLastAccessedDetailsRequest &request)
{
    return qobject_cast<GetServiceLastAccessedDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetServiceLastAccessedDetailsWithEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * After you generate a group or policy report using the <code>GenerateServiceLastAccessedDetails</code> operation, you can
 * use the <code>JobId</code> parameter in <code>GetServiceLastAccessedDetailsWithEntities</code>. This operation retrieves
 * the status of your report job and a list of entities that could have used group or policy permissions to access the
 * specified
 *
 * service> <ul> <li>
 *
 * <b>Group</b> – For a group report, this operation returns a list of users in the group that could have used the group’s
 * policies in an attempt to access the
 *
 * service> </li> <li>
 *
 * <b>Policy</b> – For a policy report, this operation returns a list of entities (users or roles) that could have used the
 * policy in an attempt to access the
 *
 * service> </li> </ul>
 *
 * You can also use this operation for user or role reports to retrieve details about those
 *
 * entities>
 *
 * If the operation fails, the <code>GetServiceLastAccessedDetailsWithEntities</code> operation returns the reason that it
 *
 * failed>
 *
 * By default, the list of associated entities is sorted by date, with the most recent access listed
 */
GetServiceLastAccessedDetailsWithEntitiesResponse * IamClient::getServiceLastAccessedDetailsWithEntities(const GetServiceLastAccessedDetailsWithEntitiesRequest &request)
{
    return qobject_cast<GetServiceLastAccessedDetailsWithEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetServiceLinkedRoleDeletionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the status of your service-linked role deletion. After you use <a>DeleteServiceLinkedRole</a> to submit a
 * service-linked role for deletion, you can use the <code>DeletionTaskId</code> parameter in
 * <code>GetServiceLinkedRoleDeletionStatus</code> to check the status of the deletion. If the deletion fails, this
 * operation returns the reason that it failed, if that information is returned by the
 */
GetServiceLinkedRoleDeletionStatusResponse * IamClient::getServiceLinkedRoleDeletionStatus(const GetServiceLinkedRoleDeletionStatusRequest &request)
{
    return qobject_cast<GetServiceLinkedRoleDeletionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the specified IAM user, including the user's creation date, path, unique ID, and
 *
 * ARN>
 *
 * If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID used to sign
 * the request to this
 */
GetUserResponse * IamClient::getUser(const GetUserRequest &request)
{
    return qobject_cast<GetUserResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * GetUserPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified inline policy document that is embedded in the specified IAM
 *
 * user> <note>
 *
 * Policies returned by this operation are URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC
 * 3986</a>. You can use a URL decoding method to convert the policy back to plain JSON text. For example, if you use Java,
 * you can use the <code>decode</code> method of the <code>java.net.URLDecoder</code> utility class in the Java SDK. Other
 * languages and SDKs provide similar
 *
 * functionality> </note>
 *
 * An IAM user can also have managed policies attached to it. To retrieve a managed policy document that is attached to a
 * user, use <a>GetPolicy</a> to determine the policy's default version. Then use <a>GetPolicyVersion</a> to retrieve the
 * policy
 *
 * document>
 *
 * For more information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 */
GetUserPolicyResponse * IamClient::getUserPolicy(const GetUserPolicyRequest &request)
{
    return qobject_cast<GetUserPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListAccessKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the access key IDs associated with the specified IAM user. If there is none, the operation
 * returns an empty
 *
 * list>
 *
 * Although each user is limited to a small number of keys, you can still paginate the results using the
 * <code>MaxItems</code> and <code>Marker</code>
 *
 * parameters>
 *
 * If the <code>UserName</code> field is not specified, the user name is determined implicitly based on the AWS access key
 * ID used to sign the request. This operation works for access keys under the AWS account. Consequently, you can use this
 * operation to manage AWS account root user credentials even if the AWS account has no associated
 *
 * users> <note>
 *
 * To ensure the security of your AWS account, the secret access key is accessible only during key and user
 */
ListAccessKeysResponse * IamClient::listAccessKeys(const ListAccessKeysRequest &request)
{
    return qobject_cast<ListAccessKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListAccountAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the account alias associated with the AWS account (Note: you can have only one). For information about using an
 * AWS account alias, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using an alias for
 * your AWS account ID</a> in the <i>IAM User
 */
ListAccountAliasesResponse * IamClient::listAccountAliases(const ListAccountAliasesRequest &request)
{
    return qobject_cast<ListAccountAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListAttachedGroupPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all managed policies that are attached to the specified IAM
 *
 * group>
 *
 * An IAM group can also have inline policies embedded with it. To list the inline policies for a group, use
 * <a>ListGroupPolicies</a>. For information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. You can use the
 * <code>PathPrefix</code> parameter to limit the list of policies to only those matching the specified path prefix. If
 * there are no policies attached to the specified group (or none that match the specified path prefix), the operation
 * returns an empty
 */
ListAttachedGroupPoliciesResponse * IamClient::listAttachedGroupPolicies(const ListAttachedGroupPoliciesRequest &request)
{
    return qobject_cast<ListAttachedGroupPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListAttachedRolePoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all managed policies that are attached to the specified IAM
 *
 * role>
 *
 * An IAM role can also have inline policies embedded with it. To list the inline policies for a role, use
 * <a>ListRolePolicies</a>. For information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. You can use the
 * <code>PathPrefix</code> parameter to limit the list of policies to only those matching the specified path prefix. If
 * there are no policies attached to the specified role (or none that match the specified path prefix), the operation
 * returns an empty
 */
ListAttachedRolePoliciesResponse * IamClient::listAttachedRolePolicies(const ListAttachedRolePoliciesRequest &request)
{
    return qobject_cast<ListAttachedRolePoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListAttachedUserPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all managed policies that are attached to the specified IAM
 *
 * user>
 *
 * An IAM user can also have inline policies embedded with it. To list the inline policies for a user, use
 * <a>ListUserPolicies</a>. For information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. You can use the
 * <code>PathPrefix</code> parameter to limit the list of policies to only those matching the specified path prefix. If
 * there are no policies attached to the specified group (or none that match the specified path prefix), the operation
 * returns an empty
 */
ListAttachedUserPoliciesResponse * IamClient::listAttachedUserPolicies(const ListAttachedUserPoliciesRequest &request)
{
    return qobject_cast<ListAttachedUserPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListEntitiesForPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all IAM users, groups, and roles that the specified managed policy is attached
 *
 * to>
 *
 * You can use the optional <code>EntityFilter</code> parameter to limit the results to a particular type of entity (users,
 * groups, or roles). For example, to list only the roles that are attached to the specified policy, set
 * <code>EntityFilter</code> to
 *
 * <code>Role</code>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 */
ListEntitiesForPolicyResponse * IamClient::listEntitiesForPolicy(const ListEntitiesForPolicyRequest &request)
{
    return qobject_cast<ListEntitiesForPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListGroupPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the names of the inline policies that are embedded in the specified IAM
 *
 * group>
 *
 * An IAM group can also have managed policies attached to it. To list the managed policies that are attached to a group,
 * use <a>ListAttachedGroupPolicies</a>. For more information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. If there are no inline
 * policies embedded with the specified group, the operation returns an empty
 */
ListGroupPoliciesResponse * IamClient::listGroupPolicies(const ListGroupPoliciesRequest &request)
{
    return qobject_cast<ListGroupPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the IAM groups that have the specified path
 *
 * prefix>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 */
ListGroupsResponse * IamClient::listGroups(const ListGroupsRequest &request)
{
    return qobject_cast<ListGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListGroupsForUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the IAM groups that the specified IAM user belongs
 *
 * to>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 */
ListGroupsForUserResponse * IamClient::listGroupsForUser(const ListGroupsForUserRequest &request)
{
    return qobject_cast<ListGroupsForUserResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListInstanceProfileTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that are attached to the specified IAM instance profile. The returned list of tags is sorted by tag key.
 * For more information about tagging, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging
 * IAM resources</a> in the <i>IAM User
 */
ListInstanceProfileTagsResponse * IamClient::listInstanceProfileTags(const ListInstanceProfileTagsRequest &request)
{
    return qobject_cast<ListInstanceProfileTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListInstanceProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the instance profiles that have the specified path prefix. If there are none, the operation returns an empty list.
 * For more information about instance profiles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About instance
 *
 * profiles</a>> <note>
 *
 * IAM resource-listing operations return a subset of the available attributes for the resource. For example, this
 * operation does not return tags, even though they are an attribute of the returned object. To view all of the information
 * for an instance profile, see
 *
 * <a>GetInstanceProfile</a>> </note>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 */
ListInstanceProfilesResponse * IamClient::listInstanceProfiles(const ListInstanceProfilesRequest &request)
{
    return qobject_cast<ListInstanceProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListInstanceProfilesForRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the instance profiles that have the specified associated IAM role. If there are none, the operation returns an
 * empty list. For more information about instance profiles, go to <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About instance
 *
 * profiles</a>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 */
ListInstanceProfilesForRoleResponse * IamClient::listInstanceProfilesForRole(const ListInstanceProfilesForRoleRequest &request)
{
    return qobject_cast<ListInstanceProfilesForRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListMFADeviceTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that are attached to the specified IAM virtual multi-factor authentication (MFA) device. The returned
 * list of tags is sorted by tag key. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 */
ListMFADeviceTagsResponse * IamClient::listMFADeviceTags(const ListMFADeviceTagsRequest &request)
{
    return qobject_cast<ListMFADeviceTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListMFADevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the MFA devices for an IAM user. If the request includes a IAM user name, then this operation lists all the MFA
 * devices associated with the specified user. If you do not specify a user name, IAM determines the user name implicitly
 * based on the AWS access key ID signing the request for this
 *
 * operation>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 */
ListMFADevicesResponse * IamClient::listMFADevices(const ListMFADevicesRequest &request)
{
    return qobject_cast<ListMFADevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListOpenIDConnectProviderTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that are attached to the specified OpenID Connect (OIDC)-compatible identity provider. The returned list
 * of tags is sorted by tag key. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_oidc.html">About web identity
 *
 * federation</a>>
 *
 * For more information about tagging, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging
 * IAM resources</a> in the <i>IAM User
 */
ListOpenIDConnectProviderTagsResponse * IamClient::listOpenIDConnectProviderTags(const ListOpenIDConnectProviderTagsRequest &request)
{
    return qobject_cast<ListOpenIDConnectProviderTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListOpenIDConnectProvidersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about the IAM OpenID Connect (OIDC) provider resource objects defined in the AWS
 *
 * account> <note>
 *
 * IAM resource-listing operations return a subset of the available attributes for the resource. For example, this
 * operation does not return tags, even though they are an attribute of the returned object. To view all of the information
 * for an OIDC provider, see
 */
ListOpenIDConnectProvidersResponse * IamClient::listOpenIDConnectProviders(const ListOpenIDConnectProvidersRequest &request)
{
    return qobject_cast<ListOpenIDConnectProvidersResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the managed policies that are available in your AWS account, including your own customer-defined managed
 * policies and all AWS managed
 *
 * policies>
 *
 * You can filter the list of policies that is returned using the optional <code>OnlyAttached</code>, <code>Scope</code>,
 * and <code>PathPrefix</code> parameters. For example, to list only the customer managed policies in your AWS account, set
 * <code>Scope</code> to <code>Local</code>. To list only AWS managed policies, set <code>Scope</code> to
 *
 * <code>AWS</code>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 *
 * parameters>
 *
 * For more information about managed policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 *
 * Guide</i>> <note>
 *
 * IAM resource-listing operations return a subset of the available attributes for the resource. For example, this
 * operation does not return tags, even though they are an attribute of the returned object. To view all of the information
 * for a customer manged policy, see
 */
ListPoliciesResponse * IamClient::listPolicies(const ListPoliciesRequest &request)
{
    return qobject_cast<ListPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListPoliciesGrantingServiceAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of policies that the IAM identity (user, group, or role) can use to access each specified
 *
 * service> <note>
 *
 * This operation does not use other policy types when determining whether a resource could access a service. These other
 * policy types include resource-based policies, access control lists, AWS Organizations policies, IAM permissions
 * boundaries, and AWS STS assume role policies. It only applies permissions policy logic. For more about the evaluation of
 * policy types, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
 * policies</a> in the <i>IAM User
 *
 * Guide</i>> </note>
 *
 * The list of policies returned by the operation depends on the ARN of the identity that you
 *
 * provide> <ul> <li>
 *
 * <b>User</b> – The list of policies includes the managed and inline policies that are attached to the user directly. The
 * list also includes any additional managed and inline policies that are attached to the group to which the user belongs.
 *
 * </p </li> <li>
 *
 * <b>Group</b> – The list of policies includes only the managed and inline policies that are attached to the group
 * directly. Policies that are attached to the group’s user are not
 *
 * included> </li> <li>
 *
 * <b>Role</b> – The list of policies includes only the managed and inline policies that are attached to the
 *
 * role> </li> </ul>
 *
 * For each managed policy, this operation returns the ARN and policy name. For each inline policy, it returns the policy
 * name and the entity to which it is attached. Inline policies do not have an ARN. For more information about these policy
 * types, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_managed-vs-inline.html">Managed
 * policies and inline policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * Policies that are attached to users and roles as permissions boundaries are not returned. To view which managed policy
 * is currently used to set the permissions boundary for a user or role, use the <a>GetUser</a> or <a>GetRole</a>
 */
ListPoliciesGrantingServiceAccessResponse * IamClient::listPoliciesGrantingServiceAccess(const ListPoliciesGrantingServiceAccessRequest &request)
{
    return qobject_cast<ListPoliciesGrantingServiceAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListPolicyTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that are attached to the specified IAM customer managed policy. The returned list of tags is sorted by
 * tag key. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 */
ListPolicyTagsResponse * IamClient::listPolicyTags(const ListPolicyTagsRequest &request)
{
    return qobject_cast<ListPolicyTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListPolicyVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about the versions of the specified managed policy, including the version that is currently set as the
 * policy's default
 *
 * version>
 *
 * For more information about managed policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 */
ListPolicyVersionsResponse * IamClient::listPolicyVersions(const ListPolicyVersionsRequest &request)
{
    return qobject_cast<ListPolicyVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListRolePoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the names of the inline policies that are embedded in the specified IAM
 *
 * role>
 *
 * An IAM role can also have managed policies attached to it. To list the managed policies that are attached to a role, use
 * <a>ListAttachedRolePolicies</a>. For more information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. If there are no inline
 * policies embedded with the specified role, the operation returns an empty
 */
ListRolePoliciesResponse * IamClient::listRolePolicies(const ListRolePoliciesRequest &request)
{
    return qobject_cast<ListRolePoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListRoleTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that are attached to the specified role. The returned list of tags is sorted by tag key. For more
 * information about tagging, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
 * resources</a> in the <i>IAM User
 */
ListRoleTagsResponse * IamClient::listRoleTags(const ListRoleTagsRequest &request)
{
    return qobject_cast<ListRoleTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListRolesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the IAM roles that have the specified path prefix. If there are none, the operation returns an empty list. For
 * more information about roles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with
 *
 * roles</a>> <note>
 *
 * IAM resource-listing operations return a subset of the available attributes for the resource. For example, this
 * operation does not return tags, even though they are an attribute of the returned object. To view all of the information
 * for a role, see
 *
 * <a>GetRole</a>> </note>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 */
ListRolesResponse * IamClient::listRoles(const ListRolesRequest &request)
{
    return qobject_cast<ListRolesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListSAMLProviderTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that are attached to the specified Security Assertion Markup Language (SAML) identity provider. The
 * returned list of tags is sorted by tag key. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_saml.html">About SAML 2.0-based
 *
 * federation</a>>
 *
 * For more information about tagging, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging
 * IAM resources</a> in the <i>IAM User
 */
ListSAMLProviderTagsResponse * IamClient::listSAMLProviderTags(const ListSAMLProviderTagsRequest &request)
{
    return qobject_cast<ListSAMLProviderTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListSAMLProvidersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the SAML provider resource objects defined in IAM in the account. IAM resource-listing operations return a subset
 * of the available attributes for the resource. For example, this operation does not return tags, even though they are an
 * attribute of the returned object. To view all of the information for a SAML provider, see
 *
 * <a>GetSAMLProvider</a>> <b>
 *
 * This operation requires <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 * Version
 */
ListSAMLProvidersResponse * IamClient::listSAMLProviders(const ListSAMLProvidersRequest &request)
{
    return qobject_cast<ListSAMLProvidersResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListSSHPublicKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the SSH public keys associated with the specified IAM user. If none exists, the operation
 * returns an empty
 *
 * list>
 *
 * The SSH public keys returned by this operation are used only for authenticating the IAM user to an AWS CodeCommit
 * repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a
 * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for
 * SSH connections</a> in the <i>AWS CodeCommit User
 *
 * Guide</i>>
 *
 * Although each user is limited to a small number of keys, you can still paginate the results using the
 * <code>MaxItems</code> and <code>Marker</code>
 */
ListSSHPublicKeysResponse * IamClient::listSSHPublicKeys(const ListSSHPublicKeysRequest &request)
{
    return qobject_cast<ListSSHPublicKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListServerCertificateTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that are attached to the specified IAM server certificate. The returned list of tags is sorted by tag
 * key. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 *
 * Guide</i>> <note>
 *
 * For certificates in a Region supported by AWS Certificate Manager (ACM), we recommend that you don't use IAM server
 * certificates. Instead, use ACM to provision, manage, and deploy your server certificates. For more information about IAM
 * server certificates, <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
 * with server certificates</a> in the <i>IAM User
 */
ListServerCertificateTagsResponse * IamClient::listServerCertificateTags(const ListServerCertificateTagsRequest &request)
{
    return qobject_cast<ListServerCertificateTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListServerCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the server certificates stored in IAM that have the specified path prefix. If none exist, the operation returns an
 * empty
 *
 * list>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 *
 * parameters>
 *
 * For more information about working with server certificates, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working with server
 * certificates</a> in the <i>IAM User Guide</i>. This topic also includes a list of AWS services that can use the server
 * certificates that you manage with
 *
 * IAM> <note>
 *
 * IAM resource-listing operations return a subset of the available attributes for the resource. For example, this
 * operation does not return tags, even though they are an attribute of the returned object. To view all of the information
 * for a servercertificate, see
 */
ListServerCertificatesResponse * IamClient::listServerCertificates(const ListServerCertificatesRequest &request)
{
    return qobject_cast<ListServerCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListServiceSpecificCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the service-specific credentials associated with the specified IAM user. If none exists, the
 * operation returns an empty list. The service-specific credentials returned by this operation are used only for
 * authenticating the IAM user to a specific service. For more information about using service-specific credentials to
 * authenticate to an AWS service, see <a
 * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-gc.html">Set up service-specific
 * credentials</a> in the AWS CodeCommit User
 */
ListServiceSpecificCredentialsResponse * IamClient::listServiceSpecificCredentials(const ListServiceSpecificCredentialsRequest &request)
{
    return qobject_cast<ListServiceSpecificCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListSigningCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the signing certificates associated with the specified IAM user. If none exists, the operation
 * returns an empty
 *
 * list>
 *
 * Although each user is limited to a small number of signing certificates, you can still paginate the results using the
 * <code>MaxItems</code> and <code>Marker</code>
 *
 * parameters>
 *
 * If the <code>UserName</code> field is not specified, the user name is determined implicitly based on the AWS access key
 * ID used to sign the request for this operation. This operation works for access keys under the AWS account.
 * Consequently, you can use this operation to manage AWS account root user credentials even if the AWS account has no
 * associated
 */
ListSigningCertificatesResponse * IamClient::listSigningCertificates(const ListSigningCertificatesRequest &request)
{
    return qobject_cast<ListSigningCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListUserPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the names of the inline policies embedded in the specified IAM
 *
 * user>
 *
 * An IAM user can also have managed policies attached to it. To list the managed policies that are attached to a user, use
 * <a>ListAttachedUserPolicies</a>. For more information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. If there are no inline
 * policies embedded with the specified user, the operation returns an empty
 */
ListUserPoliciesResponse * IamClient::listUserPolicies(const ListUserPoliciesRequest &request)
{
    return qobject_cast<ListUserPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListUserTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that are attached to the specified IAM user. The returned list of tags is sorted by tag key. For more
 * information about tagging, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
 * resources</a> in the <i>IAM User
 */
ListUserTagsResponse * IamClient::listUserTags(const ListUserTagsRequest &request)
{
    return qobject_cast<ListUserTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the IAM users that have the specified path prefix. If no path prefix is specified, the operation returns all users
 * in the AWS account. If there are none, the operation returns an empty
 *
 * list> <note>
 *
 * IAM resource-listing operations return a subset of the available attributes for the resource. For example, this
 * operation does not return tags, even though they are an attribute of the returned object. To view all of the information
 * for a user, see
 *
 * <a>GetUser</a>> </note>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 */
ListUsersResponse * IamClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ListVirtualMFADevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the virtual MFA devices defined in the AWS account by assignment status. If you do not specify an assignment
 * status, the operation returns a list of all virtual MFA devices. Assignment status can be <code>Assigned</code>,
 * <code>Unassigned</code>, or
 *
 * <code>Any</code>> <note>
 *
 * IAM resource-listing operations return a subset of the available attributes for the resource. For example, this
 * operation does not return tags, even though they are an attribute of the returned object. To view all of the information
 * for a virtual MFA device, see
 *
 * <a>ListVirtualMFADevices</a>> </note>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 */
ListVirtualMFADevicesResponse * IamClient::listVirtualMFADevices(const ListVirtualMFADevicesRequest &request)
{
    return qobject_cast<ListVirtualMFADevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * PutGroupPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates an inline policy document that is embedded in the specified IAM
 *
 * group>
 *
 * A user can also have managed policies attached to it. To attach a managed policy to a group, use
 * <a>AttachGroupPolicy</a>. To create a new managed policy, use <a>CreatePolicy</a>. For information about policies, see
 * <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For information about the maximum number of inline policies that you can embed in a group, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM and STS quotas</a> in the <i>IAM
 * User
 *
 * Guide</i>> <note>
 *
 * Because policy documents can be large, you should use POST rather than GET when calling <code>PutGroupPolicy</code>. For
 * general information about using the Query API with IAM, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making query requests</a> in the <i>IAM
 * User
 */
PutGroupPolicyResponse * IamClient::putGroupPolicy(const PutGroupPolicyRequest &request)
{
    return qobject_cast<PutGroupPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * PutRolePermissionsBoundaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates the policy that is specified as the IAM role's permissions boundary. You can use an AWS managed policy
 * or a customer managed policy to set the boundary for a role. Use the boundary to control the maximum permissions that
 * the role can have. Setting a permissions boundary is an advanced feature that can affect the permissions for the
 *
 * role>
 *
 * You cannot set the boundary for a service-linked role.
 *
 * </p <b>
 *
 * Policies used as permissions boundaries do not provide permissions. You must also attach a permissions policy to the
 * role. To learn how the effective permissions for a role are evaluated, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html">IAM JSON policy
 * evaluation logic</a> in the IAM User Guide.
 */
PutRolePermissionsBoundaryResponse * IamClient::putRolePermissionsBoundary(const PutRolePermissionsBoundaryRequest &request)
{
    return qobject_cast<PutRolePermissionsBoundaryResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * PutRolePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates an inline policy document that is embedded in the specified IAM
 *
 * role>
 *
 * When you embed an inline policy in a role, the inline policy is used as part of the role's access (permissions) policy.
 * The role's trust policy is created at the same time as the role, using <a>CreateRole</a>. You can update a role's trust
 * policy using <a>UpdateAssumeRolePolicy</a>. For more information about IAM roles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using roles to delegate permissions and
 * federate
 *
 * identities</a>>
 *
 * A role can also have a managed policy attached to it. To attach a managed policy to a role, use <a>AttachRolePolicy</a>.
 * To create a new managed policy, use <a>CreatePolicy</a>. For information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For information about the maximum number of inline policies that you can embed with a role, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM and STS quotas</a> in the <i>IAM
 * User
 *
 * Guide</i>> <note>
 *
 * Because policy documents can be large, you should use POST rather than GET when calling <code>PutRolePolicy</code>. For
 * general information about using the Query API with IAM, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making query requests</a> in the <i>IAM
 * User
 */
PutRolePolicyResponse * IamClient::putRolePolicy(const PutRolePolicyRequest &request)
{
    return qobject_cast<PutRolePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * PutUserPermissionsBoundaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates the policy that is specified as the IAM user's permissions boundary. You can use an AWS managed policy
 * or a customer managed policy to set the boundary for a user. Use the boundary to control the maximum permissions that
 * the user can have. Setting a permissions boundary is an advanced feature that can affect the permissions for the
 *
 * user> <b>
 *
 * Policies that are used as permissions boundaries do not provide permissions. You must also attach a permissions policy
 * to the user. To learn how the effective permissions for a user are evaluated, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html">IAM JSON policy
 * evaluation logic</a> in the IAM User Guide.
 */
PutUserPermissionsBoundaryResponse * IamClient::putUserPermissionsBoundary(const PutUserPermissionsBoundaryRequest &request)
{
    return qobject_cast<PutUserPermissionsBoundaryResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * PutUserPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates an inline policy document that is embedded in the specified IAM
 *
 * user>
 *
 * An IAM user can also have a managed policy attached to it. To attach a managed policy to a user, use
 * <a>AttachUserPolicy</a>. To create a new managed policy, use <a>CreatePolicy</a>. For information about policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For information about the maximum number of inline policies that you can embed in a user, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM and STS quotas</a> in the <i>IAM
 * User
 *
 * Guide</i>> <note>
 *
 * Because policy documents can be large, you should use POST rather than GET when calling <code>PutUserPolicy</code>. For
 * general information about using the Query API with IAM, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making query requests</a> in the <i>IAM
 * User
 */
PutUserPolicyResponse * IamClient::putUserPolicy(const PutUserPolicyRequest &request)
{
    return qobject_cast<PutUserPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * RemoveClientIDFromOpenIDConnectProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified client ID (also known as audience) from the list of client IDs registered for the specified IAM
 * OpenID Connect (OIDC) provider resource
 *
 * object>
 *
 * This operation is idempotent; it does not fail or return an error if you try to remove a client ID that does not
 */
RemoveClientIDFromOpenIDConnectProviderResponse * IamClient::removeClientIDFromOpenIDConnectProvider(const RemoveClientIDFromOpenIDConnectProviderRequest &request)
{
    return qobject_cast<RemoveClientIDFromOpenIDConnectProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * RemoveRoleFromInstanceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified IAM role from the specified EC2 instance
 *
 * profile> <b>
 *
 * Make sure that you do not have any Amazon EC2 instances running with the role you are about to remove from the instance
 * profile. Removing a role from an instance profile that is associated with a running instance might break any
 * applications running on the
 *
 * instance> </b>
 *
 * For more information about IAM roles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with roles</a>. For more
 * information about instance profiles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About instance
 */
RemoveRoleFromInstanceProfileResponse * IamClient::removeRoleFromInstanceProfile(const RemoveRoleFromInstanceProfileRequest &request)
{
    return qobject_cast<RemoveRoleFromInstanceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * RemoveUserFromGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified user from the specified
 */
RemoveUserFromGroupResponse * IamClient::removeUserFromGroup(const RemoveUserFromGroupRequest &request)
{
    return qobject_cast<RemoveUserFromGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ResetServiceSpecificCredentialResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resets the password for a service-specific credential. The new password is AWS generated and cryptographically strong.
 * It cannot be configured by the user. Resetting the password immediately invalidates the previous password associated
 * with this
 */
ResetServiceSpecificCredentialResponse * IamClient::resetServiceSpecificCredential(const ResetServiceSpecificCredentialRequest &request)
{
    return qobject_cast<ResetServiceSpecificCredentialResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * ResyncMFADeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Synchronizes the specified MFA device with its IAM resource object on the AWS
 *
 * servers>
 *
 * For more information about creating and working with virtual MFA devices, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using a virtual MFA device</a> in the
 * <i>IAM User
 */
ResyncMFADeviceResponse * IamClient::resyncMFADevice(const ResyncMFADeviceRequest &request)
{
    return qobject_cast<ResyncMFADeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * SetDefaultPolicyVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the specified version of the specified policy as the policy's default (operative)
 *
 * version>
 *
 * This operation affects all users, groups, and roles that the policy is attached to. To list the users, groups, and roles
 * that the policy is attached to, use
 *
 * <a>ListEntitiesForPolicy</a>>
 *
 * For information about managed policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed policies and inline
 * policies</a> in the <i>IAM User
 */
SetDefaultPolicyVersionResponse * IamClient::setDefaultPolicyVersion(const SetDefaultPolicyVersionRequest &request)
{
    return qobject_cast<SetDefaultPolicyVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * SetSecurityTokenServicePreferencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the specified version of the global endpoint token as the token version used for the AWS
 *
 * account>
 *
 * By default, AWS Security Token Service (STS) is available as a global service, and all STS requests go to a single
 * endpoint at <code>https://sts.amazonaws.com</code>. AWS recommends using Regional STS endpoints to reduce latency, build
 * in redundancy, and increase session token availability. For information about Regional endpoints for STS, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/sts.html">AWS AWS Security Token Service endpoints and quotas</a> in
 * the <i>AWS General
 *
 * Reference</i>>
 *
 * If you make an STS call to the global endpoint, the resulting session tokens might be valid in some Regions but not
 * others. It depends on the version that is set in this operation. Version 1 tokens are valid only in AWS Regions that are
 * available by default. These tokens do not work in manually enabled Regions, such as Asia Pacific (Hong Kong). Version 2
 * tokens are valid in all Regions. However, version 2 tokens are longer and might affect systems where you temporarily
 * store tokens. For information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating and
 * deactivating STS in an AWS region</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * To view the current session token version, see the <code>GlobalEndpointTokenVersion</code> entry in the response of the
 * <a>GetAccountSummary</a>
 */
SetSecurityTokenServicePreferencesResponse * IamClient::setSecurityTokenServicePreferences(const SetSecurityTokenServicePreferencesRequest &request)
{
    return qobject_cast<SetSecurityTokenServicePreferencesResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * SimulateCustomPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Simulate how a set of IAM policies and optionally a resource-based policy works with a list of API operations and AWS
 * resources to determine the policies' effective permissions. The policies are provided as
 *
 * strings>
 *
 * The simulation does not perform the API operations; it only checks the authorization to determine if the simulated
 * policies allow or deny the operations. You can simulate resources that don't exist in your
 *
 * account>
 *
 * If you want to simulate existing policies that are attached to an IAM user, group, or role, use
 * <a>SimulatePrincipalPolicy</a>
 *
 * instead>
 *
 * Context keys are variables that are maintained by AWS and its services and which provide details about the context of an
 * API query request. You can use the <code>Condition</code> element of an IAM policy to evaluate context keys. To get the
 * list of context keys that the policies require for correct simulation, use
 *
 * <a>GetContextKeysForCustomPolicy</a>>
 *
 * If the output is long, you can use <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
 *
 * results>
 *
 * For more information about using the policy simulator, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_testing-policies.html">Testing IAM policies with
 * the IAM policy simulator </a>in the <i>IAM User
 */
SimulateCustomPolicyResponse * IamClient::simulateCustomPolicy(const SimulateCustomPolicyRequest &request)
{
    return qobject_cast<SimulateCustomPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * SimulatePrincipalPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Simulate how a set of IAM policies attached to an IAM entity works with a list of API operations and AWS resources to
 * determine the policies' effective permissions. The entity can be an IAM user, group, or role. If you specify a user,
 * then the simulation also includes all of the policies that are attached to groups that the user belongs to. You can
 * simulate resources that don't exist in your
 *
 * account>
 *
 * You can optionally include a list of one or more additional policies specified as strings to include in the simulation.
 * If you want to simulate only policies specified as strings, use <a>SimulateCustomPolicy</a>
 *
 * instead>
 *
 * You can also optionally include one resource-based policy to be evaluated with each of the resources included in the
 *
 * simulation>
 *
 * The simulation does not perform the API operations; it only checks the authorization to determine if the simulated
 * policies allow or deny the
 *
 * operations>
 *
 * <b>Note:</b> This operation discloses information about the permissions granted to other users. If you do not want users
 * to see other user's permissions, then consider allowing them to use <a>SimulateCustomPolicy</a>
 *
 * instead>
 *
 * Context keys are variables maintained by AWS and its services that provide details about the context of an API query
 * request. You can use the <code>Condition</code> element of an IAM policy to evaluate context keys. To get the list of
 * context keys that the policies require for correct simulation, use
 *
 * <a>GetContextKeysForPrincipalPolicy</a>>
 *
 * If the output is long, you can use the <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
 *
 * results>
 *
 * For more information about using the policy simulator, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_testing-policies.html">Testing IAM policies with
 * the IAM policy simulator </a>in the <i>IAM User
 */
SimulatePrincipalPolicyResponse * IamClient::simulatePrincipalPolicy(const SimulatePrincipalPolicyRequest &request)
{
    return qobject_cast<SimulatePrincipalPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * TagInstanceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to an IAM instance profile. If a tag with the same key name already exists, then that tag is
 * overwritten with the new
 *
 * value>
 *
 * Each tag consists of a key name and an associated value. By assigning tags to your resources, you can do the
 *
 * following> <ul> <li>
 *
 * <b>Administrative grouping and discovery</b> - Attach tags to resources to aid in organization and search. For example,
 * you could search for all resources with the key name <i>Project</i> and the value <i>MyImportantProject</i>. Or search
 * for all resources with the key name <i>Cost Center</i> and the value <i>41200</i>.
 *
 * </p </li> <li>
 *
 * <b>Access control</b> - Include tags in IAM user-based and resource-based policies. You can use tags to restrict access
 * to only an IAM instance profile that has a specified tag attached. For examples of policies that show how to use tags to
 * control access, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control access using IAM
 * tags</a> in the <i>IAM User
 *
 * Guide</i>> </li> </ul> <note> <ul> <li>
 *
 * If any one of the tags is invalid or if you exceed the allowed maximum number of tags, then the entire request fails and
 * the resource is not created. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 *
 * Guide</i>> </li> <li>
 *
 * AWS always interprets the tag <code>Value</code> as a single string. If you need to store an array, you can store
 * comma-separated values in the string. However, you must interpret the value in your
 */
TagInstanceProfileResponse * IamClient::tagInstanceProfile(const TagInstanceProfileRequest &request)
{
    return qobject_cast<TagInstanceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * TagMFADeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to an IAM virtual multi-factor authentication (MFA) device. If a tag with the same key name
 * already exists, then that tag is overwritten with the new
 *
 * value>
 *
 * A tag consists of a key name and an associated value. By assigning tags to your resources, you can do the
 *
 * following> <ul> <li>
 *
 * <b>Administrative grouping and discovery</b> - Attach tags to resources to aid in organization and search. For example,
 * you could search for all resources with the key name <i>Project</i> and the value <i>MyImportantProject</i>. Or search
 * for all resources with the key name <i>Cost Center</i> and the value <i>41200</i>.
 *
 * </p </li> <li>
 *
 * <b>Access control</b> - Include tags in IAM user-based and resource-based policies. You can use tags to restrict access
 * to only an IAM virtual MFA device that has a specified tag attached. For examples of policies that show how to use tags
 * to control access, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control access using
 * IAM tags</a> in the <i>IAM User
 *
 * Guide</i>> </li> </ul> <note> <ul> <li>
 *
 * If any one of the tags is invalid or if you exceed the allowed maximum number of tags, then the entire request fails and
 * the resource is not created. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 *
 * Guide</i>> </li> <li>
 *
 * AWS always interprets the tag <code>Value</code> as a single string. If you need to store an array, you can store
 * comma-separated values in the string. However, you must interpret the value in your
 */
TagMFADeviceResponse * IamClient::tagMFADevice(const TagMFADeviceRequest &request)
{
    return qobject_cast<TagMFADeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * TagOpenIDConnectProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to an OpenID Connect (OIDC)-compatible identity provider. For more information about these
 * providers, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_oidc.html">About web
 * identity federation</a>. If a tag with the same key name already exists, then that tag is overwritten with the new
 *
 * value>
 *
 * A tag consists of a key name and an associated value. By assigning tags to your resources, you can do the
 *
 * following> <ul> <li>
 *
 * <b>Administrative grouping and discovery</b> - Attach tags to resources to aid in organization and search. For example,
 * you could search for all resources with the key name <i>Project</i> and the value <i>MyImportantProject</i>. Or search
 * for all resources with the key name <i>Cost Center</i> and the value <i>41200</i>.
 *
 * </p </li> <li>
 *
 * <b>Access control</b> - Include tags in IAM user-based and resource-based policies. You can use tags to restrict access
 * to only an OIDC provider that has a specified tag attached. For examples of policies that show how to use tags to
 * control access, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control access using IAM
 * tags</a> in the <i>IAM User
 *
 * Guide</i>> </li> </ul> <note> <ul> <li>
 *
 * If any one of the tags is invalid or if you exceed the allowed maximum number of tags, then the entire request fails and
 * the resource is not created. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 *
 * Guide</i>> </li> <li>
 *
 * AWS always interprets the tag <code>Value</code> as a single string. If you need to store an array, you can store
 * comma-separated values in the string. However, you must interpret the value in your
 */
TagOpenIDConnectProviderResponse * IamClient::tagOpenIDConnectProvider(const TagOpenIDConnectProviderRequest &request)
{
    return qobject_cast<TagOpenIDConnectProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * TagPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to an IAM customer managed policy. If a tag with the same key name already exists, then that tag
 * is overwritten with the new
 *
 * value>
 *
 * A tag consists of a key name and an associated value. By assigning tags to your resources, you can do the
 *
 * following> <ul> <li>
 *
 * <b>Administrative grouping and discovery</b> - Attach tags to resources to aid in organization and search. For example,
 * you could search for all resources with the key name <i>Project</i> and the value <i>MyImportantProject</i>. Or search
 * for all resources with the key name <i>Cost Center</i> and the value <i>41200</i>.
 *
 * </p </li> <li>
 *
 * <b>Access control</b> - Include tags in IAM user-based and resource-based policies. You can use tags to restrict access
 * to only an IAM customer managed policy that has a specified tag attached. For examples of policies that show how to use
 * tags to control access, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control access
 * using IAM tags</a> in the <i>IAM User
 *
 * Guide</i>> </li> </ul> <note> <ul> <li>
 *
 * If any one of the tags is invalid or if you exceed the allowed maximum number of tags, then the entire request fails and
 * the resource is not created. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 *
 * Guide</i>> </li> <li>
 *
 * AWS always interprets the tag <code>Value</code> as a single string. If you need to store an array, you can store
 * comma-separated values in the string. However, you must interpret the value in your
 */
TagPolicyResponse * IamClient::tagPolicy(const TagPolicyRequest &request)
{
    return qobject_cast<TagPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * TagRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to an IAM role. The role can be a regular role or a service-linked role. If a tag with the same
 * key name already exists, then that tag is overwritten with the new
 *
 * value>
 *
 * A tag consists of a key name and an associated value. By assigning tags to your resources, you can do the
 *
 * following> <ul> <li>
 *
 * <b>Administrative grouping and discovery</b> - Attach tags to resources to aid in organization and search. For example,
 * you could search for all resources with the key name <i>Project</i> and the value <i>MyImportantProject</i>. Or search
 * for all resources with the key name <i>Cost Center</i> and the value <i>41200</i>.
 *
 * </p </li> <li>
 *
 * <b>Access control</b> - Include tags in IAM user-based and resource-based policies. You can use tags to restrict access
 * to only an IAM role that has a specified tag attached. You can also restrict access to only those resources that have a
 * certain tag attached. For examples of policies that show how to use tags to control access, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control access using IAM tags</a> in the <i>IAM
 * User
 *
 * Guide</i>> </li> <li>
 *
 * <b>Cost allocation</b> - Use tags to help track which individuals and teams are using which AWS
 *
 * resources> </li> </ul> <note> <ul> <li>
 *
 * If any one of the tags is invalid or if you exceed the allowed maximum number of tags, then the entire request fails and
 * the resource is not created. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 *
 * Guide</i>> </li> <li>
 *
 * AWS always interprets the tag <code>Value</code> as a single string. If you need to store an array, you can store
 * comma-separated values in the string. However, you must interpret the value in your
 *
 * code> </li> </ul> </note>
 *
 * For more information about tagging, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging
 * IAM identities</a> in the <i>IAM User
 */
TagRoleResponse * IamClient::tagRole(const TagRoleRequest &request)
{
    return qobject_cast<TagRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * TagSAMLProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to a Security Assertion Markup Language (SAML) identity provider. For more information about these
 * providers, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_saml.html">About SAML
 * 2.0-based federation </a>. If a tag with the same key name already exists, then that tag is overwritten with the new
 *
 * value>
 *
 * A tag consists of a key name and an associated value. By assigning tags to your resources, you can do the
 *
 * following> <ul> <li>
 *
 * <b>Administrative grouping and discovery</b> - Attach tags to resources to aid in organization and search. For example,
 * you could search for all resources with the key name <i>Project</i> and the value <i>MyImportantProject</i>. Or search
 * for all resources with the key name <i>Cost Center</i> and the value <i>41200</i>.
 *
 * </p </li> <li>
 *
 * <b>Access control</b> - Include tags in IAM user-based and resource-based policies. You can use tags to restrict access
 * to only a SAML identity provider that has a specified tag attached. For examples of policies that show how to use tags
 * to control access, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control access using
 * IAM tags</a> in the <i>IAM User
 *
 * Guide</i>> </li> </ul> <note> <ul> <li>
 *
 * If any one of the tags is invalid or if you exceed the allowed maximum number of tags, then the entire request fails and
 * the resource is not created. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 *
 * Guide</i>> </li> <li>
 *
 * AWS always interprets the tag <code>Value</code> as a single string. If you need to store an array, you can store
 * comma-separated values in the string. However, you must interpret the value in your
 */
TagSAMLProviderResponse * IamClient::tagSAMLProvider(const TagSAMLProviderRequest &request)
{
    return qobject_cast<TagSAMLProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * TagServerCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to an IAM server certificate. If a tag with the same key name already exists, then that tag is
 * overwritten with the new
 *
 * value> <note>
 *
 * For certificates in a Region supported by AWS Certificate Manager (ACM), we recommend that you don't use IAM server
 * certificates. Instead, use ACM to provision, manage, and deploy your server certificates. For more information about IAM
 * server certificates, <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
 * with server certificates</a> in the <i>IAM User
 *
 * Guide</i>> </note>
 *
 * A tag consists of a key name and an associated value. By assigning tags to your resources, you can do the
 *
 * following> <ul> <li>
 *
 * <b>Administrative grouping and discovery</b> - Attach tags to resources to aid in organization and search. For example,
 * you could search for all resources with the key name <i>Project</i> and the value <i>MyImportantProject</i>. Or search
 * for all resources with the key name <i>Cost Center</i> and the value <i>41200</i>.
 *
 * </p </li> <li>
 *
 * <b>Access control</b> - Include tags in IAM user-based and resource-based policies. You can use tags to restrict access
 * to only a server certificate that has a specified tag attached. For examples of policies that show how to use tags to
 * control access, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control access using IAM
 * tags</a> in the <i>IAM User
 *
 * Guide</i>> </li> <li>
 *
 * <b>Cost allocation</b> - Use tags to help track which individuals and teams are using which AWS
 *
 * resources> </li> </ul> <note> <ul> <li>
 *
 * If any one of the tags is invalid or if you exceed the allowed maximum number of tags, then the entire request fails and
 * the resource is not created. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 *
 * Guide</i>> </li> <li>
 *
 * AWS always interprets the tag <code>Value</code> as a single string. If you need to store an array, you can store
 * comma-separated values in the string. However, you must interpret the value in your
 */
TagServerCertificateResponse * IamClient::tagServerCertificate(const TagServerCertificateRequest &request)
{
    return qobject_cast<TagServerCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * TagUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to an IAM user. If a tag with the same key name already exists, then that tag is overwritten with
 * the new
 *
 * value>
 *
 * A tag consists of a key name and an associated value. By assigning tags to your resources, you can do the
 *
 * following> <ul> <li>
 *
 * <b>Administrative grouping and discovery</b> - Attach tags to resources to aid in organization and search. For example,
 * you could search for all resources with the key name <i>Project</i> and the value <i>MyImportantProject</i>. Or search
 * for all resources with the key name <i>Cost Center</i> and the value <i>41200</i>.
 *
 * </p </li> <li>
 *
 * <b>Access control</b> - Include tags in IAM user-based and resource-based policies. You can use tags to restrict access
 * to only an IAM requesting user that has a specified tag attached. You can also restrict access to only those resources
 * that have a certain tag attached. For examples of policies that show how to use tags to control access, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control access using IAM tags</a> in the <i>IAM
 * User
 *
 * Guide</i>> </li> <li>
 *
 * <b>Cost allocation</b> - Use tags to help track which individuals and teams are using which AWS
 *
 * resources> </li> </ul> <note> <ul> <li>
 *
 * If any one of the tags is invalid or if you exceed the allowed maximum number of tags, then the entire request fails and
 * the resource is not created. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 *
 * Guide</i>> </li> <li>
 *
 * AWS always interprets the tag <code>Value</code> as a single string. If you need to store an array, you can store
 * comma-separated values in the string. However, you must interpret the value in your
 *
 * code> </li> </ul> </note>
 *
 * For more information about tagging, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging
 * IAM identities</a> in the <i>IAM User
 */
TagUserResponse * IamClient::tagUser(const TagUserRequest &request)
{
    return qobject_cast<TagUserResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UntagInstanceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the IAM instance profile. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 */
UntagInstanceProfileResponse * IamClient::untagInstanceProfile(const UntagInstanceProfileRequest &request)
{
    return qobject_cast<UntagInstanceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UntagMFADeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the IAM virtual multi-factor authentication (MFA) device. For more information about
 * tagging, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the
 * <i>IAM User
 */
UntagMFADeviceResponse * IamClient::untagMFADevice(const UntagMFADeviceRequest &request)
{
    return qobject_cast<UntagMFADeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UntagOpenIDConnectProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified OpenID Connect (OIDC)-compatible identity provider in IAM. For more
 * information about OIDC providers, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_oidc.html">About web identity federation</a>.
 * For more information about tagging, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging
 * IAM resources</a> in the <i>IAM User
 */
UntagOpenIDConnectProviderResponse * IamClient::untagOpenIDConnectProvider(const UntagOpenIDConnectProviderRequest &request)
{
    return qobject_cast<UntagOpenIDConnectProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UntagPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the customer managed policy. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 */
UntagPolicyResponse * IamClient::untagPolicy(const UntagPolicyRequest &request)
{
    return qobject_cast<UntagPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UntagRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the role. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 */
UntagRoleResponse * IamClient::untagRole(const UntagRoleRequest &request)
{
    return qobject_cast<UntagRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UntagSAMLProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified Security Assertion Markup Language (SAML) identity provider in IAM. For
 * more information about these providers, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_oidc.html">About web identity federation</a>.
 * For more information about tagging, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging
 * IAM resources</a> in the <i>IAM User
 */
UntagSAMLProviderResponse * IamClient::untagSAMLProvider(const UntagSAMLProviderRequest &request)
{
    return qobject_cast<UntagSAMLProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UntagServerCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the IAM server certificate. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 *
 * Guide</i>> <note>
 *
 * For certificates in a Region supported by AWS Certificate Manager (ACM), we recommend that you don't use IAM server
 * certificates. Instead, use ACM to provision, manage, and deploy your server certificates. For more information about IAM
 * server certificates, <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
 * with server certificates</a> in the <i>IAM User
 */
UntagServerCertificateResponse * IamClient::untagServerCertificate(const UntagServerCertificateRequest &request)
{
    return qobject_cast<UntagServerCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UntagUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the user. For more information about tagging, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM resources</a> in the <i>IAM User
 */
UntagUserResponse * IamClient::untagUser(const UntagUserRequest &request)
{
    return qobject_cast<UntagUserResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UpdateAccessKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the status of the specified access key from Active to Inactive, or vice versa. This operation can be used to
 * disable a user's key as part of a key rotation
 *
 * workflow>
 *
 * If the <code>UserName</code> is not specified, the user name is determined implicitly based on the AWS access key ID
 * used to sign the request. This operation works for access keys under the AWS account. Consequently, you can use this
 * operation to manage AWS account root user credentials even if the AWS account has no associated
 *
 * users>
 *
 * For information about rotating keys, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/ManagingCredentials.html">Managing keys and certificates</a> in
 * the <i>IAM User
 */
UpdateAccessKeyResponse * IamClient::updateAccessKey(const UpdateAccessKeyRequest &request)
{
    return qobject_cast<UpdateAccessKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UpdateAccountPasswordPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the password policy settings for the AWS
 *
 * account> <note> <ul> <li>
 *
 * This operation does not support partial updates. No parameters are required, but if you do not specify a parameter, that
 * parameter's value reverts to its default value. See the <b>Request Parameters</b> section for each parameter's default
 * value. Also note that some parameters do not allow the default parameter to be explicitly set. Instead, to invoke the
 * default value, do not include that parameter when you invoke the
 *
 * operation> </li> </ul> </note>
 *
 * For more information about using a password policy, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing an IAM password
 * policy</a> in the <i>IAM User
 */
UpdateAccountPasswordPolicyResponse * IamClient::updateAccountPasswordPolicy(const UpdateAccountPasswordPolicyRequest &request)
{
    return qobject_cast<UpdateAccountPasswordPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UpdateAssumeRolePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the policy that grants an IAM entity permission to assume a role. This is typically referred to as the "role
 * trust policy". For more information about roles, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using roles to delegate permissions and
 * federate
 */
UpdateAssumeRolePolicyResponse * IamClient::updateAssumeRolePolicy(const UpdateAssumeRolePolicyRequest &request)
{
    return qobject_cast<UpdateAssumeRolePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UpdateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the name and/or the path of the specified IAM
 *
 * group> <b>
 *
 * You should understand the implications of changing a group's path or name. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_WorkingWithGroupsAndUsers.html">Renaming users and
 * groups</a> in the <i>IAM User
 *
 * Guide</i>> </b> <note>
 *
 * The person making the request (the principal), must have permission to change the role group with the old name and the
 * new name. For example, to change the group named <code>Managers</code> to <code>MGRs</code>, the principal must have a
 * policy that allows them to update both groups. If the principal has permission to update the <code>Managers</code>
 * group, but not the <code>MGRs</code> group, then the update fails. For more information about permissions, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access management</a>.
 */
UpdateGroupResponse * IamClient::updateGroup(const UpdateGroupRequest &request)
{
    return qobject_cast<UpdateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UpdateLoginProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the password for the specified IAM user. You can use the AWS CLI, the AWS API, or the <b>Users</b> page in the
 * IAM console to change the password for any IAM user. Use <a>ChangePassword</a> to change your own password in the <b>My
 * Security Credentials</b> page in the AWS Management
 *
 * Console>
 *
 * For more information about modifying passwords, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing passwords</a> in the <i>IAM
 * User
 */
UpdateLoginProfileResponse * IamClient::updateLoginProfile(const UpdateLoginProfileRequest &request)
{
    return qobject_cast<UpdateLoginProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UpdateOpenIDConnectProviderThumbprintResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces the existing list of server certificate thumbprints associated with an OpenID Connect (OIDC) provider resource
 * object with a new list of
 *
 * thumbprints>
 *
 * The list that you pass with this operation completely replaces the existing list of thumbprints. (The lists are not
 *
 * merged.>
 *
 * Typically, you need to update a thumbprint only when the identity provider's certificate changes, which occurs rarely.
 * However, if the provider's certificate <i>does</i> change, any attempt to assume an IAM role that specifies the OIDC
 * provider as a principal fails until the certificate thumbprint is
 *
 * updated> <note>
 *
 * Trust for the OIDC provider is derived from the provider's certificate and is validated by the thumbprint. Therefore, it
 * is best to limit access to the <code>UpdateOpenIDConnectProviderThumbprint</code> operation to highly privileged
 */
UpdateOpenIDConnectProviderThumbprintResponse * IamClient::updateOpenIDConnectProviderThumbprint(const UpdateOpenIDConnectProviderThumbprintRequest &request)
{
    return qobject_cast<UpdateOpenIDConnectProviderThumbprintResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UpdateRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the description or maximum session duration setting of a
 */
UpdateRoleResponse * IamClient::updateRole(const UpdateRoleRequest &request)
{
    return qobject_cast<UpdateRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UpdateRoleDescriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use <a>UpdateRole</a>
 *
 * instead>
 *
 * Modifies only the description of a role. This operation performs the same function as the <code>Description</code>
 * parameter in the <code>UpdateRole</code>
 */
UpdateRoleDescriptionResponse * IamClient::updateRoleDescription(const UpdateRoleDescriptionRequest &request)
{
    return qobject_cast<UpdateRoleDescriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UpdateSAMLProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the metadata document for an existing SAML provider resource
 *
 * object> <note>
 *
 * This operation requires <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 * Version
 */
UpdateSAMLProviderResponse * IamClient::updateSAMLProvider(const UpdateSAMLProviderRequest &request)
{
    return qobject_cast<UpdateSAMLProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UpdateSSHPublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the status of an IAM user's SSH public key to active or inactive. SSH public keys that are inactive cannot be used
 * for authentication. This operation can be used to disable a user's SSH public key as part of a key rotation work
 *
 * flow>
 *
 * The SSH public key affected by this operation is used only for authenticating the associated IAM user to an AWS
 * CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a
 * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for
 * SSH connections</a> in the <i>AWS CodeCommit User
 */
UpdateSSHPublicKeyResponse * IamClient::updateSSHPublicKey(const UpdateSSHPublicKeyRequest &request)
{
    return qobject_cast<UpdateSSHPublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UpdateServerCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the name and/or the path of the specified server certificate stored in
 *
 * IAM>
 *
 * For more information about working with server certificates, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working with server
 * certificates</a> in the <i>IAM User Guide</i>. This topic also includes a list of AWS services that can use the server
 * certificates that you manage with
 *
 * IAM> <b>
 *
 * You should understand the implications of changing a server certificate's path or name. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs_manage.html#RenamingServerCerts">Renaming
 * a server certificate</a> in the <i>IAM User
 *
 * Guide</i>> </b> <note>
 *
 * The person making the request (the principal), must have permission to change the server certificate with the old name
 * and the new name. For example, to change the certificate named <code>ProductionCert</code> to <code>ProdCert</code>, the
 * principal must have a policy that allows them to update both certificates. If the principal has permission to update the
 * <code>ProductionCert</code> group, but not the <code>ProdCert</code> certificate, then the update fails. For more
 * information about permissions, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access
 * management</a> in the <i>IAM User
 */
UpdateServerCertificateResponse * IamClient::updateServerCertificate(const UpdateServerCertificateRequest &request)
{
    return qobject_cast<UpdateServerCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UpdateServiceSpecificCredentialResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the status of a service-specific credential to <code>Active</code> or <code>Inactive</code>. Service-specific
 * credentials that are inactive cannot be used for authentication to the service. This operation can be used to disable a
 * user's service-specific credential as part of a credential rotation work
 */
UpdateServiceSpecificCredentialResponse * IamClient::updateServiceSpecificCredential(const UpdateServiceSpecificCredentialRequest &request)
{
    return qobject_cast<UpdateServiceSpecificCredentialResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UpdateSigningCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the status of the specified user signing certificate from active to disabled, or vice versa. This operation can
 * be used to disable an IAM user's signing certificate as part of a certificate rotation work
 *
 * flow>
 *
 * If the <code>UserName</code> field is not specified, the user name is determined implicitly based on the AWS access key
 * ID used to sign the request. This operation works for access keys under the AWS account. Consequently, you can use this
 * operation to manage AWS account root user credentials even if the AWS account has no associated
 */
UpdateSigningCertificateResponse * IamClient::updateSigningCertificate(const UpdateSigningCertificateRequest &request)
{
    return qobject_cast<UpdateSigningCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UpdateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the name and/or the path of the specified IAM
 *
 * user> <b>
 *
 * You should understand the implications of changing an IAM user's path or name. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_users_manage.html#id_users_renaming">Renaming an IAM user</a>
 * and <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_groups_manage_rename.html">Renaming an IAM group</a> in
 * the <i>IAM User
 *
 * Guide</i>> </b> <note>
 *
 * To change a user name, the requester must have appropriate permissions on both the source object and the target object.
 * For example, to change Bob to Robert, the entity making the request must have permission on Bob and Robert, or must have
 * permission on all (*). For more information about permissions, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html">Permissions and policies</a>.
 */
UpdateUserResponse * IamClient::updateUser(const UpdateUserRequest &request)
{
    return qobject_cast<UpdateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UploadSSHPublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads an SSH public key and associates it with the specified IAM
 *
 * user>
 *
 * The SSH public key uploaded by this operation can be used only for authenticating the associated IAM user to an AWS
 * CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a
 * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for
 * SSH connections</a> in the <i>AWS CodeCommit User
 */
UploadSSHPublicKeyResponse * IamClient::uploadSSHPublicKey(const UploadSSHPublicKeyRequest &request)
{
    return qobject_cast<UploadSSHPublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UploadServerCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads a server certificate entity for the AWS account. The server certificate entity includes a public key
 * certificate, a private key, and an optional certificate chain, which should all be
 *
 * PEM-encoded>
 *
 * We recommend that you use <a href="https://docs.aws.amazon.com/acm/">AWS Certificate Manager</a> to provision, manage,
 * and deploy your server certificates. With ACM you can request a certificate, deploy it to AWS resources, and let ACM
 * handle certificate renewals for you. Certificates provided by ACM are free. For more information about using ACM, see
 * the <a href="https://docs.aws.amazon.com/acm/latest/userguide/">AWS Certificate Manager User
 *
 * Guide</a>>
 *
 * For more information about working with server certificates, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working with server
 * certificates</a> in the <i>IAM User Guide</i>. This topic includes a list of AWS services that can use the server
 * certificates that you manage with
 *
 * IAM>
 *
 * For information about the number of server certificates you can upload, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM and STS quotas</a> in the <i>IAM
 * User
 *
 * Guide</i>> <note>
 *
 * Because the body of the public key certificate, private key, and the certificate chain can be large, you should use POST
 * rather than GET when calling <code>UploadServerCertificate</code>. For information about setting up signatures and
 * authorization through the API, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API requests</a> in the
 * <i>AWS General Reference</i>. For general information about using the Query API with IAM, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/programming.html">Calling the API by making HTTP query
 * requests</a> in the <i>IAM User
 */
UploadServerCertificateResponse * IamClient::uploadServerCertificate(const UploadServerCertificateRequest &request)
{
    return qobject_cast<UploadServerCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IamClient service, and returns a pointer to an
 * UploadSigningCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads an X.509 signing certificate and associates it with the specified IAM user. Some AWS services require you to use
 * certificates to validate requests that are signed with a corresponding private key. When you upload the certificate, its
 * default status is
 *
 * <code>Active</code>>
 *
 * For information about when you would use an X.509 signing certificate, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Managing server certificates in
 * IAM</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * If the <code>UserName</code> is not specified, the IAM user name is determined implicitly based on the AWS access key ID
 * used to sign the request. This operation works for access keys under the AWS account. Consequently, you can use this
 * operation to manage AWS account root user credentials even if the AWS account has no associated
 *
 * users> <note>
 *
 * Because the body of an X.509 certificate can be large, you should use POST rather than GET when calling
 * <code>UploadSigningCertificate</code>. For information about setting up signatures and authorization through the API,
 * see <a href="https://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API requests</a>
 * in the <i>AWS General Reference</i>. For general information about using the Query API with IAM, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making query requests</a> in the <i>IAM
 * User
 */
UploadSigningCertificateResponse * IamClient::uploadSigningCertificate(const UploadSigningCertificateRequest &request)
{
    return qobject_cast<UploadSigningCertificateResponse *>(send(request));
}

/*!
 * \class QtAws::IAM::IamClientPrivate
 * \brief The IamClientPrivate class provides private implementation for IamClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a IamClientPrivate object with public implementation \a q.
 */
IamClientPrivate::IamClientPrivate(IamClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace IAM
} // namespace QtAws
