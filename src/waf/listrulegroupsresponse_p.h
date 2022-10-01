// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULEGROUPSRESPONSE_P_H
#define QTAWS_LISTRULEGROUPSRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class ListRuleGroupsResponse;

class ListRuleGroupsResponsePrivate : public WafResponsePrivate {

public:

    explicit ListRuleGroupsResponsePrivate(ListRuleGroupsResponse * const q);

    void parseListRuleGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRuleGroupsResponse)
    Q_DISABLE_COPY(ListRuleGroupsResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
