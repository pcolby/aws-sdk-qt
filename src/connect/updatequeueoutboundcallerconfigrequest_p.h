// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUEOUTBOUNDCALLERCONFIGREQUEST_P_H
#define QTAWS_UPDATEQUEUEOUTBOUNDCALLERCONFIGREQUEST_P_H

#include "connectrequest_p.h"
#include "updatequeueoutboundcallerconfigrequest.h"

namespace QtAws {
namespace Connect {

class UpdateQueueOutboundCallerConfigRequest;

class UpdateQueueOutboundCallerConfigRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateQueueOutboundCallerConfigRequestPrivate(const ConnectRequest::Action action,
                                   UpdateQueueOutboundCallerConfigRequest * const q);
    UpdateQueueOutboundCallerConfigRequestPrivate(const UpdateQueueOutboundCallerConfigRequestPrivate &other,
                                   UpdateQueueOutboundCallerConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateQueueOutboundCallerConfigRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
