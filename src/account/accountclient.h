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

#ifndef QTAWS_ACCOUNTCLIENT_H
#define QTAWS_ACCOUNTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsaccountglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Account {

class AccountClientPrivate;
class DeleteAlternateContactRequest;
class DeleteAlternateContactResponse;
class GetAlternateContactRequest;
class GetAlternateContactResponse;
class GetContactInformationRequest;
class GetContactInformationResponse;
class PutAlternateContactRequest;
class PutAlternateContactResponse;
class PutContactInformationRequest;
class PutContactInformationResponse;

class QTAWSACCOUNT_EXPORT AccountClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AccountClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AccountClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteAlternateContactResponse * deleteAlternateContact(const DeleteAlternateContactRequest &request);
    GetAlternateContactResponse * getAlternateContact(const GetAlternateContactRequest &request);
    GetContactInformationResponse * getContactInformation(const GetContactInformationRequest &request);
    PutAlternateContactResponse * putAlternateContact(const PutAlternateContactRequest &request);
    PutContactInformationResponse * putContactInformation(const PutContactInformationRequest &request);

private:
    Q_DECLARE_PRIVATE(AccountClient)
    Q_DISABLE_COPY(AccountClient)

};

} // namespace Account
} // namespace QtAws

#endif
