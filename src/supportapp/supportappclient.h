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

#ifndef QTAWS_SUPPORTAPPCLIENT_H
#define QTAWS_SUPPORTAPPCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssupportappglobal.h"

class QNetworkReply;

namespace QtAws {
namespace SupportApp {

class SupportAppClientPrivate;
class CreateSlackChannelConfigurationRequest;
class CreateSlackChannelConfigurationResponse;
class DeleteAccountAliasRequest;
class DeleteAccountAliasResponse;
class DeleteSlackChannelConfigurationRequest;
class DeleteSlackChannelConfigurationResponse;
class DeleteSlackWorkspaceConfigurationRequest;
class DeleteSlackWorkspaceConfigurationResponse;
class GetAccountAliasRequest;
class GetAccountAliasResponse;
class ListSlackChannelConfigurationsRequest;
class ListSlackChannelConfigurationsResponse;
class ListSlackWorkspaceConfigurationsRequest;
class ListSlackWorkspaceConfigurationsResponse;
class PutAccountAliasRequest;
class PutAccountAliasResponse;
class UpdateSlackChannelConfigurationRequest;
class UpdateSlackChannelConfigurationResponse;

class QTAWSSUPPORTAPP_EXPORT SupportAppClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SupportAppClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SupportAppClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateSlackChannelConfigurationResponse * createSlackChannelConfiguration(const CreateSlackChannelConfigurationRequest &request);
    DeleteAccountAliasResponse * deleteAccountAlias(const DeleteAccountAliasRequest &request);
    DeleteSlackChannelConfigurationResponse * deleteSlackChannelConfiguration(const DeleteSlackChannelConfigurationRequest &request);
    DeleteSlackWorkspaceConfigurationResponse * deleteSlackWorkspaceConfiguration(const DeleteSlackWorkspaceConfigurationRequest &request);
    GetAccountAliasResponse * getAccountAlias(const GetAccountAliasRequest &request);
    ListSlackChannelConfigurationsResponse * listSlackChannelConfigurations(const ListSlackChannelConfigurationsRequest &request);
    ListSlackWorkspaceConfigurationsResponse * listSlackWorkspaceConfigurations(const ListSlackWorkspaceConfigurationsRequest &request);
    PutAccountAliasResponse * putAccountAlias(const PutAccountAliasRequest &request);
    UpdateSlackChannelConfigurationResponse * updateSlackChannelConfiguration(const UpdateSlackChannelConfigurationRequest &request);

private:
    Q_DECLARE_PRIVATE(SupportAppClient)
    Q_DISABLE_COPY(SupportAppClient)

};

} // namespace SupportApp
} // namespace QtAws

#endif
