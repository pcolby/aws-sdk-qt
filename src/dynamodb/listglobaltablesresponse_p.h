// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGLOBALTABLESRESPONSE_P_H
#define QTAWS_LISTGLOBALTABLESRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class ListGlobalTablesResponse;

class ListGlobalTablesResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit ListGlobalTablesResponsePrivate(ListGlobalTablesResponse * const q);

    void parseListGlobalTablesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGlobalTablesResponse)
    Q_DISABLE_COPY(ListGlobalTablesResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
