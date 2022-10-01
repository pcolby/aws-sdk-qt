// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUDGETSRESPONSE_P_H
#define QTAWS_BUDGETSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Budgets {

class BudgetsResponse;

class BudgetsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit BudgetsResponsePrivate(BudgetsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BudgetsResponse)
    Q_DISABLE_COPY(BudgetsResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
