// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMONITORRESPONSE_P_H
#define QTAWS_DESCRIBEMONITORRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DescribeMonitorResponse;

class DescribeMonitorResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DescribeMonitorResponsePrivate(DescribeMonitorResponse * const q);

    void parseDescribeMonitorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMonitorResponse)
    Q_DISABLE_COPY(DescribeMonitorResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
