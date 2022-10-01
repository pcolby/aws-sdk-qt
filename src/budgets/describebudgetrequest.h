// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETREQUEST_H
#define QTAWS_DESCRIBEBUDGETREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetRequestPrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetRequest : public BudgetsRequest {

public:
    DescribeBudgetRequest(const DescribeBudgetRequest &other);
    DescribeBudgetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
