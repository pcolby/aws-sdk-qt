// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLEFROMBACKUPRESPONSE_P_H
#define QTAWS_RESTORETABLEFROMBACKUPRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class RestoreTableFromBackupResponse;

class RestoreTableFromBackupResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit RestoreTableFromBackupResponsePrivate(RestoreTableFromBackupResponse * const q);

    void parseRestoreTableFromBackupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreTableFromBackupResponse)
    Q_DISABLE_COPY(RestoreTableFromBackupResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
