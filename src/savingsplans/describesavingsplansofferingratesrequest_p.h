// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANSOFFERINGRATESREQUEST_P_H
#define QTAWS_DESCRIBESAVINGSPLANSOFFERINGRATESREQUEST_P_H

#include "savingsplansrequest_p.h"
#include "describesavingsplansofferingratesrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlansOfferingRatesRequest;

class DescribeSavingsPlansOfferingRatesRequestPrivate : public SavingsPlansRequestPrivate {

public:
    DescribeSavingsPlansOfferingRatesRequestPrivate(const SavingsPlansRequest::Action action,
                                   DescribeSavingsPlansOfferingRatesRequest * const q);
    DescribeSavingsPlansOfferingRatesRequestPrivate(const DescribeSavingsPlansOfferingRatesRequestPrivate &other,
                                   DescribeSavingsPlansOfferingRatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSavingsPlansOfferingRatesRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
