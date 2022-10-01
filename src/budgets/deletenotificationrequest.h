// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONREQUEST_H
#define QTAWS_DELETENOTIFICATIONREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DeleteNotificationRequestPrivate;

class QTAWSBUDGETS_EXPORT DeleteNotificationRequest : public BudgetsRequest {

public:
    DeleteNotificationRequest(const DeleteNotificationRequest &other);
    DeleteNotificationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNotificationRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
