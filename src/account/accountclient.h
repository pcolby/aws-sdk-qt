// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
