// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESERVEDINSTANCESLISTINGREQUEST_P_H
#define QTAWS_CREATERESERVEDINSTANCESLISTINGREQUEST_P_H

#include "ec2request_p.h"
#include "createreservedinstanceslistingrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateReservedInstancesListingRequest;

class CreateReservedInstancesListingRequestPrivate : public Ec2RequestPrivate {

public:
    CreateReservedInstancesListingRequestPrivate(const Ec2Request::Action action,
                                   CreateReservedInstancesListingRequest * const q);
    CreateReservedInstancesListingRequestPrivate(const CreateReservedInstancesListingRequestPrivate &other,
                                   CreateReservedInstancesListingRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReservedInstancesListingRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
