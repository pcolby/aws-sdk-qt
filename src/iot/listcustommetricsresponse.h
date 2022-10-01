// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMMETRICSRESPONSE_H
#define QTAWS_LISTCUSTOMMETRICSRESPONSE_H

#include "iotresponse.h"
#include "listcustommetricsrequest.h"

namespace QtAws {
namespace IoT {

class ListCustomMetricsResponsePrivate;

class QTAWSIOT_EXPORT ListCustomMetricsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListCustomMetricsResponse(const ListCustomMetricsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCustomMetricsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomMetricsResponse)
    Q_DISABLE_COPY(ListCustomMetricsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
