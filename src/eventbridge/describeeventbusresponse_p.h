// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTBUSRESPONSE_P_H
#define QTAWS_DESCRIBEEVENTBUSRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class DescribeEventBusResponse;

class DescribeEventBusResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit DescribeEventBusResponsePrivate(DescribeEventBusResponse * const q);

    void parseDescribeEventBusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventBusResponse)
    Q_DISABLE_COPY(DescribeEventBusResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
