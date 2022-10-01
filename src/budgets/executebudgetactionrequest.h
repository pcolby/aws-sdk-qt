// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTEBUDGETACTIONREQUEST_H
#define QTAWS_EXECUTEBUDGETACTIONREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class ExecuteBudgetActionRequestPrivate;

class QTAWSBUDGETS_EXPORT ExecuteBudgetActionRequest : public BudgetsRequest {

public:
    ExecuteBudgetActionRequest(const ExecuteBudgetActionRequest &other);
    ExecuteBudgetActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteBudgetActionRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
