// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHWRITEITEMRESPONSE_P_H
#define QTAWS_BATCHWRITEITEMRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class BatchWriteItemResponse;

class BatchWriteItemResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit BatchWriteItemResponsePrivate(BatchWriteItemResponse * const q);

    void parseBatchWriteItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchWriteItemResponse)
    Q_DISABLE_COPY(BatchWriteItemResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
