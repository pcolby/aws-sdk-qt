// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHEXECUTESTATEMENTRESPONSE_P_H
#define QTAWS_BATCHEXECUTESTATEMENTRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class BatchExecuteStatementResponse;

class BatchExecuteStatementResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit BatchExecuteStatementResponsePrivate(BatchExecuteStatementResponse * const q);

    void parseBatchExecuteStatementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchExecuteStatementResponse)
    Q_DISABLE_COPY(BatchExecuteStatementResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
