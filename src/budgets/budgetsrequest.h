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

#ifndef QTAWS_BUDGETSREQUEST_H
#define QTAWS_BUDGETSREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Budgets {

class BudgetsRequestPrivate;

class QTAWS_EXPORT BudgetsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Budgets.
    enum Action {
        CreateBudgetAction,
        CreateNotificationAction,
        CreateSubscriberAction,
        DeleteBudgetAction,
        DeleteNotificationAction,
        DeleteSubscriberAction,
        DescribeBudgetAction,
        DescribeBudgetsAction,
        DescribeNotificationsForBudgetAction,
        DescribeSubscribersForNotificationAction,
        UpdateBudgetAction,
        UpdateNotificationAction,
        UpdateSubscriberAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    BudgetsRequest(const Action action);
    BudgetsRequest(const BudgetsRequest &other);
    BudgetsRequest &operator=(const BudgetsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const BudgetsRequest &other) const override;


protected:
    /// @cond internal
    BudgetsRequest(BudgetsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const override;

private:
    Q_DECLARE_PRIVATE(BudgetsRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
