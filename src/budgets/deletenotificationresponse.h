// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONRESPONSE_H
#define QTAWS_DELETENOTIFICATIONRESPONSE_H

#include "budgetsresponse.h"
#include "deletenotificationrequest.h"

namespace QtAws {
namespace Budgets {

class DeleteNotificationResponsePrivate;

class QTAWSBUDGETS_EXPORT DeleteNotificationResponse : public BudgetsResponse {
    Q_OBJECT

public:
    DeleteNotificationResponse(const DeleteNotificationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNotificationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNotificationResponse)
    Q_DISABLE_COPY(DeleteNotificationResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
