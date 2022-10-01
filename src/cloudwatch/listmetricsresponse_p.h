// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMETRICSRESPONSE_P_H
#define QTAWS_LISTMETRICSRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class ListMetricsResponse;

class ListMetricsResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit ListMetricsResponsePrivate(ListMetricsResponse * const q);

    void parseListMetricsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMetricsResponse)
    Q_DISABLE_COPY(ListMetricsResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
