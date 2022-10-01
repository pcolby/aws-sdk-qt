// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLEETMETRICSRESPONSE_P_H
#define QTAWS_LISTFLEETMETRICSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListFleetMetricsResponse;

class ListFleetMetricsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListFleetMetricsResponsePrivate(ListFleetMetricsResponse * const q);

    void parseListFleetMetricsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFleetMetricsResponse)
    Q_DISABLE_COPY(ListFleetMetricsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
