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
 * \brief The QtAws::Budgets contains stuff...
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
 *  Budgets enable you to plan your service usage, service costs, and your RI utilization. You can also track how close your
 *  plan is to your budgeted amount or to the free tier limits. Budgets provide you with a quick way to see your
 *  usage-to-date and current estimated charges from AWS and to see how much your predicted usage accrues in charges by the
 *  end of the month. Budgets also compare current estimates and charges to the amount that you indicated you want to use or
 *  spend and lets you see how much of your budget has been used. AWS updates your budget status several times a day.
 *  Budgets track your unblended costs, subscriptions, and refunds. You can create the following types of
 * 
 *  budgets> <ul> <li>
 * 
 *  Cost budgets allow you to say how much you want to spend on a
 * 
 *  service> </li> <li>
 * 
 *  Usage budgets allow you to say how many hours you want to use for one or more
 * 
 *  services> </li> <li>
 * 
 *  RI utilization budgets allow you to define a utilization threshold and receive alerts when RIs are tracking below that
 * 
 *  threshold> </li> </ul>
 * 
 *  You can create up to 20,000 budgets per AWS master account. Your first two budgets are free of charge. Each additional
 *  budget costs $0.02 per day. You can set up optional notifications that warn you if you exceed, or are forecasted to
 *  exceed, your budgeted amount. You can have notifications sent to an Amazon SNS topic, to an email address, or to both.
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/budgets-sns-policy.html">Creating an Amazon SNS Topic
 *  for Budget Notifications</a>. AWS Free Tier usage alerts via AWS Budgets are provided for you, and do not count toward
 *  your budget
 * 
 *  limits>
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The AWS Budgets API provides the following
 * 
 *  endpoint> <ul> <li>
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
 * \a  AwsEndpoint::getEndpoint()
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
 * time>
 *
 * <b>Deleting a budget also deletes the notifications and subscribers associated with that budget.</b>
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
 * notification>
 *
 * <b>Deleting a notification also deletes the subscribers associated with the notification.</b>
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
 * subscriber>
 *
 * <b>Deleting the last subscriber to a notification also deletes the notification.</b>
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
 */
DescribeBudgetResponse * BudgetsClient::describeBudget(const DescribeBudgetRequest &request)
{
    return qobject_cast<DescribeBudgetResponse *>(send(request));
}

/*!
 * Sends \a request to the BudgetsClient service, and returns a pointer to an
 * DescribeBudgetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the budgets associated with an
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
 * Lists the notifications associated with a
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
 * Lists the subscribers associated with a
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
 * <code>calculatedSpend</code>. When a budget is modified, the <code>calculatedSpend</code> drops to zero until AWS has
 * new usage data to use for
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
