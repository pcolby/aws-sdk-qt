// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONCLOUDWATCHLOGGINGOPTIONRESPONSE_P_H
#define QTAWS_DELETEAPPLICATIONCLOUDWATCHLOGGINGOPTIONRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationCloudWatchLoggingOptionResponse;

class DeleteApplicationCloudWatchLoggingOptionResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit DeleteApplicationCloudWatchLoggingOptionResponsePrivate(DeleteApplicationCloudWatchLoggingOptionResponse * const q);

    void parseDeleteApplicationCloudWatchLoggingOptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationCloudWatchLoggingOptionResponse)
    Q_DISABLE_COPY(DeleteApplicationCloudWatchLoggingOptionResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
