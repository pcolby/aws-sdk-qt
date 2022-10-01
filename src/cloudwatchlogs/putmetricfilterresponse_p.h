// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICFILTERRESPONSE_P_H
#define QTAWS_PUTMETRICFILTERRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutMetricFilterResponse;

class PutMetricFilterResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit PutMetricFilterResponsePrivate(PutMetricFilterResponse * const q);

    void parsePutMetricFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutMetricFilterResponse)
    Q_DISABLE_COPY(PutMetricFilterResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
