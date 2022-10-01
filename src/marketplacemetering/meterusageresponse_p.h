// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_METERUSAGERESPONSE_P_H
#define QTAWS_METERUSAGERESPONSE_P_H

#include "marketplacemeteringresponse_p.h"

namespace QtAws {
namespace MarketplaceMetering {

class MeterUsageResponse;

class MeterUsageResponsePrivate : public MarketplaceMeteringResponsePrivate {

public:

    explicit MeterUsageResponsePrivate(MeterUsageResponse * const q);

    void parseMeterUsageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MeterUsageResponse)
    Q_DISABLE_COPY(MeterUsageResponsePrivate)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
