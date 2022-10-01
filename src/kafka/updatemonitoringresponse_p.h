// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMONITORINGRESPONSE_P_H
#define QTAWS_UPDATEMONITORINGRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class UpdateMonitoringResponse;

class UpdateMonitoringResponsePrivate : public KafkaResponsePrivate {

public:

    explicit UpdateMonitoringResponsePrivate(UpdateMonitoringResponse * const q);

    void parseUpdateMonitoringResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMonitoringResponse)
    Q_DISABLE_COPY(UpdateMonitoringResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
