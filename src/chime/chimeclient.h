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

#ifndef QTAWS_CHIMECLIENT_H
#define QTAWS_CHIMECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Chime {

class ChimeClientPrivate;
class BatchSuspendUserRequest;
class BatchSuspendUserResponse;
class BatchUnsuspendUserRequest;
class BatchUnsuspendUserResponse;
class BatchUpdateUserRequest;
class BatchUpdateUserResponse;
class CreateAccountRequest;
class CreateAccountResponse;
class DeleteAccountRequest;
class DeleteAccountResponse;
class GetAccountRequest;
class GetAccountResponse;
class GetAccountSettingsRequest;
class GetAccountSettingsResponse;
class GetUserRequest;
class GetUserResponse;
class InviteUsersRequest;
class InviteUsersResponse;
class ListAccountsRequest;
class ListAccountsResponse;
class ListUsersRequest;
class ListUsersResponse;
class LogoutUserRequest;
class LogoutUserResponse;
class ResetPersonalPINRequest;
class ResetPersonalPINResponse;
class UpdateAccountRequest;
class UpdateAccountResponse;
class UpdateAccountSettingsRequest;
class UpdateAccountSettingsResponse;
class UpdateUserRequest;
class UpdateUserResponse;

class QTAWS_EXPORT ChimeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ChimeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ChimeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchSuspendUserResponse * batchSuspendUser(const BatchSuspendUserRequest &request);
    BatchUnsuspendUserResponse * batchUnsuspendUser(const BatchUnsuspendUserRequest &request);
    BatchUpdateUserResponse * batchUpdateUser(const BatchUpdateUserRequest &request);
    CreateAccountResponse * createAccount(const CreateAccountRequest &request);
    DeleteAccountResponse * deleteAccount(const DeleteAccountRequest &request);
    GetAccountResponse * getAccount(const GetAccountRequest &request);
    GetAccountSettingsResponse * getAccountSettings(const GetAccountSettingsRequest &request);
    GetUserResponse * getUser(const GetUserRequest &request);
    InviteUsersResponse * inviteUsers(const InviteUsersRequest &request);
    ListAccountsResponse * listAccounts(const ListAccountsRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    LogoutUserResponse * logoutUser(const LogoutUserRequest &request);
    ResetPersonalPINResponse * resetPersonalPIN(const ResetPersonalPINRequest &request);
    UpdateAccountResponse * updateAccount(const UpdateAccountRequest &request);
    UpdateAccountSettingsResponse * updateAccountSettings(const UpdateAccountSettingsRequest &request);
    UpdateUserResponse * updateUser(const UpdateUserRequest &request);

private:
    Q_DECLARE_PRIVATE(ChimeClient)
    Q_DISABLE_COPY(ChimeClient)

};

} // namespace Chime
} // namespace QtAws

#endif
