// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETITEMRESPONSE_P_H
#define QTAWS_BATCHGETITEMRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class BatchGetItemResponse;

class BatchGetItemResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit BatchGetItemResponsePrivate(BatchGetItemResponse * const q);

    void parseBatchGetItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetItemResponse)
    Q_DISABLE_COPY(BatchGetItemResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
