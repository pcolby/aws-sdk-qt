// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVATIONREQUEST_P_H
#define QTAWS_DESCRIBERESERVATIONREQUEST_P_H

#include "medialiverequest_p.h"
#include "describereservationrequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeReservationRequest;

class DescribeReservationRequestPrivate : public MediaLiveRequestPrivate {

public:
    DescribeReservationRequestPrivate(const MediaLiveRequest::Action action,
                                   DescribeReservationRequest * const q);
    DescribeReservationRequestPrivate(const DescribeReservationRequestPrivate &other,
                                   DescribeReservationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservationRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
