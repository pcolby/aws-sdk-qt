// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIDESTINATIONREQUEST_P_H
#define QTAWS_DELETEAPIDESTINATIONREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "deleteapidestinationrequest.h"

namespace QtAws {
namespace EventBridge {

class DeleteApiDestinationRequest;

class DeleteApiDestinationRequestPrivate : public EventBridgeRequestPrivate {

public:
    DeleteApiDestinationRequestPrivate(const EventBridgeRequest::Action action,
                                   DeleteApiDestinationRequest * const q);
    DeleteApiDestinationRequestPrivate(const DeleteApiDestinationRequestPrivate &other,
                                   DeleteApiDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApiDestinationRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
