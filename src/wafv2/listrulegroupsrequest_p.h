// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULEGROUPSREQUEST_P_H
#define QTAWS_LISTRULEGROUPSREQUEST_P_H

#include "wafv2request_p.h"
#include "listrulegroupsrequest.h"

namespace QtAws {
namespace Wafv2 {

class ListRuleGroupsRequest;

class ListRuleGroupsRequestPrivate : public Wafv2RequestPrivate {

public:
    ListRuleGroupsRequestPrivate(const Wafv2Request::Action action,
                                   ListRuleGroupsRequest * const q);
    ListRuleGroupsRequestPrivate(const ListRuleGroupsRequestPrivate &other,
                                   ListRuleGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRuleGroupsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
