// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WITHDRAWBYOIPCIDRREQUEST_P_H
#define QTAWS_WITHDRAWBYOIPCIDRREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "withdrawbyoipcidrrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class WithdrawByoipCidrRequest;

class WithdrawByoipCidrRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    WithdrawByoipCidrRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   WithdrawByoipCidrRequest * const q);
    WithdrawByoipCidrRequestPrivate(const WithdrawByoipCidrRequestPrivate &other,
                                   WithdrawByoipCidrRequest * const q);

private:
    Q_DECLARE_PUBLIC(WithdrawByoipCidrRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
