// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMANAGEDRULEGROUPREQUEST_P_H
#define QTAWS_DESCRIBEMANAGEDRULEGROUPREQUEST_P_H

#include "wafv2request_p.h"
#include "describemanagedrulegrouprequest.h"

namespace QtAws {
namespace Wafv2 {

class DescribeManagedRuleGroupRequest;

class DescribeManagedRuleGroupRequestPrivate : public Wafv2RequestPrivate {

public:
    DescribeManagedRuleGroupRequestPrivate(const Wafv2Request::Action action,
                                   DescribeManagedRuleGroupRequest * const q);
    DescribeManagedRuleGroupRequestPrivate(const DescribeManagedRuleGroupRequestPrivate &other,
                                   DescribeManagedRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeManagedRuleGroupRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
