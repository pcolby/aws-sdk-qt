// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETIMESERIESRESPONSE_P_H
#define QTAWS_DELETETIMESERIESRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteTimeSeriesResponse;

class DeleteTimeSeriesResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DeleteTimeSeriesResponsePrivate(DeleteTimeSeriesResponse * const q);

    void parseDeleteTimeSeriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTimeSeriesResponse)
    Q_DISABLE_COPY(DeleteTimeSeriesResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
