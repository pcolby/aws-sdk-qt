// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMONITORINGRESPONSE_H
#define QTAWS_UPDATEMONITORINGRESPONSE_H

#include "kafkaresponse.h"
#include "updatemonitoringrequest.h"

namespace QtAws {
namespace Kafka {

class UpdateMonitoringResponsePrivate;

class QTAWSKAFKA_EXPORT UpdateMonitoringResponse : public KafkaResponse {
    Q_OBJECT

public:
    UpdateMonitoringResponse(const UpdateMonitoringRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMonitoringRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMonitoringResponse)
    Q_DISABLE_COPY(UpdateMonitoringResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
