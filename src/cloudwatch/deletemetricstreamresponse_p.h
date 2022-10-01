// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETRICSTREAMRESPONSE_P_H
#define QTAWS_DELETEMETRICSTREAMRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class DeleteMetricStreamResponse;

class DeleteMetricStreamResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit DeleteMetricStreamResponsePrivate(DeleteMetricStreamResponse * const q);

    void parseDeleteMetricStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMetricStreamResponse)
    Q_DISABLE_COPY(DeleteMetricStreamResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
