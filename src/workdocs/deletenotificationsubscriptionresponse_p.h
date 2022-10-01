// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_DELETENOTIFICATIONSUBSCRIPTIONRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DeleteNotificationSubscriptionResponse;

class DeleteNotificationSubscriptionResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DeleteNotificationSubscriptionResponsePrivate(DeleteNotificationSubscriptionResponse * const q);

    void parseDeleteNotificationSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNotificationSubscriptionResponse)
    Q_DISABLE_COPY(DeleteNotificationSubscriptionResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
