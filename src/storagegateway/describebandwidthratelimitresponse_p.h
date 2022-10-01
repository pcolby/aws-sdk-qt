// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBANDWIDTHRATELIMITRESPONSE_P_H
#define QTAWS_DESCRIBEBANDWIDTHRATELIMITRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeBandwidthRateLimitResponse;

class DescribeBandwidthRateLimitResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeBandwidthRateLimitResponsePrivate(DescribeBandwidthRateLimitResponse * const q);

    void parseDescribeBandwidthRateLimitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBandwidthRateLimitResponse)
    Q_DISABLE_COPY(DescribeBandwidthRateLimitResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
