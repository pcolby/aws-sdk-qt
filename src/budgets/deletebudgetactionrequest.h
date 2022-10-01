// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUDGETACTIONREQUEST_H
#define QTAWS_DELETEBUDGETACTIONREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DeleteBudgetActionRequestPrivate;

class QTAWSBUDGETS_EXPORT DeleteBudgetActionRequest : public BudgetsRequest {

public:
    DeleteBudgetActionRequest(const DeleteBudgetActionRequest &other);
    DeleteBudgetActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBudgetActionRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
