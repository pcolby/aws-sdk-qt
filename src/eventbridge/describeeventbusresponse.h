// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTBUSRESPONSE_H
#define QTAWS_DESCRIBEEVENTBUSRESPONSE_H

#include "eventbridgeresponse.h"
#include "describeeventbusrequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeEventBusResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT DescribeEventBusResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    DescribeEventBusResponse(const DescribeEventBusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventBusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventBusResponse)
    Q_DISABLE_COPY(DescribeEventBusResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
