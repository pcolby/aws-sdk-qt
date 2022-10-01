// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBANDWIDTHRATELIMITSCHEDULERESPONSE_P_H
#define QTAWS_DESCRIBEBANDWIDTHRATELIMITSCHEDULERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeBandwidthRateLimitScheduleResponse;

class DescribeBandwidthRateLimitScheduleResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeBandwidthRateLimitScheduleResponsePrivate(DescribeBandwidthRateLimitScheduleResponse * const q);

    void parseDescribeBandwidthRateLimitScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBandwidthRateLimitScheduleResponse)
    Q_DISABLE_COPY(DescribeBandwidthRateLimitScheduleResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
