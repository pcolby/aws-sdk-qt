/*
    Copyright 2013-2020 Paul Colby

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

#include "budgetsclient.h"
#include "budgetsclient_p.h"

#include "core/awssignaturev4.h"
#include "createbudgetrequest.h"
#include "createbudgetresponse.h"
#include "createnotificationrequest.h"
#include "createnotificationresponse.h"
#include "createsubscriberrequest.h"
#include "createsubscriberresponse.h"
#include "deletebudgetrequest.h"
#include "deletebudgetresponse.h"
#include "deletenotificationrequest.h"
#include "deletenotificationresponse.h"
#include "deletesubscriberrequest.h"
#include "deletesubscriberresponse.h"
#include "describebudgetrequest.h"
#include "describebudgetresponse.h"
#include "describebudgetperformancehistoryrequest.h"
#include "describebudgetperformancehistoryresponse.h"
#include "describebudgetsrequest.h"
#include "describebudgetsresponse.h"
#include "describenotificationsforbudgetrequest.h"
#include "describenotificationsforbudgetresponse.h"
#include "describesubscribersfornotificationrequest.h"
#include "describesubscribersfornotificationresponse.h"
#include "updatebudgetrequest.h"
#include "updatebudgetresponse.h"
#include "updatenotificationrequest.h"
#include "updatenotificationresponse.h"
#include "updatesubscriberrequest.h"
#include "updatesubscriberresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Budgets
 * \brief Contains classess for accessing AWS Budgets.
 *
 * \inmodule QtAwsBudgets
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Budgets {

/*!
 * \class QtAws::Budgets::BudgetsClient
 * \brief The BudgetsClient class provides access to the AWS Budgets service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsBudgets
 *
 *  The AWS Budgets API enables you to use AWS Budgets to plan your service usage, service costs, and instance reservations.
 *  The API reference provides descriptions, syntax, and usage examples for each of the actions and data types for AWS
 *  Budgets.
 * 
 *  </p
 * 
 *  Budgets provide you with a way to see the following
 * 
 *  information> <ul> <li>
 * 
 *  How close your plan is to your budgeted amount or to the free tier
 * 
 *  limit> </li> <li>
 * 
 *  Your usage-to-date, including how much you've used of your Reserved Instances
 * 
 *  (RIs> </li> <li>
 * 
 *  Your current estimated charges from AWS, and how much your predicted usage will accrue in charges by the end of the
 * 
 *  mont> </li> <li>
 * 
 *  How much of your budget has been
 * 
 *  use> </li> </ul>
 * 
 *  AWS updates your budget status several times a day. Budgets track your unblended costs, subscriptions, refunds, and RIs.
 *  You can create the following types of
 * 
 *  budgets> <ul> <li>
 * 
 *  <b>Cost budgets</b> - Plan how much you want to spend on a
 * 
 *  service> </li> <li>
 * 
 *  <b>Usage budgets</b> - Plan how much you want to use one or more
 * 
 *  services> </li> <li>
 * 
 *  <b>RI utilization budgets</b> - Define a utilization threshold, and receive alerts when your RI usage falls below that
 *  threshold. This lets you see if your RIs are unused or
 * 
 *  under-utilized> </li> <li>
 * 
 *  <b>RI coverage budgets</b> - Define a coverage threshold, and receive alerts when the number of your instance hours that
 *  are covered by RIs fall below that threshold. This lets you see how much of your instance usage is covered by a
 * 
 *  reservation> </li> </ul>
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The AWS Budgets API provides the following
 * 
 *  endpoint> <ul> <li>
 * 
 *  https://budgets.amazonaws.co> </li> </ul>
 * 
 *  For information about costs that are associated with the AWS Budgets API, see <a
 *  href="https://aws.amazon.com/aws-cost-management/pricing/">AWS Cost Management
 */

