// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANRATESRESPONSE_P_H
#define QTAWS_DESCRIBESAVINGSPLANRATESRESPONSE_P_H

#include "savingsplansresponse_p.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlanRatesResponse;

class DescribeSavingsPlanRatesResponsePrivate : public SavingsPlansResponsePrivate {

public:

    explicit DescribeSavingsPlanRatesResponsePrivate(DescribeSavingsPlanRatesResponse * const q);

    void parseDescribeSavingsPlanRatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSavingsPlanRatesResponse)
    Q_DISABLE_COPY(DescribeSavingsPlanRatesResponsePrivate)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
