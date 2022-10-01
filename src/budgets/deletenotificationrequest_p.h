// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONREQUEST_P_H
#define QTAWS_DELETENOTIFICATIONREQUEST_P_H

#include "budgetsrequest_p.h"
#include "deletenotificationrequest.h"

namespace QtAws {
namespace Budgets {

class DeleteNotificationRequest;

class DeleteNotificationRequestPrivate : public BudgetsRequestPrivate {

public:
    DeleteNotificationRequestPrivate(const BudgetsRequest::Action action,
                                   DeleteNotificationRequest * const q);
    DeleteNotificationRequestPrivate(const DeleteNotificationRequestPrivate &other,
                                   DeleteNotificationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNotificationRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
