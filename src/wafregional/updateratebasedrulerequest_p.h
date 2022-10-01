// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERATEBASEDRULEREQUEST_P_H
#define QTAWS_UPDATERATEBASEDRULEREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "updateratebasedrulerequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateRateBasedRuleRequest;

class UpdateRateBasedRuleRequestPrivate : public WafRegionalRequestPrivate {

public:
    UpdateRateBasedRuleRequestPrivate(const WafRegionalRequest::Action action,
                                   UpdateRateBasedRuleRequest * const q);
    UpdateRateBasedRuleRequestPrivate(const UpdateRateBasedRuleRequestPrivate &other,
                                   UpdateRateBasedRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRateBasedRuleRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
