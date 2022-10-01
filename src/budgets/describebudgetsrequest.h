// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETSREQUEST_H
#define QTAWS_DESCRIBEBUDGETSREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetsRequestPrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetsRequest : public BudgetsRequest {

public:
    DescribeBudgetsRequest(const DescribeBudgetsRequest &other);
    DescribeBudgetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetsRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
