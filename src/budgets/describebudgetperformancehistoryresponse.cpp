// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebudgetperformancehistoryresponse.h"
#include "describebudgetperformancehistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Budgets {

/*!
 * \class QtAws::Budgets::DescribeBudgetPerformanceHistoryResponse
 * \brief The DescribeBudgetPerformanceHistoryResponse class provides an interace for Budgets DescribeBudgetPerformanceHistory responses.
 *
 * \inmodule QtAwsBudgets
 *
 *  Use the Amazon Web Services Budgets API to plan your service usage, service costs, and instance reservations. This API
 *  reference provides descriptions, syntax, and usage examples for each of the actions and data types for the Amazon Web
 *  Services Budgets feature.
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
 *  Your current estimated charges from Amazon Web Services, and how much your predicted usage will accrue in charges by the
 *  end of the
 * 
 *  mont> </li> <li>
 * 
 *  How much of your budget has been
 * 
 *  use> </li> </ul>
 * 
 *  Amazon Web Services updates your budget status several times a day. Budgets track your unblended costs, subscriptions,
 *  refunds, and RIs. You can create the following types of
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
 *  The Amazon Web Services Budgets API provides the following
 * 
 *  endpoint> <ul> <li>
 * 
 *  https://budgets.amazonaws.co> </li> </ul>
 * 
 *  For information about costs that are associated with the Amazon Web Services Budgets API, see <a
 *  href="https://aws.amazon.com/aws-cost-management/pricing/">Amazon Web Services Cost Management
 *
 * \sa BudgetsClient::describeBudgetPerformanceHistory
 */

/*!
 * Constructs a DescribeBudgetPerformanceHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBudgetPerformanceHistoryResponse::DescribeBudgetPerformanceHistoryResponse(
        const DescribeBudgetPerformanceHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BudgetsResponse(new DescribeBudgetPerformanceHistoryResponsePrivate(this), parent)
{
    setRequest(new DescribeBudgetPerformanceHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBudgetPerformanceHistoryRequest * DescribeBudgetPerformanceHistoryResponse::request() const
{
    Q_D(const DescribeBudgetPerformanceHistoryResponse);
    return static_cast<const DescribeBudgetPerformanceHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Budgets DescribeBudgetPerformanceHistory \a response.
 */
void DescribeBudgetPerformanceHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBudgetPerformanceHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Budgets::DescribeBudgetPerformanceHistoryResponsePrivate
 * \brief The DescribeBudgetPerformanceHistoryResponsePrivate class provides private implementation for DescribeBudgetPerformanceHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsBudgets
 */

/*!
 * Constructs a DescribeBudgetPerformanceHistoryResponsePrivate object with public implementation \a q.
 */
DescribeBudgetPerformanceHistoryResponsePrivate::DescribeBudgetPerformanceHistoryResponsePrivate(
    DescribeBudgetPerformanceHistoryResponse * const q) : BudgetsResponsePrivate(q)
{

}

/*!
 * Parses a Budgets DescribeBudgetPerformanceHistory response element from \a xml.
 */
void DescribeBudgetPerformanceHistoryResponsePrivate::parseDescribeBudgetPerformanceHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBudgetPerformanceHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Budgets
} // namespace QtAws
