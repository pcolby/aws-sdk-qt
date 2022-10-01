// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMETRICSTREAMSRESPONSE_P_H
#define QTAWS_STOPMETRICSTREAMSRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class StopMetricStreamsResponse;

class StopMetricStreamsResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit StopMetricStreamsResponsePrivate(StopMetricStreamsResponse * const q);

    void parseStopMetricStreamsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopMetricStreamsResponse)
    Q_DISABLE_COPY(StopMetricStreamsResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
