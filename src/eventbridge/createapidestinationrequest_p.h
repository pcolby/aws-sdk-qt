// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIDESTINATIONREQUEST_P_H
#define QTAWS_CREATEAPIDESTINATIONREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "createapidestinationrequest.h"

namespace QtAws {
namespace EventBridge {

class CreateApiDestinationRequest;

class CreateApiDestinationRequestPrivate : public EventBridgeRequestPrivate {

public:
    CreateApiDestinationRequestPrivate(const EventBridgeRequest::Action action,
                                   CreateApiDestinationRequest * const q);
    CreateApiDestinationRequestPrivate(const CreateApiDestinationRequestPrivate &other,
                                   CreateApiDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApiDestinationRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
