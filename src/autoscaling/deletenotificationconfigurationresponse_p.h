// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETENOTIFICATIONCONFIGURATIONRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DeleteNotificationConfigurationResponse;

class DeleteNotificationConfigurationResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DeleteNotificationConfigurationResponsePrivate(DeleteNotificationConfigurationResponse * const q);

    void parseDeleteNotificationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNotificationConfigurationResponse)
    Q_DISABLE_COPY(DeleteNotificationConfigurationResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
