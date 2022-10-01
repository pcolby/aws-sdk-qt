// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYNOTIFICATIONTOPICREQUEST_P_H
#define QTAWS_SETIDENTITYNOTIFICATIONTOPICREQUEST_P_H

#include "sesrequest_p.h"
#include "setidentitynotificationtopicrequest.h"

namespace QtAws {
namespace Ses {

class SetIdentityNotificationTopicRequest;

class SetIdentityNotificationTopicRequestPrivate : public SesRequestPrivate {

public:
    SetIdentityNotificationTopicRequestPrivate(const SesRequest::Action action,
                                   SetIdentityNotificationTopicRequest * const q);
    SetIdentityNotificationTopicRequestPrivate(const SetIdentityNotificationTopicRequestPrivate &other,
                                   SetIdentityNotificationTopicRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetIdentityNotificationTopicRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
