// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETMETRICRESPONSE_P_H
#define QTAWS_UPDATEFLEETMETRICRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateFleetMetricResponse;

class UpdateFleetMetricResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateFleetMetricResponsePrivate(UpdateFleetMetricResponse * const q);

    void parseUpdateFleetMetricResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFleetMetricResponse)
    Q_DISABLE_COPY(UpdateFleetMetricResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
