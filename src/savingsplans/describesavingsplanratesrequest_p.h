// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANRATESREQUEST_P_H
#define QTAWS_DESCRIBESAVINGSPLANRATESREQUEST_P_H

#include "savingsplansrequest_p.h"
#include "describesavingsplanratesrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlanRatesRequest;

class DescribeSavingsPlanRatesRequestPrivate : public SavingsPlansRequestPrivate {

public:
    DescribeSavingsPlanRatesRequestPrivate(const SavingsPlansRequest::Action action,
                                   DescribeSavingsPlanRatesRequest * const q);
    DescribeSavingsPlanRatesRequestPrivate(const DescribeSavingsPlanRatesRequestPrivate &other,
                                   DescribeSavingsPlanRatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSavingsPlanRatesRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
