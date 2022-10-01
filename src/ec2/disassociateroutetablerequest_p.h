// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEROUTETABLEREQUEST_P_H
#define QTAWS_DISASSOCIATEROUTETABLEREQUEST_P_H

#include "ec2request_p.h"
#include "disassociateroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateRouteTableRequest;

class DisassociateRouteTableRequestPrivate : public Ec2RequestPrivate {

public:
    DisassociateRouteTableRequestPrivate(const Ec2Request::Action action,
                                   DisassociateRouteTableRequest * const q);
    DisassociateRouteTableRequestPrivate(const DisassociateRouteTableRequestPrivate &other,
                                   DisassociateRouteTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
