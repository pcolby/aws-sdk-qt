// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEBYOIPCIDRTOIPAMREQUEST_P_H
#define QTAWS_MOVEBYOIPCIDRTOIPAMREQUEST_P_H

#include "ec2request_p.h"
#include "movebyoipcidrtoipamrequest.h"

namespace QtAws {
namespace Ec2 {

class MoveByoipCidrToIpamRequest;

class MoveByoipCidrToIpamRequestPrivate : public Ec2RequestPrivate {

public:
    MoveByoipCidrToIpamRequestPrivate(const Ec2Request::Action action,
                                   MoveByoipCidrToIpamRequest * const q);
    MoveByoipCidrToIpamRequestPrivate(const MoveByoipCidrToIpamRequestPrivate &other,
                                   MoveByoipCidrToIpamRequest * const q);

private:
    Q_DECLARE_PUBLIC(MoveByoipCidrToIpamRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
