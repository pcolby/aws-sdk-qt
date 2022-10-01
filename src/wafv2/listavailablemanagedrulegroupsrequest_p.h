// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEMANAGEDRULEGROUPSREQUEST_P_H
#define QTAWS_LISTAVAILABLEMANAGEDRULEGROUPSREQUEST_P_H

#include "wafv2request_p.h"
#include "listavailablemanagedrulegroupsrequest.h"

namespace QtAws {
namespace Wafv2 {

class ListAvailableManagedRuleGroupsRequest;

class ListAvailableManagedRuleGroupsRequestPrivate : public Wafv2RequestPrivate {

public:
    ListAvailableManagedRuleGroupsRequestPrivate(const Wafv2Request::Action action,
                                   ListAvailableManagedRuleGroupsRequest * const q);
    ListAvailableManagedRuleGroupsRequestPrivate(const ListAvailableManagedRuleGroupsRequestPrivate &other,
                                   ListAvailableManagedRuleGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAvailableManagedRuleGroupsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
