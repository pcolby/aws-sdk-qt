// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANSOFFERINGRATESRESPONSE_P_H
#define QTAWS_DESCRIBESAVINGSPLANSOFFERINGRATESRESPONSE_P_H

#include "savingsplansresponse_p.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlansOfferingRatesResponse;

class DescribeSavingsPlansOfferingRatesResponsePrivate : public SavingsPlansResponsePrivate {

public:

    explicit DescribeSavingsPlansOfferingRatesResponsePrivate(DescribeSavingsPlansOfferingRatesResponse * const q);

    void parseDescribeSavingsPlansOfferingRatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSavingsPlansOfferingRatesResponse)
    Q_DISABLE_COPY(DescribeSavingsPlansOfferingRatesResponsePrivate)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
