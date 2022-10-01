// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBNETCIDRRESERVATIONREQUEST_P_H
#define QTAWS_DELETESUBNETCIDRRESERVATIONREQUEST_P_H

#include "ec2request_p.h"
#include "deletesubnetcidrreservationrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteSubnetCidrReservationRequest;

class DeleteSubnetCidrReservationRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteSubnetCidrReservationRequestPrivate(const Ec2Request::Action action,
                                   DeleteSubnetCidrReservationRequest * const q);
    DeleteSubnetCidrReservationRequestPrivate(const DeleteSubnetCidrReservationRequestPrivate &other,
                                   DeleteSubnetCidrReservationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSubnetCidrReservationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
