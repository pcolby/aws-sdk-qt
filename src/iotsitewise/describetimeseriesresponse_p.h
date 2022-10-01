// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETIMESERIESRESPONSE_P_H
#define QTAWS_DESCRIBETIMESERIESRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeTimeSeriesResponse;

class DescribeTimeSeriesResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DescribeTimeSeriesResponsePrivate(DescribeTimeSeriesResponse * const q);

    void parseDescribeTimeSeriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTimeSeriesResponse)
    Q_DISABLE_COPY(DescribeTimeSeriesResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
