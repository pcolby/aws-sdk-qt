// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVECUSTOMERRESPONSE_P_H
#define QTAWS_RESOLVECUSTOMERRESPONSE_P_H

#include "marketplacemeteringresponse_p.h"

namespace QtAws {
namespace MarketplaceMetering {

class ResolveCustomerResponse;

class ResolveCustomerResponsePrivate : public MarketplaceMeteringResponsePrivate {

public:

    explicit ResolveCustomerResponsePrivate(ResolveCustomerResponse * const q);

    void parseResolveCustomerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResolveCustomerResponse)
    Q_DISABLE_COPY(ResolveCustomerResponsePrivate)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
