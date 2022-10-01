// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHWRITEITEMRESPONSE_H
#define QTAWS_BATCHWRITEITEMRESPONSE_H

#include "dynamodbresponse.h"
#include "batchwriteitemrequest.h"

namespace QtAws {
namespace DynamoDb {

class BatchWriteItemResponsePrivate;

class QTAWSDYNAMODB_EXPORT BatchWriteItemResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    BatchWriteItemResponse(const BatchWriteItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchWriteItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchWriteItemResponse)
    Q_DISABLE_COPY(BatchWriteItemResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
