// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBENOTIFICATIONCONFIGURATIONRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class DescribeNotificationConfigurationResponse;

class DescribeNotificationConfigurationResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit DescribeNotificationConfigurationResponsePrivate(DescribeNotificationConfigurationResponse * const q);

    void parseDescribeNotificationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNotificationConfigurationResponse)
    Q_DISABLE_COPY(DescribeNotificationConfigurationResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
