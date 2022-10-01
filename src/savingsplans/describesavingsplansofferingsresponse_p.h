// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANSOFFERINGSRESPONSE_P_H
#define QTAWS_DESCRIBESAVINGSPLANSOFFERINGSRESPONSE_P_H

#include "savingsplansresponse_p.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlansOfferingsResponse;

class DescribeSavingsPlansOfferingsResponsePrivate : public SavingsPlansResponsePrivate {

public:

    explicit DescribeSavingsPlansOfferingsResponsePrivate(DescribeSavingsPlansOfferingsResponse * const q);

    void parseDescribeSavingsPlansOfferingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSavingsPlansOfferingsResponse)
    Q_DISABLE_COPY(DescribeSavingsPlansOfferingsResponsePrivate)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
