// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATABASESRESPONSE_P_H
#define QTAWS_LISTDATABASESRESPONSE_P_H

#include "timestreamwriteresponse_p.h"

namespace QtAws {
namespace TimestreamWrite {

class ListDatabasesResponse;

class ListDatabasesResponsePrivate : public TimestreamWriteResponsePrivate {

public:

    explicit ListDatabasesResponsePrivate(ListDatabasesResponse * const q);

    void parseListDatabasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDatabasesResponse)
    Q_DISABLE_COPY(ListDatabasesResponsePrivate)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
