// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIBERRESPONSE_P_H
#define QTAWS_UPDATESUBSCRIBERRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class UpdateSubscriberResponse;

class UpdateSubscriberResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit UpdateSubscriberResponsePrivate(UpdateSubscriberResponse * const q);

    void parseUpdateSubscriberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSubscriberResponse)
    Q_DISABLE_COPY(UpdateSubscriberResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
