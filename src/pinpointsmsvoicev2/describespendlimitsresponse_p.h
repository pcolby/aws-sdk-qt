// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPENDLIMITSRESPONSE_P_H
#define QTAWS_DESCRIBESPENDLIMITSRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeSpendLimitsResponse;

class DescribeSpendLimitsResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DescribeSpendLimitsResponsePrivate(DescribeSpendLimitsResponse * const q);

    void parseDescribeSpendLimitsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSpendLimitsResponse)
    Q_DISABLE_COPY(DescribeSpendLimitsResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
