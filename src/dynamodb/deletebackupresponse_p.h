// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPRESPONSE_P_H
#define QTAWS_DELETEBACKUPRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DeleteBackupResponse;

class DeleteBackupResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DeleteBackupResponsePrivate(DeleteBackupResponse * const q);

    void parseDeleteBackupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBackupResponse)
    Q_DISABLE_COPY(DeleteBackupResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
