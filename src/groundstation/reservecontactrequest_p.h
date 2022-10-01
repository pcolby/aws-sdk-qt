// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESERVECONTACTREQUEST_P_H
#define QTAWS_RESERVECONTACTREQUEST_P_H

#include "groundstationrequest_p.h"
#include "reservecontactrequest.h"

namespace QtAws {
namespace GroundStation {

class ReserveContactRequest;

class ReserveContactRequestPrivate : public GroundStationRequestPrivate {

public:
    ReserveContactRequestPrivate(const GroundStationRequest::Action action,
                                   ReserveContactRequest * const q);
    ReserveContactRequestPrivate(const ReserveContactRequestPrivate &other,
                                   ReserveContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReserveContactRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
