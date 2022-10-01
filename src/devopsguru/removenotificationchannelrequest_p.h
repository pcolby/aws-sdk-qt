// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVENOTIFICATIONCHANNELREQUEST_P_H
#define QTAWS_REMOVENOTIFICATIONCHANNELREQUEST_P_H

#include "devopsgururequest_p.h"
#include "removenotificationchannelrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class RemoveNotificationChannelRequest;

class RemoveNotificationChannelRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    RemoveNotificationChannelRequestPrivate(const DevOpsGuruRequest::Action action,
                                   RemoveNotificationChannelRequest * const q);
    RemoveNotificationChannelRequestPrivate(const RemoveNotificationChannelRequestPrivate &other,
                                   RemoveNotificationChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveNotificationChannelRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
