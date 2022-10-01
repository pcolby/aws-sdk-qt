// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGRAPHSRESPONSE_P_H
#define QTAWS_LISTGRAPHSRESPONSE_P_H

#include "detectiveresponse_p.h"

namespace QtAws {
namespace Detective {

class ListGraphsResponse;

class ListGraphsResponsePrivate : public DetectiveResponsePrivate {

public:

    explicit ListGraphsResponsePrivate(ListGraphsResponse * const q);

    void parseListGraphsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGraphsResponse)
    Q_DISABLE_COPY(ListGraphsResponsePrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
