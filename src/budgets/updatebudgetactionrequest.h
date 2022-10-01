// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUDGETACTIONREQUEST_H
#define QTAWS_UPDATEBUDGETACTIONREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class UpdateBudgetActionRequestPrivate;

class QTAWSBUDGETS_EXPORT UpdateBudgetActionRequest : public BudgetsRequest {

public:
    UpdateBudgetActionRequest(const UpdateBudgetActionRequest &other);
    UpdateBudgetActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBudgetActionRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
