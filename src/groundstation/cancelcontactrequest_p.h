// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCONTACTREQUEST_P_H
#define QTAWS_CANCELCONTACTREQUEST_P_H

#include "groundstationrequest_p.h"
#include "cancelcontactrequest.h"

namespace QtAws {
namespace GroundStation {

class CancelContactRequest;

class CancelContactRequestPrivate : public GroundStationRequestPrivate {

public:
    CancelContactRequestPrivate(const GroundStationRequest::Action action,
                                   CancelContactRequest * const q);
    CancelContactRequestPrivate(const CancelContactRequestPrivate &other,
                                   CancelContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelContactRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
