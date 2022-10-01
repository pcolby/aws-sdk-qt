// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLETOPOINTINTIMERESPONSE_P_H
#define QTAWS_RESTORETABLETOPOINTINTIMERESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class RestoreTableToPointInTimeResponse;

class RestoreTableToPointInTimeResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit RestoreTableToPointInTimeResponsePrivate(RestoreTableToPointInTimeResponse * const q);

    void parseRestoreTableToPointInTimeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreTableToPointInTimeResponse)
    Q_DISABLE_COPY(RestoreTableToPointInTimeResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
