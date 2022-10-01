// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBYTEMATCHSETSRESPONSE_P_H
#define QTAWS_LISTBYTEMATCHSETSRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class ListByteMatchSetsResponse;

class ListByteMatchSetsResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit ListByteMatchSetsResponsePrivate(ListByteMatchSetsResponse * const q);

    void parseListByteMatchSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListByteMatchSetsResponse)
    Q_DISABLE_COPY(ListByteMatchSetsResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
