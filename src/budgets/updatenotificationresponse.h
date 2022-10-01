// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTIFICATIONRESPONSE_H
#define QTAWS_UPDATENOTIFICATIONRESPONSE_H

#include "budgetsresponse.h"
#include "updatenotificationrequest.h"

namespace QtAws {
namespace Budgets {

class UpdateNotificationResponsePrivate;

class QTAWSBUDGETS_EXPORT UpdateNotificationResponse : public BudgetsResponse {
    Q_OBJECT

public:
    UpdateNotificationResponse(const UpdateNotificationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNotificationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNotificationResponse)
    Q_DISABLE_COPY(UpdateNotificationResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
