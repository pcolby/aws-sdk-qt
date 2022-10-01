// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETSRESPONSE_P_H
#define QTAWS_DESCRIBEBUDGETSRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetsResponse;

class DescribeBudgetsResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit DescribeBudgetsResponsePrivate(DescribeBudgetsResponse * const q);

    void parseDescribeBudgetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBudgetsResponse)
    Q_DISABLE_COPY(DescribeBudgetsResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
