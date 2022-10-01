// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUESTATUSREQUEST_P_H
#define QTAWS_UPDATEQUEUESTATUSREQUEST_P_H

#include "connectrequest_p.h"
#include "updatequeuestatusrequest.h"

namespace QtAws {
namespace Connect {

class UpdateQueueStatusRequest;

class UpdateQueueStatusRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateQueueStatusRequestPrivate(const ConnectRequest::Action action,
                                   UpdateQueueStatusRequest * const q);
    UpdateQueueStatusRequestPrivate(const UpdateQueueStatusRequestPrivate &other,
                                   UpdateQueueStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateQueueStatusRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
