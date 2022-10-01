// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERUSAGEREQUEST_P_H
#define QTAWS_REGISTERUSAGEREQUEST_P_H

#include "marketplacemeteringrequest_p.h"
#include "registerusagerequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class RegisterUsageRequest;

class RegisterUsageRequestPrivate : public MarketplaceMeteringRequestPrivate {

public:
    RegisterUsageRequestPrivate(const MarketplaceMeteringRequest::Action action,
                                   RegisterUsageRequest * const q);
    RegisterUsageRequestPrivate(const RegisterUsageRequestPrivate &other,
                                   RegisterUsageRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterUsageRequest)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
