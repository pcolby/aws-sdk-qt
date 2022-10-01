// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAVAILABILITYMONITORTESTRESPONSE_P_H
#define QTAWS_DESCRIBEAVAILABILITYMONITORTESTRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeAvailabilityMonitorTestResponse;

class DescribeAvailabilityMonitorTestResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeAvailabilityMonitorTestResponsePrivate(DescribeAvailabilityMonitorTestResponse * const q);

    void parseDescribeAvailabilityMonitorTestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAvailabilityMonitorTestResponse)
    Q_DISABLE_COPY(DescribeAvailabilityMonitorTestResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
