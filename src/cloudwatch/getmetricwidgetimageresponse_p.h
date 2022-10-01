// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICWIDGETIMAGERESPONSE_P_H
#define QTAWS_GETMETRICWIDGETIMAGERESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricWidgetImageResponse;

class GetMetricWidgetImageResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit GetMetricWidgetImageResponsePrivate(GetMetricWidgetImageResponse * const q);

    void parseGetMetricWidgetImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMetricWidgetImageResponse)
    Q_DISABLE_COPY(GetMetricWidgetImageResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
