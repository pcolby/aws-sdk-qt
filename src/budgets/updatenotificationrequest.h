// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTIFICATIONREQUEST_H
#define QTAWS_UPDATENOTIFICATIONREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class UpdateNotificationRequestPrivate;

class QTAWSBUDGETS_EXPORT UpdateNotificationRequest : public BudgetsRequest {

public:
    UpdateNotificationRequest(const UpdateNotificationRequest &other);
    UpdateNotificationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNotificationRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
