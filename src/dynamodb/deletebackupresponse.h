// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPRESPONSE_H
#define QTAWS_DELETEBACKUPRESPONSE_H

#include "dynamodbresponse.h"
#include "deletebackuprequest.h"

namespace QtAws {
namespace DynamoDb {

class DeleteBackupResponsePrivate;

class QTAWSDYNAMODB_EXPORT DeleteBackupResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    DeleteBackupResponse(const DeleteBackupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBackupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupResponse)
    Q_DISABLE_COPY(DeleteBackupResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
