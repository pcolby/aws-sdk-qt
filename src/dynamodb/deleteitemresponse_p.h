// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEITEMRESPONSE_P_H
#define QTAWS_DELETEITEMRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DeleteItemResponse;

class DeleteItemResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DeleteItemResponsePrivate(DeleteItemResponse * const q);

    void parseDeleteItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteItemResponse)
    Q_DISABLE_COPY(DeleteItemResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
