// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
