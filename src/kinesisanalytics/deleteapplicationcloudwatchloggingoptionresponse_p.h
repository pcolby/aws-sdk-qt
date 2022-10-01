// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONCLOUDWATCHLOGGINGOPTIONRESPONSE_P_H
#define QTAWS_DELETEAPPLICATIONCLOUDWATCHLOGGINGOPTIONRESPONSE_P_H

#include "kinesisanalyticsresponse_p.h"

namespace QtAws {
namespace KinesisAnalytics {

class DeleteApplicationCloudWatchLoggingOptionResponse;

class DeleteApplicationCloudWatchLoggingOptionResponsePrivate : public KinesisAnalyticsResponsePrivate {

public:

    explicit DeleteApplicationCloudWatchLoggingOptionResponsePrivate(DeleteApplicationCloudWatchLoggingOptionResponse * const q);

    void parseDeleteApplicationCloudWatchLoggingOptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationCloudWatchLoggingOptionResponse)
    Q_DISABLE_COPY(DeleteApplicationCloudWatchLoggingOptionResponsePrivate)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
