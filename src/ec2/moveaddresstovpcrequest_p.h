// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEADDRESSTOVPCREQUEST_P_H
#define QTAWS_MOVEADDRESSTOVPCREQUEST_P_H

#include "ec2request_p.h"
#include "moveaddresstovpcrequest.h"

namespace QtAws {
namespace Ec2 {

class MoveAddressToVpcRequest;

class MoveAddressToVpcRequestPrivate : public Ec2RequestPrivate {

public:
    MoveAddressToVpcRequestPrivate(const Ec2Request::Action action,
                                   MoveAddressToVpcRequest * const q);
    MoveAddressToVpcRequestPrivate(const MoveAddressToVpcRequestPrivate &other,
                                   MoveAddressToVpcRequest * const q);

private:
    Q_DECLARE_PUBLIC(MoveAddressToVpcRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
