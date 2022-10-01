// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSESSIONSRESPONSE_P_H
#define QTAWS_SEARCHSESSIONSRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class SearchSessionsResponse;

class SearchSessionsResponsePrivate : public WisdomResponsePrivate {

public:

    explicit SearchSessionsResponsePrivate(SearchSessionsResponse * const q);

    void parseSearchSessionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchSessionsResponse)
    Q_DISABLE_COPY(SearchSessionsResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
