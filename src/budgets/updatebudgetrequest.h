// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUDGETREQUEST_H
#define QTAWS_UPDATEBUDGETREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class UpdateBudgetRequestPrivate;

class QTAWSBUDGETS_EXPORT UpdateBudgetRequest : public BudgetsRequest {

public:
    UpdateBudgetRequest(const UpdateBudgetRequest &other);
    UpdateBudgetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBudgetRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
