// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULEGROUPREQUEST_P_H
#define QTAWS_GETRULEGROUPREQUEST_P_H

#include "wafrequest_p.h"
#include "getrulegrouprequest.h"

namespace QtAws {
namespace Waf {

class GetRuleGroupRequest;

class GetRuleGroupRequestPrivate : public WafRequestPrivate {

public:
    GetRuleGroupRequestPrivate(const WafRequest::Action action,
                                   GetRuleGroupRequest * const q);
    GetRuleGroupRequestPrivate(const GetRuleGroupRequestPrivate &other,
                                   GetRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRuleGroupRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
