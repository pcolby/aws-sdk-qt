// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDELIVERYCHANNELSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBEDELIVERYCHANNELSTATUSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeDeliveryChannelStatusResponse;

class DescribeDeliveryChannelStatusResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeDeliveryChannelStatusResponsePrivate(DescribeDeliveryChannelStatusResponse * const q);

    void parseDescribeDeliveryChannelStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDeliveryChannelStatusResponse)
    Q_DISABLE_COPY(DescribeDeliveryChannelStatusResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
