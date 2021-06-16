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

#ifndef QTAWS_CHIMECLIENT_H
#define QTAWS_CHIMECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Chime {

class ChimeClientPrivate;
class AssociatePhoneNumberWithUserRequest;
class AssociatePhoneNumberWithUserResponse;
class AssociatePhoneNumbersWithVoiceConnectorRequest;
class AssociatePhoneNumbersWithVoiceConnectorResponse;
class BatchDeletePhoneNumberRequest;
class BatchDeletePhoneNumberResponse;
class BatchSuspendUserRequest;
class BatchSuspendUserResponse;
class BatchUnsuspendUserRequest;
class BatchUnsuspendUserResponse;
class BatchUpdatePhoneNumberRequest;
class BatchUpdatePhoneNumberResponse;
class BatchUpdateUserRequest;
class BatchUpdateUserResponse;
class CreateAccountRequest;
class CreateAccountResponse;
class CreateBotRequest;
class CreateBotResponse;
class CreatePhoneNumberOrderRequest;
class CreatePhoneNumberOrderResponse;
class CreateVoiceConnectorRequest;
class CreateVoiceConnectorResponse;
class DeleteAccountRequest;
class DeleteAccountResponse;
class DeleteEventsConfigurationRequest;
class DeleteEventsConfigurationResponse;
class DeletePhoneNumberRequest;
class DeletePhoneNumberResponse;
class DeleteVoiceConnectorRequest;
class DeleteVoiceConnectorResponse;
class DeleteVoiceConnectorOriginationRequest;
class DeleteVoiceConnectorOriginationResponse;
class DeleteVoiceConnectorTerminationRequest;
class DeleteVoiceConnectorTerminationResponse;
class DeleteVoiceConnectorTerminationCredentialsRequest;
class DeleteVoiceConnectorTerminationCredentialsResponse;
class DisassociatePhoneNumberFromUserRequest;
class DisassociatePhoneNumberFromUserResponse;
class DisassociatePhoneNumbersFromVoiceConnectorRequest;
class DisassociatePhoneNumbersFromVoiceConnectorResponse;
class GetAccountRequest;
class GetAccountResponse;
class GetAccountSettingsRequest;
class GetAccountSettingsResponse;
class GetBotRequest;
class GetBotResponse;
class GetEventsConfigurationRequest;
class GetEventsConfigurationResponse;
class GetGlobalSettingsRequest;
class GetGlobalSettingsResponse;
class GetPhoneNumberRequest;
class GetPhoneNumberResponse;
class GetPhoneNumberOrderRequest;
class GetPhoneNumberOrderResponse;
class GetUserRequest;
class GetUserResponse;
class GetUserSettingsRequest;
class GetUserSettingsResponse;
class GetVoiceConnectorRequest;
class GetVoiceConnectorResponse;
class GetVoiceConnectorOriginationRequest;
class GetVoiceConnectorOriginationResponse;
class GetVoiceConnectorTerminationRequest;
class GetVoiceConnectorTerminationResponse;
class GetVoiceConnectorTerminationHealthRequest;
class GetVoiceConnectorTerminationHealthResponse;
class InviteUsersRequest;
class InviteUsersResponse;
class ListAccountsRequest;
class ListAccountsResponse;
class ListBotsRequest;
class ListBotsResponse;
class ListPhoneNumberOrdersRequest;
class ListPhoneNumberOrdersResponse;
class ListPhoneNumbersRequest;
class ListPhoneNumbersResponse;
class ListUsersRequest;
class ListUsersResponse;
class ListVoiceConnectorTerminationCredentialsRequest;
class ListVoiceConnectorTerminationCredentialsResponse;
class ListVoiceConnectorsRequest;
class ListVoiceConnectorsResponse;
class LogoutUserRequest;
class LogoutUserResponse;
class PutEventsConfigurationRequest;
class PutEventsConfigurationResponse;
class PutVoiceConnectorOriginationRequest;
class PutVoiceConnectorOriginationResponse;
class PutVoiceConnectorTerminationRequest;
class PutVoiceConnectorTerminationResponse;
class PutVoiceConnectorTerminationCredentialsRequest;
class PutVoiceConnectorTerminationCredentialsResponse;
class RegenerateSecurityTokenRequest;
class RegenerateSecurityTokenResponse;
class ResetPersonalPINRequest;
class ResetPersonalPINResponse;
class RestorePhoneNumberRequest;
class RestorePhoneNumberResponse;
class SearchAvailablePhoneNumbersRequest;
class SearchAvailablePhoneNumbersResponse;
class UpdateAccountRequest;
class UpdateAccountResponse;
class UpdateAccountSettingsRequest;
class UpdateAccountSettingsResponse;
class UpdateBotRequest;
class UpdateBotResponse;
class UpdateGlobalSettingsRequest;
class UpdateGlobalSettingsResponse;
class UpdatePhoneNumberRequest;
class UpdatePhoneNumberResponse;
class UpdateUserRequest;
class UpdateUserResponse;
class UpdateUserSettingsRequest;
class UpdateUserSettingsResponse;
class UpdateVoiceConnectorRequest;
class UpdateVoiceConnectorResponse;

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
    AssociatePhoneNumberWithUserResponse * associatePhoneNumberWithUser(const AssociatePhoneNumberWithUserRequest &request);
    AssociatePhoneNumbersWithVoiceConnectorResponse * associatePhoneNumbersWithVoiceConnector(const AssociatePhoneNumbersWithVoiceConnectorRequest &request);
    BatchDeletePhoneNumberResponse * batchDeletePhoneNumber(const BatchDeletePhoneNumberRequest &request);
    BatchSuspendUserResponse * batchSuspendUser(const BatchSuspendUserRequest &request);
    BatchUnsuspendUserResponse * batchUnsuspendUser(const BatchUnsuspendUserRequest &request);
    BatchUpdatePhoneNumberResponse * batchUpdatePhoneNumber(const BatchUpdatePhoneNumberRequest &request);
    BatchUpdateUserResponse * batchUpdateUser(const BatchUpdateUserRequest &request);
    CreateAccountResponse * createAccount(const CreateAccountRequest &request);
    CreateBotResponse * createBot(const CreateBotRequest &request);
    CreatePhoneNumberOrderResponse * createPhoneNumberOrder(const CreatePhoneNumberOrderRequest &request);
    CreateVoiceConnectorResponse * createVoiceConnector(const CreateVoiceConnectorRequest &request);
    DeleteAccountResponse * deleteAccount(const DeleteAccountRequest &request);
    DeleteEventsConfigurationResponse * deleteEventsConfiguration(const DeleteEventsConfigurationRequest &request);
    DeletePhoneNumberResponse * deletePhoneNumber(const DeletePhoneNumberRequest &request);
    DeleteVoiceConnectorResponse * deleteVoiceConnector(const DeleteVoiceConnectorRequest &request);
    DeleteVoiceConnectorOriginationResponse * deleteVoiceConnectorOrigination(const DeleteVoiceConnectorOriginationRequest &request);
    DeleteVoiceConnectorTerminationResponse * deleteVoiceConnectorTermination(const DeleteVoiceConnectorTerminationRequest &request);
    DeleteVoiceConnectorTerminationCredentialsResponse * deleteVoiceConnectorTerminationCredentials(const DeleteVoiceConnectorTerminationCredentialsRequest &request);
    DisassociatePhoneNumberFromUserResponse * disassociatePhoneNumberFromUser(const DisassociatePhoneNumberFromUserRequest &request);
    DisassociatePhoneNumbersFromVoiceConnectorResponse * disassociatePhoneNumbersFromVoiceConnector(const DisassociatePhoneNumbersFromVoiceConnectorRequest &request);
    GetAccountResponse * getAccount(const GetAccountRequest &request);
    GetAccountSettingsResponse * getAccountSettings(const GetAccountSettingsRequest &request);
    GetBotResponse * getBot(const GetBotRequest &request);
    GetEventsConfigurationResponse * getEventsConfiguration(const GetEventsConfigurationRequest &request);
    GetGlobalSettingsResponse * getGlobalSettings(const GetGlobalSettingsRequest &request);
    GetGlobalSettingsResponse * getGlobalSettings();
    GetPhoneNumberResponse * getPhoneNumber(const GetPhoneNumberRequest &request);
    GetPhoneNumberOrderResponse * getPhoneNumberOrder(const GetPhoneNumberOrderRequest &request);
    GetUserResponse * getUser(const GetUserRequest &request);
    GetUserSettingsResponse * getUserSettings(const GetUserSettingsRequest &request);
    GetVoiceConnectorResponse * getVoiceConnector(const GetVoiceConnectorRequest &request);
    GetVoiceConnectorOriginationResponse * getVoiceConnectorOrigination(const GetVoiceConnectorOriginationRequest &request);
    GetVoiceConnectorTerminationResponse * getVoiceConnectorTermination(const GetVoiceConnectorTerminationRequest &request);
    GetVoiceConnectorTerminationHealthResponse * getVoiceConnectorTerminationHealth(const GetVoiceConnectorTerminationHealthRequest &request);
    InviteUsersResponse * inviteUsers(const InviteUsersRequest &request);
    ListAccountsResponse * listAccounts(const ListAccountsRequest &request);
    ListBotsResponse * listBots(const ListBotsRequest &request);
    ListPhoneNumberOrdersResponse * listPhoneNumberOrders(const ListPhoneNumberOrdersRequest &request);
    ListPhoneNumbersResponse * listPhoneNumbers(const ListPhoneNumbersRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    ListVoiceConnectorTerminationCredentialsResponse * listVoiceConnectorTerminationCredentials(const ListVoiceConnectorTerminationCredentialsRequest &request);
    ListVoiceConnectorsResponse * listVoiceConnectors(const ListVoiceConnectorsRequest &request);
    LogoutUserResponse * logoutUser(const LogoutUserRequest &request);
    PutEventsConfigurationResponse * putEventsConfiguration(const PutEventsConfigurationRequest &request);
    PutVoiceConnectorOriginationResponse * putVoiceConnectorOrigination(const PutVoiceConnectorOriginationRequest &request);
    PutVoiceConnectorTerminationResponse * putVoiceConnectorTermination(const PutVoiceConnectorTerminationRequest &request);
    PutVoiceConnectorTerminationCredentialsResponse * putVoiceConnectorTerminationCredentials(const PutVoiceConnectorTerminationCredentialsRequest &request);
    RegenerateSecurityTokenResponse * regenerateSecurityToken(const RegenerateSecurityTokenRequest &request);
    ResetPersonalPINResponse * resetPersonalPIN(const ResetPersonalPINRequest &request);
    RestorePhoneNumberResponse * restorePhoneNumber(const RestorePhoneNumberRequest &request);
    SearchAvailablePhoneNumbersResponse * searchAvailablePhoneNumbers(const SearchAvailablePhoneNumbersRequest &request);
    UpdateAccountResponse * updateAccount(const UpdateAccountRequest &request);
    UpdateAccountSettingsResponse * updateAccountSettings(const UpdateAccountSettingsRequest &request);
    UpdateBotResponse * updateBot(const UpdateBotRequest &request);
    UpdateGlobalSettingsResponse * updateGlobalSettings(const UpdateGlobalSettingsRequest &request);
    UpdatePhoneNumberResponse * updatePhoneNumber(const UpdatePhoneNumberRequest &request);
    UpdateUserResponse * updateUser(const UpdateUserRequest &request);
    UpdateUserSettingsResponse * updateUserSettings(const UpdateUserSettingsRequest &request);
    UpdateVoiceConnectorResponse * updateVoiceConnector(const UpdateVoiceConnectorRequest &request);

private:
    Q_DECLARE_PRIVATE(ChimeClient)
    Q_DISABLE_COPY(ChimeClient)

};

} // namespace Chime
} // namespace QtAws

#endif
