// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEVPCCIDRBLOCKREQUEST_P_H
#define QTAWS_DISASSOCIATEVPCCIDRBLOCKREQUEST_P_H

#include "ec2request_p.h"
#include "disassociatevpccidrblockrequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateVpcCidrBlockRequest;

class DisassociateVpcCidrBlockRequestPrivate : public Ec2RequestPrivate {

public:
    DisassociateVpcCidrBlockRequestPrivate(const Ec2Request::Action action,
                                   DisassociateVpcCidrBlockRequest * const q);
    DisassociateVpcCidrBlockRequestPrivate(const DisassociateVpcCidrBlockRequestPrivate &other,
                                   DisassociateVpcCidrBlockRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateVpcCidrBlockRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
