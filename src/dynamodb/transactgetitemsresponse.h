// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSACTGETITEMSRESPONSE_H
#define QTAWS_TRANSACTGETITEMSRESPONSE_H

#include "dynamodbresponse.h"
#include "transactgetitemsrequest.h"

namespace QtAws {
namespace DynamoDb {

class TransactGetItemsResponsePrivate;

class QTAWSDYNAMODB_EXPORT TransactGetItemsResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    TransactGetItemsResponse(const TransactGetItemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TransactGetItemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TransactGetItemsResponse)
    Q_DISABLE_COPY(TransactGetItemsResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
