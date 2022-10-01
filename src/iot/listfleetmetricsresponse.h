// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLEETMETRICSRESPONSE_H
#define QTAWS_LISTFLEETMETRICSRESPONSE_H

#include "iotresponse.h"
#include "listfleetmetricsrequest.h"

namespace QtAws {
namespace IoT {

class ListFleetMetricsResponsePrivate;

class QTAWSIOT_EXPORT ListFleetMetricsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListFleetMetricsResponse(const ListFleetMetricsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFleetMetricsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFleetMetricsResponse)
    Q_DISABLE_COPY(ListFleetMetricsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
