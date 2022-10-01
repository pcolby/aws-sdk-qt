// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTIFICATIONREQUEST_P_H
#define QTAWS_UPDATENOTIFICATIONREQUEST_P_H

#include "budgetsrequest_p.h"
#include "updatenotificationrequest.h"

namespace QtAws {
namespace Budgets {

class UpdateNotificationRequest;

class UpdateNotificationRequestPrivate : public BudgetsRequestPrivate {

public:
    UpdateNotificationRequestPrivate(const BudgetsRequest::Action action,
                                   UpdateNotificationRequest * const q);
    UpdateNotificationRequestPrivate(const UpdateNotificationRequestPrivate &other,
                                   UpdateNotificationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNotificationRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
