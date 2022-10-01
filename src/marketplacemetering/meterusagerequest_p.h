// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_METERUSAGEREQUEST_P_H
#define QTAWS_METERUSAGEREQUEST_P_H

#include "marketplacemeteringrequest_p.h"
#include "meterusagerequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class MeterUsageRequest;

class MeterUsageRequestPrivate : public MarketplaceMeteringRequestPrivate {

public:
    MeterUsageRequestPrivate(const MarketplaceMeteringRequest::Action action,
                                   MeterUsageRequest * const q);
    MeterUsageRequestPrivate(const MeterUsageRequestPrivate &other,
                                   MeterUsageRequest * const q);

private:
    Q_DECLARE_PUBLIC(MeterUsageRequest)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
