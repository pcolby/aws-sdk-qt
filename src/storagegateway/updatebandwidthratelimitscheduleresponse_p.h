// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBANDWIDTHRATELIMITSCHEDULERESPONSE_P_H
#define QTAWS_UPDATEBANDWIDTHRATELIMITSCHEDULERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class UpdateBandwidthRateLimitScheduleResponse;

class UpdateBandwidthRateLimitScheduleResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit UpdateBandwidthRateLimitScheduleResponsePrivate(UpdateBandwidthRateLimitScheduleResponse * const q);

    void parseUpdateBandwidthRateLimitScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBandwidthRateLimitScheduleResponse)
    Q_DISABLE_COPY(UpdateBandwidthRateLimitScheduleResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
