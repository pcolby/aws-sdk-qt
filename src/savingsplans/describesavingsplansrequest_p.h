// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANSREQUEST_P_H
#define QTAWS_DESCRIBESAVINGSPLANSREQUEST_P_H

#include "savingsplansrequest_p.h"
#include "describesavingsplansrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlansRequest;

class DescribeSavingsPlansRequestPrivate : public SavingsPlansRequestPrivate {

public:
    DescribeSavingsPlansRequestPrivate(const SavingsPlansRequest::Action action,
                                   DescribeSavingsPlansRequest * const q);
    DescribeSavingsPlansRequestPrivate(const DescribeSavingsPlansRequestPrivate &other,
                                   DescribeSavingsPlansRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSavingsPlansRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
