// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETSRESPONSE_H
#define QTAWS_DESCRIBEBUDGETSRESPONSE_H

#include "budgetsresponse.h"
#include "describebudgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetsResponsePrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetsResponse : public BudgetsResponse {
    Q_OBJECT

public:
    DescribeBudgetsResponse(const DescribeBudgetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBudgetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetsResponse)
    Q_DISABLE_COPY(DescribeBudgetsResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
