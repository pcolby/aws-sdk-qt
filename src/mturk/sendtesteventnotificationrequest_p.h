// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTESTEVENTNOTIFICATIONREQUEST_P_H
#define QTAWS_SENDTESTEVENTNOTIFICATIONREQUEST_P_H

#include "mturkrequest_p.h"
#include "sendtesteventnotificationrequest.h"

namespace QtAws {
namespace MTurk {

class SendTestEventNotificationRequest;

class SendTestEventNotificationRequestPrivate : public MTurkRequestPrivate {

public:
    SendTestEventNotificationRequestPrivate(const MTurkRequest::Action action,
                                   SendTestEventNotificationRequest * const q);
    SendTestEventNotificationRequestPrivate(const SendTestEventNotificationRequestPrivate &other,
                                   SendTestEventNotificationRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendTestEventNotificationRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
