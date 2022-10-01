// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPRESPONSE_H
#define QTAWS_CREATEBACKUPRESPONSE_H

#include "dynamodbresponse.h"
#include "createbackuprequest.h"

namespace QtAws {
namespace DynamoDb {

class CreateBackupResponsePrivate;

class QTAWSDYNAMODB_EXPORT CreateBackupResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    CreateBackupResponse(const CreateBackupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBackupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackupResponse)
    Q_DISABLE_COPY(CreateBackupResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
