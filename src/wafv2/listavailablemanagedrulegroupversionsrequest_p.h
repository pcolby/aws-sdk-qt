// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEMANAGEDRULEGROUPVERSIONSREQUEST_P_H
#define QTAWS_LISTAVAILABLEMANAGEDRULEGROUPVERSIONSREQUEST_P_H

#include "wafv2request_p.h"
#include "listavailablemanagedrulegroupversionsrequest.h"

namespace QtAws {
namespace Wafv2 {

class ListAvailableManagedRuleGroupVersionsRequest;

class ListAvailableManagedRuleGroupVersionsRequestPrivate : public Wafv2RequestPrivate {

public:
    ListAvailableManagedRuleGroupVersionsRequestPrivate(const Wafv2Request::Action action,
                                   ListAvailableManagedRuleGroupVersionsRequest * const q);
    ListAvailableManagedRuleGroupVersionsRequestPrivate(const ListAvailableManagedRuleGroupVersionsRequestPrivate &other,
                                   ListAvailableManagedRuleGroupVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAvailableManagedRuleGroupVersionsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
