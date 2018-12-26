/*
    Copyright 2013-2018 Paul Colby

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

class QNetworkReply;

namespace QtAws {
namespace Budgets {

class BudgetsClientPrivate;
class CreateBudgetRequest;
class CreateBudgetResponse;
class CreateNotificationRequest;
class CreateNotificationResponse;
class CreateSubscriberRequest;
class CreateSubscriberResponse;
class DeleteBudgetRequest;
class DeleteBudgetResponse;
class DeleteNotificationRequest;
class DeleteNotificationResponse;
class DeleteSubscriberRequest;
class DeleteSubscriberResponse;
class DescribeBudgetRequest;
class DescribeBudgetResponse;
class DescribeBudgetPerformanceHistoryRequest;
class DescribeBudgetPerformanceHistoryResponse;
class DescribeBudgetsRequest;
class DescribeBudgetsResponse;
class DescribeNotificationsForBudgetRequest;
class DescribeNotificationsForBudgetResponse;
class DescribeSubscribersForNotificationRequest;
class DescribeSubscribersForNotificationResponse;
class UpdateBudgetRequest;
class UpdateBudgetResponse;
class UpdateNotificationRequest;
class UpdateNotificationResponse;
class UpdateSubscriberRequest;
class UpdateSubscriberResponse;

class QTAWS_EXPORT BudgetsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    BudgetsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    BudgetsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateBudgetResponse * createBudget(const CreateBudgetRequest &request);
    CreateNotificationResponse * createNotification(const CreateNotificationRequest &request);
    CreateSubscriberResponse * createSubscriber(const CreateSubscriberRequest &request);
    DeleteBudgetResponse * deleteBudget(const DeleteBudgetRequest &request);
    DeleteNotificationResponse * deleteNotification(const DeleteNotificationRequest &request);
    DeleteSubscriberResponse * deleteSubscriber(const DeleteSubscriberRequest &request);
    DescribeBudgetResponse * describeBudget(const DescribeBudgetRequest &request);
    DescribeBudgetPerformanceHistoryResponse * describeBudgetPerformanceHistory(const DescribeBudgetPerformanceHistoryRequest &request);
    DescribeBudgetsResponse * describeBudgets(const DescribeBudgetsRequest &request);
    DescribeNotificationsForBudgetResponse * describeNotificationsForBudget(const DescribeNotificationsForBudgetRequest &request);
    DescribeSubscribersForNotificationResponse * describeSubscribersForNotification(const DescribeSubscribersForNotificationRequest &request);
    UpdateBudgetResponse * updateBudget(const UpdateBudgetRequest &request);
    UpdateNotificationResponse * updateNotification(const UpdateNotificationRequest &request);
    UpdateSubscriberResponse * updateSubscriber(const UpdateSubscriberRequest &request);

private:
    Q_DECLARE_PRIVATE(BudgetsClient)
    Q_DISABLE_COPY(BudgetsClient)

};

} // namespace Budgets
} // namespace QtAws

#endif
