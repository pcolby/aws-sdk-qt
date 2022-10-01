// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANSOFFERINGSREQUEST_P_H
#define QTAWS_DESCRIBESAVINGSPLANSOFFERINGSREQUEST_P_H

#include "savingsplansrequest_p.h"
#include "describesavingsplansofferingsrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlansOfferingsRequest;

class DescribeSavingsPlansOfferingsRequestPrivate : public SavingsPlansRequestPrivate {

public:
    DescribeSavingsPlansOfferingsRequestPrivate(const SavingsPlansRequest::Action action,
                                   DescribeSavingsPlansOfferingsRequest * const q);
    DescribeSavingsPlansOfferingsRequestPrivate(const DescribeSavingsPlansOfferingsRequestPrivate &other,
                                   DescribeSavingsPlansOfferingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSavingsPlansOfferingsRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
