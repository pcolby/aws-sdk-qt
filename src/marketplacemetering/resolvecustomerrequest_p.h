// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVECUSTOMERREQUEST_P_H
#define QTAWS_RESOLVECUSTOMERREQUEST_P_H

#include "marketplacemeteringrequest_p.h"
#include "resolvecustomerrequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class ResolveCustomerRequest;

class ResolveCustomerRequestPrivate : public MarketplaceMeteringRequestPrivate {

public:
    ResolveCustomerRequestPrivate(const MarketplaceMeteringRequest::Action action,
                                   ResolveCustomerRequest * const q);
    ResolveCustomerRequestPrivate(const ResolveCustomerRequestPrivate &other,
                                   ResolveCustomerRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResolveCustomerRequest)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