/*!
 * \brief Constructs a BudgetsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
BudgetsClient::BudgetsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new BudgetsClientPrivate(this), parent)
{
    Q_D(BudgetsClient);
    d->apiVersion = QStringLiteral("2016-10-20");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("budgets");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Budgets");
    d->serviceName = QStringLiteral("budgets");
}

/*!
 * \overload BudgetsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
BudgetsClient::BudgetsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new BudgetsClientPrivate(this), parent)
{
    Q_D(BudgetsClient);
    d->apiVersion = QStringLiteral("2016-10-20");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("budgets");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Budgets");
    d->serviceName = QStringLiteral("budgets");
}

/*!
 * Sends \a request to the BudgetsClient service, and returns a pointer to an
 * CreateBudgetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a budget and, if included, notifications and subscribers.
 *
 * </p <b>
 *
 * Only one of <code>BudgetLimit</code> or <code>PlannedBudgetLimits</code> can be present in the syntax at one time. Use
 * the syntax that matches your case. The Request Syntax section shows the <code>BudgetLimit</code> syntax. For
 * <code>PlannedBudgetLimits</code>, see the <a
 * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_budgets_CreateBudget.html#API_CreateBudget_Examples">Examples</a>
 * section.
 */
CreateBudgetResponse * BudgetsClient::createBudget(const CreateBudgetRequest &request)
{
    return qobject_cast<CreateBudgetResponse *>(send(request));
}

/*!
 * Sends \a request to the BudgetsClient service, and returns a pointer to an
 * CreateNotificationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a notification. You must create the budget before you create the associated
 */
CreateNotificationResponse * BudgetsClient::createNotification(const CreateNotificationRequest &request)
{
    return qobject_cast<CreateNotificationResponse *>(send(request));
}

/*!
 * Sends \a request to the BudgetsClient service, and returns a pointer to an
 * CreateSubscriberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a subscriber. You must create the associated budget and notification before you create the
 */
CreateSubscriberResponse * BudgetsClient::createSubscriber(const CreateSubscriberRequest &request)
{
    return qobject_cast<CreateSubscriberResponse *>(send(request));
}

/*!
 * Sends \a request to the BudgetsClient service, and returns a pointer to an
 * DeleteBudgetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a budget. You can delete your budget at any
 *
 * time> <b>
 *
 * Deleting a budget also deletes the notifications and subscribers that are associated with that
 */
DeleteBudgetResponse * BudgetsClient::deleteBudget(const DeleteBudgetRequest &request)
{
    return qobject_cast<DeleteBudgetResponse *>(send(request));
}

/*!
 * Sends \a request to the BudgetsClient service, and returns a pointer to an
 * DeleteNotificationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 *
 * notification> <b>
 *
 * Deleting a notification also deletes the subscribers that are associated with the
 */
DeleteNotificationResponse * BudgetsClient::deleteNotification(const DeleteNotificationRequest &request)
{
    return qobject_cast<DeleteNotificationResponse *>(send(request));
}

/*!
 * Sends \a request to the BudgetsClient service, and returns a pointer to an
 * DeleteSubscriberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 *
 * subscriber> <b>
 *
 * Deleting the last subscriber to a notification also deletes the
 */
DeleteSubscriberResponse * BudgetsClient::deleteSubscriber(const DeleteSubscriberRequest &request)
{
    return qobject_cast<DeleteSubscriberResponse *>(send(request));
}

/*!
 * Sends \a request to the BudgetsClient service, and returns a pointer to an
 * DescribeBudgetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a
 *
 * budget> <b>
 *
 * The Request Syntax section shows the <code>BudgetLimit</code> syntax. For <code>PlannedBudgetLimits</code>, see the <a
 * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_budgets_DescribeBudget.html#API_DescribeBudget_Examples">Examples</a>
 * section.
 */
DescribeBudgetResponse * BudgetsClient::describeBudget(const DescribeBudgetRequest &request)
{
    return qobject_cast<DescribeBudgetResponse *>(send(request));
}

