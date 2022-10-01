// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIONREQUEST_P_H
#define QTAWS_UPDATECONNECTIONREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "updateconnectionrequest.h"

namespace QtAws {
namespace EventBridge {

class UpdateConnectionRequest;

class UpdateConnectionRequestPrivate : public EventBridgeRequestPrivate {

public:
    UpdateConnectionRequestPrivate(const EventBridgeRequest::Action action,
                                   UpdateConnectionRequest * const q);
    UpdateConnectionRequestPrivate(const UpdateConnectionRequestPrivate &other,
                                   UpdateConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConnectionRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
