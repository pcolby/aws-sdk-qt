// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETMETRICRESPONSE_H
#define QTAWS_DELETEFLEETMETRICRESPONSE_H

#include "iotresponse.h"
#include "deletefleetmetricrequest.h"

namespace QtAws {
namespace IoT {

class DeleteFleetMetricResponsePrivate;

class QTAWSIOT_EXPORT DeleteFleetMetricResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteFleetMetricResponse(const DeleteFleetMetricRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFleetMetricRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFleetMetricResponse)
    Q_DISABLE_COPY(DeleteFleetMetricResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
