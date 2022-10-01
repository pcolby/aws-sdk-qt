// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETSREQUEST_P_H
#define QTAWS_DESCRIBEBUDGETSREQUEST_P_H

#include "budgetsrequest_p.h"
#include "describebudgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetsRequest;

class DescribeBudgetsRequestPrivate : public BudgetsRequestPrivate {

public:
    DescribeBudgetsRequestPrivate(const BudgetsRequest::Action action,
                                   DescribeBudgetsRequest * const q);
    DescribeBudgetsRequestPrivate(const DescribeBudgetsRequestPrivate &other,
                                   DescribeBudgetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBudgetsRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
