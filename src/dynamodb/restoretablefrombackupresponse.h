// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLEFROMBACKUPRESPONSE_H
#define QTAWS_RESTORETABLEFROMBACKUPRESPONSE_H

#include "dynamodbresponse.h"
#include "restoretablefrombackuprequest.h"

namespace QtAws {
namespace DynamoDb {

class RestoreTableFromBackupResponsePrivate;

class QTAWSDYNAMODB_EXPORT RestoreTableFromBackupResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    RestoreTableFromBackupResponse(const RestoreTableFromBackupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreTableFromBackupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreTableFromBackupResponse)
    Q_DISABLE_COPY(RestoreTableFromBackupResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
