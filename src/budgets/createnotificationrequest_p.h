// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTIFICATIONREQUEST_P_H
#define QTAWS_CREATENOTIFICATIONREQUEST_P_H

#include "budgetsrequest_p.h"
#include "createnotificationrequest.h"

namespace QtAws {
namespace Budgets {

class CreateNotificationRequest;

class CreateNotificationRequestPrivate : public BudgetsRequestPrivate {

public:
    CreateNotificationRequestPrivate(const BudgetsRequest::Action action,
                                   CreateNotificationRequest * const q);
    CreateNotificationRequestPrivate(const CreateNotificationRequestPrivate &other,
                                   CreateNotificationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNotificationRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
