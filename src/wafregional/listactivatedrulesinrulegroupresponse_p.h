// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVATEDRULESINRULEGROUPRESPONSE_P_H
#define QTAWS_LISTACTIVATEDRULESINRULEGROUPRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class ListActivatedRulesInRuleGroupResponse;

class ListActivatedRulesInRuleGroupResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit ListActivatedRulesInRuleGroupResponsePrivate(ListActivatedRulesInRuleGroupResponse * const q);

    void parseListActivatedRulesInRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListActivatedRulesInRuleGroupResponse)
    Q_DISABLE_COPY(ListActivatedRulesInRuleGroupResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
