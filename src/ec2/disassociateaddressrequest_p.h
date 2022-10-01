// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEADDRESSREQUEST_P_H
#define QTAWS_DISASSOCIATEADDRESSREQUEST_P_H

#include "ec2request_p.h"
#include "disassociateaddressrequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateAddressRequest;

class DisassociateAddressRequestPrivate : public Ec2RequestPrivate {

public:
    DisassociateAddressRequestPrivate(const Ec2Request::Action action,
                                   DisassociateAddressRequest * const q);
    DisassociateAddressRequestPrivate(const DisassociateAddressRequestPrivate &other,
                                   DisassociateAddressRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateAddressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
