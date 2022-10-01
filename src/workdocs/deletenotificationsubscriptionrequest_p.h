// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONSUBSCRIPTIONREQUEST_P_H
#define QTAWS_DELETENOTIFICATIONSUBSCRIPTIONREQUEST_P_H

#include "workdocsrequest_p.h"
#include "deletenotificationsubscriptionrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteNotificationSubscriptionRequest;

class DeleteNotificationSubscriptionRequestPrivate : public WorkDocsRequestPrivate {

public:
    DeleteNotificationSubscriptionRequestPrivate(const WorkDocsRequest::Action action,
                                   DeleteNotificationSubscriptionRequest * const q);
    DeleteNotificationSubscriptionRequestPrivate(const DeleteNotificationSubscriptionRequestPrivate &other,
                                   DeleteNotificationSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNotificationSubscriptionRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
