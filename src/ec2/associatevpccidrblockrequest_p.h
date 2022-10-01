// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEVPCCIDRBLOCKREQUEST_P_H
#define QTAWS_ASSOCIATEVPCCIDRBLOCKREQUEST_P_H

#include "ec2request_p.h"
#include "associatevpccidrblockrequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateVpcCidrBlockRequest;

class AssociateVpcCidrBlockRequestPrivate : public Ec2RequestPrivate {

public:
    AssociateVpcCidrBlockRequestPrivate(const Ec2Request::Action action,
                                   AssociateVpcCidrBlockRequest * const q);
    AssociateVpcCidrBlockRequestPrivate(const AssociateVpcCidrBlockRequestPrivate &other,
                                   AssociateVpcCidrBlockRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateVpcCidrBlockRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
