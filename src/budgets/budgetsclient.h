/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    DescribeBudgetPerformanceHistoryResponse * describeBudgetPerformanceHistory(const DescribeBudgetPerformanceHistoryRequest &request);
    DescribeBudgetsResponse * describeBudgets(const DescribeBudgetsRequest &request);
    DescribeNotificationsForBudgetResponse * describeNotificationsForBudget(const DescribeNotificationsForBudgetRequest &request);
    DescribeSubscribersForNotificationResponse * describeSubscribersForNotification(const DescribeSubscribersForNotificationRequest &request);
    ExecuteBudgetActionResponse * executeBudgetAction(const ExecuteBudgetActionRequest &request);
    UpdateBudgetResponse * updateBudget(const UpdateBudgetRequest &request);
    UpdateBudgetActionResponse * updateBudgetAction(const UpdateBudgetActionRequest &request);
    UpdateNotificationResponse * updateNotification(const UpdateNotificationRequest &request);
    UpdateSubscriberResponse * updateSubscriber(const UpdateSubscriberRequest &request);

protected:
    /// @cond internal
    BudgetsClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit BudgetsClient(BudgetsClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(BudgetsClient)
    Q_DISABLE_COPY(BudgetsClient)

};

} // namespace Budgets
} // namespace QtAws

#endif
