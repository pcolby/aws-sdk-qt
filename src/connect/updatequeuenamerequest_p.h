// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUENAMEREQUEST_P_H
#define QTAWS_UPDATEQUEUENAMEREQUEST_P_H

#include "connectrequest_p.h"
#include "updatequeuenamerequest.h"

namespace QtAws {
namespace Connect {

class UpdateQueueNameRequest;

class UpdateQueueNameRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateQueueNameRequestPrivate(const ConnectRequest::Action action,
                                   UpdateQueueNameRequest * const q);
    UpdateQueueNameRequestPrivate(const UpdateQueueNameRequestPrivate &other,
                                   UpdateQueueNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateQueueNameRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
