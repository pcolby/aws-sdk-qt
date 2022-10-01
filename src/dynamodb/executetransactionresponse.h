// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTETRANSACTIONRESPONSE_H
#define QTAWS_EXECUTETRANSACTIONRESPONSE_H

#include "dynamodbresponse.h"
#include "executetransactionrequest.h"

namespace QtAws {
namespace DynamoDb {

class ExecuteTransactionResponsePrivate;

class QTAWSDYNAMODB_EXPORT ExecuteTransactionResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    ExecuteTransactionResponse(const ExecuteTransactionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExecuteTransactionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteTransactionResponse)
    Q_DISABLE_COPY(ExecuteTransactionResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
