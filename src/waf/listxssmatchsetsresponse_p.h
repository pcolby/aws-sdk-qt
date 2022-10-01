// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTXSSMATCHSETSRESPONSE_P_H
#define QTAWS_LISTXSSMATCHSETSRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class ListXssMatchSetsResponse;

class ListXssMatchSetsResponsePrivate : public WafResponsePrivate {

public:

    explicit ListXssMatchSetsResponsePrivate(ListXssMatchSetsResponse * const q);

    void parseListXssMatchSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListXssMatchSetsResponse)
    Q_DISABLE_COPY(ListXssMatchSetsResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
