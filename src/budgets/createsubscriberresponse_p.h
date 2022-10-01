// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBSCRIBERRESPONSE_P_H
#define QTAWS_CREATESUBSCRIBERRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class CreateSubscriberResponse;

class CreateSubscriberResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit CreateSubscriberResponsePrivate(CreateSubscriberResponse * const q);

    void parseCreateSubscriberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSubscriberResponse)
    Q_DISABLE_COPY(CreateSubscriberResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
