// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTRESPONSE_P_H
#define QTAWS_DESCRIBEENDPOINTRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class DescribeEndpointResponse;

class DescribeEndpointResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit DescribeEndpointResponsePrivate(DescribeEndpointResponse * const q);

    void parseDescribeEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointResponse)
    Q_DISABLE_COPY(DescribeEndpointResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
