// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOCLIENT_H
#define QTAWS_SSOCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsssoglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Sso {

class SsoClientPrivate;
class GetRoleCredentialsRequest;
class GetRoleCredentialsResponse;
class ListAccountRolesRequest;
class ListAccountRolesResponse;
class ListAccountsRequest;
class ListAccountsResponse;
class LogoutRequest;
class LogoutResponse;

class QTAWSSSO_EXPORT SsoClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SsoClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SsoClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetRoleCredentialsResponse * getRoleCredentials(const GetRoleCredentialsRequest &request);
    ListAccountRolesResponse * listAccountRoles(const ListAccountRolesRequest &request);
    ListAccountsResponse * listAccounts(const ListAccountsRequest &request);
    LogoutResponse * logout(const LogoutRequest &request);

private:
    Q_DECLARE_PRIVATE(SsoClient)
    Q_DISABLE_COPY(SsoClient)

};

} // namespace Sso
} // namespace QtAws

#endif
