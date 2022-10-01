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

#include "ssoclient.h"
#include "ssoclient_p.h"

#include "core/awssignaturev4.h"
#include "getrolecredentialsrequest.h"
#include "getrolecredentialsresponse.h"
#include "listaccountrolesrequest.h"
#include "listaccountrolesresponse.h"
#include "listaccountsrequest.h"
#include "listaccountsresponse.h"
#include "logoutrequest.h"
#include "logoutresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Sso
 * \brief Contains classess for accessing AWS Single Sign-On.
 *
 * \inmodule QtAwsSso
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Sso {

/*!
 * \class QtAws::Sso::SsoClient
 * \brief The SsoClient class provides access to the AWS Single Sign-On service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSso
 *
 *  AWS IAM Identity Center (successor to AWS Single Sign-On) Portal is a web service that makes it easy for you to assign
 *  user access to IAM Identity Center resources such as the AWS access portal. Users can get AWS account applications and
 *  roles assigned to them and get federated into the
 * 
 *  application> <note>
 * 
 *  Although AWS Single Sign-On was renamed, the <code>sso</code> and <code>identitystore</code> API namespaces will
 *  continue to retain their original name for backward compatibility purposes. For more information, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM Identity Center
 * 
 *  rename</a>> </note>
 * 
 *  This reference guide describes the IAM Identity Center Portal operations that you can call programatically and includes
 *  detailed information on data types and
 * 
 *  errors> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms, such as
 *  Java, Ruby, .Net, iOS, or Android. The SDKs provide a convenient way to create programmatic access to IAM Identity
 *  Center and other AWS services. For more information about the AWS SDKs, including how to download and install them, see
 *  <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 */

/*!
 * \brief Constructs a SsoClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SsoClient::SsoClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SsoClientPrivate(this), parent)
{
    Q_D(SsoClient);
    d->apiVersion = QStringLiteral("2019-06-10");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("portal.sso");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Single Sign-On");
    d->serviceName = QStringLiteral("awsssoportal");
}

/*!
 * \overload SsoClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SsoClient::SsoClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SsoClientPrivate(this), parent)
{
    Q_D(SsoClient);
    d->apiVersion = QStringLiteral("2019-06-10");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("portal.sso");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Single Sign-On");
    d->serviceName = QStringLiteral("awsssoportal");
}

/*!
 * Sends \a request to the SsoClient service, and returns a pointer to an
 * GetRoleCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the STS short-term credentials for a given role name that is assigned to the
 */
GetRoleCredentialsResponse * SsoClient::getRoleCredentials(const GetRoleCredentialsRequest &request)
{
    return qobject_cast<GetRoleCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoClient service, and returns a pointer to an
 * ListAccountRolesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all roles that are assigned to the user for a given AWS
 */
ListAccountRolesResponse * SsoClient::listAccountRoles(const ListAccountRolesRequest &request)
{
    return qobject_cast<ListAccountRolesResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoClient service, and returns a pointer to an
 * ListAccountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all AWS accounts assigned to the user. These AWS accounts are assigned by the administrator of the account. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/useraccess.html#assignusers">Assign User Access</a> in
 * the <i>IAM Identity Center User Guide</i>. This operation returns a paginated
 */
ListAccountsResponse * SsoClient::listAccounts(const ListAccountsRequest &request)
{
    return qobject_cast<ListAccountsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoClient service, and returns a pointer to an
 * LogoutResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the locally stored SSO tokens from the client-side cache and sends an API call to the IAM Identity Center
 * service to invalidate the corresponding server-side IAM Identity Center sign in
 *
 * session> <note>
 *
 * If a user uses IAM Identity Center to access the AWS CLI, the user’s IAM Identity Center sign in session is used to
 * obtain an IAM session, as specified in the corresponding IAM Identity Center permission set. More specifically, IAM
 * Identity Center assumes an IAM role in the target account on behalf of the user, and the corresponding temporary AWS
 * credentials are returned to the
 *
 * client>
 *
 * After user logout, any existing IAM role sessions that were created by using IAM Identity Center permission sets
 * continue based on the duration configured in the permission set. For more information, see <a
 * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/authconcept.html">User authentications</a> in the <i>IAM
 * Identity Center User
 */
LogoutResponse * SsoClient::logout(const LogoutRequest &request)
{
    return qobject_cast<LogoutResponse *>(send(request));
}

/*!
 * \class QtAws::Sso::SsoClientPrivate
 * \brief The SsoClientPrivate class provides private implementation for SsoClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSso
 */

/*!
 * Constructs a SsoClientPrivate object with public implementation \a q.
 */
SsoClientPrivate::SsoClientPrivate(SsoClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Sso
} // namespace QtAws
