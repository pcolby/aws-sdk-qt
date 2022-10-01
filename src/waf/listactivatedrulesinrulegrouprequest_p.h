// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVATEDRULESINRULEGROUPREQUEST_P_H
#define QTAWS_LISTACTIVATEDRULESINRULEGROUPREQUEST_P_H

#include "wafrequest_p.h"
#include "listactivatedrulesinrulegrouprequest.h"

namespace QtAws {
namespace Waf {

class ListActivatedRulesInRuleGroupRequest;

class ListActivatedRulesInRuleGroupRequestPrivate : public WafRequestPrivate {

public:
    ListActivatedRulesInRuleGroupRequestPrivate(const WafRequest::Action action,
                                   ListActivatedRulesInRuleGroupRequest * const q);
    ListActivatedRulesInRuleGroupRequestPrivate(const ListActivatedRulesInRuleGroupRequestPrivate &other,
                                   ListActivatedRulesInRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListActivatedRulesInRuleGroupRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
