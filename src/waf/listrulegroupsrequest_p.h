// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULEGROUPSREQUEST_P_H
#define QTAWS_LISTRULEGROUPSREQUEST_P_H

#include "wafrequest_p.h"
#include "listrulegroupsrequest.h"

namespace QtAws {
namespace Waf {

class ListRuleGroupsRequest;

class ListRuleGroupsRequestPrivate : public WafRequestPrivate {

public:
    ListRuleGroupsRequestPrivate(const WafRequest::Action action,
                                   ListRuleGroupsRequest * const q);
    ListRuleGroupsRequestPrivate(const ListRuleGroupsRequestPrivate &other,
                                   ListRuleGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRuleGroupsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
