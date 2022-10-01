// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUEHOURSOFOPERATIONREQUEST_P_H
#define QTAWS_UPDATEQUEUEHOURSOFOPERATIONREQUEST_P_H

#include "connectrequest_p.h"
#include "updatequeuehoursofoperationrequest.h"

namespace QtAws {
namespace Connect {

class UpdateQueueHoursOfOperationRequest;

class UpdateQueueHoursOfOperationRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateQueueHoursOfOperationRequestPrivate(const ConnectRequest::Action action,
                                   UpdateQueueHoursOfOperationRequest * const q);
    UpdateQueueHoursOfOperationRequestPrivate(const UpdateQueueHoursOfOperationRequestPrivate &other,
                                   UpdateQueueHoursOfOperationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateQueueHoursOfOperationRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
