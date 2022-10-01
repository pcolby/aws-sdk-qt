// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESUBNETCIDRBLOCKREQUEST_P_H
#define QTAWS_ASSOCIATESUBNETCIDRBLOCKREQUEST_P_H

#include "ec2request_p.h"
#include "associatesubnetcidrblockrequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateSubnetCidrBlockRequest;

class AssociateSubnetCidrBlockRequestPrivate : public Ec2RequestPrivate {

public:
    AssociateSubnetCidrBlockRequestPrivate(const Ec2Request::Action action,
                                   AssociateSubnetCidrBlockRequest * const q);
    AssociateSubnetCidrBlockRequestPrivate(const AssociateSubnetCidrBlockRequestPrivate &other,
                                   AssociateSubnetCidrBlockRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateSubnetCidrBlockRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
