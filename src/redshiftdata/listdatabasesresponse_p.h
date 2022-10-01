// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATABASESRESPONSE_P_H
#define QTAWS_LISTDATABASESRESPONSE_P_H

#include "redshiftdataresponse_p.h"

namespace QtAws {
namespace RedshiftData {

class ListDatabasesResponse;

class ListDatabasesResponsePrivate : public RedshiftDataResponsePrivate {

public:

    explicit ListDatabasesResponsePrivate(ListDatabasesResponse * const q);

    void parseListDatabasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDatabasesResponse)
    Q_DISABLE_COPY(ListDatabasesResponsePrivate)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
