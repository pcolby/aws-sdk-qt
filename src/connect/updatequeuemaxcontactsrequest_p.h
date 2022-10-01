// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUEMAXCONTACTSREQUEST_P_H
#define QTAWS_UPDATEQUEUEMAXCONTACTSREQUEST_P_H

#include "connectrequest_p.h"
#include "updatequeuemaxcontactsrequest.h"

namespace QtAws {
namespace Connect {

class UpdateQueueMaxContactsRequest;

class UpdateQueueMaxContactsRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateQueueMaxContactsRequestPrivate(const ConnectRequest::Action action,
                                   UpdateQueueMaxContactsRequest * const q);
    UpdateQueueMaxContactsRequestPrivate(const UpdateQueueMaxContactsRequestPrivate &other,
                                   UpdateQueueMaxContactsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateQueueMaxContactsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
