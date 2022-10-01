// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIDESTINATIONREQUEST_P_H
#define QTAWS_UPDATEAPIDESTINATIONREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "updateapidestinationrequest.h"

namespace QtAws {
namespace EventBridge {

class UpdateApiDestinationRequest;

class UpdateApiDestinationRequestPrivate : public EventBridgeRequestPrivate {

public:
    UpdateApiDestinationRequestPrivate(const EventBridgeRequest::Action action,
                                   UpdateApiDestinationRequest * const q);
    UpdateApiDestinationRequestPrivate(const UpdateApiDestinationRequestPrivate &other,
                                   UpdateApiDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApiDestinationRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
