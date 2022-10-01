// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTARGETSREQUEST_P_H
#define QTAWS_PUTTARGETSREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "puttargetsrequest.h"

namespace QtAws {
namespace EventBridge {

class PutTargetsRequest;

class PutTargetsRequestPrivate : public EventBridgeRequestPrivate {

public:
    PutTargetsRequestPrivate(const EventBridgeRequest::Action action,
                                   PutTargetsRequest * const q);
    PutTargetsRequestPrivate(const PutTargetsRequestPrivate &other,
                                   PutTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutTargetsRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
