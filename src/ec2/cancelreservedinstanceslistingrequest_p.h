// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRESERVEDINSTANCESLISTINGREQUEST_P_H
#define QTAWS_CANCELRESERVEDINSTANCESLISTINGREQUEST_P_H

#include "ec2request_p.h"
#include "cancelreservedinstanceslistingrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelReservedInstancesListingRequest;

class CancelReservedInstancesListingRequestPrivate : public Ec2RequestPrivate {

public:
    CancelReservedInstancesListingRequestPrivate(const Ec2Request::Action action,
                                   CancelReservedInstancesListingRequest * const q);
    CancelReservedInstancesListingRequestPrivate(const CancelReservedInstancesListingRequestPrivate &other,
                                   CancelReservedInstancesListingRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelReservedInstancesListingRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
