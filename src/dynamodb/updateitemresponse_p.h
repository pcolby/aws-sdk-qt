// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEITEMRESPONSE_P_H
#define QTAWS_UPDATEITEMRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class UpdateItemResponse;

class UpdateItemResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit UpdateItemResponsePrivate(UpdateItemResponse * const q);

    void parseUpdateItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateItemResponse)
    Q_DISABLE_COPY(UpdateItemResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
