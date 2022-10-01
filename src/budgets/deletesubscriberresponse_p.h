// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIBERRESPONSE_P_H
#define QTAWS_DELETESUBSCRIBERRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class DeleteSubscriberResponse;

class DeleteSubscriberResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit DeleteSubscriberResponsePrivate(DeleteSubscriberResponse * const q);

    void parseDeleteSubscriberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSubscriberResponse)
    Q_DISABLE_COPY(DeleteSubscriberResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
