// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESERVATIONREQUEST_P_H
#define QTAWS_UPDATERESERVATIONREQUEST_P_H

#include "medialiverequest_p.h"
#include "updatereservationrequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateReservationRequest;

class UpdateReservationRequestPrivate : public MediaLiveRequestPrivate {

public:
    UpdateReservationRequestPrivate(const MediaLiveRequest::Action action,
                                   UpdateReservationRequest * const q);
    UpdateReservationRequestPrivate(const UpdateReservationRequestPrivate &other,
                                   UpdateReservationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateReservationRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
