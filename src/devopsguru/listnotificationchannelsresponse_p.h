// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTIFICATIONCHANNELSRESPONSE_P_H
#define QTAWS_LISTNOTIFICATIONCHANNELSRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class ListNotificationChannelsResponse;

class ListNotificationChannelsResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit ListNotificationChannelsResponsePrivate(ListNotificationChannelsResponse * const q);

    void parseListNotificationChannelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNotificationChannelsResponse)
    Q_DISABLE_COPY(ListNotificationChannelsResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
