// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETITEMRESPONSE_P_H
#define QTAWS_GETITEMRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class GetItemResponse;

class GetItemResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit GetItemResponsePrivate(GetItemResponse * const q);

    void parseGetItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetItemResponse)
    Q_DISABLE_COPY(GetItemResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
