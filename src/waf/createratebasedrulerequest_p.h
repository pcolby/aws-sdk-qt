// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERATEBASEDRULEREQUEST_P_H
#define QTAWS_CREATERATEBASEDRULEREQUEST_P_H

#include "wafrequest_p.h"
#include "createratebasedrulerequest.h"

namespace QtAws {
namespace Waf {

class CreateRateBasedRuleRequest;

class CreateRateBasedRuleRequestPrivate : public WafRequestPrivate {

public:
    CreateRateBasedRuleRequestPrivate(const WafRequest::Action action,
                                   CreateRateBasedRuleRequest * const q);
    CreateRateBasedRuleRequestPrivate(const CreateRateBasedRuleRequestPrivate &other,
                                   CreateRateBasedRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRateBasedRuleRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
