// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICSTREAMRESPONSE_P_H
#define QTAWS_GETMETRICSTREAMRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricStreamResponse;

class GetMetricStreamResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit GetMetricStreamResponsePrivate(GetMetricStreamResponse * const q);

    void parseGetMetricStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMetricStreamResponse)
    Q_DISABLE_COPY(GetMetricStreamResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
