// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYRESPONSE_H
#define QTAWS_QUERYRESPONSE_H

#include "dynamodbresponse.h"
#include "queryrequest.h"

namespace QtAws {
namespace DynamoDb {

class QueryResponsePrivate;

class QTAWSDYNAMODB_EXPORT QueryResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    QueryResponse(const QueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const QueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryResponse)
    Q_DISABLE_COPY(QueryResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
