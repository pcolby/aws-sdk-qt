// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTITEMRESPONSE_P_H
#define QTAWS_PUTITEMRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class PutItemResponse;

class PutItemResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit PutItemResponsePrivate(PutItemResponse * const q);

    void parsePutItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutItemResponse)
    Q_DISABLE_COPY(PutItemResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
