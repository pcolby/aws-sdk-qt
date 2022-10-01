// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVATIONREQUEST_P_H
#define QTAWS_DESCRIBERESERVATIONREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "describereservationrequest.h"

namespace QtAws {
namespace MediaConnect {

class DescribeReservationRequest;

class DescribeReservationRequestPrivate : public MediaConnectRequestPrivate {

public:
    DescribeReservationRequestPrivate(const MediaConnectRequest::Action action,
                                   DescribeReservationRequest * const q);
    DescribeReservationRequestPrivate(const DescribeReservationRequestPrivate &other,
                                   DescribeReservationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservationRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
