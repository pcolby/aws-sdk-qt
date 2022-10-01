// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESERVATIONSREQUEST_P_H
#define QTAWS_LISTRESERVATIONSREQUEST_P_H

#include "medialiverequest_p.h"
#include "listreservationsrequest.h"

namespace QtAws {
namespace MediaLive {

class ListReservationsRequest;

class ListReservationsRequestPrivate : public MediaLiveRequestPrivate {

public:
    ListReservationsRequestPrivate(const MediaLiveRequest::Action action,
                                   ListReservationsRequest * const q);
    ListReservationsRequestPrivate(const ListReservationsRequestPrivate &other,
                                   ListReservationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReservationsRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
