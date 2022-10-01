// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTETRANSACTIONRESPONSE_P_H
#define QTAWS_EXECUTETRANSACTIONRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class ExecuteTransactionResponse;

class ExecuteTransactionResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit ExecuteTransactionResponsePrivate(ExecuteTransactionResponse * const q);

    void parseExecuteTransactionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExecuteTransactionResponse)
    Q_DISABLE_COPY(ExecuteTransactionResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
