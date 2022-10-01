// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTIFICATIONRESPONSE_H
#define QTAWS_CREATENOTIFICATIONRESPONSE_H

#include "budgetsresponse.h"
#include "createnotificationrequest.h"

namespace QtAws {
namespace Budgets {

class CreateNotificationResponsePrivate;

class QTAWSBUDGETS_EXPORT CreateNotificationResponse : public BudgetsResponse {
    Q_OBJECT

public:
    CreateNotificationResponse(const CreateNotificationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNotificationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNotificationResponse)
    Q_DISABLE_COPY(CreateNotificationResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
