// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYTABLEROWSRESPONSE_P_H
#define QTAWS_QUERYTABLEROWSRESPONSE_P_H

#include "honeycoderesponse_p.h"

namespace QtAws {
namespace Honeycode {

class QueryTableRowsResponse;

class QueryTableRowsResponsePrivate : public HoneycodeResponsePrivate {

public:

    explicit QueryTableRowsResponsePrivate(QueryTableRowsResponse * const q);

    void parseQueryTableRowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(QueryTableRowsResponse)
    Q_DISABLE_COPY(QueryTableRowsResponsePrivate)

};

} // namespace Honeycode
} // namespace QtAws

#endif
