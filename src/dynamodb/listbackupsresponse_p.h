// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPSRESPONSE_P_H
#define QTAWS_LISTBACKUPSRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class ListBackupsResponse;

class ListBackupsResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit ListBackupsResponsePrivate(ListBackupsResponse * const q);

    void parseListBackupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBackupsResponse)
    Q_DISABLE_COPY(ListBackupsResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
