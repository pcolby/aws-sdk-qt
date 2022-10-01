// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORDERSRESPONSE_P_H
#define QTAWS_LISTORDERSRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class ListOrdersResponse;

class ListOrdersResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit ListOrdersResponsePrivate(ListOrdersResponse * const q);

    void parseListOrdersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOrdersResponse)
    Q_DISABLE_COPY(ListOrdersResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
