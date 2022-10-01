// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDNOTIFICATIONCHANNELRESPONSE_P_H
#define QTAWS_ADDNOTIFICATIONCHANNELRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class AddNotificationChannelResponse;

class AddNotificationChannelResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit AddNotificationChannelResponsePrivate(AddNotificationChannelResponse * const q);

    void parseAddNotificationChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddNotificationChannelResponse)
    Q_DISABLE_COPY(AddNotificationChannelResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
