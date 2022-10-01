// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMETRICVALUESRESPONSE_H
#define QTAWS_LISTMETRICVALUESRESPONSE_H

#include "iotresponse.h"
#include "listmetricvaluesrequest.h"

namespace QtAws {
namespace IoT {

class ListMetricValuesResponsePrivate;

class QTAWSIOT_EXPORT ListMetricValuesResponse : public IoTResponse {
    Q_OBJECT

public:
    ListMetricValuesResponse(const ListMetricValuesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMetricValuesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMetricValuesResponse)
    Q_DISABLE_COPY(ListMetricValuesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
