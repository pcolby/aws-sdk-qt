// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRATEBASEDRULEMANAGEDKEYSREQUEST_P_H
#define QTAWS_GETRATEBASEDRULEMANAGEDKEYSREQUEST_P_H

#include "wafrequest_p.h"
#include "getratebasedrulemanagedkeysrequest.h"

namespace QtAws {
namespace Waf {

class GetRateBasedRuleManagedKeysRequest;

class GetRateBasedRuleManagedKeysRequestPrivate : public WafRequestPrivate {

public:
    GetRateBasedRuleManagedKeysRequestPrivate(const WafRequest::Action action,
                                   GetRateBasedRuleManagedKeysRequest * const q);
    GetRateBasedRuleManagedKeysRequestPrivate(const GetRateBasedRuleManagedKeysRequestPrivate &other,
                                   GetRateBasedRuleManagedKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRateBasedRuleManagedKeysRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
