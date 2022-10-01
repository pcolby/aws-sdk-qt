// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTTABLETOPOINTINTIMERESPONSE_H
#define QTAWS_EXPORTTABLETOPOINTINTIMERESPONSE_H

#include "dynamodbresponse.h"
#include "exporttabletopointintimerequest.h"

namespace QtAws {
namespace DynamoDb {

class ExportTableToPointInTimeResponsePrivate;

class QTAWSDYNAMODB_EXPORT ExportTableToPointInTimeResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    ExportTableToPointInTimeResponse(const ExportTableToPointInTimeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportTableToPointInTimeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportTableToPointInTimeResponse)
    Q_DISABLE_COPY(ExportTableToPointInTimeResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
