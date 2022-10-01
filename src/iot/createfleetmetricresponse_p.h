// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETMETRICRESPONSE_P_H
#define QTAWS_CREATEFLEETMETRICRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateFleetMetricResponse;

class CreateFleetMetricResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateFleetMetricResponsePrivate(CreateFleetMetricResponse * const q);

    void parseCreateFleetMetricResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFleetMetricResponse)
    Q_DISABLE_COPY(CreateFleetMetricResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
