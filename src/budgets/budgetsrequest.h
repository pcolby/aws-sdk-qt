// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUDGETSREQUEST_H
#define QTAWS_BUDGETSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsbudgetsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Budgets {

class BudgetsRequestPrivate;

class QTAWSBUDGETS_EXPORT BudgetsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Budgets.
    enum Action {
        CreateBudgetAction,
        CreateBudgetActionAction,
        CreateNotificationAction,
        CreateSubscriberAction,
        DeleteBudgetAction,
        DeleteBudgetActionAction,
        DeleteNotificationAction,
        DeleteSubscriberAction,
        DescribeBudgetAction,
        DescribeBudgetActionAction,
        DescribeBudgetActionHistoriesAction,
        DescribeBudgetActionsForAccountAction,
        DescribeBudgetActionsForBudgetAction,
        DescribeBudgetNotificationsForAccountAction,
        DescribeBudgetPerformanceHistoryAction,
        DescribeBudgetsAction,
        DescribeNotificationsForBudgetAction,
        DescribeSubscribersForNotificationAction,
        ExecuteBudgetActionAction,
        UpdateBudgetAction,
        UpdateBudgetActionAction,
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

    virtual bool operator==(const BudgetsRequest &other) const;


protected:
    /// @cond internal
    explicit BudgetsRequest(BudgetsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BudgetsRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
