// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTXSSMATCHSETSRESPONSE_P_H
#define QTAWS_LISTXSSMATCHSETSRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class ListXssMatchSetsResponse;

class ListXssMatchSetsResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit ListXssMatchSetsResponsePrivate(ListXssMatchSetsResponse * const q);

    void parseListXssMatchSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListXssMatchSetsResponse)
    Q_DISABLE_COPY(ListXssMatchSetsResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
