// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETMETRICRESPONSE_H
#define QTAWS_DESCRIBEFLEETMETRICRESPONSE_H

#include "iotresponse.h"
#include "describefleetmetricrequest.h"

namespace QtAws {
namespace IoT {

class DescribeFleetMetricResponsePrivate;

class QTAWSIOT_EXPORT DescribeFleetMetricResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeFleetMetricResponse(const DescribeFleetMetricRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetMetricRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetMetricResponse)
    Q_DISABLE_COPY(DescribeFleetMetricResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
