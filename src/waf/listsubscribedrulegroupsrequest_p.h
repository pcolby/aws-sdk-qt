// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIBEDRULEGROUPSREQUEST_P_H
#define QTAWS_LISTSUBSCRIBEDRULEGROUPSREQUEST_P_H

#include "wafrequest_p.h"
#include "listsubscribedrulegroupsrequest.h"

namespace QtAws {
namespace Waf {

class ListSubscribedRuleGroupsRequest;

class ListSubscribedRuleGroupsRequestPrivate : public WafRequestPrivate {

public:
    ListSubscribedRuleGroupsRequestPrivate(const WafRequest::Action action,
                                   ListSubscribedRuleGroupsRequest * const q);
    ListSubscribedRuleGroupsRequestPrivate(const ListSubscribedRuleGroupsRequestPrivate &other,
                                   ListSubscribedRuleGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSubscribedRuleGroupsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