/*!
 * Sends \a request to the BudgetsClient service, and returns a pointer to an
 * DescribeBudgetPerformanceHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the history for <code>DAILY</code>, <code>MONTHLY</code>, and <code>QUARTERLY</code> budgets. Budget history
 * isn't available for <code>ANNUAL</code>
 */
DescribeBudgetPerformanceHistoryResponse * BudgetsClient::describeBudgetPerformanceHistory(const DescribeBudgetPerformanceHistoryRequest &request)
{
    return qobject_cast<DescribeBudgetPerformanceHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the BudgetsClient service, and returns a pointer to an
 * DescribeBudgetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the budgets that are associated with an
 *
 * account> <b>
 *
 * The Request Syntax section shows the <code>BudgetLimit</code> syntax. For <code>PlannedBudgetLimits</code>, see the <a
 * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_budgets_DescribeBudgets.html#API_DescribeBudgets_Examples">Examples</a>
 * section.
 */
DescribeBudgetsResponse * BudgetsClient::describeBudgets(const DescribeBudgetsRequest &request)
{
    return qobject_cast<DescribeBudgetsResponse *>(send(request));
}

/*!
 * Sends \a request to the BudgetsClient service, and returns a pointer to an
 * DescribeNotificationsForBudgetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the notifications that are associated with a
 */
DescribeNotificationsForBudgetResponse * BudgetsClient::describeNotificationsForBudget(const DescribeNotificationsForBudgetRequest &request)
{
    return qobject_cast<DescribeNotificationsForBudgetResponse *>(send(request));
}

/*!
 * Sends \a request to the BudgetsClient service, and returns a pointer to an
 * DescribeSubscribersForNotificationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the subscribers that are associated with a
 */
DescribeSubscribersForNotificationResponse * BudgetsClient::describeSubscribersForNotification(const DescribeSubscribersForNotificationRequest &request)
{
    return qobject_cast<DescribeSubscribersForNotificationResponse *>(send(request));
}

/*!
 * Sends \a request to the BudgetsClient service, and returns a pointer to an
 * UpdateBudgetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a budget. You can change every part of a budget except for the <code>budgetName</code> and the
 * <code>calculatedSpend</code>. When you modify a budget, the <code>calculatedSpend</code> drops to zero until AWS has new
 * usage data to use for
 *
 * forecasting> <b>
 *
 * Only one of <code>BudgetLimit</code> or <code>PlannedBudgetLimits</code> can be present in the syntax at one time. Use
 * the syntax that matches your case. The Request Syntax section shows the <code>BudgetLimit</code> syntax. For
 * <code>PlannedBudgetLimits</code>, see the <a
 * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_budgets_UpdateBudget.html#API_UpdateBudget_Examples">Examples</a>
 * section.
 */
UpdateBudgetResponse * BudgetsClient::updateBudget(const UpdateBudgetRequest &request)
{
    return qobject_cast<UpdateBudgetResponse *>(send(request));
}

/*!
 * Sends \a request to the BudgetsClient service, and returns a pointer to an
 * UpdateNotificationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateNotificationResponse * BudgetsClient::updateNotification(const UpdateNotificationRequest &request)
{
    return qobject_cast<UpdateNotificationResponse *>(send(request));
}

/*!
 * Sends \a request to the BudgetsClient service, and returns a pointer to an
 * UpdateSubscriberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateSubscriberResponse * BudgetsClient::updateSubscriber(const UpdateSubscriberRequest &request)
{
    return qobject_cast<UpdateSubscriberResponse *>(send(request));
}

/*!
 * \class QtAws::Budgets::BudgetsClientPrivate
 * \brief The BudgetsClientPrivate class provides private implementation for BudgetsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsBudgets
 */

/*!
 * Constructs a BudgetsClientPrivate object with public implementation \a q.
 */
BudgetsClientPrivate::BudgetsClientPrivate(BudgetsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Budgets
} // namespace QtAws
