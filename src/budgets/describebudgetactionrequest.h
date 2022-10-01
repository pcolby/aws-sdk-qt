// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETACTIONREQUEST_H
#define QTAWS_DESCRIBEBUDGETACTIONREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetActionRequestPrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetActionRequest : public BudgetsRequest {

public:
    DescribeBudgetActionRequest(const DescribeBudgetActionRequest &other);
    DescribeBudgetActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetActionRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
