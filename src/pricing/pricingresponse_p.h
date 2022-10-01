// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PRICINGRESPONSE_P_H
#define QTAWS_PRICINGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Pricing {

class PricingResponse;

class PricingResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit PricingResponsePrivate(PricingResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PricingResponse)
    Q_DISABLE_COPY(PricingResponsePrivate)

};

} // namespace Pricing
} // namespace QtAws

#endif
