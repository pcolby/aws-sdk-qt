// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUDGETSCLIENT_H
#define QTAWS_BUDGETSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsbudgetsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Budgets {

class BudgetsClientPrivate;
class CreateBudgetRequest;
class CreateBudgetResponse;
class CreateBudgetActionRequest;
class CreateBudgetActionResponse;
class CreateNotificationRequest;
class CreateNotificationResponse;
class CreateSubscriberRequest;
class CreateSubscriberResponse;
class DeleteBudgetRequest;
class DeleteBudgetResponse;
class DeleteBudgetActionRequest;
class DeleteBudgetActionResponse;
class DeleteNotificationRequest;
class DeleteNotificationResponse;
class DeleteSubscriberRequest;
class DeleteSubscriberResponse;
class DescribeBudgetRequest;
class DescribeBudgetResponse;
class DescribeBudgetActionRequest;
class DescribeBudgetActionResponse;
class DescribeBudgetActionHistoriesRequest;
class DescribeBudgetActionHistoriesResponse;
class DescribeBudgetActionsForAccountRequest;
class DescribeBudgetActionsForAccountResponse;
class DescribeBudgetActionsForBudgetRequest;
class DescribeBudgetActionsForBudgetResponse;
class DescribeBudgetNotificationsForAccountRequest;
class DescribeBudgetNotificationsForAccountResponse;
class DescribeBudgetPerformanceHistoryRequest;
class DescribeBudgetPerformanceHistoryResponse;
class DescribeBudgetsRequest;
class DescribeBudgetsResponse;
class DescribeNotificationsForBudgetRequest;
class DescribeNotificationsForBudgetResponse;
class DescribeSubscribersForNotificationRequest;
class DescribeSubscribersForNotificationResponse;
class ExecuteBudgetActionRequest;
class ExecuteBudgetActionResponse;
class UpdateBudgetRequest;
class UpdateBudgetResponse;
class UpdateBudgetActionRequest;
class UpdateBudgetActionResponse;
class UpdateNotificationRequest;
class UpdateNotificationResponse;
class UpdateSubscriberRequest;
class UpdateSubscriberResponse;

class QTAWSBUDGETS_EXPORT BudgetsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    BudgetsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit BudgetsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateBudgetResponse * createBudget(const CreateBudgetRequest &request);
    CreateBudgetActionResponse * createBudgetAction(const CreateBudgetActionRequest &request);
    CreateNotificationResponse * createNotification(const CreateNotificationRequest &request);
    CreateSubscriberResponse * createSubscriber(const CreateSubscriberRequest &request);
    DeleteBudgetResponse * deleteBudget(const DeleteBudgetRequest &request);
    DeleteBudgetActionResponse * deleteBudgetAction(const DeleteBudgetActionRequest &request);
    DeleteNotificationResponse * deleteNotification(const DeleteNotificationRequest &request);
    DeleteSubscriberResponse * deleteSubscriber(const DeleteSubscriberRequest &request);
    DescribeBudgetResponse * describeBudget(const DescribeBudgetRequest &request);
    DescribeBudgetActionResponse * describeBudgetAction(const DescribeBudgetActionRequest &request);
    DescribeBudgetActionHistoriesResponse * describeBudgetActionHistories(const DescribeBudgetActionHistoriesRequest &request);
    DescribeBudgetActionsForAccountResponse * describeBudgetActionsForAccount(const DescribeBudgetActionsForAccountRequest &request);
    DescribeBudgetActionsForBudgetResponse * describeBudgetActionsForBudget(const DescribeBudgetActionsForBudgetRequest &request);
    DescribeBudgetNotificationsForAccountResponse * describeBudgetNotificationsForAccount(const DescribeBudgetNotificationsForAccountRequest &request);
    DescribeBudgetPerformanceHistoryResponse * describeBudgetPerformanceHistory(const DescribeBudgetPerformanceHistoryRequest &request);
    DescribeBudgetsResponse * describeBudgets(const DescribeBudgetsRequest &request);
    DescribeNotificationsForBudgetResponse * describeNotificationsForBudget(const DescribeNotificationsForBudgetRequest &request);
    DescribeSubscribersForNotificationResponse * describeSubscribersForNotification(const DescribeSubscribersForNotificationRequest &request);
    ExecuteBudgetActionResponse * executeBudgetAction(const ExecuteBudgetActionRequest &request);
    UpdateBudgetResponse * updateBudget(const UpdateBudgetRequest &request);
    UpdateBudgetActionResponse * updateBudgetAction(const UpdateBudgetActionRequest &request);
    UpdateNotificationResponse * updateNotification(const UpdateNotificationRequest &request);
    UpdateSubscriberResponse * updateSubscriber(const UpdateSubscriberRequest &request);

private:
    Q_DECLARE_PRIVATE(BudgetsClient)
    Q_DISABLE_COPY(BudgetsClient)

};

} // namespace Budgets
} // namespace QtAws

#endif
