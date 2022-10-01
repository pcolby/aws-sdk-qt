// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WITHDRAWBYOIPCIDRREQUEST_P_H
#define QTAWS_WITHDRAWBYOIPCIDRREQUEST_P_H

#include "ec2request_p.h"
#include "withdrawbyoipcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class WithdrawByoipCidrRequest;

class WithdrawByoipCidrRequestPrivate : public Ec2RequestPrivate {

public:
    WithdrawByoipCidrRequestPrivate(const Ec2Request::Action action,
                                   WithdrawByoipCidrRequest * const q);
    WithdrawByoipCidrRequestPrivate(const WithdrawByoipCidrRequestPrivate &other,
                                   WithdrawByoipCidrRequest * const q);

private:
    Q_DECLARE_PUBLIC(WithdrawByoipCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
