// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETMETRICRESPONSE_H
#define QTAWS_UPDATEFLEETMETRICRESPONSE_H

#include "iotresponse.h"
#include "updatefleetmetricrequest.h"

namespace QtAws {
namespace IoT {

class UpdateFleetMetricResponsePrivate;

class QTAWSIOT_EXPORT UpdateFleetMetricResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateFleetMetricResponse(const UpdateFleetMetricRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFleetMetricRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFleetMetricResponse)
    Q_DISABLE_COPY(UpdateFleetMetricResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
