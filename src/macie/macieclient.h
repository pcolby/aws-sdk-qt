/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_MACIECLIENT_H
#define QTAWS_MACIECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Macie {

class MacieClientPrivate;
class AssociateMemberAccountRequest;
class AssociateMemberAccountResponse;
class AssociateS3ResourcesRequest;
class AssociateS3ResourcesResponse;
class DisassociateMemberAccountRequest;
class DisassociateMemberAccountResponse;
class DisassociateS3ResourcesRequest;
class DisassociateS3ResourcesResponse;
class ListMemberAccountsRequest;
class ListMemberAccountsResponse;
class ListS3ResourcesRequest;
class ListS3ResourcesResponse;
class UpdateS3ResourcesRequest;
class UpdateS3ResourcesResponse;

class QTAWS_EXPORT MacieClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MacieClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MacieClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateMemberAccountResponse * associateMemberAccount(const AssociateMemberAccountRequest &request);
    AssociateS3ResourcesResponse * associateS3Resources(const AssociateS3ResourcesRequest &request);
    DisassociateMemberAccountResponse * disassociateMemberAccount(const DisassociateMemberAccountRequest &request);
    DisassociateS3ResourcesResponse * disassociateS3Resources(const DisassociateS3ResourcesRequest &request);
    ListMemberAccountsResponse * listMemberAccounts(const ListMemberAccountsRequest &request);
    ListS3ResourcesResponse * listS3Resources(const ListS3ResourcesRequest &request);
    UpdateS3ResourcesResponse * updateS3Resources(const UpdateS3ResourcesRequest &request);

private:
    Q_DECLARE_PRIVATE(MacieClient)
    Q_DISABLE_COPY(MacieClient)

};

} // namespace Macie
} // namespace QtAws

#endif
