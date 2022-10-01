// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESUBNETCIDRBLOCKREQUEST_P_H
#define QTAWS_DISASSOCIATESUBNETCIDRBLOCKREQUEST_P_H

#include "ec2request_p.h"
#include "disassociatesubnetcidrblockrequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateSubnetCidrBlockRequest;

class DisassociateSubnetCidrBlockRequestPrivate : public Ec2RequestPrivate {

public:
    DisassociateSubnetCidrBlockRequestPrivate(const Ec2Request::Action action,
                                   DisassociateSubnetCidrBlockRequest * const q);
    DisassociateSubnetCidrBlockRequestPrivate(const DisassociateSubnetCidrBlockRequestPrivate &other,
                                   DisassociateSubnetCidrBlockRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateSubnetCidrBlockRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
