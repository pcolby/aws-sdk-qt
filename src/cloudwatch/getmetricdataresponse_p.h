// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICDATARESPONSE_P_H
#define QTAWS_GETMETRICDATARESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricDataResponse;

class GetMetricDataResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit GetMetricDataResponsePrivate(GetMetricDataResponse * const q);

    void parseGetMetricDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMetricDataResponse)
    Q_DISABLE_COPY(GetMetricDataResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
