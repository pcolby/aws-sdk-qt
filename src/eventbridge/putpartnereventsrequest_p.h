// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPARTNEREVENTSREQUEST_P_H
#define QTAWS_PUTPARTNEREVENTSREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "putpartnereventsrequest.h"

namespace QtAws {
namespace EventBridge {

class PutPartnerEventsRequest;

class PutPartnerEventsRequestPrivate : public EventBridgeRequestPrivate {

public:
    PutPartnerEventsRequestPrivate(const EventBridgeRequest::Action action,
                                   PutPartnerEventsRequest * const q);
    PutPartnerEventsRequestPrivate(const PutPartnerEventsRequestPrivate &other,
                                   PutPartnerEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutPartnerEventsRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
