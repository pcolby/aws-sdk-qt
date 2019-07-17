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

#include "chimeclient.h"
#include "chimeclient_p.h"

#include "core/awssignaturev4.h"
#include "batchsuspenduserrequest.h"
#include "batchsuspenduserresponse.h"
#include "batchunsuspenduserrequest.h"
#include "batchunsuspenduserresponse.h"
#include "batchupdateuserrequest.h"
#include "batchupdateuserresponse.h"
#include "createaccountrequest.h"
#include "createaccountresponse.h"
#include "deleteaccountrequest.h"
#include "deleteaccountresponse.h"
#include "getaccountrequest.h"
#include "getaccountresponse.h"
#include "getaccountsettingsrequest.h"
#include "getaccountsettingsresponse.h"
#include "getuserrequest.h"
#include "getuserresponse.h"
#include "inviteusersrequest.h"
#include "inviteusersresponse.h"
#include "listaccountsrequest.h"
#include "listaccountsresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"
#include "logoutuserrequest.h"
#include "logoutuserresponse.h"
#include "resetpersonalpinrequest.h"
#include "resetpersonalpinresponse.h"
#include "updateaccountrequest.h"
#include "updateaccountresponse.h"
#include "updateaccountsettingsrequest.h"
#include "updateaccountsettingsresponse.h"
#include "updateuserrequest.h"
#include "updateuserresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Chime
 * \brief Contains classess for accessing Amazon Chime.
 *
 * \inmodule QtAwsChime
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Chime {

/*!
 * \class QtAws::Chime::ChimeClient
 * \brief The ChimeClient class provides access to the Amazon Chime service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsChime
 *
 *  The Amazon Chime API (application programming interface) is designed for administrators to use to perform key tasks,
 *  such as creating and managing Amazon Chime accounts and users. This guide provides detailed information about the Amazon
 *  Chime API, including operations, types, inputs and outputs, and error
 * 
 *  codes>
 * 
 *  You can use an AWS SDK, the AWS Command Line Interface (AWS CLI), or the REST API to make API calls. We recommend using
 *  an AWS SDK or the AWS CLI. Each API operation includes links to information about using it with a language-specific AWS
 *  SDK or the AWS
 * 
 *  CLI> <dl> <dt>Using an AWS SDK</dt> <dd>
 * 
 *  You don't need to write code to calculate a signature for request authentication. The SDK clients authenticate your
 *  requests by using access keys that you provide. For more information about AWS SDKs, see the <a
 *  href="http://aws.amazon.com/developer/">AWS Developer
 * 
 *  Center</a>> </dd> <dt>Using the AWS CLI</dt> <dd>
 * 
 *  Use your access keys with the AWS CLI to make API calls. For information about setting up the AWS CLI, see <a
 *  href="http://docs.aws.amazon.com/cli/latest/userguide/installing.html">Installing the AWS Command Line Interface</a> in
 *  the <i>AWS Command Line Interface User Guide</i>. For a list of available Amazon Chime commands, see the <a
 *  href="http://docs.aws.amazon.com/cli/latest/reference/chime/index.html">Amazon Chime commands</a> in the <i>AWS CLI
 *  Command
 * 
 *  Reference</i>> </dd> <dt>Using REST API</dt> <dd>
 * 
 *  If you use REST to make API calls, you must authenticate your request by providing a signature. Amazon Chime supports
 *  signature version 4. For more information, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a> in
 *  the <i>Amazon Web Services General
 * 
 *  Reference</i>>
 * 
 *  When making REST API calls, use the service name <code>chime</code> and REST endpoint
 * 
 *  <code>https://service.chime.aws.amazon.com</code>> </dd> </dl>
 * 
 *  Administrative permissions are controlled using AWS Identity and Access Management (IAM). For more information, see <a
 *  href="http://docs.aws.amazon.com/chime/latest/ag/control-access.html">Control Access to the Amazon Chime Console</a> in
 *  the <i>Amazon Chime Administration
 */

/*!
 * \brief Constructs a ChimeClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ChimeClient::ChimeClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ChimeClientPrivate(this), parent)
{
    Q_D(ChimeClient);
    d->apiVersion = QStringLiteral("2018-05-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("chime");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Chime");
    d->serviceName = QStringLiteral("chime");
}

/*!
 * \overload ChimeClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ChimeClient::ChimeClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ChimeClientPrivate(this), parent)
{
    Q_D(ChimeClient);
    d->apiVersion = QStringLiteral("2018-05-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("chime");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Chime");
    d->serviceName = QStringLiteral("chime");
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * BatchSuspendUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Suspends up to 50 users from a <code>Team</code> or <code>EnterpriseLWA</code> Amazon Chime account. For more
 * information about different account types, see <a
 * href="http://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing Your Amazon Chime Accounts</a> in
 * the <i>Amazon Chime Administration
 *
 * Guide</i>>
 *
 * Users suspended from a <code>Team</code> account are dissociated from the account, but they can continue to use Amazon
 * Chime as free users. To remove the suspension from suspended <code>Team</code> account users, invite them to the
 * <code>Team</code> account again. You can use the <a>InviteUsers</a> action to do
 *
 * so>
 *
 * Users suspended from an <code>EnterpriseLWA</code> account are immediately signed out of Amazon Chime and are no longer
 * able to sign in. To remove the suspension from suspended <code>EnterpriseLWA</code> account users, use the
 * <a>BatchUnsuspendUser</a> action.
 *
 * </p
 *
 * To sign out users without suspending them, use the <a>LogoutUser</a>
 */
BatchSuspendUserResponse * ChimeClient::batchSuspendUser(const BatchSuspendUserRequest &request)
{
    return qobject_cast<BatchSuspendUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * BatchUnsuspendUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the suspension from up to 50 previously suspended users for the specified Amazon Chime
 * <code>EnterpriseLWA</code> account. Only users on <code>EnterpriseLWA</code> accounts can be unsuspended using this
 * action. For more information about different account types, see <a
 * href="http://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing Your Amazon Chime Accounts</a> in
 * the <i>Amazon Chime Administration
 *
 * Guide</i>>
 *
 * Previously suspended users who are unsuspended using this action are returned to <code>Registered</code> status. Users
 * who are not previously suspended are
 */
BatchUnsuspendUserResponse * ChimeClient::batchUnsuspendUser(const BatchUnsuspendUserRequest &request)
{
    return qobject_cast<BatchUnsuspendUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * BatchUpdateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates user details within the <a>UpdateUserRequestItem</a> object for up to 20 users for the specified Amazon Chime
 * account. Currently, only <code>LicenseType</code> updates are supported for this
 */
BatchUpdateUserResponse * ChimeClient::batchUpdateUser(const BatchUpdateUserRequest &request)
{
    return qobject_cast<BatchUpdateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Chime account under the administrator's AWS account. Only <code>Team</code> account types are
 * currently supported for this action. For more information about different account types, see <a
 * href="http://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing Your Amazon Chime Accounts</a> in
 * the <i>Amazon Chime Administration
 */
CreateAccountResponse * ChimeClient::createAccount(const CreateAccountRequest &request)
{
    return qobject_cast<CreateAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Amazon Chime account. You must suspend all users before deleting a <code>Team</code> account. You
 * can use the <a>BatchSuspendUser</a> action to do
 *
 * so>
 *
 * For <code>EnterpriseLWA</code> and <code>EnterpriseAD</code> accounts, you must release the claimed domains for your
 * Amazon Chime account before deletion. As soon as you release the domain, all users under that account are
 *
 * suspended>
 *
 * Deleted accounts appear in your <code>Disabled</code> accounts list for 90 days. To restore a deleted account from your
 * <code>Disabled</code> accounts list, you must contact AWS
 *
 * Support>
 *
 * After 90 days, deleted accounts are permanently removed from your <code>Disabled</code> accounts
 */
DeleteAccountResponse * ChimeClient::deleteAccount(const DeleteAccountRequest &request)
{
    return qobject_cast<DeleteAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details for the specified Amazon Chime account, such as account type and supported
 */
GetAccountResponse * ChimeClient::getAccount(const GetAccountRequest &request)
{
    return qobject_cast<GetAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetAccountSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves account settings for the specified Amazon Chime account ID, such as remote control and dial out settings. For
 * more information about these settings, see <a href="http://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
 * Policies Page</a> in the <i>Amazon Chime Administration
 */
GetAccountSettingsResponse * ChimeClient::getAccountSettings(const GetAccountSettingsRequest &request)
{
    return qobject_cast<GetAccountSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details for the specified user ID, such as primary email address, license type, and personal meeting
 *
 * PIN>
 *
 * To retrieve user details with an email address instead of a user ID, use the <a>ListUsers</a> action, and then filter by
 * email
 */
GetUserResponse * ChimeClient::getUser(const GetUserRequest &request)
{
    return qobject_cast<GetUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * InviteUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends email invites to as many as 50 users, inviting them to the specified Amazon Chime <code>Team</code> account. Only
 * <code>Team</code> account types are currently supported for this action.
 */
InviteUsersResponse * ChimeClient::inviteUsers(const InviteUsersRequest &request)
{
    return qobject_cast<InviteUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListAccountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon Chime accounts under the administrator's AWS account. You can filter accounts by account name prefix.
 * To find out which Amazon Chime account a user belongs to, you can filter by the user's email address, which returns one
 * account
 */
ListAccountsResponse * ChimeClient::listAccounts(const ListAccountsRequest &request)
{
    return qobject_cast<ListAccountsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the users that belong to the specified Amazon Chime account. You can specify an email address to list only the
 * user that the email address belongs
 */
ListUsersResponse * ChimeClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * LogoutUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Logs out the specified user from all of the devices they are currently logged
 */
LogoutUserResponse * ChimeClient::logoutUser(const LogoutUserRequest &request)
{
    return qobject_cast<LogoutUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ResetPersonalPINResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resets the personal meeting PIN for the specified user on an Amazon Chime account. Returns the <a>User</a> object with
 * the updated personal meeting
 */
ResetPersonalPINResponse * ChimeClient::resetPersonalPIN(const ResetPersonalPINRequest &request)
{
    return qobject_cast<ResetPersonalPINResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates account details for the specified Amazon Chime account. Currently, only account name updates are supported for
 * this
 */
UpdateAccountResponse * ChimeClient::updateAccount(const UpdateAccountRequest &request)
{
    return qobject_cast<UpdateAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateAccountSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the settings for the specified Amazon Chime account. You can update settings for remote control of shared
 * screens, or for the dial-out option. For more information about these settings, see <a
 * href="http://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the Policies Page</a> in the <i>Amazon Chime
 * Administration
 */
UpdateAccountSettingsResponse * ChimeClient::updateAccountSettings(const UpdateAccountSettingsRequest &request)
{
    return qobject_cast<UpdateAccountSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates user details for a specified user ID. Currently, only <code>LicenseType</code> updates are supported for this
 */
UpdateUserResponse * ChimeClient::updateUser(const UpdateUserRequest &request)
{
    return qobject_cast<UpdateUserResponse *>(send(request));
}

/*!
 * \class QtAws::Chime::ChimeClientPrivate
 * \brief The ChimeClientPrivate class provides private implementation for ChimeClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsChime
 */

/*!
 * Constructs a ChimeClientPrivate object with public implementation \a q.
 */
ChimeClientPrivate::ChimeClientPrivate(ChimeClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Chime
} // namespace QtAws
