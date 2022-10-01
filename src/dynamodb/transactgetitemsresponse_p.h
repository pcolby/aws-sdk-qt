// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSACTGETITEMSRESPONSE_P_H
#define QTAWS_TRANSACTGETITEMSRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class TransactGetItemsResponse;

class TransactGetItemsResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit TransactGetItemsResponsePrivate(TransactGetItemsResponse * const q);

    void parseTransactGetItemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TransactGetItemsResponse)
    Q_DISABLE_COPY(TransactGetItemsResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
