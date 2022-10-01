// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTIFICATIONCHANNELSREQUEST_P_H
#define QTAWS_LISTNOTIFICATIONCHANNELSREQUEST_P_H

#include "devopsgururequest_p.h"
#include "listnotificationchannelsrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListNotificationChannelsRequest;

class ListNotificationChannelsRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    ListNotificationChannelsRequestPrivate(const DevOpsGuruRequest::Action action,
                                   ListNotificationChannelsRequest * const q);
    ListNotificationChannelsRequestPrivate(const ListNotificationChannelsRequestPrivate &other,
                                   ListNotificationChannelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNotificationChannelsRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
