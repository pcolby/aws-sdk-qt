// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUDGETSREQUEST_P_H
#define QTAWS_BUDGETSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class BudgetsRequest;

class BudgetsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    BudgetsRequest::Action action; ///< Budgets action to be performed.
    QString apiVersion;        ///< Budgets API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Budgets request (query string) parameters. @todo?

    BudgetsRequestPrivate(const BudgetsRequest::Action action, BudgetsRequest * const q);
    BudgetsRequestPrivate(const BudgetsRequestPrivate &other, BudgetsRequest * const q);

    static QString toString(const BudgetsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(BudgetsRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
