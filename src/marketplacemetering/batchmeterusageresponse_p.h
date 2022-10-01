// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHMETERUSAGERESPONSE_P_H
#define QTAWS_BATCHMETERUSAGERESPONSE_P_H

#include "marketplacemeteringresponse_p.h"

namespace QtAws {
namespace MarketplaceMetering {

class BatchMeterUsageResponse;

class BatchMeterUsageResponsePrivate : public MarketplaceMeteringResponsePrivate {

public:

    explicit BatchMeterUsageResponsePrivate(BatchMeterUsageResponse * const q);

    void parseBatchMeterUsageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchMeterUsageResponse)
    Q_DISABLE_COPY(BatchMeterUsageResponsePrivate)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
