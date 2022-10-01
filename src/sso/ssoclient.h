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
