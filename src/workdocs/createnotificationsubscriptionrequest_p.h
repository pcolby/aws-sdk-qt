// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTIFICATIONSUBSCRIPTIONREQUEST_P_H
#define QTAWS_CREATENOTIFICATIONSUBSCRIPTIONREQUEST_P_H

#include "workdocsrequest_p.h"
#include "createnotificationsubscriptionrequest.h"

namespace QtAws {
namespace WorkDocs {

class CreateNotificationSubscriptionRequest;

class CreateNotificationSubscriptionRequestPrivate : public WorkDocsRequestPrivate {

public:
    CreateNotificationSubscriptionRequestPrivate(const WorkDocsRequest::Action action,
                                   CreateNotificationSubscriptionRequest * const q);
    CreateNotificationSubscriptionRequestPrivate(const CreateNotificationSubscriptionRequestPrivate &other,
                                   CreateNotificationSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNotificationSubscriptionRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
