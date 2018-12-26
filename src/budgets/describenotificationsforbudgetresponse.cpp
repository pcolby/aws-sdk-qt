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

#include "describenotificationsforbudgetresponse.h"
#include "describenotificationsforbudgetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Budgets {

/*!
 * \class QtAws::Budgets::DescribeNotificationsForBudgetResponse
 * \brief The DescribeNotificationsForBudgetResponse class provides an interace for Budgets DescribeNotificationsForBudget responses.
 *
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
 *
 * \sa BudgetsClient::describeNotificationsForBudget
 */

/*!
 * Constructs a DescribeNotificationsForBudgetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeNotificationsForBudgetResponse::DescribeNotificationsForBudgetResponse(
        const DescribeNotificationsForBudgetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BudgetsResponse(new DescribeNotificationsForBudgetResponsePrivate(this), parent)
{
    setRequest(new DescribeNotificationsForBudgetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeNotificationsForBudgetRequest * DescribeNotificationsForBudgetResponse::request() const
{
    Q_D(const DescribeNotificationsForBudgetResponse);
    return static_cast<const DescribeNotificationsForBudgetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Budgets DescribeNotificationsForBudget \a response.
 */
void DescribeNotificationsForBudgetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeNotificationsForBudgetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Budgets::DescribeNotificationsForBudgetResponsePrivate
 * \brief The DescribeNotificationsForBudgetResponsePrivate class provides private implementation for DescribeNotificationsForBudgetResponse.
 * \internal
 *
 * \inmodule QtAwsBudgets
 */

/*!
 * Constructs a DescribeNotificationsForBudgetResponsePrivate object with public implementation \a q.
 */
DescribeNotificationsForBudgetResponsePrivate::DescribeNotificationsForBudgetResponsePrivate(
    DescribeNotificationsForBudgetResponse * const q) : BudgetsResponsePrivate(q)
{

}

/*!
 * Parses a Budgets DescribeNotificationsForBudget response element from \a xml.
 */
void DescribeNotificationsForBudgetResponsePrivate::parseDescribeNotificationsForBudgetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNotificationsForBudgetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Budgets
} // namespace QtAws
