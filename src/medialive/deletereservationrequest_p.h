// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESERVATIONREQUEST_P_H
#define QTAWS_DELETERESERVATIONREQUEST_P_H

#include "medialiverequest_p.h"
#include "deletereservationrequest.h"

namespace QtAws {
namespace MediaLive {

class DeleteReservationRequest;

class DeleteReservationRequestPrivate : public MediaLiveRequestPrivate {

public:
    DeleteReservationRequestPrivate(const MediaLiveRequest::Action action,
                                   DeleteReservationRequest * const q);
    DeleteReservationRequestPrivate(const DeleteReservationRequestPrivate &other,
                                   DeleteReservationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReservationRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
