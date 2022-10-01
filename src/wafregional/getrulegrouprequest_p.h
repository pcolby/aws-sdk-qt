// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULEGROUPREQUEST_P_H
#define QTAWS_GETRULEGROUPREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "getrulegrouprequest.h"

namespace QtAws {
namespace WafRegional {

class GetRuleGroupRequest;

class GetRuleGroupRequestPrivate : public WafRegionalRequestPrivate {

public:
    GetRuleGroupRequestPrivate(const WafRegionalRequest::Action action,
                                   GetRuleGroupRequest * const q);
    GetRuleGroupRequestPrivate(const GetRuleGroupRequestPrivate &other,
                                   GetRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRuleGroupRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
