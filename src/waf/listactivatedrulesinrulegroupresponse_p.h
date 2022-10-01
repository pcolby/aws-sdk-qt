// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVATEDRULESINRULEGROUPRESPONSE_P_H
#define QTAWS_LISTACTIVATEDRULESINRULEGROUPRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class ListActivatedRulesInRuleGroupResponse;

class ListActivatedRulesInRuleGroupResponsePrivate : public WafResponsePrivate {

public:

    explicit ListActivatedRulesInRuleGroupResponsePrivate(ListActivatedRulesInRuleGroupResponse * const q);

    void parseListActivatedRulesInRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListActivatedRulesInRuleGroupResponse)
    Q_DISABLE_COPY(ListActivatedRulesInRuleGroupResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
