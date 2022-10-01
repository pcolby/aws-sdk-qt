// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETMETRICRESPONSE_P_H
#define QTAWS_DELETEFLEETMETRICRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteFleetMetricResponse;

class DeleteFleetMetricResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteFleetMetricResponsePrivate(DeleteFleetMetricResponse * const q);

    void parseDeleteFleetMetricResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFleetMetricResponse)
    Q_DISABLE_COPY(DeleteFleetMetricResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
