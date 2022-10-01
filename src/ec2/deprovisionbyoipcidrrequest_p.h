// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPROVISIONBYOIPCIDRREQUEST_P_H
#define QTAWS_DEPROVISIONBYOIPCIDRREQUEST_P_H

#include "ec2request_p.h"
#include "deprovisionbyoipcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class DeprovisionByoipCidrRequest;

class DeprovisionByoipCidrRequestPrivate : public Ec2RequestPrivate {

public:
    DeprovisionByoipCidrRequestPrivate(const Ec2Request::Action action,
                                   DeprovisionByoipCidrRequest * const q);
    DeprovisionByoipCidrRequestPrivate(const DeprovisionByoipCidrRequestPrivate &other,
                                   DeprovisionByoipCidrRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeprovisionByoipCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
