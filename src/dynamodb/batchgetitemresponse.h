// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETITEMRESPONSE_H
#define QTAWS_BATCHGETITEMRESPONSE_H

#include "dynamodbresponse.h"
#include "batchgetitemrequest.h"

namespace QtAws {
namespace DynamoDb {

class BatchGetItemResponsePrivate;

class QTAWSDYNAMODB_EXPORT BatchGetItemResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    BatchGetItemResponse(const BatchGetItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetItemResponse)
    Q_DISABLE_COPY(BatchGetItemResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
