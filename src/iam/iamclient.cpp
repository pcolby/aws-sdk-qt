/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
#include "generatecredentialreportresponse.h"
#include "getaccesskeylastusedrequest.h"
#include "getaccesskeylastusedresponse.h"
#include "getaccountauthorizationdetailsrequest.h"
#include "getaccountauthorizationdetailsresponse.h"
#include "getaccountpasswordpolicyresponse.h"
#include "getaccountsummaryresponse.h"
#include "getcontextkeysforcustompolicyrequest.h"
#include "getcontextkeysforcustompolicyresponse.h"
#include "getcontextkeysforprincipalpolicyrequest.h"
#include "getcontextkeysforprincipalpolicyresponse.h"
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
#include "listinstanceprofilesrequest.h"
#include "listinstanceprofilesresponse.h"
#include "listinstanceprofilesforrolerequest.h"
#include "listinstanceprofilesforroleresponse.h"
#include "listmfadevicesrequest.h"
#include "listmfadevicesresponse.h"
#include "listopenidconnectprovidersrequest.h"
#include "listopenidconnectprovidersresponse.h"
#include "listpoliciesrequest.h"
#include "listpoliciesresponse.h"
#include "listpolicyversionsrequest.h"
#include "listpolicyversionsresponse.h"
#include "listrolepoliciesrequest.h"
#include "listrolepoliciesresponse.h"
#include "listrolesrequest.h"
#include "listrolesresponse.h"
#include "listsamlprovidersrequest.h"
#include "listsamlprovidersresponse.h"
#include "listsshpublickeysrequest.h"
#include "listsshpublickeysresponse.h"
#include "listservercertificatesrequest.h"
#include "listservercertificatesresponse.h"
#include "listservicespecificcredentialsrequest.h"
#include "listservicespecificcredentialsresponse.h"
#include "listsigningcertificatesrequest.h"
#include "listsigningcertificatesresponse.h"
#include "listuserpoliciesrequest.h"
#include "listuserpoliciesresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"
#include "listvirtualmfadevicesrequest.h"
#include "listvirtualmfadevicesresponse.h"
#include "putgrouppolicyrequest.h"
#include "putgrouppolicyresponse.h"
#include "putrolepolicyrequest.h"
#include "putrolepolicyresponse.h"
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
#include "simulatecustompolicyrequest.h"
#include "simulatecustompolicyresponse.h"
#include "simulateprincipalpolicyrequest.h"
#include "simulateprincipalpolicyresponse.h"
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
 * \brief The QtAws::IAM contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::IamClient
 *
 * \brief The IamClient class provides access the AWS Identity and Access Management (IAM) service.
 *
 * \ingroup IAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service that you can use to manage users and user permissions under
 *  your AWS account. This guide provides descriptions of IAM actions that you can call programmatically. For general
 *  information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity and Access Management (IAM)</a>. For the
 *  user guide for IAM, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/">Using IAM</a>.
 * 
 *  </p <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .NET, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to IAM and AWS. For example,
 *  the SDKs take care of tasks such as cryptographically signing requests (see below), managing errors, and retrying
 *  requests automatically. For information about the AWS SDKs, including how to download and install them, see the <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a> page.
 * 
 *  </p </note>
 * 
 *  We recommend that you use the AWS SDKs to make programmatic API calls to IAM. However, you can also use the IAM Query
 *  API to make direct calls to the IAM web service. To learn more about the IAM Query API, see <a
 *  href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using
 *  IAM</i> guide. IAM supports GET and POST requests for all actions. That is, the API does not require you to use GET for
 *  some actions and POST for others. However, GET requests are subject to the limitation size of a URL. Therefore, for
 *  operations that require larger sizes, use a POST request.
 * 
 *  </p
 * 
 *  <b>Signing Requests</b>
 * 
 *  </p
 * 
 *  Requests must be signed using an access key ID and a secret access key. We strongly recommend that you do not use your
 *  AWS account access key ID and secret access key for everyday work with IAM. You can use the access key ID and secret
 *  access key for an IAM user or you can use the AWS Security Token Service to generate temporary security credentials and
 *  use those to sign
 * 
 *  requests>
 * 
 *  To sign requests, we recommend that you use <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. If you have an
 *  existing application that uses Signature Version 2, you do not have to update it to use Signature Version 4. However,
 *  some operations now require Signature Version 4. The documentation for operations that require version 4 indicate this
 *  requirement.
 * 
 *  </p
 * 
 *  <b>Additional Resources</b>
 * 
 *  </p
 * 
 *  For more information, see the
 * 
 *  following> <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/general/latest/gr/aws-security-credentials.html">AWS Security Credentials</a>. This
 *  topic provides general information about the types of credentials used for accessing AWS.
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAMBestPractices.html">IAM Best Practices</a>. This topic
 *  presents a list of suggestions for using the IAM service to help secure your AWS resources.
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a>. This
 *  set of topics walk you through the process of signing a request using an access key ID and secret access key.
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
: QtAws::Core::AwsAbstractClient(new IamClientPrivate(this), parent)
{
    Q_D(IamClient);
    d->apiVersion = QStringLiteral("2010-05-08");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("iam");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Identity and Access Management");
    d->serviceName = QStringLiteral("iam");
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
 * \a  AwsEndpoint::getEndpoint()
 */
IamClient::IamClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IamClientPrivate(this), parent)
{
    Q_D(IamClient);
    d->apiVersion = QStringLiteral("2010-05-08");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("iam");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Identity and Access Management");
    d->serviceName = QStringLiteral("iam");
}

