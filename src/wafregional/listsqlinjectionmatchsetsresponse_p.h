// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSQLINJECTIONMATCHSETSRESPONSE_P_H
#define QTAWS_LISTSQLINJECTIONMATCHSETSRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class ListSqlInjectionMatchSetsResponse;

class ListSqlInjectionMatchSetsResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit ListSqlInjectionMatchSetsResponsePrivate(ListSqlInjectionMatchSetsResponse * const q);

    void parseListSqlInjectionMatchSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSqlInjectionMatchSetsResponse)
    Q_DISABLE_COPY(ListSqlInjectionMatchSetsResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
