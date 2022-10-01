// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLETOPOINTINTIMERESPONSE_H
#define QTAWS_RESTORETABLETOPOINTINTIMERESPONSE_H

#include "dynamodbresponse.h"
#include "restoretabletopointintimerequest.h"

namespace QtAws {
namespace DynamoDb {

class RestoreTableToPointInTimeResponsePrivate;

class QTAWSDYNAMODB_EXPORT RestoreTableToPointInTimeResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    RestoreTableToPointInTimeResponse(const RestoreTableToPointInTimeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreTableToPointInTimeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreTableToPointInTimeResponse)
    Q_DISABLE_COPY(RestoreTableToPointInTimeResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
