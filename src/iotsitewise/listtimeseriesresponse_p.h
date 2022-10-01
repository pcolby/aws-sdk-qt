// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTIMESERIESRESPONSE_P_H
#define QTAWS_LISTTIMESERIESRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class ListTimeSeriesResponse;

class ListTimeSeriesResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit ListTimeSeriesResponsePrivate(ListTimeSeriesResponse * const q);

    void parseListTimeSeriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTimeSeriesResponse)
    Q_DISABLE_COPY(ListTimeSeriesResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
