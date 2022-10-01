// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONCLOUDWATCHLOGGINGOPTIONRESPONSE_P_H
#define QTAWS_ADDAPPLICATIONCLOUDWATCHLOGGINGOPTIONRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationCloudWatchLoggingOptionResponse;

class AddApplicationCloudWatchLoggingOptionResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit AddApplicationCloudWatchLoggingOptionResponsePrivate(AddApplicationCloudWatchLoggingOptionResponse * const q);

    void parseAddApplicationCloudWatchLoggingOptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddApplicationCloudWatchLoggingOptionResponse)
    Q_DISABLE_COPY(AddApplicationCloudWatchLoggingOptionResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
