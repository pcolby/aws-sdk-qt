// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUDGETREQUEST_H
#define QTAWS_CREATEBUDGETREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class CreateBudgetRequestPrivate;

class QTAWSBUDGETS_EXPORT CreateBudgetRequest : public BudgetsRequest {

public:
    CreateBudgetRequest(const CreateBudgetRequest &other);
    CreateBudgetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBudgetRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
