// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUDGETREQUEST_H
#define QTAWS_DELETEBUDGETREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DeleteBudgetRequestPrivate;

class QTAWSBUDGETS_EXPORT DeleteBudgetRequest : public BudgetsRequest {

public:
    DeleteBudgetRequest(const DeleteBudgetRequest &other);
    DeleteBudgetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBudgetRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
