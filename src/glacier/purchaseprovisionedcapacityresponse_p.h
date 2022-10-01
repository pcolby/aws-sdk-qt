// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASEPROVISIONEDCAPACITYRESPONSE_P_H
#define QTAWS_PURCHASEPROVISIONEDCAPACITYRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class PurchaseProvisionedCapacityResponse;

class PurchaseProvisionedCapacityResponsePrivate : public GlacierResponsePrivate {

public:

    explicit PurchaseProvisionedCapacityResponsePrivate(PurchaseProvisionedCapacityResponse * const q);

    void parsePurchaseProvisionedCapacityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PurchaseProvisionedCapacityResponse)
    Q_DISABLE_COPY(PurchaseProvisionedCapacityResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
