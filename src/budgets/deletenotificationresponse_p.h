// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONRESPONSE_P_H
#define QTAWS_DELETENOTIFICATIONRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class DeleteNotificationResponse;

class DeleteNotificationResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit DeleteNotificationResponsePrivate(DeleteNotificationResponse * const q);

    void parseDeleteNotificationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNotificationResponse)
    Q_DISABLE_COPY(DeleteNotificationResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
