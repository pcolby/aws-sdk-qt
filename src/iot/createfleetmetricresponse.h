// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETMETRICRESPONSE_H
#define QTAWS_CREATEFLEETMETRICRESPONSE_H

#include "iotresponse.h"
#include "createfleetmetricrequest.h"

namespace QtAws {
namespace IoT {

class CreateFleetMetricResponsePrivate;

class QTAWSIOT_EXPORT CreateFleetMetricResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateFleetMetricResponse(const CreateFleetMetricRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFleetMetricRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFleetMetricResponse)
    Q_DISABLE_COPY(CreateFleetMetricResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
