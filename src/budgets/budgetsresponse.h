// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUDGETSRESPONSE_H
#define QTAWS_BUDGETSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsbudgetsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Budgets {

class BudgetsResponsePrivate;

class QTAWSBUDGETS_EXPORT BudgetsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    BudgetsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    BudgetsResponse(BudgetsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BudgetsResponse)
    Q_DISABLE_COPY(BudgetsResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
