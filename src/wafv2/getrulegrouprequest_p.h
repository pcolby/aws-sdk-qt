// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULEGROUPREQUEST_P_H
#define QTAWS_GETRULEGROUPREQUEST_P_H

#include "wafv2request_p.h"
#include "getrulegrouprequest.h"

namespace QtAws {
namespace Wafv2 {

class GetRuleGroupRequest;

class GetRuleGroupRequestPrivate : public Wafv2RequestPrivate {

public:
    GetRuleGroupRequestPrivate(const Wafv2Request::Action action,
                                   GetRuleGroupRequest * const q);
    GetRuleGroupRequestPrivate(const GetRuleGroupRequestPrivate &other,
                                   GetRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRuleGroupRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
