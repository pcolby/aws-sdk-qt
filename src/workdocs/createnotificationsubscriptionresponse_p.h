// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTIFICATIONSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_CREATENOTIFICATIONSUBSCRIPTIONRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class CreateNotificationSubscriptionResponse;

class CreateNotificationSubscriptionResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit CreateNotificationSubscriptionResponsePrivate(CreateNotificationSubscriptionResponse * const q);

    void parseCreateNotificationSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNotificationSubscriptionResponse)
    Q_DISABLE_COPY(CreateNotificationSubscriptionResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
