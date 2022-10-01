// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEROUTETABLEREQUEST_P_H
#define QTAWS_ASSOCIATEROUTETABLEREQUEST_P_H

#include "ec2request_p.h"
#include "associateroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateRouteTableRequest;

class AssociateRouteTableRequestPrivate : public Ec2RequestPrivate {

public:
    AssociateRouteTableRequestPrivate(const Ec2Request::Action action,
                                   AssociateRouteTableRequest * const q);
    AssociateRouteTableRequestPrivate(const AssociateRouteTableRequestPrivate &other,
                                   AssociateRouteTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
