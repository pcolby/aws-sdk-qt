// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDELIVERYCHANNELSRESPONSE_P_H
#define QTAWS_DESCRIBEDELIVERYCHANNELSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeDeliveryChannelsResponse;

class DescribeDeliveryChannelsResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeDeliveryChannelsResponsePrivate(DescribeDeliveryChannelsResponse * const q);

    void parseDescribeDeliveryChannelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDeliveryChannelsResponse)
    Q_DISABLE_COPY(DescribeDeliveryChannelsResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
