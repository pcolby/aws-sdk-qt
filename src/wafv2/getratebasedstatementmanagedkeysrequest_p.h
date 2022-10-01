// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRATEBASEDSTATEMENTMANAGEDKEYSREQUEST_P_H
#define QTAWS_GETRATEBASEDSTATEMENTMANAGEDKEYSREQUEST_P_H

#include "wafv2request_p.h"
#include "getratebasedstatementmanagedkeysrequest.h"

namespace QtAws {
namespace Wafv2 {

class GetRateBasedStatementManagedKeysRequest;

class GetRateBasedStatementManagedKeysRequestPrivate : public Wafv2RequestPrivate {

public:
    GetRateBasedStatementManagedKeysRequestPrivate(const Wafv2Request::Action action,
                                   GetRateBasedStatementManagedKeysRequest * const q);
    GetRateBasedStatementManagedKeysRequestPrivate(const GetRateBasedStatementManagedKeysRequestPrivate &other,
                                   GetRateBasedStatementManagedKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRateBasedStatementManagedKeysRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
