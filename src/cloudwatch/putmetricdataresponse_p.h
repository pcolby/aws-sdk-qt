// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICDATARESPONSE_P_H
#define QTAWS_PUTMETRICDATARESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class PutMetricDataResponse;

class PutMetricDataResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit PutMetricDataResponsePrivate(PutMetricDataResponse * const q);

    void parsePutMetricDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutMetricDataResponse)
    Q_DISABLE_COPY(PutMetricDataResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
