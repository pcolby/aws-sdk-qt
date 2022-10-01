// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSQLINJECTIONMATCHSETSRESPONSE_P_H
#define QTAWS_LISTSQLINJECTIONMATCHSETSRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class ListSqlInjectionMatchSetsResponse;

class ListSqlInjectionMatchSetsResponsePrivate : public WafResponsePrivate {

public:

    explicit ListSqlInjectionMatchSetsResponsePrivate(ListSqlInjectionMatchSetsResponse * const q);

    void parseListSqlInjectionMatchSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSqlInjectionMatchSetsResponse)
    Q_DISABLE_COPY(ListSqlInjectionMatchSetsResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