/*!
 * Adds a new client ID (also known as audience) to the list of client IDs already registered for the specified IAM OpenID
 * Connect (OIDC) provider
 *
 * resource>
 *
 * This operation is idempotent; it does not fail or return an error if you add an existing client ID to the
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddClientIDToOpenIDConnectProviderResponse * IamClient::addClientIDToOpenIDConnectProvider(const AddClientIDToOpenIDConnectProviderRequest &request)
{
    return qobject_cast<AddClientIDToOpenIDConnectProviderResponse *>(send(request));
}

/*!
 * Adds the specified IAM role to the specified instance profile. An instance profile can contain only one role, and this
 * limit cannot be increased. You can remove the existing role and then add a different role to an instance profile. You
 * must then wait for the change to appear across all of AWS because of <a
 * href="https://en.wikipedia.org/wiki/Eventual_consistency">eventual consistency</a>. To force the change, you must <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DisassociateIamInstanceProfile.html">disassociate the
 * instance profile</a> and then <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_AssociateIamInstanceProfile.html">associate the
 * instance profile</a>, or you can stop your instance and then restart
 *
 * it> <note>
 *
 * The caller of this API must be granted the <code>PassRole</code> permission on the IAM role by a permission
 *
 * policy> </note>
 *
 * For more information about roles, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. For more
 * information about instance profiles, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddRoleToInstanceProfileResponse * IamClient::addRoleToInstanceProfile(const AddRoleToInstanceProfileRequest &request)
{
    return qobject_cast<AddRoleToInstanceProfileResponse *>(send(request));
}

/*!
 * Adds the specified user to the specified
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddUserToGroupResponse * IamClient::addUserToGroup(const AddUserToGroupRequest &request)
{
    return qobject_cast<AddUserToGroupResponse *>(send(request));
}

/*!
 * Attaches the specified managed policy to the specified IAM
 *
 * group>
 *
 * You use this API to attach a managed policy to a group. To embed an inline policy in a group, use
 *
 * <a>PutGroupPolicy</a>>
 *
 * For more information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachGroupPolicyResponse * IamClient::attachGroupPolicy(const AttachGroupPolicyRequest &request)
{
    return qobject_cast<AttachGroupPolicyResponse *>(send(request));
}

/*!
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
 * Use this API to attach a <i>managed</i> policy to a role. To embed an inline policy in a role, use <a>PutRolePolicy</a>.
 * For more information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachRolePolicyResponse * IamClient::attachRolePolicy(const AttachRolePolicyRequest &request)
{
    return qobject_cast<AttachRolePolicyResponse *>(send(request));
}

/*!
 * Attaches the specified managed policy to the specified
 *
 * user>
 *
 * You use this API to attach a <i>managed</i> policy to a user. To embed an inline policy in a user, use
 *
 * <a>PutUserPolicy</a>>
 *
 * For more information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachUserPolicyResponse * IamClient::attachUserPolicy(const AttachUserPolicyRequest &request)
{
    return qobject_cast<AttachUserPolicyResponse *>(send(request));
}

/*!
 * Changes the password of the IAM user who is calling this operation. The AWS account root user password is not affected
 * by this
 *
 * operation>
 *
 * To change the password for a different user, see <a>UpdateLoginProfile</a>. For more information about modifying
 * passwords, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
 * Passwords</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ChangePasswordResponse * IamClient::changePassword(const ChangePasswordRequest &request)
{
    return qobject_cast<ChangePasswordResponse *>(send(request));
}

/*!
 * Creates a new AWS secret access key and corresponding AWS access key ID for the specified user. The default status for
 * new keys is
 *
 * <code>Active</code>>
 *
 * If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the
 * request. Because this operation works for access keys under the AWS account, you can use this operation to manage AWS
 * account root user credentials. This is true even if the AWS account has no associated
 *
 * users>
 *
 * For information about limits on the number of keys you can create, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the
 * <i>IAM User
 *
 * Guide</i>> <b>
 *
 * To ensure the security of your AWS account, the secret access key is accessible only during key and user creation. You
 * must save the key (for example, in a text file) if you want to be able to access it again. If a secret key is lost, you
 * can delete the access keys for the associated user and then create new
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateAccessKeyResponse * IamClient::createAccessKey(const CreateAccessKeyRequest &request)
{
    return qobject_cast<CreateAccessKeyResponse *>(send(request));
}

/*!
 * Creates an alias for your AWS account. For information about using an AWS account alias, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using an Alias for Your AWS Account ID</a> in
 * the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateAccountAliasResponse * IamClient::createAccountAlias(const CreateAccountAliasRequest &request)
{
    return qobject_cast<CreateAccountAliasResponse *>(send(request));
}

/*!
 * Creates a new
 *
 * group>
 *
 * For information about the number of groups you can create, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the
 * <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateGroupResponse * IamClient::createGroup(const CreateGroupRequest &request)
{
    return qobject_cast<CreateGroupResponse *>(send(request));
}

/*!
 * Creates a new instance profile. For information about instance profiles, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance
 *
 * Profiles</a>>
 *
 * For information about the number of instance profiles you can create, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the
 * <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateInstanceProfileResponse * IamClient::createInstanceProfile(const CreateInstanceProfileRequest &request)
{
    return qobject_cast<CreateInstanceProfileResponse *>(send(request));
}

/*!
 * Creates a password for the specified user, giving the user the ability to access AWS services through the AWS Management
 * Console. For more information about managing passwords, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing Passwords</a> in the <i>IAM
 * User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateLoginProfileResponse * IamClient::createLoginProfile(const CreateLoginProfileRequest &request)
{
    return qobject_cast<CreateLoginProfileResponse *>(send(request));
}

/*!
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
 * A list of thumbprints of the server certificate(s) that the IdP
 *
 * uses> </li> </ul>
 *
 * You get all of this information from the OIDC IdP that you want to use to access
 *
 * AWS> <note>
 *
 * Because trust for the OIDC provider is derived from the IAM provider that this operation creates, it is best to limit
 * access to the <a>CreateOpenIDConnectProvider</a> operation to highly privileged
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateOpenIDConnectProviderResponse * IamClient::createOpenIDConnectProvider(const CreateOpenIDConnectProviderRequest &request)
{
    return qobject_cast<CreateOpenIDConnectProviderResponse *>(send(request));
}

/*!
 * Creates a new managed policy for your AWS
 *
 * account>
 *
 * This operation creates a policy version with a version identifier of <code>v1</code> and sets v1 as the policy's default
 * version. For more information about policy versions, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for Managed
 * Policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For more information about managed policies in general, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePolicyResponse * IamClient::createPolicy(const CreatePolicyRequest &request)
{
    return qobject_cast<CreatePolicyResponse *>(send(request));
}

/*!
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
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for Managed
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePolicyVersionResponse * IamClient::createPolicyVersion(const CreatePolicyVersionRequest &request)
{
    return qobject_cast<CreatePolicyVersionResponse *>(send(request));
}

/*!
 * Creates a new role for your AWS account. For more information about roles, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">IAM Roles</a>. For information about
 * limitations on role names and the number of roles you can create, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the
 * <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateRoleResponse * IamClient::createRole(const CreateRoleRequest &request)
{
    return qobject_cast<CreateRoleResponse *>(send(request));
}

/*!
 * Creates an IAM resource that describes an identity provider (IdP) that supports SAML
 *
 * 2.0>
 *
 * The SAML provider resource that you create with this operation can be used as a principal in an IAM role's trust policy.
 * Such a policy can enable federated users who sign-in using the SAML IdP to assume the role. You can create an IAM role
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
 * This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 * Version
 *
 * 4</a>> </note>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-saml.html">Enabling SAML 2.0
 * Federated Users to Access the AWS Management Console</a> and <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_saml.html">About SAML 2.0-based Federation</a>
 * in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSAMLProviderResponse * IamClient::createSAMLProvider(const CreateSAMLProviderRequest &request)
{
    return qobject_cast<CreateSAMLProviderResponse *>(send(request));
}

/*!
 * Creates an IAM role that is linked to a specific AWS service. The service controls the attached policies and when the
 * role can be deleted. This helps ensure that the service is not broken by an unexpectedly changed or deleted role, which
 * could put your AWS resources into an unknown state. Allowing the service to control the role helps improve service
 * stability and proper cleanup when a service and its role are no longer
 *
 * needed>
 *
 * The name of the role is generated by combining the string that you specify for the <code>AWSServiceName</code> parameter
 * with the string that you specify for the <code>CustomSuffix</code> parameter. The resulting name must be unique in your
 * account or the request
 *
 * fails>
 *
 * To attach a policy to this service-linked role, you must make the request using the AWS service that depends on this
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateServiceLinkedRoleResponse * IamClient::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request)
{
    return qobject_cast<CreateServiceLinkedRoleResponse *>(send(request));
}

/*!
 * Generates a set of credentials consisting of a user name and password that can be used to access the service specified
 * in the request. These credentials are generated by IAM, and can be used only for the specified service.
 *
 * </p
 *
 * You can have a maximum of two sets of service-specific credentials for each supported service per
 *
 * user>
 *
 * The only supported service at this time is AWS
 *
 * CodeCommit>
 *
 * You can reset the password to a new service-generated value by calling
 *
 * <a>ResetServiceSpecificCredential</a>>
 *
 * For more information about service-specific credentials, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_ssh-keys.html">Using IAM with AWS CodeCommit: Git
 * Credentials, SSH Keys, and AWS Access Keys</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateServiceSpecificCredentialResponse * IamClient::createServiceSpecificCredential(const CreateServiceSpecificCredentialRequest &request)
{
    return qobject_cast<CreateServiceSpecificCredentialResponse *>(send(request));
}

/*!
 * Creates a new IAM user for your AWS
 *
 * account>
 *
 * For information about limitations on the number of IAM users you can create, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the
 * <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateUserResponse * IamClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Creates a new virtual MFA device for the AWS account. After creating the virtual MFA, use <a>EnableMFADevice</a> to
 * attach the MFA device to an IAM user. For more information about creating and working with virtual MFA devices, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using a Virtual MFA Device</a> in the
 * <i>IAM User
 *
 * Guide</i>>
 *
 * For information about limits on the number of MFA devices you can create, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on Entities</a> in the
 * <i>IAM User
 *
 * Guide</i>> <b>
 *
 * The seed information contained in the QR code and the Base32 string should be treated like any other secret access
 * information, such as your AWS access keys or your passwords. After you provision your virtual device, you should ensure
 * that the information is destroyed following secure
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateVirtualMFADeviceResponse * IamClient::createVirtualMFADevice(const CreateVirtualMFADeviceRequest &request)
{
    return qobject_cast<CreateVirtualMFADeviceResponse *>(send(request));
}

/*!
 * Deactivates the specified MFA device and removes it from association with the user name for which it was originally
 *
 * enabled>
 *
 * For more information about creating and working with virtual MFA devices, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using a Virtual MFA Device</a> in the
 * <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeactivateMFADeviceResponse * IamClient::deactivateMFADevice(const DeactivateMFADeviceRequest &request)
{
    return qobject_cast<DeactivateMFADeviceResponse *>(send(request));
}

/*!
 * Deletes the access key pair associated with the specified IAM
 *
 * user>
 *
 * If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the
 * request. Because this operation works for access keys under the AWS account, you can use this operation to manage AWS
 * account root user credentials even if the AWS account has no associated
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAccessKeyResponse * IamClient::deleteAccessKey(const DeleteAccessKeyRequest &request)
{
    return qobject_cast<DeleteAccessKeyResponse *>(send(request));
}

/*!
 * Deletes the specified AWS account alias. For information about using an AWS account alias, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using an Alias for Your AWS Account ID</a> in
 * the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAccountAliasResponse * IamClient::deleteAccountAlias(const DeleteAccountAliasRequest &request)
{
    return qobject_cast<DeleteAccountAliasResponse *>(send(request));
}

/*!
 * Deletes the password policy for the AWS account. There are no
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAccountPasswordPolicyResponse * IamClient::deleteAccountPasswordPolicy()
{
    return qobject_cast<DeleteAccountPasswordPolicyResponse *>(send(request));
}

/*!
 * Deletes the specified IAM group. The group must not contain any users or have any attached
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteGroupResponse * IamClient::deleteGroup(const DeleteGroupRequest &request)
{
    return qobject_cast<DeleteGroupResponse *>(send(request));
}

/*!
 * Deletes the specified inline policy that is embedded in the specified IAM
 *
 * group>
 *
 * A group can also have managed policies attached to it. To detach a managed policy from a group, use
 * <a>DetachGroupPolicy</a>. For more information about policies, refer to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteGroupPolicyResponse * IamClient::deleteGroupPolicy(const DeleteGroupPolicyRequest &request)
{
    return qobject_cast<DeleteGroupPolicyResponse *>(send(request));
}

/*!
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
 * For more information about instance profiles, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteInstanceProfileResponse * IamClient::deleteInstanceProfile(const DeleteInstanceProfileRequest &request)
{
    return qobject_cast<DeleteInstanceProfileResponse *>(send(request));
}

/*!
 * Deletes the password for the specified IAM user, which terminates the user's ability to access AWS services through the
 * AWS Management
 *
 * Console> <b>
 *
 * Deleting a user's password does not prevent a user from accessing AWS through the command line interface or the API. To
 * prevent all user access you must also either make any access keys inactive or delete them. For more information about
 * making keys inactive or deleting them, see <a>UpdateAccessKey</a> and <a>DeleteAccessKey</a>.
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteLoginProfileResponse * IamClient::deleteLoginProfile(const DeleteLoginProfileRequest &request)
{
    return qobject_cast<DeleteLoginProfileResponse *>(send(request));
}

/*!
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
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteOpenIDConnectProviderResponse * IamClient::deleteOpenIDConnectProvider(const DeleteOpenIDConnectProviderRequest &request)
{
    return qobject_cast<DeleteOpenIDConnectProviderResponse *>(send(request));
}

/*!
 * Deletes the specified managed
 *
 * policy>
 *
 * Before you can delete a managed policy, you must first detach the policy from all users, groups, and roles that it is
 * attached to. In addition you must delete all the policy's versions. The following steps describe the process for
 * deleting a managed
 *
 * policy> <ul> <li>
 *
 * Detach the policy from all users, groups, and roles that the policy is attached to, using the <a>DetachUserPolicy</a>,
 * <a>DetachGroupPolicy</a>, or <a>DetachRolePolicy</a> API operations. To list all the users, groups, and roles that a
 * policy is attached to, use
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
 * API> </li> </ul>
 *
 * For information about managed policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePolicyResponse * IamClient::deletePolicy(const DeletePolicyRequest &request)
{
    return qobject_cast<DeletePolicyResponse *>(send(request));
}

/*!
 * Deletes the specified version from the specified managed
 *
 * policy>
 *
 * You cannot delete the default version from a policy using this API. To delete the default version from a policy, use
 * <a>DeletePolicy</a>. To find out which version of a policy is marked as the default version, use
 *
 * <a>ListPolicyVersions</a>>
 *
 * For information about versions for managed policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for Managed
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePolicyVersionResponse * IamClient::deletePolicyVersion(const DeletePolicyVersionRequest &request)
{
    return qobject_cast<DeletePolicyVersionResponse *>(send(request));
}

/*!
 * Deletes the specified role. The role must not have any policies attached. For more information about roles, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with
 *
 * Roles</a>> <b>
 *
 * Make sure that you do not have any Amazon EC2 instances running with the role you are about to delete. Deleting a role
 * or instance profile that is associated with a running instance will break any applications running on the
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRoleResponse * IamClient::deleteRole(const DeleteRoleRequest &request)
{
    return qobject_cast<DeleteRoleResponse *>(send(request));
}

/*!
 * Deletes the specified inline policy that is embedded in the specified IAM
 *
 * role>
 *
 * A role can also have managed policies attached to it. To detach a managed policy from a role, use
 * <a>DetachRolePolicy</a>. For more information about policies, refer to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRolePolicyResponse * IamClient::deleteRolePolicy(const DeleteRolePolicyRequest &request)
{
    return qobject_cast<DeleteRolePolicyResponse *>(send(request));
}

/*!
 * Deletes a SAML provider resource in
 *
 * IAM>
 *
 * Deleting the provider resource from IAM does not update any roles that reference the SAML provider resource's ARN as a
 * principal in their trust policies. Any attempt to assume a role that references a non-existent provider resource ARN
 *
 * fails> <note>
 *
 * This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 * Version
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSAMLProviderResponse * IamClient::deleteSAMLProvider(const DeleteSAMLProviderRequest &request)
{
    return qobject_cast<DeleteSAMLProviderResponse *>(send(request));
}

/*!
 * Deletes the specified SSH public
 *
 * key>
 *
 * The SSH public key deleted by this operation is used only for authenticating the associated IAM user to an AWS
 * CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a
 * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for
 * SSH Connections</a> in the <i>AWS CodeCommit User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSSHPublicKeyResponse * IamClient::deleteSSHPublicKey(const DeleteSSHPublicKeyRequest &request)
{
    return qobject_cast<DeleteSSHPublicKeyResponse *>(send(request));
}

/*!
 * Deletes the specified server
 *
 * certificate>
 *
 * For more information about working with server certificates, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working with Server
 * Certificates</a> in the <i>IAM User Guide</i>. This topic also includes a list of AWS services that can use the server
 * certificates that you manage with
 *
 * IAM> <b>
 *
 * If you are using a server certificate with Elastic Load Balancing, deleting the certificate could have implications for
 * your application. If Elastic Load Balancing doesn't detect the deletion of bound certificates, it may continue to use
 * the certificates. This could cause Elastic Load Balancing to stop accepting traffic. We recommend that you remove the
 * reference to the certificate from Elastic Load Balancing before using this command to delete the certificate. For more
 * information, go to <a
 * href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/APIReference/API_DeleteLoadBalancerListeners.html">DeleteLoadBalancerListeners</a>
 * in the <i>Elastic Load Balancing API
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteServerCertificateResponse * IamClient::deleteServerCertificate(const DeleteServerCertificateRequest &request)
{
    return qobject_cast<DeleteServerCertificateResponse *>(send(request));
}

/*!
 * Submits a service-linked role deletion request and returns a <code>DeletionTaskId</code>, which you can use to check the
 * status of the deletion. Before you call this operation, confirm that the role has no active sessions and that any
 * resources used by the role in the linked service are deleted. If you call this operation more than once for the same
 * service-linked role and an earlier deletion task is not complete, then the <code>DeletionTaskId</code> of the earlier
 * request is
 *
 * returned>
 *
 * If you submit a deletion request for a service-linked role whose linked service is still accessing a resource, then the
 * deletion task fails. If it fails, the <a>GetServiceLinkedRoleDeletionStatus</a> API operation returns the reason for the
 * failure, usually including the resources that must be deleted. To delete the service-linked role, you must first remove
 * those resources from the linked service and then submit the deletion request again. Resources are specific to the
 * service that is linked to the role. For more information about removing resources from a service, see the <a
 * href="http://docs.aws.amazon.com/">AWS documentation</a> for your
 *
 * service>
 *
 * For more information about service-linked roles, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_terms-and-concepts.html#iam-term-service-linked-role">Roles
 * Terms and Concepts: AWS Service-Linked Role</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteServiceLinkedRoleResponse * IamClient::deleteServiceLinkedRole(const DeleteServiceLinkedRoleRequest &request)
{
    return qobject_cast<DeleteServiceLinkedRoleResponse *>(send(request));
}

/*!
 * Deletes the specified service-specific
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteServiceSpecificCredentialResponse * IamClient::deleteServiceSpecificCredential(const DeleteServiceSpecificCredentialRequest &request)
{
    return qobject_cast<DeleteServiceSpecificCredentialResponse *>(send(request));
}

/*!
 * Deletes a signing certificate associated with the specified IAM
 *
 * user>
 *
 * If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the
 * request. Because this operation works for access keys under the AWS account, you can use this operation to manage AWS
 * account root user credentials even if the AWS account has no associated IAM
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSigningCertificateResponse * IamClient::deleteSigningCertificate(const DeleteSigningCertificateRequest &request)
{
    return qobject_cast<DeleteSigningCertificateResponse *>(send(request));
}

/*!
 * Deletes the specified IAM user. The user must not belong to any groups or have any access keys, signing certificates, or
 * attached
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUserResponse * IamClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Deletes the specified inline policy that is embedded in the specified IAM
 *
 * user>
 *
 * A user can also have managed policies attached to it. To detach a managed policy from a user, use
 * <a>DetachUserPolicy</a>. For more information about policies, refer to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUserPolicyResponse * IamClient::deleteUserPolicy(const DeleteUserPolicyRequest &request)
{
    return qobject_cast<DeleteUserPolicyResponse *>(send(request));
}

/*!
 * Deletes a virtual MFA
 *
 * device> <note>
 *
 * You must deactivate a user's virtual MFA device before you can delete it. For information about deactivating MFA
 * devices, see <a>DeactivateMFADevice</a>.
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteVirtualMFADeviceResponse * IamClient::deleteVirtualMFADevice(const DeleteVirtualMFADeviceRequest &request)
{
    return qobject_cast<DeleteVirtualMFADeviceResponse *>(send(request));
}

/*!
 * Removes the specified managed policy from the specified IAM
 *
 * group>
 *
 * A group can also have inline policies embedded with it. To delete an inline policy, use the <a>DeleteGroupPolicy</a>
 * API. For information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachGroupPolicyResponse * IamClient::detachGroupPolicy(const DetachGroupPolicyRequest &request)
{
    return qobject_cast<DetachGroupPolicyResponse *>(send(request));
}

/*!
 * Removes the specified managed policy from the specified
 *
 * role>
 *
 * A role can also have inline policies embedded with it. To delete an inline policy, use the <a>DeleteRolePolicy</a> API.
 * For information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachRolePolicyResponse * IamClient::detachRolePolicy(const DetachRolePolicyRequest &request)
{
    return qobject_cast<DetachRolePolicyResponse *>(send(request));
}

/*!
 * Removes the specified managed policy from the specified
 *
 * user>
 *
 * A user can also have inline policies embedded with it. To delete an inline policy, use the <a>DeleteUserPolicy</a> API.
 * For information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachUserPolicyResponse * IamClient::detachUserPolicy(const DetachUserPolicyRequest &request)
{
    return qobject_cast<DetachUserPolicyResponse *>(send(request));
}

/*!
 * Enables the specified MFA device and associates it with the specified IAM user. When enabled, the MFA device is required
 * for every subsequent login by the IAM user associated with the
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EnableMFADeviceResponse * IamClient::enableMFADevice(const EnableMFADeviceRequest &request)
{
    return qobject_cast<EnableMFADeviceResponse *>(send(request));
}

/*!
 * Generates a credential report for the AWS account. For more information about the credential report, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting Credential Reports</a> in the
 * <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GenerateCredentialReportResponse * IamClient::generateCredentialReport()
{
    return qobject_cast<GenerateCredentialReportResponse *>(send(request));
}

/*!
 * Retrieves information about when the specified access key was last used. The information includes the date and time of
 * last use, along with the AWS service and region that were specified in the last request made with that
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAccessKeyLastUsedResponse * IamClient::getAccessKeyLastUsed(const GetAccessKeyLastUsedRequest &request)
{
    return qobject_cast<GetAccessKeyLastUsedResponse *>(send(request));
}

/*!
 * Retrieves information about all IAM users, groups, roles, and policies in your AWS account, including their
 * relationships to one another. Use this API to obtain a snapshot of the configuration of IAM permissions (users, groups,
 * roles, and policies) in your
 *
 * account> <note>
 *
 * Policies returned by this API are URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>.
 * You can use a URL decoding method to convert the policy back to plain JSON text. For example, if you use Java, you can
 * use the <code>decode</code> method of the <code>java.net.URLDecoder</code> utility class in the Java SDK. Other
 * languages and SDKs provide similar
 *
 * functionality> </note>
 *
 * You can optionally filter the results using the <code>Filter</code> parameter. You can paginate the results using the
 * <code>MaxItems</code> and <code>Marker</code>
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAccountAuthorizationDetailsResponse * IamClient::getAccountAuthorizationDetails(const GetAccountAuthorizationDetailsRequest &request)
{
    return qobject_cast<GetAccountAuthorizationDetailsResponse *>(send(request));
}

/*!
 * Retrieves the password policy for the AWS account. For more information about using a password policy, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing an IAM Password
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAccountPasswordPolicyResponse * IamClient::getAccountPasswordPolicy()
{
    return qobject_cast<GetAccountPasswordPolicyResponse *>(send(request));
}

/*!
 * Retrieves information about IAM entity usage and IAM quotas in the AWS
 *
 * account>
 *
 * For information about limitations on IAM entities, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the
 * <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAccountSummaryResponse * IamClient::getAccountSummary()
{
    return qobject_cast<GetAccountSummaryResponse *>(send(request));
}

/*!
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
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetContextKeysForCustomPolicyResponse * IamClient::getContextKeysForCustomPolicy(const GetContextKeysForCustomPolicyRequest &request)
{
    return qobject_cast<GetContextKeysForCustomPolicyResponse *>(send(request));
}

/*!
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
 * <b>Note:</b> This API discloses information about the permissions granted to other users. If you do not want users to
 * see other user's permissions, then consider allowing them to use <a>GetContextKeysForCustomPolicy</a>
 *
 * instead>
 *
 * Context keys are variables maintained by AWS and its services that provide details about the context of an API query
 * request. Context keys can be evaluated by testing against a value in an IAM policy. Use
 * <a>GetContextKeysForPrincipalPolicy</a> to understand what key names and values you must supply when you call
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetContextKeysForPrincipalPolicyResponse * IamClient::getContextKeysForPrincipalPolicy(const GetContextKeysForPrincipalPolicyRequest &request)
{
    return qobject_cast<GetContextKeysForPrincipalPolicyResponse *>(send(request));
}

/*!
 * Retrieves a credential report for the AWS account. For more information about the credential report, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting Credential Reports</a> in the
 * <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCredentialReportResponse * IamClient::getCredentialReport()
{
    return qobject_cast<GetCredentialReportResponse *>(send(request));
}

/*!
 * Returns a list of IAM users that are in the specified IAM group. You can paginate the results using the
 * <code>MaxItems</code> and <code>Marker</code>
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGroupResponse * IamClient::getGroup(const GetGroupRequest &request)
{
    return qobject_cast<GetGroupResponse *>(send(request));
}

/*!
 * Retrieves the specified inline policy document that is embedded in the specified IAM
 *
 * group> <note>
 *
 * Policies returned by this API are URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>.
 * You can use a URL decoding method to convert the policy back to plain JSON text. For example, if you use Java, you can
 * use the <code>decode</code> method of the <code>java.net.URLDecoder</code> utility class in the Java SDK. Other
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
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGroupPolicyResponse * IamClient::getGroupPolicy(const GetGroupPolicyRequest &request)
{
    return qobject_cast<GetGroupPolicyResponse *>(send(request));
}

/*!
 * Retrieves information about the specified instance profile, including the instance profile's path, GUID, ARN, and role.
 * For more information about instance profiles, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a> in the
 * <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetInstanceProfileResponse * IamClient::getInstanceProfile(const GetInstanceProfileRequest &request)
{
    return qobject_cast<GetInstanceProfileResponse *>(send(request));
}

/*!
 * Retrieves the user name and password-creation date for the specified IAM user. If the user has not been assigned a
 * password, the operation returns a 404 (<code>NoSuchEntity</code>)
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetLoginProfileResponse * IamClient::getLoginProfile(const GetLoginProfileRequest &request)
{
    return qobject_cast<GetLoginProfileResponse *>(send(request));
}

/*!
 * Returns information about the specified OpenID Connect (OIDC) provider resource object in
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetOpenIDConnectProviderResponse * IamClient::getOpenIDConnectProvider(const GetOpenIDConnectProviderRequest &request)
{
    return qobject_cast<GetOpenIDConnectProviderResponse *>(send(request));
}

/*!
 * Retrieves information about the specified managed policy, including the policy's default version and the total number of
 * IAM users, groups, and roles to which the policy is attached. To retrieve the list of the specific users, groups, and
 * roles that the policy is attached to, use the <a>ListEntitiesForPolicy</a> API. This API returns metadata about the
 * policy. To retrieve the actual policy document for a specific version of the policy, use
 *
 * <a>GetPolicyVersion</a>>
 *
 * This API retrieves information about managed policies. To retrieve information about an inline policy that is embedded
 * with an IAM user, group, or role, use the <a>GetUserPolicy</a>, <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a>
 *
 * API>
 *
 * For more information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPolicyResponse * IamClient::getPolicy(const GetPolicyRequest &request)
{
    return qobject_cast<GetPolicyResponse *>(send(request));
}

/*!
 * Retrieves information about the specified version of the specified managed policy, including the policy
 *
 * document> <note>
 *
 * Policies returned by this API are URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>.
 * You can use a URL decoding method to convert the policy back to plain JSON text. For example, if you use Java, you can
 * use the <code>decode</code> method of the <code>java.net.URLDecoder</code> utility class in the Java SDK. Other
 * languages and SDKs provide similar
 *
 * functionality> </note>
 *
 * To list the available versions for a policy, use
 *
 * <a>ListPolicyVersions</a>>
 *
 * This API retrieves information about managed policies. To retrieve information about an inline policy that is embedded
 * in a user, group, or role, use the <a>GetUserPolicy</a>, <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a>
 *
 * API>
 *
 * For more information about the types of policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For more information about managed policy versions, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for Managed
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPolicyVersionResponse * IamClient::getPolicyVersion(const GetPolicyVersionRequest &request)
{
    return qobject_cast<GetPolicyVersionResponse *>(send(request));
}

/*!
 * Retrieves information about the specified role, including the role's path, GUID, ARN, and the role's trust policy that
 * grants permission to assume the role. For more information about roles, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with
 *
 * Roles</a>> <note>
 *
 * Policies returned by this API are URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>.
 * You can use a URL decoding method to convert the policy back to plain JSON text. For example, if you use Java, you can
 * use the <code>decode</code> method of the <code>java.net.URLDecoder</code> utility class in the Java SDK. Other
 * languages and SDKs provide similar
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRoleResponse * IamClient::getRole(const GetRoleRequest &request)
{
    return qobject_cast<GetRoleResponse *>(send(request));
}

/*!
 * Retrieves the specified inline policy document that is embedded with the specified IAM
 *
 * role> <note>
 *
 * Policies returned by this API are URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>.
 * You can use a URL decoding method to convert the policy back to plain JSON text. For example, if you use Java, you can
 * use the <code>decode</code> method of the <code>java.net.URLDecoder</code> utility class in the Java SDK. Other
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
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For more information about roles, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using Roles to Delegate Permissions and
 * Federate
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRolePolicyResponse * IamClient::getRolePolicy(const GetRolePolicyRequest &request)
{
    return qobject_cast<GetRolePolicyResponse *>(send(request));
}

/*!
 * Returns the SAML provider metadocument that was uploaded when the IAM SAML provider resource object was created or
 *
 * updated> <note>
 *
 * This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 * Version
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSAMLProviderResponse * IamClient::getSAMLProvider(const GetSAMLProviderRequest &request)
{
    return qobject_cast<GetSAMLProviderResponse *>(send(request));
}

/*!
 * Retrieves the specified SSH public key, including metadata about the
 *
 * key>
 *
 * The SSH public key retrieved by this operation is used only for authenticating the associated IAM user to an AWS
 * CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a
 * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for
 * SSH Connections</a> in the <i>AWS CodeCommit User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSSHPublicKeyResponse * IamClient::getSSHPublicKey(const GetSSHPublicKeyRequest &request)
{
    return qobject_cast<GetSSHPublicKeyResponse *>(send(request));
}

/*!
 * Retrieves information about the specified server certificate stored in
 *
 * IAM>
 *
 * For more information about working with server certificates, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working with Server
 * Certificates</a> in the <i>IAM User Guide</i>. This topic includes a list of AWS services that can use the server
 * certificates that you manage with
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetServerCertificateResponse * IamClient::getServerCertificate(const GetServerCertificateRequest &request)
{
    return qobject_cast<GetServerCertificateResponse *>(send(request));
}

/*!
 * Retrieves the status of your service-linked role deletion. After you use the <a>DeleteServiceLinkedRole</a> API
 * operation to submit a service-linked role for deletion, you can use the <code>DeletionTaskId</code> parameter in
 * <code>GetServiceLinkedRoleDeletionStatus</code> to check the status of the deletion. If the deletion fails, this
 * operation returns the reason that it failed, if that information is returned by the
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetServiceLinkedRoleDeletionStatusResponse * IamClient::getServiceLinkedRoleDeletionStatus(const GetServiceLinkedRoleDeletionStatusRequest &request)
{
    return qobject_cast<GetServiceLinkedRoleDeletionStatusResponse *>(send(request));
}

/*!
 * Retrieves information about the specified IAM user, including the user's creation date, path, unique ID, and
 *
 * ARN>
 *
 * If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID used to sign
 * the request to this
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetUserResponse * IamClient::getUser(const GetUserRequest &request)
{
    return qobject_cast<GetUserResponse *>(send(request));
}

/*!
 * Retrieves the specified inline policy document that is embedded in the specified IAM
 *
 * user> <note>
 *
 * Policies returned by this API are URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>.
 * You can use a URL decoding method to convert the policy back to plain JSON text. For example, if you use Java, you can
 * use the <code>decode</code> method of the <code>java.net.URLDecoder</code> utility class in the Java SDK. Other
 * languages and SDKs provide similar
 *
 * functionality> </note>
 *
 * An IAM user can also have managed policies attached to it. To retrieve a managed policy document that is attached to a
 * user, use <a>GetPolicy</a> to determine the policy's default version, then use <a>GetPolicyVersion</a> to retrieve the
 * policy
 *
 * document>
 *
 * For more information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetUserPolicyResponse * IamClient::getUserPolicy(const GetUserPolicyRequest &request)
{
    return qobject_cast<GetUserPolicyResponse *>(send(request));
}

/*!
 * Returns information about the access key IDs associated with the specified IAM user. If there are none, the operation
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
 * ID used to sign the request. Because this operation works for access keys under the AWS account, you can use this
 * operation to manage AWS account root user credentials even if the AWS account has no associated
 *
 * users> <note>
 *
 * To ensure the security of your AWS account, the secret access key is accessible only during key and user
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAccessKeysResponse * IamClient::listAccessKeys(const ListAccessKeysRequest &request)
{
    return qobject_cast<ListAccessKeysResponse *>(send(request));
}

/*!
 * Lists the account alias associated with the AWS account (Note: you can have only one). For information about using an
 * AWS account alias, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using an Alias for
 * Your AWS Account ID</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAccountAliasesResponse * IamClient::listAccountAliases(const ListAccountAliasesRequest &request)
{
    return qobject_cast<ListAccountAliasesResponse *>(send(request));
}

/*!
 * Lists all managed policies that are attached to the specified IAM
 *
 * group>
 *
 * An IAM group can also have inline policies embedded with it. To list the inline policies for a group, use the
 * <a>ListGroupPolicies</a> API. For information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. You can use the
 * <code>PathPrefix</code> parameter to limit the list of policies to only those matching the specified path prefix. If
 * there are no policies attached to the specified group (or none that match the specified path prefix), the operation
 * returns an empty
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAttachedGroupPoliciesResponse * IamClient::listAttachedGroupPolicies(const ListAttachedGroupPoliciesRequest &request)
{
    return qobject_cast<ListAttachedGroupPoliciesResponse *>(send(request));
}

/*!
 * Lists all managed policies that are attached to the specified IAM
 *
 * role>
 *
 * An IAM role can also have inline policies embedded with it. To list the inline policies for a role, use the
 * <a>ListRolePolicies</a> API. For information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. You can use the
 * <code>PathPrefix</code> parameter to limit the list of policies to only those matching the specified path prefix. If
 * there are no policies attached to the specified role (or none that match the specified path prefix), the operation
 * returns an empty
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAttachedRolePoliciesResponse * IamClient::listAttachedRolePolicies(const ListAttachedRolePoliciesRequest &request)
{
    return qobject_cast<ListAttachedRolePoliciesResponse *>(send(request));
}

/*!
 * Lists all managed policies that are attached to the specified IAM
 *
 * user>
 *
 * An IAM user can also have inline policies embedded with it. To list the inline policies for a user, use the
 * <a>ListUserPolicies</a> API. For information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. You can use the
 * <code>PathPrefix</code> parameter to limit the list of policies to only those matching the specified path prefix. If
 * there are no policies attached to the specified group (or none that match the specified path prefix), the operation
 * returns an empty
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAttachedUserPoliciesResponse * IamClient::listAttachedUserPolicies(const ListAttachedUserPoliciesRequest &request)
{
    return qobject_cast<ListAttachedUserPoliciesResponse *>(send(request));
}

/*!
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
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListEntitiesForPolicyResponse * IamClient::listEntitiesForPolicy(const ListEntitiesForPolicyRequest &request)
{
    return qobject_cast<ListEntitiesForPolicyResponse *>(send(request));
}

/*!
 * Lists the names of the inline policies that are embedded in the specified IAM
 *
 * group>
 *
 * An IAM group can also have managed policies attached to it. To list the managed policies that are attached to a group,
 * use <a>ListAttachedGroupPolicies</a>. For more information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. If there are no inline
 * policies embedded with the specified group, the operation returns an empty
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGroupPoliciesResponse * IamClient::listGroupPolicies(const ListGroupPoliciesRequest &request)
{
    return qobject_cast<ListGroupPoliciesResponse *>(send(request));
}

/*!
 * Lists the IAM groups that have the specified path
 *
 * prefix>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGroupsResponse * IamClient::listGroups(const ListGroupsRequest &request)
{
    return qobject_cast<ListGroupsResponse *>(send(request));
}

/*!
 * Lists the IAM groups that the specified IAM user belongs
 *
 * to>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGroupsForUserResponse * IamClient::listGroupsForUser(const ListGroupsForUserRequest &request)
{
    return qobject_cast<ListGroupsForUserResponse *>(send(request));
}

/*!
 * Lists the instance profiles that have the specified path prefix. If there are none, the operation returns an empty list.
 * For more information about instance profiles, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance
 *
 * Profiles</a>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListInstanceProfilesResponse * IamClient::listInstanceProfiles(const ListInstanceProfilesRequest &request)
{
    return qobject_cast<ListInstanceProfilesResponse *>(send(request));
}

/*!
 * Lists the instance profiles that have the specified associated IAM role. If there are none, the operation returns an
 * empty list. For more information about instance profiles, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance
 *
 * Profiles</a>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListInstanceProfilesForRoleResponse * IamClient::listInstanceProfilesForRole(const ListInstanceProfilesForRoleRequest &request)
{
    return qobject_cast<ListInstanceProfilesForRoleResponse *>(send(request));
}

/*!
 * Lists the MFA devices for an IAM user. If the request includes a IAM user name, then this operation lists all the MFA
 * devices associated with the specified user. If you do not specify a user name, IAM determines the user name implicitly
 * based on the AWS access key ID signing the request for this
 *
 * API>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListMFADevicesResponse * IamClient::listMFADevices(const ListMFADevicesRequest &request)
{
    return qobject_cast<ListMFADevicesResponse *>(send(request));
}

/*!
 * Lists information about the IAM OpenID Connect (OIDC) provider resource objects defined in the AWS
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListOpenIDConnectProvidersResponse * IamClient::listOpenIDConnectProviders(const ListOpenIDConnectProvidersRequest &request)
{
    return qobject_cast<ListOpenIDConnectProvidersResponse *>(send(request));
}

/*!
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
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPoliciesResponse * IamClient::listPolicies(const ListPoliciesRequest &request)
{
    return qobject_cast<ListPoliciesResponse *>(send(request));
}

/*!
 * Lists information about the versions of the specified managed policy, including the version that is currently set as the
 * policy's default
 *
 * version>
 *
 * For more information about managed policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPolicyVersionsResponse * IamClient::listPolicyVersions(const ListPolicyVersionsRequest &request)
{
    return qobject_cast<ListPolicyVersionsResponse *>(send(request));
}

/*!
 * Lists the names of the inline policies that are embedded in the specified IAM
 *
 * role>
 *
 * An IAM role can also have managed policies attached to it. To list the managed policies that are attached to a role, use
 * <a>ListAttachedRolePolicies</a>. For more information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. If there are no inline
 * policies embedded with the specified role, the operation returns an empty
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRolePoliciesResponse * IamClient::listRolePolicies(const ListRolePoliciesRequest &request)
{
    return qobject_cast<ListRolePoliciesResponse *>(send(request));
}

/*!
 * Lists the IAM roles that have the specified path prefix. If there are none, the operation returns an empty list. For
 * more information about roles, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with
 *
 * Roles</a>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRolesResponse * IamClient::listRoles(const ListRolesRequest &request)
{
    return qobject_cast<ListRolesResponse *>(send(request));
}

/*!
 * Lists the SAML provider resource objects defined in IAM in the
 *
 * account> <note>
 *
 * This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 * Version
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSAMLProvidersResponse * IamClient::listSAMLProviders(const ListSAMLProvidersRequest &request)
{
    return qobject_cast<ListSAMLProvidersResponse *>(send(request));
}

/*!
 * Returns information about the SSH public keys associated with the specified IAM user. If there are none, the operation
 * returns an empty
 *
 * list>
 *
 * The SSH public keys returned by this operation are used only for authenticating the IAM user to an AWS CodeCommit
 * repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a
 * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for
 * SSH Connections</a> in the <i>AWS CodeCommit User
 *
 * Guide</i>>
 *
 * Although each user is limited to a small number of keys, you can still paginate the results using the
 * <code>MaxItems</code> and <code>Marker</code>
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSSHPublicKeysResponse * IamClient::listSSHPublicKeys(const ListSSHPublicKeysRequest &request)
{
    return qobject_cast<ListSSHPublicKeysResponse *>(send(request));
}

/*!
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
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working with Server
 * Certificates</a> in the <i>IAM User Guide</i>. This topic also includes a list of AWS services that can use the server
 * certificates that you manage with
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListServerCertificatesResponse * IamClient::listServerCertificates(const ListServerCertificatesRequest &request)
{
    return qobject_cast<ListServerCertificatesResponse *>(send(request));
}

/*!
 * Returns information about the service-specific credentials associated with the specified IAM user. If there are none,
 * the operation returns an empty list. The service-specific credentials returned by this operation are used only for
 * authenticating the IAM user to a specific service. For more information about using service-specific credentials to
 * authenticate to an AWS service, see <a
 * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-gc.html">Set Up service-specific credentials</a>
 * in the AWS CodeCommit User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListServiceSpecificCredentialsResponse * IamClient::listServiceSpecificCredentials(const ListServiceSpecificCredentialsRequest &request)
{
    return qobject_cast<ListServiceSpecificCredentialsResponse *>(send(request));
}

/*!
 * Returns information about the signing certificates associated with the specified IAM user. If there are none, the
 * operation returns an empty
 *
 * list>
 *
 * Although each user is limited to a small number of signing certificates, you can still paginate the results using the
 * <code>MaxItems</code> and <code>Marker</code>
 *
 * parameters>
 *
 * If the <code>UserName</code> field is not specified, the user name is determined implicitly based on the AWS access key
 * ID used to sign the request for this API. Because this operation works for access keys under the AWS account, you can
 * use this operation to manage AWS account root user credentials even if the AWS account has no associated
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSigningCertificatesResponse * IamClient::listSigningCertificates(const ListSigningCertificatesRequest &request)
{
    return qobject_cast<ListSigningCertificatesResponse *>(send(request));
}

/*!
 * Lists the names of the inline policies embedded in the specified IAM
 *
 * user>
 *
 * An IAM user can also have managed policies attached to it. To list the managed policies that are attached to a user, use
 * <a>ListAttachedUserPolicies</a>. For more information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. If there are no inline
 * policies embedded with the specified user, the operation returns an empty
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListUserPoliciesResponse * IamClient::listUserPolicies(const ListUserPoliciesRequest &request)
{
    return qobject_cast<ListUserPoliciesResponse *>(send(request));
}

/*!
 * Lists the IAM users that have the specified path prefix. If no path prefix is specified, the operation returns all users
 * in the AWS account. If there are none, the operation returns an empty
 *
 * list>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListUsersResponse * IamClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
}

/*!
 * Lists the virtual MFA devices defined in the AWS account by assignment status. If you do not specify an assignment
 * status, the operation returns a list of all virtual MFA devices. Assignment status can be <code>Assigned</code>,
 * <code>Unassigned</code>, or
 *
 * <code>Any</code>>
 *
 * You can paginate the results using the <code>MaxItems</code> and <code>Marker</code>
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListVirtualMFADevicesResponse * IamClient::listVirtualMFADevices(const ListVirtualMFADevicesRequest &request)
{
    return qobject_cast<ListVirtualMFADevicesResponse *>(send(request));
}

/*!
 * Adds or updates an inline policy document that is embedded in the specified IAM
 *
 * group>
 *
 * A user can also have managed policies attached to it. To attach a managed policy to a group, use
 * <a>AttachGroupPolicy</a>. To create a new managed policy, use <a>CreatePolicy</a>. For information about policies, see
 * <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For information about limits on the number of inline policies that you can embed in a group, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the
 * <i>IAM User
 *
 * Guide</i>> <note>
 *
 * Because policy documents can be large, you should use POST rather than GET when calling <code>PutGroupPolicy</code>. For
 * general information about using the Query API with IAM, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>IAM
 * User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutGroupPolicyResponse * IamClient::putGroupPolicy(const PutGroupPolicyRequest &request)
{
    return qobject_cast<PutGroupPolicyResponse *>(send(request));
}

/*!
 * Adds or updates an inline policy document that is embedded in the specified IAM
 *
 * role>
 *
 * When you embed an inline policy in a role, the inline policy is used as part of the role's access (permissions) policy.
 * The role's trust policy is created at the same time as the role, using <a>CreateRole</a>. You can update a role's trust
 * policy using <a>UpdateAssumeRolePolicy</a>. For more information about IAM roles, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using Roles to Delegate Permissions and
 * Federate
 *
 * Identities</a>>
 *
 * A role can also have a managed policy attached to it. To attach a managed policy to a role, use <a>AttachRolePolicy</a>.
 * To create a new managed policy, use <a>CreatePolicy</a>. For information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For information about limits on the number of inline policies that you can embed with a role, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the
 * <i>IAM User
 *
 * Guide</i>> <note>
 *
 * Because policy documents can be large, you should use POST rather than GET when calling <code>PutRolePolicy</code>. For
 * general information about using the Query API with IAM, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>IAM
 * User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutRolePolicyResponse * IamClient::putRolePolicy(const PutRolePolicyRequest &request)
{
    return qobject_cast<PutRolePolicyResponse *>(send(request));
}

/*!
 * Adds or updates an inline policy document that is embedded in the specified IAM
 *
 * user>
 *
 * An IAM user can also have a managed policy attached to it. To attach a managed policy to a user, use
 * <a>AttachUserPolicy</a>. To create a new managed policy, use <a>CreatePolicy</a>. For information about policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For information about limits on the number of inline policies that you can embed in a user, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the
 * <i>IAM User
 *
 * Guide</i>> <note>
 *
 * Because policy documents can be large, you should use POST rather than GET when calling <code>PutUserPolicy</code>. For
 * general information about using the Query API with IAM, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>IAM
 * User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutUserPolicyResponse * IamClient::putUserPolicy(const PutUserPolicyRequest &request)
{
    return qobject_cast<PutUserPolicyResponse *>(send(request));
}

/*!
 * Removes the specified client ID (also known as audience) from the list of client IDs registered for the specified IAM
 * OpenID Connect (OIDC) provider resource
 *
 * object>
 *
 * This operation is idempotent; it does not fail or return an error if you try to remove a client ID that does not
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveClientIDFromOpenIDConnectProviderResponse * IamClient::removeClientIDFromOpenIDConnectProvider(const RemoveClientIDFromOpenIDConnectProviderRequest &request)
{
    return qobject_cast<RemoveClientIDFromOpenIDConnectProviderResponse *>(send(request));
}

/*!
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
 * For more information about IAM roles, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. For more
 * information about instance profiles, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveRoleFromInstanceProfileResponse * IamClient::removeRoleFromInstanceProfile(const RemoveRoleFromInstanceProfileRequest &request)
{
    return qobject_cast<RemoveRoleFromInstanceProfileResponse *>(send(request));
}

/*!
 * Removes the specified user from the specified
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveUserFromGroupResponse * IamClient::removeUserFromGroup(const RemoveUserFromGroupRequest &request)
{
    return qobject_cast<RemoveUserFromGroupResponse *>(send(request));
}

/*!
 * Resets the password for a service-specific credential. The new password is AWS generated and cryptographically strong.
 * It cannot be configured by the user. Resetting the password immediately invalidates the previous password associated
 * with this
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResetServiceSpecificCredentialResponse * IamClient::resetServiceSpecificCredential(const ResetServiceSpecificCredentialRequest &request)
{
    return qobject_cast<ResetServiceSpecificCredentialResponse *>(send(request));
}

/*!
 * Synchronizes the specified MFA device with its IAM resource object on the AWS
 *
 * servers>
 *
 * For more information about creating and working with virtual MFA devices, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using a Virtual MFA Device</a> in the
 * <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResyncMFADeviceResponse * IamClient::resyncMFADevice(const ResyncMFADeviceRequest &request)
{
    return qobject_cast<ResyncMFADeviceResponse *>(send(request));
}

/*!
 * Sets the specified version of the specified policy as the policy's default (operative)
 *
 * version>
 *
 * This operation affects all users, groups, and roles that the policy is attached to. To list the users, groups, and roles
 * that the policy is attached to, use the <a>ListEntitiesForPolicy</a>
 *
 * API>
 *
 * For information about managed policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline
 * Policies</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetDefaultPolicyVersionResponse * IamClient::setDefaultPolicyVersion(const SetDefaultPolicyVersionRequest &request)
{
    return qobject_cast<SetDefaultPolicyVersionResponse *>(send(request));
}

/*!
 * Simulate how a set of IAM policies and optionally a resource-based policy works with a list of API operations and AWS
 * resources to determine the policies' effective permissions. The policies are provided as
 *
 * strings>
 *
 * The simulation does not perform the API operations; it only checks the authorization to determine if the simulated
 * policies allow or deny the
 *
 * operations>
 *
 * If you want to simulate existing policies attached to an IAM user, group, or role, use <a>SimulatePrincipalPolicy</a>
 *
 * instead>
 *
 * Context keys are variables maintained by AWS and its services that provide details about the context of an API query
 * request. You can use the <code>Condition</code> element of an IAM policy to evaluate context keys. To get the list of
 * context keys that the policies require for correct simulation, use
 *
 * <a>GetContextKeysForCustomPolicy</a>>
 *
 * If the output is long, you can use <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SimulateCustomPolicyResponse * IamClient::simulateCustomPolicy(const SimulateCustomPolicyRequest &request)
{
    return qobject_cast<SimulateCustomPolicyResponse *>(send(request));
}

/*!
 * Simulate how a set of IAM policies attached to an IAM entity works with a list of API operations and AWS resources to
 * determine the policies' effective permissions. The entity can be an IAM user, group, or role. If you specify a user,
 * then the simulation also includes all of the policies that are attached to groups that the user belongs
 *
 * to>
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
 * The simulation does not perform the API operations, it only checks the authorization to determine if the simulated
 * policies allow or deny the
 *
 * operations>
 *
 * <b>Note:</b> This API discloses information about the permissions granted to other users. If you do not want users to
 * see other user's permissions, then consider allowing them to use <a>SimulateCustomPolicy</a>
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
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SimulatePrincipalPolicyResponse * IamClient::simulatePrincipalPolicy(const SimulatePrincipalPolicyRequest &request)
{
    return qobject_cast<SimulatePrincipalPolicyResponse *>(send(request));
}

/*!
 * Changes the status of the specified access key from Active to Inactive, or vice versa. This operation can be used to
 * disable a user's key as part of a key rotation
 *
 * workflow>
 *
 * If the <code>UserName</code> field is not specified, the user name is determined implicitly based on the AWS access key
 * ID used to sign the request. Because this operation works for access keys under the AWS account, you can use this
 * operation to manage AWS account root user credentials even if the AWS account has no associated
 *
 * users>
 *
 * For information about rotating keys, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/ManagingCredentials.html">Managing Keys and Certificates</a> in
 * the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateAccessKeyResponse * IamClient::updateAccessKey(const UpdateAccessKeyRequest &request)
{
    return qobject_cast<UpdateAccessKeyResponse *>(send(request));
}

/*!
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
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing an IAM Password
 * Policy</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateAccountPasswordPolicyResponse * IamClient::updateAccountPasswordPolicy(const UpdateAccountPasswordPolicyRequest &request)
{
    return qobject_cast<UpdateAccountPasswordPolicyResponse *>(send(request));
}

/*!
 * Updates the policy that grants an IAM entity permission to assume a role. This is typically referred to as the "role
 * trust policy". For more information about roles, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using Roles to Delegate Permissions and
 * Federate
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateAssumeRolePolicyResponse * IamClient::updateAssumeRolePolicy(const UpdateAssumeRolePolicyRequest &request)
{
    return qobject_cast<UpdateAssumeRolePolicyResponse *>(send(request));
}

/*!
 * Updates the name and/or the path of the specified IAM
 *
 * group> <b>
 *
 * You should understand the implications of changing a group's path or name. For more information, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_WorkingWithGroupsAndUsers.html">Renaming Users and
 * Groups</a> in the <i>IAM User
 *
 * Guide</i>> </b> <note>
 *
 * The person making the request (the principal), must have permission to change the role group with the old name and the
 * new name. For example, to change the group named <code>Managers</code> to <code>MGRs</code>, the principal must have a
 * policy that allows them to update both groups. If the principal has permission to update the <code>Managers</code>
 * group, but not the <code>MGRs</code> group, then the update fails. For more information about permissions, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access Management</a>.
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateGroupResponse * IamClient::updateGroup(const UpdateGroupRequest &request)
{
    return qobject_cast<UpdateGroupResponse *>(send(request));
}

/*!
 * Changes the password for the specified IAM
 *
 * user>
 *
 * IAM users can change their own passwords by calling <a>ChangePassword</a>. For more information about modifying
 * passwords, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
 * Passwords</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateLoginProfileResponse * IamClient::updateLoginProfile(const UpdateLoginProfileRequest &request)
{
    return qobject_cast<UpdateLoginProfileResponse *>(send(request));
}

/*!
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
 * Because trust for the OIDC provider is derived from the provider's certificate and is validated by the thumbprint, it is
 * best to limit access to the <code>UpdateOpenIDConnectProviderThumbprint</code> operation to highly privileged
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateOpenIDConnectProviderThumbprintResponse * IamClient::updateOpenIDConnectProviderThumbprint(const UpdateOpenIDConnectProviderThumbprintRequest &request)
{
    return qobject_cast<UpdateOpenIDConnectProviderThumbprintResponse *>(send(request));
}

/*!
 * Updates the description or maximum session duration setting of a
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRoleResponse * IamClient::updateRole(const UpdateRoleRequest &request)
{
    return qobject_cast<UpdateRoleResponse *>(send(request));
}

/*!
 * Use
 *
 * instead>
 *
 * Modifies only the description of a role. This operation performs the same function as the <code>Description</code>
 * parameter in the <code>UpdateRole</code>
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRoleDescriptionResponse * IamClient::updateRoleDescription(const UpdateRoleDescriptionRequest &request)
{
    return qobject_cast<UpdateRoleDescriptionResponse *>(send(request));
}

/*!
 * Updates the metadata document for an existing SAML provider resource
 *
 * object> <note>
 *
 * This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 * Version
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateSAMLProviderResponse * IamClient::updateSAMLProvider(const UpdateSAMLProviderRequest &request)
{
    return qobject_cast<UpdateSAMLProviderResponse *>(send(request));
}

/*!
 * Sets the status of an IAM user's SSH public key to active or inactive. SSH public keys that are inactive cannot be used
 * for authentication. This operation can be used to disable a user's SSH public key as part of a key rotation work
 *
 * flow>
 *
 * The SSH public key affected by this operation is used only for authenticating the associated IAM user to an AWS
 * CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a
 * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for
 * SSH Connections</a> in the <i>AWS CodeCommit User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateSSHPublicKeyResponse * IamClient::updateSSHPublicKey(const UpdateSSHPublicKeyRequest &request)
{
    return qobject_cast<UpdateSSHPublicKeyResponse *>(send(request));
}

/*!
 * Updates the name and/or the path of the specified server certificate stored in
 *
 * IAM>
 *
 * For more information about working with server certificates, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working with Server
 * Certificates</a> in the <i>IAM User Guide</i>. This topic also includes a list of AWS services that can use the server
 * certificates that you manage with
 *
 * IAM> <b>
 *
 * You should understand the implications of changing a server certificate's path or name. For more information, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs_manage.html#RenamingServerCerts">Renaming
 * a Server Certificate</a> in the <i>IAM User
 *
 * Guide</i>> </b> <note>
 *
 * The person making the request (the principal), must have permission to change the server certificate with the old name
 * and the new name. For example, to change the certificate named <code>ProductionCert</code> to <code>ProdCert</code>, the
 * principal must have a policy that allows them to update both certificates. If the principal has permission to update the
 * <code>ProductionCert</code> group, but not the <code>ProdCert</code> certificate, then the update fails. For more
 * information about permissions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access
 * Management</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateServerCertificateResponse * IamClient::updateServerCertificate(const UpdateServerCertificateRequest &request)
{
    return qobject_cast<UpdateServerCertificateResponse *>(send(request));
}

/*!
 * Sets the status of a service-specific credential to <code>Active</code> or <code>Inactive</code>. Service-specific
 * credentials that are inactive cannot be used for authentication to the service. This operation can be used to disable a
 * user’s service-specific credential as part of a credential rotation work
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateServiceSpecificCredentialResponse * IamClient::updateServiceSpecificCredential(const UpdateServiceSpecificCredentialRequest &request)
{
    return qobject_cast<UpdateServiceSpecificCredentialResponse *>(send(request));
}

/*!
 * Changes the status of the specified user signing certificate from active to disabled, or vice versa. This operation can
 * be used to disable an IAM user's signing certificate as part of a certificate rotation work
 *
 * flow>
 *
 * If the <code>UserName</code> field is not specified, the user name is determined implicitly based on the AWS access key
 * ID used to sign the request. Because this operation works for access keys under the AWS account, you can use this
 * operation to manage AWS account root user credentials even if the AWS account has no associated
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateSigningCertificateResponse * IamClient::updateSigningCertificate(const UpdateSigningCertificateRequest &request)
{
    return qobject_cast<UpdateSigningCertificateResponse *>(send(request));
}

/*!
 * Updates the name and/or the path of the specified IAM
 *
 * user> <b>
 *
 * You should understand the implications of changing an IAM user's path or name. For more information, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_users_manage.html#id_users_renaming">Renaming an IAM User</a>
 * and <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_groups_manage_rename.html">Renaming an IAM Group</a> in
 * the <i>IAM User
 *
 * Guide</i>> </b> <note>
 *
 * To change a user name, the requester must have appropriate permissions on both the source object and the target object.
 * For example, to change Bob to Robert, the entity making the request must have permission on Bob and Robert, or must have
 * permission on all (*). For more information about permissions, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html">Permissions and Policies</a>.
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateUserResponse * IamClient::updateUser(const UpdateUserRequest &request)
{
    return qobject_cast<UpdateUserResponse *>(send(request));
}

/*!
 * Uploads an SSH public key and associates it with the specified IAM
 *
 * user>
 *
 * The SSH public key uploaded by this operation can be used only for authenticating the associated IAM user to an AWS
 * CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a
 * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for
 * SSH Connections</a> in the <i>AWS CodeCommit User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UploadSSHPublicKeyResponse * IamClient::uploadSSHPublicKey(const UploadSSHPublicKeyRequest &request)
{
    return qobject_cast<UploadSSHPublicKeyResponse *>(send(request));
}

/*!
 * Uploads a server certificate entity for the AWS account. The server certificate entity includes a public key
 * certificate, a private key, and an optional certificate chain, which should all be
 *
 * PEM-encoded>
 *
 * We recommend that you use <a href="https://aws.amazon.com/certificate-manager/">AWS Certificate Manager</a> to
 * provision, manage, and deploy your server certificates. With ACM you can request a certificate, deploy it to AWS
 * resources, and let ACM handle certificate renewals for you. Certificates provided by ACM are free. For more information
 * about using ACM, see the <a href="http://docs.aws.amazon.com/acm/latest/userguide/">AWS Certificate Manager User
 *
 * Guide</a>>
 *
 * For more information about working with server certificates, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working with Server
 * Certificates</a> in the <i>IAM User Guide</i>. This topic includes a list of AWS services that can use the server
 * certificates that you manage with
 *
 * IAM>
 *
 * For information about the number of server certificates you can upload, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-limits.html">Limitations on IAM Entities and
 * Objects</a> in the <i>IAM User
 *
 * Guide</i>> <note>
 *
 * Because the body of the public key certificate, private key, and the certificate chain can be large, you should use POST
 * rather than GET when calling <code>UploadServerCertificate</code>. For information about setting up signatures and
 * authorization through the API, go to <a
 * href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a> in the
 * <i>AWS General Reference</i>. For general information about using the Query API with IAM, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/programming.html">Calling the API by Making HTTP Query
 * Requests</a> in the <i>IAM User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UploadServerCertificateResponse * IamClient::uploadServerCertificate(const UploadServerCertificateRequest &request)
{
    return qobject_cast<UploadServerCertificateResponse *>(send(request));
}

/*!
 * Uploads an X.509 signing certificate and associates it with the specified IAM user. Some AWS services use X.509 signing
 * certificates to validate requests that are signed with a corresponding private key. When you upload the certificate, its
 * default status is
 *
 * <code>Active</code>>
 *
 * If the <code>UserName</code> field is not specified, the IAM user name is determined implicitly based on the AWS access
 * key ID used to sign the request. Because this operation works for access keys under the AWS account, you can use this
 * operation to manage AWS account root user credentials even if the AWS account has no associated
 *
 * users> <note>
 *
 * Because the body of an X.509 certificate can be large, you should use POST rather than GET when calling
 * <code>UploadSigningCertificate</code>. For information about setting up signatures and authorization through the API, go
 * to <a href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a> in
 * the <i>AWS General Reference</i>. For general information about using the Query API with IAM, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>IAM
 * User
 *
 * @param  request Request to send to AWS Identity and Access Management.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UploadSigningCertificateResponse * IamClient::uploadSigningCertificate(const UploadSigningCertificateRequest &request)
{
    return qobject_cast<UploadSigningCertificateResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  IamClientPrivate
 *
 * @brief  Private implementation for IamClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new IamClientPrivate object.
 *
 * @param  q  Pointer to this object's public IamClient instance.
 */
IamClientPrivate::IamClientPrivate(IamClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IAM
} // namespace QtAws
