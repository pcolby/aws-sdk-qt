// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTCONFIGURATIONSRESPONSE_H
#define QTAWS_DESCRIBEEVENTCONFIGURATIONSRESPONSE_H

#include "iotresponse.h"
#include "describeeventconfigurationsrequest.h"

namespace QtAws {
namespace IoT {

class DescribeEventConfigurationsResponsePrivate;

class QTAWSIOT_EXPORT DescribeEventConfigurationsResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeEventConfigurationsResponse(const DescribeEventConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventConfigurationsResponse)
    Q_DISABLE_COPY(DescribeEventConfigurationsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
