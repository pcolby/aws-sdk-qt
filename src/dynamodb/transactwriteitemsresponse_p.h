// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSACTWRITEITEMSRESPONSE_P_H
#define QTAWS_TRANSACTWRITEITEMSRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class TransactWriteItemsResponse;

class TransactWriteItemsResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit TransactWriteItemsResponsePrivate(TransactWriteItemsResponse * const q);

    void parseTransactWriteItemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TransactWriteItemsResponse)
    Q_DISABLE_COPY(TransactWriteItemsResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
