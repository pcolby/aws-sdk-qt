// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUDGETACTIONREQUEST_H
#define QTAWS_CREATEBUDGETACTIONREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class CreateBudgetActionRequestPrivate;

class QTAWSBUDGETS_EXPORT CreateBudgetActionRequest : public BudgetsRequest {

public:
    CreateBudgetActionRequest(const CreateBudgetActionRequest &other);
    CreateBudgetActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBudgetActionRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
