// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMMETRICRESPONSE_H
#define QTAWS_DESCRIBECUSTOMMETRICRESPONSE_H

#include "iotresponse.h"
#include "describecustommetricrequest.h"

namespace QtAws {
namespace IoT {

class DescribeCustomMetricResponsePrivate;

class QTAWSIOT_EXPORT DescribeCustomMetricResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeCustomMetricResponse(const DescribeCustomMetricRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCustomMetricRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomMetricResponse)
    Q_DISABLE_COPY(DescribeCustomMetricResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
