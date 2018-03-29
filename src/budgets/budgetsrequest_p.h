/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_BUDGETSREQUEST_P_H
#define QTAWS_BUDGETSREQUEST_P_H

#include "budgets_p.h"
#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class BudgetsRequest;

class QTAWS_EXPORT BudgetsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    BudgetsRequest::Action action; ///< Budgets action to be performed.
    QString apiVersion;        ///< Budgets API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Budgets request (query string) parameters. @todo?

    BudgetsRequestPrivate(const BudgetsRequest::Action action, BudgetsRequest * const q);
    BudgetsRequestPrivate(const BudgetsRequestPrivate &other, BudgetsRequest * const q);

    static QString toString(const BudgetsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(BudgetsRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
