// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTIFICATIONRESPONSE_P_H
#define QTAWS_CREATENOTIFICATIONRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class CreateNotificationResponse;

class CreateNotificationResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit CreateNotificationResponsePrivate(CreateNotificationResponse * const q);

    void parseCreateNotificationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNotificationResponse)
    Q_DISABLE_COPY(CreateNotificationResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
