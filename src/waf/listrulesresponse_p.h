// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESRESPONSE_P_H
#define QTAWS_LISTRULESRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class ListRulesResponse;

class ListRulesResponsePrivate : public WafResponsePrivate {

public:

    explicit ListRulesResponsePrivate(ListRulesResponse * const q);

    void parseListRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRulesResponse)
    Q_DISABLE_COPY(ListRulesResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
