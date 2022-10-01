// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDWATCHLOGSRESPONSE_P_H
#define QTAWS_CLOUDWATCHLOGSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class CloudWatchLogsResponse;

class CloudWatchLogsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CloudWatchLogsResponsePrivate(CloudWatchLogsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloudWatchLogsResponse)
    Q_DISABLE_COPY(CloudWatchLogsResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
