// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONCLOUDWATCHLOGGINGOPTIONRESPONSE_P_H
#define QTAWS_ADDAPPLICATIONCLOUDWATCHLOGGINGOPTIONRESPONSE_P_H

#include "kinesisanalyticsresponse_p.h"

namespace QtAws {
namespace KinesisAnalytics {

class AddApplicationCloudWatchLoggingOptionResponse;

class AddApplicationCloudWatchLoggingOptionResponsePrivate : public KinesisAnalyticsResponsePrivate {

public:

    explicit AddApplicationCloudWatchLoggingOptionResponsePrivate(AddApplicationCloudWatchLoggingOptionResponse * const q);

    void parseAddApplicationCloudWatchLoggingOptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddApplicationCloudWatchLoggingOptionResponse)
    Q_DISABLE_COPY(AddApplicationCloudWatchLoggingOptionResponsePrivate)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
