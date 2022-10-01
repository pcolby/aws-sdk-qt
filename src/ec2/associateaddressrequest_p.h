// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEADDRESSREQUEST_P_H
#define QTAWS_ASSOCIATEADDRESSREQUEST_P_H

#include "ec2request_p.h"
#include "associateaddressrequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateAddressRequest;

class AssociateAddressRequestPrivate : public Ec2RequestPrivate {

public:
    AssociateAddressRequestPrivate(const Ec2Request::Action action,
                                   AssociateAddressRequest * const q);
    AssociateAddressRequestPrivate(const AssociateAddressRequestPrivate &other,
                                   AssociateAddressRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateAddressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
