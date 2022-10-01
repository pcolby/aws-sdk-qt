// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACIECLIENT_H
#define QTAWS_MACIECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmacieglobal.h"

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

class QTAWSMACIE_EXPORT MacieClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MacieClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MacieClient(
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
