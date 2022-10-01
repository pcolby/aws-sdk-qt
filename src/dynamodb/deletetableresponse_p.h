// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETABLERESPONSE_P_H
#define QTAWS_DELETETABLERESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DeleteTableResponse;

class DeleteTableResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DeleteTableResponsePrivate(DeleteTableResponse * const q);

    void parseDeleteTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTableResponse)
    Q_DISABLE_COPY(DeleteTableResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
