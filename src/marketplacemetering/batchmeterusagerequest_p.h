// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHMETERUSAGEREQUEST_P_H
#define QTAWS_BATCHMETERUSAGEREQUEST_P_H

#include "marketplacemeteringrequest_p.h"
#include "batchmeterusagerequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class BatchMeterUsageRequest;

class BatchMeterUsageRequestPrivate : public MarketplaceMeteringRequestPrivate {

public:
    BatchMeterUsageRequestPrivate(const MarketplaceMeteringRequest::Action action,
                                   BatchMeterUsageRequest * const q);
    BatchMeterUsageRequestPrivate(const BatchMeterUsageRequestPrivate &other,
                                   BatchMeterUsageRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchMeterUsageRequest)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
