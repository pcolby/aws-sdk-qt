// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVATEDRULESINRULEGROUPREQUEST_P_H
#define QTAWS_LISTACTIVATEDRULESINRULEGROUPREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "listactivatedrulesinrulegrouprequest.h"

namespace QtAws {
namespace WafRegional {

class ListActivatedRulesInRuleGroupRequest;

class ListActivatedRulesInRuleGroupRequestPrivate : public WafRegionalRequestPrivate {

public:
    ListActivatedRulesInRuleGroupRequestPrivate(const WafRegionalRequest::Action action,
                                   ListActivatedRulesInRuleGroupRequest * const q);
    ListActivatedRulesInRuleGroupRequestPrivate(const ListActivatedRulesInRuleGroupRequestPrivate &other,
                                   ListActivatedRulesInRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListActivatedRulesInRuleGroupRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
