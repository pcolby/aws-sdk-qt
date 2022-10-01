// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTTABLETOPOINTINTIMERESPONSE_P_H
#define QTAWS_EXPORTTABLETOPOINTINTIMERESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class ExportTableToPointInTimeResponse;

class ExportTableToPointInTimeResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit ExportTableToPointInTimeResponsePrivate(ExportTableToPointInTimeResponse * const q);

    void parseExportTableToPointInTimeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportTableToPointInTimeResponse)
    Q_DISABLE_COPY(ExportTableToPointInTimeResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
