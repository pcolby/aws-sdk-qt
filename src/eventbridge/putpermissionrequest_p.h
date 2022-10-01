// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONREQUEST_P_H
#define QTAWS_PUTPERMISSIONREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "putpermissionrequest.h"

namespace QtAws {
namespace EventBridge {

class PutPermissionRequest;

class PutPermissionRequestPrivate : public EventBridgeRequestPrivate {

public:
    PutPermissionRequestPrivate(const EventBridgeRequest::Action action,
                                   PutPermissionRequest * const q);
    PutPermissionRequestPrivate(const PutPermissionRequestPrivate &other,
                                   PutPermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutPermissionRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
