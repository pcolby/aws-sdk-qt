// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSREQUEST_P_H
#define QTAWS_PUTEVENTSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "puteventsrequest.h"

namespace QtAws {
namespace Pinpoint {

class PutEventsRequest;

class PutEventsRequestPrivate : public PinpointRequestPrivate {

public:
    PutEventsRequestPrivate(const PinpointRequest::Action action,
                                   PutEventsRequest * const q);
    PutEventsRequestPrivate(const PutEventsRequestPrivate &other,
                                   PutEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEventsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
