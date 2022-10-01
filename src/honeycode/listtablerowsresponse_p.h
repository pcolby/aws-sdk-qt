// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLEROWSRESPONSE_P_H
#define QTAWS_LISTTABLEROWSRESPONSE_P_H

#include "honeycoderesponse_p.h"

namespace QtAws {
namespace Honeycode {

class ListTableRowsResponse;

class ListTableRowsResponsePrivate : public HoneycodeResponsePrivate {

public:

    explicit ListTableRowsResponsePrivate(ListTableRowsResponse * const q);

    void parseListTableRowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTableRowsResponse)
    Q_DISABLE_COPY(ListTableRowsResponsePrivate)

};

} // namespace Honeycode
} // namespace QtAws

#endif
