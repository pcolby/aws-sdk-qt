// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERATEBASEDRULEREQUEST_P_H
#define QTAWS_CREATERATEBASEDRULEREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "createratebasedrulerequest.h"

namespace QtAws {
namespace WafRegional {

class CreateRateBasedRuleRequest;

class CreateRateBasedRuleRequestPrivate : public WafRegionalRequestPrivate {

public:
    CreateRateBasedRuleRequestPrivate(const WafRegionalRequest::Action action,
                                   CreateRateBasedRuleRequest * const q);
    CreateRateBasedRuleRequestPrivate(const CreateRateBasedRuleRequestPrivate &other,
                                   CreateRateBasedRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRateBasedRuleRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
