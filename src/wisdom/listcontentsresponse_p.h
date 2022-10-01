// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTENTSRESPONSE_P_H
#define QTAWS_LISTCONTENTSRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class ListContentsResponse;

class ListContentsResponsePrivate : public WisdomResponsePrivate {

public:

    explicit ListContentsResponsePrivate(ListContentsResponse * const q);

    void parseListContentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListContentsResponse)
    Q_DISABLE_COPY(ListContentsResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
