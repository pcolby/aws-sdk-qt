// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTIFICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATENOTIFICATIONCONFIGURATIONRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateNotificationConfigurationResponse;

class UpdateNotificationConfigurationResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit UpdateNotificationConfigurationResponsePrivate(UpdateNotificationConfigurationResponse * const q);

    void parseUpdateNotificationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNotificationConfigurationResponse)
    Q_DISABLE_COPY(UpdateNotificationConfigurationResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
