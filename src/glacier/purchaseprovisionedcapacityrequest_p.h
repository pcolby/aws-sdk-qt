// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASEPROVISIONEDCAPACITYREQUEST_P_H
#define QTAWS_PURCHASEPROVISIONEDCAPACITYREQUEST_P_H

#include "glacierrequest_p.h"
#include "purchaseprovisionedcapacityrequest.h"

namespace QtAws {
namespace Glacier {

class PurchaseProvisionedCapacityRequest;

class PurchaseProvisionedCapacityRequestPrivate : public GlacierRequestPrivate {

public:
    PurchaseProvisionedCapacityRequestPrivate(const GlacierRequest::Action action,
                                   PurchaseProvisionedCapacityRequest * const q);
    PurchaseProvisionedCapacityRequestPrivate(const PurchaseProvisionedCapacityRequestPrivate &other,
                                   PurchaseProvisionedCapacityRequest * const q);

private:
    Q_DECLARE_PUBLIC(PurchaseProvisionedCapacityRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
