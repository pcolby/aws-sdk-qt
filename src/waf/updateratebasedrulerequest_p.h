// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERATEBASEDRULEREQUEST_P_H
#define QTAWS_UPDATERATEBASEDRULEREQUEST_P_H

#include "wafrequest_p.h"
#include "updateratebasedrulerequest.h"

namespace QtAws {
namespace Waf {

class UpdateRateBasedRuleRequest;

class UpdateRateBasedRuleRequestPrivate : public WafRequestPrivate {

public:
    UpdateRateBasedRuleRequestPrivate(const WafRequest::Action action,
                                   UpdateRateBasedRuleRequest * const q);
    UpdateRateBasedRuleRequestPrivate(const UpdateRateBasedRuleRequestPrivate &other,
                                   UpdateRateBasedRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRateBasedRuleRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
