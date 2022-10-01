// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUDGETSCLIENT_P_H
#define QTAWS_BUDGETSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Budgets {

class BudgetsClient;

class BudgetsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit BudgetsClientPrivate(BudgetsClient * const q);

private:
    Q_DECLARE_PUBLIC(BudgetsClient)
    Q_DISABLE_COPY(BudgetsClientPrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
