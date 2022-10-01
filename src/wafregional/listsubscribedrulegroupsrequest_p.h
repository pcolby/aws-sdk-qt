// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIBEDRULEGROUPSREQUEST_P_H
#define QTAWS_LISTSUBSCRIBEDRULEGROUPSREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "listsubscribedrulegroupsrequest.h"

namespace QtAws {
namespace WafRegional {

class ListSubscribedRuleGroupsRequest;

class ListSubscribedRuleGroupsRequestPrivate : public WafRegionalRequestPrivate {

public:
    ListSubscribedRuleGroupsRequestPrivate(const WafRegionalRequest::Action action,
                                   ListSubscribedRuleGroupsRequest * const q);
    ListSubscribedRuleGroupsRequestPrivate(const ListSubscribedRuleGroupsRequestPrivate &other,
                                   ListSubscribedRuleGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSubscribedRuleGroupsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
