// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICSTREAMRESPONSE_P_H
#define QTAWS_PUTMETRICSTREAMRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class PutMetricStreamResponse;

class PutMetricStreamResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit PutMetricStreamResponsePrivate(PutMetricStreamResponse * const q);

    void parsePutMetricStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutMetricStreamResponse)
    Q_DISABLE_COPY(PutMetricStreamResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
