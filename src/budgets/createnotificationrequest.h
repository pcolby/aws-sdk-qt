// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTIFICATIONREQUEST_H
#define QTAWS_CREATENOTIFICATIONREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class CreateNotificationRequestPrivate;

class QTAWSBUDGETS_EXPORT CreateNotificationRequest : public BudgetsRequest {

public:
    CreateNotificationRequest(const CreateNotificationRequest &other);
    CreateNotificationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNotificationRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
