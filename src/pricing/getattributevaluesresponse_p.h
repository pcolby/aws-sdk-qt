// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTRIBUTEVALUESRESPONSE_P_H
#define QTAWS_GETATTRIBUTEVALUESRESPONSE_P_H

#include "pricingresponse_p.h"

namespace QtAws {
namespace Pricing {

class GetAttributeValuesResponse;

class GetAttributeValuesResponsePrivate : public PricingResponsePrivate {

public:

    explicit GetAttributeValuesResponsePrivate(GetAttributeValuesResponse * const q);

    void parseGetAttributeValuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAttributeValuesResponse)
    Q_DISABLE_COPY(GetAttributeValuesResponsePrivate)

};

} // namespace Pricing
} // namespace QtAws

#endif
