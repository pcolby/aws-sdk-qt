// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYRESPONSE_P_H
#define QTAWS_QUERYRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class QueryResponse;

class QueryResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit QueryResponsePrivate(QueryResponse * const q);

    void parseQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(QueryResponse)
    Q_DISABLE_COPY(QueryResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
