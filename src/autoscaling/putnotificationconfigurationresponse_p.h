// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTNOTIFICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTNOTIFICATIONCONFIGURATIONRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class PutNotificationConfigurationResponse;

class PutNotificationConfigurationResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit PutNotificationConfigurationResponsePrivate(PutNotificationConfigurationResponse * const q);

    void parsePutNotificationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutNotificationConfigurationResponse)
    Q_DISABLE_COPY(PutNotificationConfigurationResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
