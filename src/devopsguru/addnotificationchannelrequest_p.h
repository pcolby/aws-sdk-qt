// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDNOTIFICATIONCHANNELREQUEST_P_H
#define QTAWS_ADDNOTIFICATIONCHANNELREQUEST_P_H

#include "devopsgururequest_p.h"
#include "addnotificationchannelrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class AddNotificationChannelRequest;

class AddNotificationChannelRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    AddNotificationChannelRequestPrivate(const DevOpsGuruRequest::Action action,
                                   AddNotificationChannelRequest * const q);
    AddNotificationChannelRequestPrivate(const AddNotificationChannelRequestPrivate &other,
                                   AddNotificationChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddNotificationChannelRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
