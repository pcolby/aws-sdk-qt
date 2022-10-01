// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTIFICATIONRESPONSE_P_H
#define QTAWS_UPDATENOTIFICATIONRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class UpdateNotificationResponse;

class UpdateNotificationResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit UpdateNotificationResponsePrivate(UpdateNotificationResponse * const q);

    void parseUpdateNotificationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNotificationResponse)
    Q_DISABLE_COPY(UpdateNotificationResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
