// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBYTEMATCHSETSRESPONSE_P_H
#define QTAWS_LISTBYTEMATCHSETSRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class ListByteMatchSetsResponse;

class ListByteMatchSetsResponsePrivate : public WafResponsePrivate {

public:

    explicit ListByteMatchSetsResponsePrivate(ListByteMatchSetsResponse * const q);

    void parseListByteMatchSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListByteMatchSetsResponse)
    Q_DISABLE_COPY(ListByteMatchSetsResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
